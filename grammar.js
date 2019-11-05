const PREC = {
  literal: 11,
  special: 10,
  defines: 9,
  call: 7,
  call_module: 6,
  ident1: 2,
  ident: 1,
}

const op = [
  '+', '-', '/', '*', '%', '<', '>',
  '=', '<=', '>=', '/=', 'and', 'or', 'not', 'and*', 'or*'
]

const important_str = [
  'let-do', 'while-do', 'defn-do', 'break', 'for', 'when',
  'cond', 'unless', 'case', 'foreach', 'defdynamic', 'load',
]

// Strings to be ignored inside string and pattern literal
const ignore_str = [
  'fn', 'def', 'defn', 'let', 'do', 'if', 'while', 'use',
  'with', 'ref', 'address', 'set', 'the', 'match', 'register',
  'definterface', 'defmacro', 'defndynamic', 'defmodule',
  'deftype',
  'let-do', 'while-do', 'defn-do', 'break', 'for', 'when',
  'cond', 'unless', 'case', 'foreach', 'defdynamic', 'load',
  '(', ')', '[', ']', '{', '}', ';', '.', '\'', ';',
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

  externals: $ => [
    $.doc,
  ],

  // Hey, you, writting more code to this, if you gonna put more itens here
  // it better be token, or things get messy.
  extras: $ => [/\s/, ',', $.line_comment, $.quote, $.doc, $.hidden],

  conflicts: $ => [
    [$.call_with_module, $.modular_identifier],
  ],

  rules: {
    source_file: $ => repeat($._s_expr),

    line_comment: $ => token(seq(';', /.*/)),

    quote: $ => token('\''),

    hidden: $ => token(seq('(', 'hidden', /.+/, ')')),

    _s_expr: $ => seq(
      '(',
      $._anything,
      ')',
    ),

    _expr: $ => choice(
      $._literals,
      $._s_expr,
      $._short_helper,
      $._identifier,
      $.upper_identifier,
      $.symbol,
      $._s_forms,
      $._defs,
      $.call,
    ),

    _anything: $ => choice(
      // Core thing
      $._s_expr,
      $.upper_identifier,
      // $._identifier,
      $.symbol,
      $.call,
      $._short_helper,
      $._s_forms,
      $._defs,
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
      $.use,
      $.with,
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
    ),

    call: $ => prec.left(PREC.call, seq(
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

    // Special Expressions
    def: $ => prec.left(PREC.special, seq(
      'def',
      field('name', $.identifier),
      field('value', $._expr),
    )),

    fn: $ => prec.left(PREC.special, seq(
      'fn',
      field('parameters', choice($.parameter_ident, $.parameter_array, $.parameters)),
      optional(field('body', repeat($._expr))),
    )),

    defn: $ => prec.left(PREC.special, seq(
      'defn',
      field('name', $.identifier),
      field('parameters', choice($.parameter_ident, $.parameter_array, $.parameters)),
      optional(field('body', repeat($._expr))),
    )),

    let: $ => prec.left(PREC.special, seq(
      'let',
      field('pairs', choice($.let_array, $.let_pairs, $.let_ident)),
      optional(field('body', repeat($._expr))),
    )),

    let_ident: $ => $.identifier,

    let_array: $ => seq(
      '(',
      'array',
      optional(repeat(seq(
        field('var', $._expr),
        field('expr', $._expr),
      ))),
      ')',
    ),

    let_pairs: $ => seq(
      '[',
      repeat(seq(
        field('var', $._expr),
        field('expr', $._expr),
      )),
      ']'
    ),

    do: $ => prec.left(PREC.special, seq(
      'do',
      repeat(field('expr', $._expr)),
    )),

    if: $ => prec.left(PREC.special, seq(
      'if',
      field('condition', $._expr),
      field('then', $._expr),
      field('else', $._expr),
    )),

    while: $ => prec.left(PREC.special, seq(
      'while',
      field('condition', $._expr),
      optional(field('body', repeat($._expr))),
    )),

    use: $ => prec.left(PREC.special, seq(
      'use',
      field('module', choice($.upper_identifier, $._expr)),
    )),

    with: $ => prec.left(PREC.special, seq(
      'with',
      field('module', $.upper_identifier),
      repeat(field('expr', $._expr)),
    )),

    ref: $ => prec.left(PREC.special, seq(
      choice('ref'),
      field('expr', $._expr),
    )),

    address: $ => prec.left(PREC.special, seq(
      'address',
      field('expr', $._expr),
    )),

    set: $ => prec.left(PREC.special, seq(
      'set!',
      field('variable', $._expr),
      field('expr', $._expr),
    )),

    the: $ => prec.left(PREC.special, seq(
      'the',
      field('type', $.type),
      field('expr', $._expr),
    )),

    match: $ => prec.left(PREC.special, seq(
      'match',
      field('expr', $._expr),
      optional(repeat($.match_case)),
    )),

    match_case: $ => seq(
      field('case', $._expr),
      field('body', $._expr),
    ),

    register: $ => prec.left(PREC.special, seq(
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

    // Defines
    definterface: $ => prec.left(PREC.defines, seq(
      'definterface',
      field('name', $.identifier),
      choice(
        field('value', $.identifier),
        seq(
          '(',
          field('fn', $.interface_fn),
          ')',
        ),
      ),
    )),

    defmacro: $ => prec.left(PREC.defines, seq(
      'defmacro',
      field('name', $.identifier),
      field('parameters', choice($.parameter_ident, $.parameter_array, $.parameters)),
      optional(field('body', $._expr)),
    )),

    defndynamic: $ => prec.left(PREC.defines, seq(
      'defndynamic',
      field('name', $.identifier),
      field('parameters', choice($.parameter_ident, $.parameter_array, $.parameters)),
      optional(field('body', $._expr)),
    )),

    defmodule: $ => prec.left(PREC.defines, seq(
      'defmodule',
      field('name', $.identifier),
      repeat(field('definition', $._expr)),
    )),


    deftype: $ => prec.left(PREC.defines, seq(
      'deftype',
      choice(
        $._deftype1,
        $._deftype2,
        $._deftype3,
      ),
    )),

    _deftype1: $ => prec.left(seq(
      $._name_deftypes,
      field('fields', choice($.field_ident, $.field_array, $.fields)),
    )),

    _deftype2: $ => prec.left(seq(
      $._name_deftypes,
      repeat(seq(
        '(',
        field('variant', choice($.upper_identifier, $.identifier)),
        field('fields', choice($.field_ident, $.field_array, $.fields)),
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
      field('fields', choice($.field_ident, $.fields)),
      ')',
    ),

    // Helpers

    interface_fn: $ => seq(
      choice('Fn', 'λ'),
      field('typed_params', choice($.typed_parameter_ident, $.typed_parameter_array, $.typed_parameters)),
      field('return_type', choice($._short_helper, $.type)),
    ),

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
        $.interface_fn,
      )),
      ')',
    ),

    parameters: $ => seq(
      '[',
      repeat(choice($._identifier, $.upper_identifier, $.symbol)),
      ']',
    ),

    parameter_array: $ => seq(
      '(',
      'array',
      optional(repeat(choice($._identifier, $.upper_identifier, $.symbol))),
      ')',
    ),

    parameter_ident: $ => $.identifier,

    typed_parameters: $ => seq(
      '[',
      repeat(choice($.type, $._short_helper)),
      ']',
    ),

    typed_parameter_array: $ => seq(
      '(',
      'array',
      optional(repeat(choice($.type, $._short_helper))),
      ')',
    ),

    typed_parameter_ident: $ => $.identifier,

    fields: $ => seq(
      '[',
      repeat(seq(choice(
        $.identifier,
        $.complex_type,
        alias(choice(...core_types), $.type)
      ))),
      ']',
    ),

    field_array: $ => seq(
      '(',
      'array',
      optional(repeat(seq(choice(
        $.identifier,
        $.complex_type,
        alias(choice(...core_types), $.type)
      )))),
      ')',
    ),

    field_ident: $ => $.identifier,

    short_ref: $ => seq('&', $._expr),

    short_copy: $ => seq('@', $._expr),

    short_fn_ref: $ => seq('~', $._expr),

    // Literals
    integer_literal: $ => prec(PREC.literal, token(seq(
      optional('-'),
      /[0-9][0-9]*/,
      optional('l'),
    ))),

    float_literal: $ => prec(PREC.literal, token(seq(
      optional('-'),
      choice(
        seq(/[0-9][0-9]*/, 'f'),
        seq(/[0-9][0-9]*\.[0-9][0-9]*/, optional('f')),
      ),
    ))),

    bool_literal: $ => prec(PREC.literal, choice('true', 'false')),

    str_literal: $ => prec(PREC.literal, seq(
      '"',
      repeat(choice(
        /[^"\\]+/,
        // $._ignore,
        $.escape_sequence,
        // /\s/,
        // /./,
      )),
      '"'
    )),

    char_literal: $ => prec(PREC.literal, seq(
      '\\',
      choice(
        $.escape_sequence,
        /\s/,
        /./,
      )
    )),

    pattern_literal: $ => prec(PREC.literal, seq(
      '#"',
      repeat(choice(
        token.immediate(/[^"\\]+/),
        // $._ignore,
        $.escape_sequence,
        // /\s/,
        // /./,
      )),
      '"',
    )),

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
      )
    ),

    unit: $ => prec(PREC.literal, seq('(', ')')),

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

    symbol: $ => seq(
      ':',
      $.identifier,
    ),

    _identifier: $ => prec(PREC.literal+1, choice(
      $.modular_identifier,
      $.identifier,
    )),

    modular_identifier: $ => prec(PREC.literal, seq(
      repeat(seq(
        field('module', choice($.upper_identifier, $.all_upper)),
        '.',
      )),
      choice($.all_upper, $.identifier),
    )),

    _ignore: $ => choice(...ignore_str),
    other_str: $ => choice(...important_str),
    operators: $ => choice(...op),
    all_upper: $ => /[A-ZΑ-Ω][A-ZΑ-Ω][A-ZΑ-Ω0-9_]+/,
    upper_identifier: $ => /[A-ZΑ-Ω][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?]*/,
    identifier: $ => prec(PREC.literal, /[a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?][a-zA-Zα-ωΑ-Ω0-9µ_<%=>\+\-\*\/\|\!\?]*/),
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
