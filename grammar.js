const PREC = {
  call: 14,
  call_module: 13,
}

const op = [
  '+', '-', '/', '*', '%', '<', '>',
  '=', '<=', '>=', '/=', 'and', 'or', 'not', 'and*', 'or*'
]

const important_str = [
  'let-do', 'while-do', 'defn-do', 'break', 'for', 'when',
  'cond', 'unless', 'case', 'foreach', 'defdynamic', 'load',
]

const core_types = [
  'Bool',
  'Char',
  'Int',
  'Long',
  'Float',
  'Double',
  'Vector2',
  'Vector3',
  'VectorN',
  'String',
  'Pattern',
  'Array',
  'Map',
  'Maybe',
  'Result',
  'Id',
  'Ptr',
]

module.exports = grammar({
  name: 'carp',

  extras: $ => [/\s/, $.line_comment],

  conflicts: $ => [
    [$.let_pairs, $.array_expression],
  ],

  rules: {
    source_file: $ => repeat($._s_expr),

    line_comment: $ => seq(';', /.*/),

    _s_expr: $ => seq(
      '(',
      $._anything,
      ')',
    ),

    _expr: $ => choice(
      $._s_expr,
      $._short_helper,
      $._literals,
      $.upper_identifier,
      $._identifier,
      $.symbol,
      // $.doc,
    ),

    _anything: $ => choice(
      // Core thing
      $._s_expr,
      $.doc,
      $.use,
      $._short_helper,
      $.upper_identifier,
      $._identifier,
      $.symbol,
      $._s_forms,
      $._defs,
      $.call_expression,
      // literals
      $._literals,
    ),

    _s_forms: $ => choice(
      $.fn,
      $.def,
      $.defn,
      $.let,
      $.do,
      $.if,
      $.while,
      $.ref,
      $.address,
      $.set,
      $.the,
      $.match,
      $.register,
    ),

    _defs: $ => choice(
      $.definterface,
      $.defmacro,
      $.defndynamic,
      $.defmodule,
      $.deftype,
    ),

    _literals: $ => choice(
      $.unit,
      $.array_expression,
      $.map_expression,
      $.str_literal,
      $.char_literal,
      $.pattern_literal,
      $.bool_literal,
      $.integer_literal,
      $.float_literal,
    ),

    _short_helper: $ => choice(
      $.short_ref,
      $.short_copy,
      $.short_fn_ref,
      $.short_quote,
    ),

    use: $ => seq(
      'use',
      field('module', $.upper_identifier),
    ),

    doc: $ => seq(
      'doc',
      field('fn', $.identifier),
      field('doc_str', $.str_literal),
    ),

    def: $ => prec.left(seq(
      'def',
      field('name', $.identifier),
      field('value', $._expr),
    )),

    fn: $ => prec.left(seq(
      'fn',
      field('parameters', choice($.quote_param, $.parameters)),
      optional(field('body', repeat($._expr))),
    )),

    defn: $ => prec.left(seq(
      'defn',
      field('name', $.identifier),
      field('parameters', choice($.quote_param, $.parameters)),
      optional(field('body', repeat($._expr))),
    )),

    let: $ => prec.left(seq(
      'let',
      field('pairs', choice($.quote_let, $.let_pairs)),
      optional(field('body', repeat($._expr))),
    )),

    let_pairs: $ => seq(
      '[',
      repeat(seq(
        field('var', $._expr),
        field('expr', $._expr),
      )),
      ']'
    ),

    do: $ => prec.left(seq(
      'do',
      repeat(field('expr', $._expr)),
    )),

    if: $ => prec.left(seq(
      'if',
      field('condition', $._expr),
      field('then', $._expr),
      field('else', $._expr),
    )),

    while: $ => prec.left(seq(
      'while',
      field('condition', $._expr),
      optional(field('body', repeat($._expr))),
    )),

    ref: $ => prec.left(seq(
      choice('ref'),
      field('expr', $._expr),
    )),

    address: $ => prec.left(seq(
      'address',
      field('expr', $._expr),
    )),

    set: $ => prec.left(seq(
      'set!',
      field('variable', $._expr),
      field('expr', $._expr),
    )),

    the: $ => prec.left(seq(
      'the',
      field('type', $.type),
      field('expr', $._expr),
    )),

    match: $ => prec.left(seq(
      'match',
      field('expr', $._expr),
      optional(repeat($.match_case)),
    )),

    match_case: $ => seq(
      field('case', $._expr),
      field('body', $._expr),
    ),

    register: $ => prec.left(seq(
      'register',
      field('name', $.identifier),
      choice(
        seq(
          field('type', choice($.type, $._short_helper)),
          optional(field('value_name', $._expr)),
        ),
        seq(
          '(',
          field('fn', $.interface_fn),
          ')',
          optional(field('value_name', $._expr)),
        ),
      ),
    )),

    type: $ => choice(
      alias(choice(...core_types), $.identifier),
      $.complex_type,
      $.identifier,
    ),

    complex_type: $ => seq(
      '(',
      repeat(choice(
        alias(choice(...core_types), $.identifier),
        $.complex_type,
        $.identifier,
      )),
      ')',
    ),

    call_expression: $ => prec.left(PREC.call, seq(
      field('call_name', $._call_name),
      optional(field('argument', repeat(seq($._expr)))),
    )),

    _call_name: $ => prec(PREC.call, choice(
      $.call_with_module,
      $.call_no_module,
      $.short_fn_ref,
    )),

    call_no_module: $ =>  prec(PREC.call, field('name',choice($.upper_identifier, $.identifier))),

    call_with_module: $ => prec(PREC.call_module, seq(
      repeat(seq(
        field('module', $.upper_identifier),
        '.',
      )),
      field('name', choice($.upper_identifier, $.identifier)),
    )),

    definterface: $ => prec.left(seq(
      'definterface',
      field('name', $.identifier),
      '(',
      field('fn', $.interface_fn),
      ')'
    )),

    defmacro: $ => prec.left(seq(
      'defmacro',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    )),

    defndynamic: $ => prec.left(seq(
      'defndynamic',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    )),

    defmodule: $ => prec.left(seq(
      'defmodule',
      field('name', $.identifier),
      repeat(seq(
        optional($.doc),
        field('definition', $._expr)),
      ),
    )),


    deftype: $ => prec.left(seq(
      'deftype',
      choice(
        $._deftype1,
        $._deftype2,
        $._deftype3,
      ),
    )),

    _deftype1: $ => prec.left(seq(
      $._name_deftypes,
      field('fields', $.fields),
    )),

    _deftype2: $ => prec.left(seq(
      $._name_deftypes,
      repeat(seq(
        '(',
        field('variant', choice($.upper_identifier, $.identifier)),
        field('fields', $.fields),
        ')',
      )),
    )),

    _deftype3: $ => prec.left(PREC.call, seq(
      field('name', $.identifier),
      repeat(field('variant', choice($.upper_identifier, $.identifier)))
    )),

    _name_deftypes: $ => choice(
      field('name', $.identifier),
      seq(
        '(',
        field('name', $.identifier),
        optional(field('generic_type', repeat($.identifier))),
        ')',
      ),
    ),

    _tagged_union: $ => seq(
      '(',
      field('variant', $.identifier),
      field('fields', $.fields),
      ')',
    ),

    fields: $ => seq(
      '[',
      repeat(seq(choice(
        $.identifier,
        $.complex_type,
        alias(choice(...core_types), $.type)),
        // alias(/[A-ZΑ-Ω][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?\^]*/, $.type),
        optional(','))),
      ']',
    ),

    interface_fn: $ => seq(
      choice('Fn', 'λ'),
      field('typed_params', choice($.quote_typaram, $.typed_parameters)),
      field('return_type', choice($._short_helper, $.type)),
    ),

    short_ref: $ => seq('&', $._expr),

    short_copy: $ => seq('@', $._expr),

    short_fn_ref: $ => seq('~', $._expr),

    short_quote: $ => seq('\'', $._anything),

    quote_let: $ => seq('\'', $.let_pairs),
    quote_param: $ => seq('\'', $.parameters),
    quote_typaram: $ => seq('\'', $.typed_parameters),

    parameters: $ => seq(
      '[',
      repeat(choice($.identifier, $.symbol)),
      ']',
    ),

    typed_parameters: $ => seq(
      '[',
      repeat(choice($.type, $._short_helper)),
      ']',
    ),

    integer_literal: $ => token(seq(
      optional('-'),
      /[0-9][0-9]*/,
      optional('l'),
    )),

    float_literal: $ => token(seq(
      optional('-'),
      choice(
        seq(/[0-9][0-9]*/, 'f'),
        seq(/[0-9][0-9]*\.[0-9][0-9]*/, optional('f')),
      ),
    )),

    bool_literal: $ => choice('true', 'false'),

    str_literal: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        /./,
      )),
      '"'
    ),

    char_literal: $ => seq(
      '\\',
      choice(
        $.escape_sequence,
        /./,
      )
    ),

    pattern_literal: $ => seq(
      '#"',
      repeat(choice(
        $.escape_sequence,
        /./,
      )),
      '"',
    ),

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
      )),

    array_expression: $ => seq(
      '[',
      repeat($._expr),
      ']',
    ),

    map_expression: $ => seq(
      '{',
      repeat(
        seq(
          field('key', $._expr),
          field('value',  $._expr),
        )
      ),
      '}',
    ),

    unit: $ => seq('(', ')'),

    symbol: $ => seq(
      ':',
      $.identifier,
    ),

    _identifier: $ => prec(2, choice(
      $.modular_identifier,
      $.identifier,
    )),

    modular_identifier: $ => seq(
      repeat(seq(
        field('module', $.upper_identifier),
        '.',
      )),
      $.identifier,
    ),

    hidden: $ => 'hidden',
    other_str: $ => choice(...important_str),
    operators: $ => choice(...op),
    upper_identifier: $ => /[A-ZΑ-Ω][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?\^]*/,
    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?\^][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?\^]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
