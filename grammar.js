const core_types = [
  'Bool',
  'Byte',
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

  // Hey, you, writting more code to this, if you gonna put more itens here
  // it better be token, or things get messy.
  extras: $ => [/\s/, ',', $.line_comment], //$.doc,

  conflicts: $ => [],

  supertypes: $ => [
    $._special_forms,
    $._literals,
    $._shorthand,
    $._defs,
  ],

  word: $ => $.symbol,

  rules: {
    source_file: $ => repeat($._expr),

    line_comment: $ => token(seq(';', /.*/)),

    _expr: $ => choice(
      $._special_forms,
      $._literals,
      $._shorthand,
      $._identifier,
      $._defs,
      $._specials,
      $.call,
      $.array,
      $.map,
      $.register,
      $.hidden,
      $.doc,
      $.signature,
      $.private,
    ),


    call: $ => seq(
      '(',
      field('name', $._call_name),
      optional(repeat(field('argument', $._expr))),
      ')'
    ),

    _call_name: $ => choice($._identifier, $.short_fn_ref),

    array: $ => seq(
      '[',
      optional(repeat(field('item', $._expr))),
      ']',
    ),

    map: $ => seq(
      '{',
      optional(repeat(
        seq(
          field('key', $._expr),
          field('value',  $._expr),
        )
      )),
      '}',
    ),

    hidden: $ => seq(
      '(',
      'hidden',
      field('path', $._identifier),
      ')',
    ),

    doc: $ => seq(
      '(',
      'doc',
      field('path', $._identifier),
      field('doc_str', $.str_literal),
      ')',
    ),

    signature: $ => seq(
      '(',
      'sig',
      field('path', $._identifier),
      '(',
      field('signature', $.interface_fn),
      ')',
      ')',
    ),

    private: $ => seq(
      '(',
      'private',
      field('path', $._identifier),
      ')',
    ),

    register: $ => seq(
      '(',
      'register',
      field('name', $._defs_name),
      seq(
        field('type', choice($.type, $._shorthand)),
        optional(field('value_name', $._expr)),
      ),
      ')',
    ),

    _special_forms: $ => choice(
      $.fn,
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
    ),

    fn: $ => seq(
      '(',
      'fn',
      field('parameters', $._parameters),
      optional(field('body', $._expr)),
      ')',
    ),

    _parameters: $ => choice(
      $._identifier,
      $.parameters,
      $.quote,
      $.short_quote,
    ),

    parameters: $ => seq(
      '[',
      optional(repeat(field('parameter', $._identifier))),
      ']'
    ),

    let: $ => seq(
      '(',
      'let',
      field('pairs', $._let_pairs),
      optional(field('body', $._expr)),
      ')',
    ),

    _let_pairs: $ => choice(
      $._identifier, $.call, $.pairs, $.quote, $.short_quote,
    ),

    pairs: $ => seq(
      '[',
      repeat(seq(
        field('var', $._expr),
        field('value', $._expr),
      )),
      ']'
    ),

    do: $ => seq(
      '(',
      'do',
      repeat(field('expr', $._expr)),
      ')',
    ),

    if: $ => seq(
      '(',
      'if',
      field('condition', $._expr),
      field('then', $._expr),
      field('else', $._expr),
      ')',
    ),

    while: $ => seq(
      '(',
      'while',
      field('condition', $._expr),
      optional(field('body', $._expr)),
      ')',
    ),

    use: $ => seq(
      '(',
      'use',
      field('module', $._use_module),
      ')',
    ),

    with: $ => seq(
      '(',
      'with',
      field('module', $._use_module),
      repeat(field('expr', $._expr)),
      ')',
    ),

    _use_module: $ => choice(
      alias($.symbol, $.module_symbol),
      alias($.scoped_identifier, $.scoped_module),
      $.quote,
      $.short_quote,
      $.call,
    ),

    ref: $ => seq(
      '(',
      'ref',
      optional($._expr),
      ')',
    ),

    address: $ => seq(
      '(',
      'address',
      $._expr,
      ')',
    ),

    set: $ => seq(
      '(',
      'set!',
      field('variable', $._expr),
      field('value', $._expr),
      ')',
    ),

    the: $ => seq(
      '(',
      'the',
      field('type', $.type),
      field('expr', $._expr),
      ')',
    ),

    match: $ => seq(
      '(',
      'match',
      field('expr', $._expr),
      optional(repeat($.match_case)),
      ')',
    ),

    match_case: $ => seq(
      field('case', $._expr),
      field('body', $._expr),
    ),

    _defs: $ => choice(
      $.def,
      $.defn,
      $.definterface,
      $.defmacro,
      $.defndynamic,
      $.defmodule,
      $.deftype,
      $.deftemplate,
    ),

    def: $ => seq(
      '(',
      'def',
      field('name', $._defs_name),
      field('value', $._expr),
      ')',
    ),

    defn: $ => seq(
      '(',
      'defn',
      field('name', $._defs_name),
      field('parameters', $._parameters),
      optional(field('body', $._expr)),
      ')',
    ),

    definterface: $ => seq(
      '(',
      'definterface',
      field('name', $._defs_name),
      choice(
        field('value', $._identifier),
        field('signature', $._sig),
      ),
      ')',
    ),

    _sig: $ => choice(
      $.quote, $.short_quote,
      seq('(', $.interface_fn,')')
    ),

    defmacro: $ => seq(
      '(',
      'defmacro',
      field('name', $._defs_name),
      field('parameters', $._parameters),
      optional(field('body', $._expr)),
      ')',
    ),

    defndynamic: $ => seq(
      '(',
      'defndynamic',
      field('name', $._defs_name),
      field('parameters', $._parameters),
      optional(field('body', $._expr)),
      ')',
    ),

    defmodule: $ => seq(
      '(',
      'defmodule',
      field('name', $._defmodule_name),
      repeat(field('item', $._expr)),
      ')',
    ),

    _defmodule_name: $ => choice(
      alias($.symbol, $.module_symbol), $.quote, $.short_quote,
    ),

    deftype: $ => seq(
      '(',
      'deftype',
      $._deftype_names,
      choice(
        $._deftype_struct,
        repeat($._deftype_enum1),
        repeat($._deftype_enum2),
      ),
      ')',
    ),

    _deftype_struct: $ => seq(
      '[',
      repeat(seq(
        field('field', $._field),
        field('type', $.type),
      )),
      ']',
    ),

    _deftype_enum1: $ => seq(
      '(',
      field('variant', alias($.symbol, $.variant_symbol)),
      '[',
      repeat(field('fields', $._field)),
      ']',
      ')',
    ),

    _deftype_enum2: $ => alias($.symbol, $.variant_symbol),

    _deftype_names: $ => choice(
      field('name', alias($.symbol, $.type_symbol)),
      seq(
        '(',
        field('name', alias($.symbol, $.type_symbol)),
        optional(repeat(field('generic_type', alias($.symbol, $.generic_symbol)))),
        ')',
      ),
    ),

    _field: $ => choice(
      alias($.symbol, $.field_symbol), $.call, $.quote, $.short_quote,
    ),

    deftemplate: $ => seq(
      '(',
      'deftemplate',
      field('name', $._defs_name),
      field('type', $.type),
      field('declaration', $._deftemplate_str),
      field('definition', $._deftemplate_str ),
      ')',
    ),

    _deftemplate_str: $ => choice(
      $.str_literal, $.pattern_literal, $.quote, $.short_quote,
    ),

    _defs_name: $ => choice(
      $._identifier, $.quote, $.short_quote
    ),

    // Specials
    _specials: $ => choice(
      $.quote,
    ),

    quote: $ => seq(
      '(',
      'quote',
      $._expr,
      ')'
    ),

    _shorthand: $ => choice(
      $.short_ref,
      $.short_copy,
      $.short_fn_ref,
      $.short_quote,
    ),

    short_ref: $ => seq('&', $._expr),

    short_copy: $ => seq('@', $._expr),

    short_fn_ref: $ => seq('~', $._expr),

    short_quote: $ => seq('\'', $._expr),

    // Extras
    type: $ => choice(
      alias(choice(...core_types), $.core_types),
      $.complex_type,
      $.symbol,
    ),

    complex_type: $ => seq(
      '(',
      repeat(choice(
        alias(choice(...core_types), $.core_types),
        $.complex_type,
        $.symbol,
        $.interface_fn,
        $.static_lifetime,
      )),
      ')',
    ),

    interface_fn: $ => seq(
      choice('Fn', 'λ'),
      field('type_parameters', choice($._type_parameters)),
      field('return_type', choice($._shorthand, $.type)),
    ),

    _type_parameters: $ => choice(
      alias($.symbol, $.type_symbol),
      $.call,
      $.type_parameters,
      $.quote,
      $.short_quote,
    ),

    static_lifetime: $ => 'StaticLifetime',

    type_parameters: $ => seq(
      '[',
      repeat(choice($.type, $._shorthand)),
      ']',
    ),

    // Literals
    _literals: $ => choice(
      $.unit,
      $.str_literal,
      $.char_literal,
      $.pattern_literal,
      $.bool_literal,
      $.integer_literal,
      $.float_literal,
    ),

    integer_literal: $ => token(seq(
      optional('-'),
      choice(
        /0x[0-9a-fA-F]+/,
        /0x[0-9a-fA-F]+l/,
        /0b[01]+/,
        /0b[01]+l/,
        /0b[01]+b/,
        /[0-9][0-9]*/,
        /[0-9][0-9]*l/,
        /[0-9][0-9]*b/,
      ),
    )),

    float_literal: $ => token(seq(
      optional('-'),
      choice(
        /[0-9][0-9]*f/,
        /[0-9][0-9]*\.[0-9][0-9]*f?/,
      ),
    )),

    bool_literal: $ => choice('true', 'false'),

    str_literal: $ => seq(
      '"',
      repeat(choice(
        /[^"\\$]+/,
        // $._ignore,
        $.escape_sequence,
        $.meta_symbol,
        // /\s/,
        // /./,
      )),
      token.immediate('"'),
    ),

    char_literal: $ => seq(
      '\\',
      choice(
        $.escape_sequence,
        /\s/,
        /./,
      )
    ),

    pattern_literal: $ => seq(
      '#"',
      repeat(choice(
        token.immediate(/[^"]+/),
        // $._ignore,
        // $.escape_sequence,
        // /\s/,
        // /./,
      )),
      '"',
    ),

    meta_symbol: $ => token.immediate(/\$[^({\[\]})"'@&|`;.,~#\s\\:][^({\[\]})"'@&|`;.,~#\s\\]*/),

    escape_sequence: $ => token.immediate(
      choice(
        /\\[^xu]/,
        /\\u[0-9a-fA-F]{4}/,
        /\\u{[0-9a-fA-F]+}/,
        /\\x[0-9a-fA-F]{2}/
      )
    ),

    unit: $ => '()',

    _identifier: $ => choice($.keyword, $.symbol, $.scoped_identifier),

    scoped_identifier: $ => prec(1, seq(
      field('path', choice(
        $.scoped_identifier,
        alias($.symbol, $.module_symbol),
        alias($.keyword, $.module_keyword)
      )),
      '.',
      $._identifier
    )),

    keyword: $ => /:[^({\[\]})"'@&|`;.,~#\s\\]/,
    symbol: $ => /[^({\[\]})"'@&|`;.,~#\s\\:][^({\[\]})"'@&|`;.,~#\s\\]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
