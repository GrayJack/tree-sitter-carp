
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
"load" @keyword
"with" @keyword
"while" @keyword
"match" @keyword
"address" @keyword
"deftype" @keyword
"defmacro" @keyword
"defmodule" @keyword
"defndynamic" @keyword
"definterface" @keyword
; "local-include" @keyword
; "register-type" @keyword
; "system-include" @keyword

(short_copy "@" @support.copy)
(short_ref "&" @support.reference)
(short_fn_ref "~" @support.reference)

(escape_sequence) @escape

(str_literal) @string
(char_literal) @string
(pattern_literal) @string

(unit) @constant.builtin
(bool_literal) @constant.builtin
(float_literal) @constant.builtin
(integer_literal) @constant.builtin
