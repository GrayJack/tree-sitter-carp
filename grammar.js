const PREC = {
  call: 14,
}

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
      $._literals,
      $.identifier,
      $._s_expr,
    ),

    _anything: $ => choice(
      // Core thing
      $._s_expr,
      $.line_comment,
      $.identifier,
      $._s_forms,
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

    call_expression: $ => prec(PREC.call, seq(
      field('call_name', $.call_name),
      optional(field('argument', repeat(seq($._expr)))),
    )),

    call_name: $ => prec(PREC.call, seq(
      optional(seq(field('module', $.identifier), '.')),
      field('name', $.identifier),
    )),

    parameters: $ => seq(
      '[',
      repeat($.identifier),
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

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?\^][a-zA-Zα-ωΑ-Ωµ_<%=>\+\-\*\/\|\!\?\^]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
