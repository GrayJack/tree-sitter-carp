const PREC = {
  call: 14,
}

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

  // conflicts: $ => [
  //   // [$.let_pairs, $.array_expression]
  //   [$._anything, $._anything],
  // ],

  rules: {
    source_file: $ => repeat(choice($.line_comment, $._s_expr)),

    line_comment: $ => seq(';', /.*/),

    _s_expr: $ => seq(
      '(',
      $._anything,
      ')',
    ),

    _expr: $ => choice(
      $._short_helper,
      $._literals,
      $.identifier,
      $.symbol,
      $._s_expr,
    ),

    _anything: $ => choice(
      // Core thing
      $._s_expr,
      $.line_comment,
      $.identifier,
      $.symbol,
      $._s_forms,
      $._defs,
      $.call_expression,
      $._short_helper,
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
      $.register,
    ),

    _defs: $ => choice(
      $.definterface,
      $.defmacro,
      $.defndynamic,
      $.defmodule,
    ),

    _literals: $ => choice(
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

    def: $ => seq(
      'def',
      field('name', $.identifier),
      field('value', $._expr),
    ),

    fn: $ => seq(
      'fn',
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    defn: $ => seq(
      'defn',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    let: $ => seq(
      'let',
      field('pairs', $.let_pairs),
      optional(field('body', $._expr))
    ),

    let_pairs: $ => seq(
      '[',
      repeat(seq(
        field('var', $.identifier),
        field('expr', $._expr),
      )),
      ']'
    ),

    do: $ => seq(
      'do',
      repeat(field('expr', $._expr)),
    ),

    if: $ => seq(
      'if',
      field('condition', $._expr),
      field('then', $._expr),
      field('else', $._expr),
    ),

    while: $ => seq(
      'while',
      field('condition', $._expr),
      optional(field('body', $._expr)),
    ),

    ref: $ => seq(
      choice('ref'),
      field('expr', $._expr),
    ),

    address: $ => seq(
      'address',
      field('expr', $._expr),
    ),

    set: $ => seq(
      'set!',
      field('variable', $.identifier),
      field('expr', $._expr),
    ),

    the: $ => seq(
      'the',
      field("type", $.type),
      field("expr", $._expr),
    ),

    register: $ => seq(
      'register',
      field('name', $.identifier),
      choice(
        seq(
          field('type', choice($.type, $._short_helper)),
          field('value_name', $._expr),
        ),
        seq(
          '(',
          field('fn', $.interface_fn),
          ')'
        ),
      ),
    ),

    type: $ => choice(
      alias(choice(...core_types), $.identifier),
      $.identifier,
      $.complex_type,
    ),

    complex_type: $ => seq(
      '(',
      repeat(choice(
        alias(choice(...core_types), $.identifier),
        $.identifier,
      )),
      ')',
    ),

    call_expression: $ => prec(PREC.call, seq(
      field('call_name', $.call_name),
      optional(field('argument', repeat(seq($._expr)))),
    )),

    call_name: $ => prec(PREC.call, choice(
      seq(
        optional(seq(field('module', $.identifier), '.')),
        field('name', $.identifier),
      ),
      $.short_fn_ref,
    )),

    definterface: $ => seq(
      'definterface',
      field('name', $.identifier),
      '(',
      field('fn', $.interface_fn),
      ')'
    ),

    defmacro: $ => seq(
      'defmacro',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    defndynamic: $ => seq(
      'defndynamic',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('body', $._expr)),
    ),

    defmodule: $ => seq(
      'defmodule',
      field('name', $.identifier),
      repeat(field('definition', $._expr)),
    ),

    interface_fn: $ => seq(
      choice('Fn', 'λ'),
      field('typed_params', $.typed_parameters),
      field('return_type', choice($._short_helper, $.type)),
    ),

    short_ref: $ => seq('&', $._expr),

    short_copy: $ => seq('@', $._expr),

    short_fn_ref: $ => seq('~', $._expr),

    short_quote: $ => seq('\'', $._expr),

    parameters: $ => seq(
      '[',
      repeat(choice($.identifier, $.symbol)),
      ']'
    ),

    typed_parameters: $ => seq(
      '[',
      repeat(choice($.type, $._short_helper)),
      ']'
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
      token.immediate('"')
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
      token.immediate('"'),
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
      repeat(
        choice($.identifier, $._literals)
      ),
      ']'
    ),

    map_expression: $ => seq(
      '{',
      repeat(
        seq(
          field('key', choice($.identifier, $._literals)),
          field('value', choice($.identifier, $._literals)),
        )
      ),
      '}'
    ),

    symbol: $ => seq(
      ':',
      $.identifier,
    ),

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?\^][a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?\^]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
