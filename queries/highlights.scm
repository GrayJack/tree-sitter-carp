; Assume all-caps names are constants
((symbol) @constant
 (match? @constant "^[A-Z][A-Z\\d_]+$'"))

((line_comment) @comment)

(call
  name: (symbol) @function.call)
  ; (match? @constructor.enum "^[A-Z\\d_]{1,}.+$")
  ; (match? @operator "(<|<=|%|=|>|>=|\\+|\\-|\\*|\\/|and|and\\*|or|or\\*|not|/=)")
  ; (match? @keyword.other "^(for|break|defdynamic|let\\-do|while\\-do|defn\\-do|load|system\\-include|local\\-include|register\\-type)"))
(short_fn_ref (symbol) @function.call)

((variant_symbol) @constructor.enum)

(type (symbol) @type)
(complex_type (symbol) @type)
((type_symbol) @type)
((core_types) @type)

(parameters (symbol) @variable.parameter)
(parameters (keyword) @variable.parameter)

((keyword) @variable.constant)

"doc" @attribute
"hidden" @attribute
"sig" @attribute
"private" @attribute

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

"if" @keyword
"do" @keyword
"fn" @keyword
"def" @keyword
"let" @keyword
"ref" @keyword
"the" @keyword
"use" @keyword
"set!" @keyword
"defn" @keyword
; "load" @keyword
"with" @keyword
"while" @keyword
"match" @keyword
"address" @keyword
"deftype" @keyword
"defmacro" @keyword
"defmodule" @keyword
"defndynamic" @keyword
"definterface" @keyword

(short_copy "@" @support.copy)
(short_ref "&" @support.reference)
(short_fn_ref "~" @support.reference)
(short_quote "'" @support.quote)

(escape_sequence) @escape

(str_literal) @string
(char_literal) @string
(pattern_literal) @string

(unit) @constant.builtin
(bool_literal) @constant.builtin
(float_literal) @constant.builtin
(integer_literal) @constant.builtin
