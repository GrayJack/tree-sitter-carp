module.exports = grammar({
  name: 'carp',

  rules: {
    source_file: $ => repeat($._s_expr),

    _s_expr: $ => seq(
      '(',
      $._anything,
      token.immediate(')')
    ),

    _anything: $ => choice(
      $.def
    ),

    def: $ => seq(
      'def',
      field('name', $.identifier),
      field('value', choice($.identifier, $._literals)),
    ),

    _literals: $ => choice(
      $.integer_literal,
      $.float_literal,
      $.bool_literal,
      $.str_literal,
      $.pattern_literal,
      $.char_literal,
      $.negative_literal,
    ),

    negative_literal: $ => seq('-', choice($.integer_literal, $.float_literal),),

    integer_literal: $ => token(seq(
      /[0-9][0-9_]*/,
      optional('l'),
    )),

    float_literal: $ => token(seq(
      /[0-9][0-9_]*/,
      choice('f', /.[0-9][0-9_]*/, /.[0-9][0-9_]*f/),
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

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,
  }
});
