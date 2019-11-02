#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 240
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_def = 5,
  anon_sym_fn = 6,
  anon_sym_defn = 7,
  anon_sym_let = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_do = 11,
  anon_sym_if = 12,
  anon_sym_while = 13,
  anon_sym_ref = 14,
  anon_sym_address = 15,
  anon_sym_set_BANG = 16,
  anon_sym_the = 17,
  anon_sym_register = 18,
  anon_sym_Bool = 19,
  anon_sym_Char = 20,
  anon_sym_Int = 21,
  anon_sym_Long = 22,
  anon_sym_Float = 23,
  anon_sym_Double = 24,
  anon_sym_Vector2 = 25,
  anon_sym_Vector3 = 26,
  anon_sym_VectorN = 27,
  anon_sym_String = 28,
  anon_sym_Pattern = 29,
  anon_sym_Array = 30,
  anon_sym_Map = 31,
  anon_sym_Maybe = 32,
  anon_sym_Result = 33,
  anon_sym_Id = 34,
  anon_sym_Ptr = 35,
  anon_sym_DOT = 36,
  anon_sym_definterface = 37,
  anon_sym_defmacro = 38,
  anon_sym_defndynamic = 39,
  anon_sym_defmodule = 40,
  anon_sym_deftype = 41,
  anon_sym_RPAREN2 = 42,
  anon_sym_COMMA = 43,
  anon_sym_RBRACK2 = 44,
  anon_sym_Fn = 45,
  anon_sym_ = 46,
  anon_sym_AMP = 47,
  anon_sym_AT = 48,
  anon_sym_TILDE = 49,
  anon_sym_SQUOTE = 50,
  sym_integer_literal = 51,
  sym_float_literal = 52,
  anon_sym_true = 53,
  anon_sym_false = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_str_literal_token1 = 56,
  anon_sym_DQUOTE2 = 57,
  anon_sym_BSLASH = 58,
  anon_sym_POUND_DQUOTE = 59,
  sym_escape_sequence = 60,
  anon_sym_LBRACE = 61,
  anon_sym_RBRACE = 62,
  anon_sym_COLON = 63,
  sym_identifier = 64,
  sym_source_file = 65,
  sym_line_comment = 66,
  sym__s_expr = 67,
  sym__expr = 68,
  sym__anything = 69,
  sym__s_forms = 70,
  sym__defs = 71,
  sym__literals = 72,
  sym__short_helper = 73,
  sym_def = 74,
  sym_fn = 75,
  sym_defn = 76,
  sym_let = 77,
  sym_let_pairs = 78,
  sym_do = 79,
  sym_if = 80,
  sym_while = 81,
  sym_ref = 82,
  sym_address = 83,
  sym_set = 84,
  sym_the = 85,
  sym_register = 86,
  sym_type = 87,
  sym_complex_type = 88,
  sym_call_expression = 89,
  sym_call_name = 90,
  sym_definterface = 91,
  sym_defmacro = 92,
  sym_defndynamic = 93,
  sym_defmodule = 94,
  sym_deftype = 95,
  sym__deftype1 = 96,
  sym__deftype2 = 97,
  sym__name_deftypes = 98,
  sym_fields = 99,
  sym_interface_fn = 100,
  sym_short_ref = 101,
  sym_short_copy = 102,
  sym_short_fn_ref = 103,
  sym_short_quote = 104,
  sym_parameters = 105,
  sym_typed_parameters = 106,
  sym_bool_literal = 107,
  sym_str_literal = 108,
  sym_char_literal = 109,
  sym_pattern_literal = 110,
  sym_array_expression = 111,
  sym_map_expression = 112,
  sym_symbol = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym_let_pairs_repeat1 = 115,
  aux_sym_do_repeat1 = 116,
  aux_sym_complex_type_repeat1 = 117,
  aux_sym_call_expression_repeat1 = 118,
  aux_sym_defmodule_repeat1 = 119,
  aux_sym__deftype2_repeat1 = 120,
  aux_sym__name_deftypes_repeat1 = 121,
  aux_sym_fields_repeat1 = 122,
  aux_sym_parameters_repeat1 = 123,
  aux_sym_typed_parameters_repeat1 = 124,
  aux_sym_str_literal_repeat1 = 125,
  aux_sym_array_expression_repeat1 = 126,
  aux_sym_map_expression_repeat1 = 127,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_def] = "def",
  [anon_sym_fn] = "fn",
  [anon_sym_defn] = "defn",
  [anon_sym_let] = "let",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_do] = "do",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_ref] = "ref",
  [anon_sym_address] = "address",
  [anon_sym_set_BANG] = "set!",
  [anon_sym_the] = "the",
  [anon_sym_register] = "register",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Char] = "Char",
  [anon_sym_Int] = "Int",
  [anon_sym_Long] = "Long",
  [anon_sym_Float] = "Float",
  [anon_sym_Double] = "Double",
  [anon_sym_Vector2] = "Vector2",
  [anon_sym_Vector3] = "Vector3",
  [anon_sym_VectorN] = "VectorN",
  [anon_sym_String] = "String",
  [anon_sym_Pattern] = "Pattern",
  [anon_sym_Array] = "Array",
  [anon_sym_Map] = "Map",
  [anon_sym_Maybe] = "Maybe",
  [anon_sym_Result] = "Result",
  [anon_sym_Id] = "Id",
  [anon_sym_Ptr] = "Ptr",
  [anon_sym_DOT] = ".",
  [anon_sym_definterface] = "definterface",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_defndynamic] = "defndynamic",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_deftype] = "deftype",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK2] = "]",
  [anon_sym_Fn] = "Fn",
  [anon_sym_] = "λ",
  [anon_sym_AMP] = "&",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
  [anon_sym_SQUOTE] = "'",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_line_comment] = "line_comment",
  [sym__s_expr] = "_s_expr",
  [sym__expr] = "_expr",
  [sym__anything] = "_anything",
  [sym__s_forms] = "_s_forms",
  [sym__defs] = "_defs",
  [sym__literals] = "_literals",
  [sym__short_helper] = "_short_helper",
  [sym_def] = "def",
  [sym_fn] = "fn",
  [sym_defn] = "defn",
  [sym_let] = "let",
  [sym_let_pairs] = "let_pairs",
  [sym_do] = "do",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_ref] = "ref",
  [sym_address] = "address",
  [sym_set] = "set",
  [sym_the] = "the",
  [sym_register] = "register",
  [sym_type] = "type",
  [sym_complex_type] = "complex_type",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
  [sym_definterface] = "definterface",
  [sym_defmacro] = "defmacro",
  [sym_defndynamic] = "defndynamic",
  [sym_defmodule] = "defmodule",
  [sym_deftype] = "deftype",
  [sym__deftype1] = "_deftype1",
  [sym__deftype2] = "_deftype2",
  [sym__name_deftypes] = "_name_deftypes",
  [sym_fields] = "fields",
  [sym_interface_fn] = "interface_fn",
  [sym_short_ref] = "short_ref",
  [sym_short_copy] = "short_copy",
  [sym_short_fn_ref] = "short_fn_ref",
  [sym_short_quote] = "short_quote",
  [sym_parameters] = "parameters",
  [sym_typed_parameters] = "typed_parameters",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [sym_symbol] = "symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_pairs_repeat1] = "let_pairs_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_complex_type_repeat1] = "complex_type_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_defmodule_repeat1] = "defmodule_repeat1",
  [aux_sym__deftype2_repeat1] = "_deftype2_repeat1",
  [aux_sym__name_deftypes_repeat1] = "_name_deftypes_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_typed_parameters_repeat1] = "typed_parameters_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_map_expression_repeat1] = "map_expression_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VectorN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Maybe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defndynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deftype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__s_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym__s_forms] = {
    .visible = false,
    .named = true,
  },
  [sym__defs] = {
    .visible = false,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym__short_helper] = {
    .visible = false,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_let_pairs] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_the] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_complex_type] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_name] = {
    .visible = true,
    .named = true,
  },
  [sym_definterface] = {
    .visible = true,
    .named = true,
  },
  [sym_defmacro] = {
    .visible = true,
    .named = true,
  },
  [sym_defndynamic] = {
    .visible = true,
    .named = true,
  },
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_deftype] = {
    .visible = true,
    .named = true,
  },
  [sym__deftype1] = {
    .visible = false,
    .named = true,
  },
  [sym__deftype2] = {
    .visible = false,
    .named = true,
  },
  [sym__name_deftypes] = {
    .visible = false,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_short_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_short_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_short_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_pairs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_complex_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defmodule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deftype2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_deftypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typed_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_body = 2,
  field_call_name = 3,
  field_condition = 4,
  field_definition = 5,
  field_else = 6,
  field_expr = 7,
  field_fields = 8,
  field_fn = 9,
  field_generic_type = 10,
  field_key = 11,
  field_module = 12,
  field_name = 13,
  field_pairs = 14,
  field_parameters = 15,
  field_return_type = 16,
  field_then = 17,
  field_type = 18,
  field_typed_params = 19,
  field_value = 20,
  field_value_name = 21,
  field_var = 22,
  field_variable = 23,
  field_variant = 24,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
  [field_definition] = "definition",
  [field_else] = "else",
  [field_expr] = "expr",
  [field_fields] = "fields",
  [field_fn] = "fn",
  [field_generic_type] = "generic_type",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_then] = "then",
  [field_type] = "type",
  [field_typed_params] = "typed_params",
  [field_value] = "value",
  [field_value_name] = "value_name",
  [field_var] = "var",
  [field_variable] = "variable",
  [field_variant] = "variant",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [10] = {.index = 8, .length = 1},
  [11] = {.index = 9, .length = 3},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 2},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 1},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 3},
  [26] = {.index = 40, .length = 4},
  [27] = {.index = 44, .length = 2},
  [28] = {.index = 46, .length = 2},
  [29] = {.index = 48, .length = 4},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 3},
  [32] = {.index = 57, .length = 2},
  [33] = {.index = 59, .length = 2},
  [34] = {.index = 61, .length = 4},
  [35] = {.index = 65, .length = 3},
  [36] = {.index = 68, .length = 3},
  [37] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 4},
  [40] = {.index = 77, .length = 2},
  [41] = {.index = 79, .length = 2},
  [42] = {.index = 81, .length = 2},
  [43] = {.index = 83, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_call_name, 0},
  [2] =
    {field_parameters, 1},
  [3] =
    {field_pairs, 1},
  [4] =
    {field_expr, 0},
  [5] =
    {field_expr, 1, .inherited = true},
  [6] =
    {field_condition, 1},
  [7] =
    {field_expr, 1},
  [8] =
    {field_name, 1},
  [9] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [12] =
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [14] =
    {field_argument, 1},
    {field_call_name, 0},
  [16] =
    {field_name, 1},
    {field_value, 2},
  [18] =
    {field_body, 2},
    {field_parameters, 1},
  [20] =
    {field_name, 1},
    {field_parameters, 2},
  [22] =
    {field_body, 2},
    {field_pairs, 1},
  [24] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [26] =
    {field_body, 2},
    {field_condition, 1},
  [28] =
    {field_expr, 2},
    {field_variable, 1},
  [30] =
    {field_expr, 2},
    {field_type, 1},
  [32] =
    {field_name, 1},
    {field_type, 2},
  [34] =
    {field_definition, 0},
  [35] =
    {field_definition, 2, .inherited = true},
    {field_name, 1},
  [37] =
    {field_fields, 1},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [40] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [44] =
    {field_key, 0},
    {field_value, 1},
  [46] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [48] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [52] =
    {field_module, 0},
    {field_name, 2},
  [54] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [57] =
    {field_expr, 1},
    {field_var, 0},
  [59] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [61] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [65] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [68] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [71] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [73] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [77] =
    {field_fn, 3},
    {field_name, 1},
  [79] =
    {field_generic_type, 2},
    {field_name, 1},
  [81] =
    {field_return_type, 2},
    {field_typed_params, 1},
  [83] =
    {field_fields, 2},
    {field_variant, 1},
};

static TSSymbol ts_alias_sequences[44][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = sym_identifier,
  },
  [38] = {
    [0] = sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(22);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == 955) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(22);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == 955) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(22);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(22);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(22);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == '~') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == 955) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_address);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Char);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Int);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Float);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Double);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Vector2);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Vector3);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_VectorN);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_String);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Pattern);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Map);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Maybe);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Result);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Ptr);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_definterface);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_deftype);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(21);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(48);
      if (lookahead == '3') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'y') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 24},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_set_BANG] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Vector2] = ACTIONS(1),
    [anon_sym_Vector3] = ACTIONS(1),
    [anon_sym_VectorN] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Pattern] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_Maybe] = ACTIONS(1),
    [anon_sym_Result] = ACTIONS(1),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Ptr] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_definterface] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_defndynamic] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_deftype] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_Fn] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(239),
    [sym_line_comment] = STATE(133),
    [sym__s_expr] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(232),
    [sym__s_expr] = STATE(232),
    [sym__anything] = STATE(232),
    [sym__s_forms] = STATE(232),
    [sym__defs] = STATE(232),
    [sym__literals] = STATE(232),
    [sym__short_helper] = STATE(232),
    [sym_def] = STATE(232),
    [sym_fn] = STATE(232),
    [sym_defn] = STATE(232),
    [sym_let] = STATE(232),
    [sym_do] = STATE(232),
    [sym_if] = STATE(232),
    [sym_while] = STATE(232),
    [sym_ref] = STATE(232),
    [sym_address] = STATE(232),
    [sym_set] = STATE(232),
    [sym_the] = STATE(232),
    [sym_register] = STATE(232),
    [sym_call_expression] = STATE(232),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(232),
    [sym_defmacro] = STATE(232),
    [sym_defndynamic] = STATE(232),
    [sym_defmodule] = STATE(232),
    [sym_deftype] = STATE(232),
    [sym_short_ref] = STATE(232),
    [sym_short_copy] = STATE(232),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(232),
    [sym_bool_literal] = STATE(232),
    [sym_str_literal] = STATE(232),
    [sym_char_literal] = STATE(232),
    [sym_pattern_literal] = STATE(232),
    [sym_array_expression] = STATE(232),
    [sym_map_expression] = STATE(232),
    [sym_symbol] = STATE(232),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(25),
    [anon_sym_address] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(29),
    [anon_sym_the] = ACTIONS(31),
    [anon_sym_register] = ACTIONS(33),
    [anon_sym_definterface] = ACTIONS(35),
    [anon_sym_defmacro] = ACTIONS(37),
    [anon_sym_defndynamic] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [anon_sym_deftype] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(53),
    [sym_float_literal] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [3] = {
    [sym_line_comment] = STATE(222),
    [sym__s_expr] = STATE(222),
    [sym__anything] = STATE(222),
    [sym__s_forms] = STATE(222),
    [sym__defs] = STATE(222),
    [sym__literals] = STATE(222),
    [sym__short_helper] = STATE(222),
    [sym_def] = STATE(222),
    [sym_fn] = STATE(222),
    [sym_defn] = STATE(222),
    [sym_let] = STATE(222),
    [sym_do] = STATE(222),
    [sym_if] = STATE(222),
    [sym_while] = STATE(222),
    [sym_ref] = STATE(222),
    [sym_address] = STATE(222),
    [sym_set] = STATE(222),
    [sym_the] = STATE(222),
    [sym_register] = STATE(222),
    [sym_call_expression] = STATE(222),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(222),
    [sym_defmacro] = STATE(222),
    [sym_defndynamic] = STATE(222),
    [sym_defmodule] = STATE(222),
    [sym_deftype] = STATE(222),
    [sym_short_ref] = STATE(222),
    [sym_short_copy] = STATE(222),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(222),
    [sym_bool_literal] = STATE(222),
    [sym_str_literal] = STATE(222),
    [sym_char_literal] = STATE(222),
    [sym_pattern_literal] = STATE(222),
    [sym_array_expression] = STATE(222),
    [sym_map_expression] = STATE(222),
    [sym_symbol] = STATE(222),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(25),
    [anon_sym_address] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(29),
    [anon_sym_the] = ACTIONS(31),
    [anon_sym_register] = ACTIONS(33),
    [anon_sym_definterface] = ACTIONS(35),
    [anon_sym_defmacro] = ACTIONS(37),
    [anon_sym_defndynamic] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [anon_sym_deftype] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(69),
    [sym_float_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [4] = {
    [sym_line_comment] = STATE(213),
    [sym__s_expr] = STATE(213),
    [sym__anything] = STATE(213),
    [sym__s_forms] = STATE(213),
    [sym__defs] = STATE(213),
    [sym__literals] = STATE(213),
    [sym__short_helper] = STATE(213),
    [sym_def] = STATE(213),
    [sym_fn] = STATE(213),
    [sym_defn] = STATE(213),
    [sym_let] = STATE(213),
    [sym_do] = STATE(213),
    [sym_if] = STATE(213),
    [sym_while] = STATE(213),
    [sym_ref] = STATE(213),
    [sym_address] = STATE(213),
    [sym_set] = STATE(213),
    [sym_the] = STATE(213),
    [sym_register] = STATE(213),
    [sym_call_expression] = STATE(213),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(213),
    [sym_defmacro] = STATE(213),
    [sym_defndynamic] = STATE(213),
    [sym_defmodule] = STATE(213),
    [sym_deftype] = STATE(213),
    [sym_short_ref] = STATE(213),
    [sym_short_copy] = STATE(213),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(213),
    [sym_bool_literal] = STATE(213),
    [sym_str_literal] = STATE(213),
    [sym_char_literal] = STATE(213),
    [sym_pattern_literal] = STATE(213),
    [sym_array_expression] = STATE(213),
    [sym_map_expression] = STATE(213),
    [sym_symbol] = STATE(213),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(25),
    [anon_sym_address] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(29),
    [anon_sym_the] = ACTIONS(31),
    [anon_sym_register] = ACTIONS(33),
    [anon_sym_definterface] = ACTIONS(35),
    [anon_sym_defmacro] = ACTIONS(37),
    [anon_sym_defndynamic] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [anon_sym_deftype] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(71),
    [sym_float_literal] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [5] = {
    [sym__s_expr] = STATE(130),
    [sym__expr] = STATE(130),
    [sym__literals] = STATE(130),
    [sym__short_helper] = STATE(130),
    [sym_short_ref] = STATE(130),
    [sym_short_copy] = STATE(130),
    [sym_short_fn_ref] = STATE(130),
    [sym_short_quote] = STATE(130),
    [sym_bool_literal] = STATE(130),
    [sym_str_literal] = STATE(130),
    [sym_char_literal] = STATE(130),
    [sym_pattern_literal] = STATE(130),
    [sym_array_expression] = STATE(130),
    [sym_map_expression] = STATE(130),
    [sym_symbol] = STATE(130),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(75),
    [sym_float_literal] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(75),
  },
  [6] = {
    [sym__s_expr] = STATE(10),
    [sym__expr] = STATE(10),
    [sym__literals] = STATE(10),
    [sym__short_helper] = STATE(10),
    [sym_short_ref] = STATE(10),
    [sym_short_copy] = STATE(10),
    [sym_short_fn_ref] = STATE(10),
    [sym_short_quote] = STATE(10),
    [sym_bool_literal] = STATE(10),
    [sym_str_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_pattern_literal] = STATE(10),
    [sym_array_expression] = STATE(10),
    [sym_map_expression] = STATE(10),
    [sym_symbol] = STATE(10),
    [aux_sym_call_expression_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(79),
    [sym_float_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(79),
  },
  [7] = {
    [sym__s_expr] = STATE(6),
    [sym__expr] = STATE(6),
    [sym__literals] = STATE(6),
    [sym__short_helper] = STATE(6),
    [sym_short_ref] = STATE(6),
    [sym_short_copy] = STATE(6),
    [sym_short_fn_ref] = STATE(6),
    [sym_short_quote] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_str_literal] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_pattern_literal] = STATE(6),
    [sym_array_expression] = STATE(6),
    [sym_map_expression] = STATE(6),
    [sym_symbol] = STATE(6),
    [aux_sym_call_expression_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(83),
    [sym_float_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(83),
  },
  [8] = {
    [sym__s_expr] = STATE(130),
    [sym__expr] = STATE(130),
    [sym__literals] = STATE(130),
    [sym__short_helper] = STATE(130),
    [sym_short_ref] = STATE(130),
    [sym_short_copy] = STATE(130),
    [sym_short_fn_ref] = STATE(130),
    [sym_short_quote] = STATE(130),
    [sym_bool_literal] = STATE(130),
    [sym_str_literal] = STATE(130),
    [sym_char_literal] = STATE(130),
    [sym_pattern_literal] = STATE(130),
    [sym_array_expression] = STATE(130),
    [sym_map_expression] = STATE(130),
    [sym_symbol] = STATE(130),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_integer_literal] = ACTIONS(105),
    [sym_float_literal] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(114),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(123),
    [sym_identifier] = ACTIONS(105),
  },
  [9] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_short_quote] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [sym_symbol] = STATE(115),
    [aux_sym_defmodule_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(128),
    [sym_float_literal] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(128),
  },
  [10] = {
    [sym__s_expr] = STATE(10),
    [sym__expr] = STATE(10),
    [sym__literals] = STATE(10),
    [sym__short_helper] = STATE(10),
    [sym_short_ref] = STATE(10),
    [sym_short_copy] = STATE(10),
    [sym_short_fn_ref] = STATE(10),
    [sym_short_quote] = STATE(10),
    [sym_bool_literal] = STATE(10),
    [sym_str_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_pattern_literal] = STATE(10),
    [sym_array_expression] = STATE(10),
    [sym_map_expression] = STATE(10),
    [sym_symbol] = STATE(10),
    [aux_sym_call_expression_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_integer_literal] = ACTIONS(150),
    [sym_float_literal] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_BSLASH] = ACTIONS(159),
    [anon_sym_POUND_DQUOTE] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(168),
    [sym_identifier] = ACTIONS(150),
  },
  [11] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_short_quote] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [sym_symbol] = STATE(115),
    [aux_sym_defmodule_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [sym_integer_literal] = ACTIONS(191),
    [sym_float_literal] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(200),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(209),
    [sym_identifier] = ACTIONS(191),
  },
  [12] = {
    [sym__s_expr] = STATE(115),
    [sym__expr] = STATE(115),
    [sym__literals] = STATE(115),
    [sym__short_helper] = STATE(115),
    [sym_short_ref] = STATE(115),
    [sym_short_copy] = STATE(115),
    [sym_short_fn_ref] = STATE(115),
    [sym_short_quote] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [sym_symbol] = STATE(115),
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(128),
    [sym_float_literal] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(128),
  },
  [13] = {
    [sym__s_expr] = STATE(130),
    [sym__expr] = STATE(130),
    [sym__literals] = STATE(130),
    [sym__short_helper] = STATE(130),
    [sym_short_ref] = STATE(130),
    [sym_short_copy] = STATE(130),
    [sym_short_fn_ref] = STATE(130),
    [sym_short_quote] = STATE(130),
    [sym_bool_literal] = STATE(130),
    [sym_str_literal] = STATE(130),
    [sym_char_literal] = STATE(130),
    [sym_pattern_literal] = STATE(130),
    [sym_array_expression] = STATE(130),
    [sym_map_expression] = STATE(130),
    [sym_symbol] = STATE(130),
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(75),
    [sym_float_literal] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(75),
  },
  [14] = {
    [sym__s_expr] = STATE(201),
    [sym__expr] = STATE(201),
    [sym__literals] = STATE(201),
    [sym__short_helper] = STATE(201),
    [sym_short_ref] = STATE(201),
    [sym_short_copy] = STATE(201),
    [sym_short_fn_ref] = STATE(201),
    [sym_short_quote] = STATE(201),
    [sym_bool_literal] = STATE(201),
    [sym_str_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_pattern_literal] = STATE(201),
    [sym_array_expression] = STATE(201),
    [sym_map_expression] = STATE(201),
    [sym_symbol] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(218),
    [sym_float_literal] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(218),
  },
  [15] = {
    [sym__s_expr] = STATE(207),
    [sym__expr] = STATE(207),
    [sym__literals] = STATE(207),
    [sym__short_helper] = STATE(207),
    [sym_short_ref] = STATE(207),
    [sym_short_copy] = STATE(207),
    [sym_short_fn_ref] = STATE(207),
    [sym_short_quote] = STATE(207),
    [sym_bool_literal] = STATE(207),
    [sym_str_literal] = STATE(207),
    [sym_char_literal] = STATE(207),
    [sym_pattern_literal] = STATE(207),
    [sym_array_expression] = STATE(207),
    [sym_map_expression] = STATE(207),
    [sym_symbol] = STATE(207),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(222),
    [sym_float_literal] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(222),
  },
  [16] = {
    [sym__short_helper] = STATE(20),
    [sym_type] = STATE(20),
    [sym_complex_type] = STATE(50),
    [sym_short_ref] = STATE(20),
    [sym_short_copy] = STATE(20),
    [sym_short_fn_ref] = STATE(20),
    [sym_short_quote] = STATE(20),
    [aux_sym_typed_parameters_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(226),
    [anon_sym_Char] = ACTIONS(226),
    [anon_sym_Int] = ACTIONS(226),
    [anon_sym_Long] = ACTIONS(226),
    [anon_sym_Float] = ACTIONS(226),
    [anon_sym_Double] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_VectorN] = ACTIONS(226),
    [anon_sym_String] = ACTIONS(226),
    [anon_sym_Pattern] = ACTIONS(226),
    [anon_sym_Array] = ACTIONS(226),
    [anon_sym_Map] = ACTIONS(226),
    [anon_sym_Maybe] = ACTIONS(226),
    [anon_sym_Result] = ACTIONS(226),
    [anon_sym_Id] = ACTIONS(226),
    [anon_sym_Ptr] = ACTIONS(226),
    [anon_sym_RBRACK2] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
  },
  [17] = {
    [sym__s_expr] = STATE(199),
    [sym__expr] = STATE(199),
    [sym__literals] = STATE(199),
    [sym__short_helper] = STATE(199),
    [sym_short_ref] = STATE(199),
    [sym_short_copy] = STATE(199),
    [sym_short_fn_ref] = STATE(199),
    [sym_short_quote] = STATE(199),
    [sym_bool_literal] = STATE(199),
    [sym_str_literal] = STATE(199),
    [sym_char_literal] = STATE(199),
    [sym_pattern_literal] = STATE(199),
    [sym_array_expression] = STATE(199),
    [sym_map_expression] = STATE(199),
    [sym_symbol] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(242),
    [sym_float_literal] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(242),
  },
  [18] = {
    [sym__s_expr] = STATE(221),
    [sym__expr] = STATE(221),
    [sym__literals] = STATE(221),
    [sym__short_helper] = STATE(221),
    [sym_short_ref] = STATE(221),
    [sym_short_copy] = STATE(221),
    [sym_short_fn_ref] = STATE(221),
    [sym_short_quote] = STATE(221),
    [sym_bool_literal] = STATE(221),
    [sym_str_literal] = STATE(221),
    [sym_char_literal] = STATE(221),
    [sym_pattern_literal] = STATE(221),
    [sym_array_expression] = STATE(221),
    [sym_map_expression] = STATE(221),
    [sym_symbol] = STATE(221),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(246),
    [sym_float_literal] = ACTIONS(246),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(246),
  },
  [19] = {
    [sym__s_expr] = STATE(208),
    [sym__expr] = STATE(208),
    [sym__literals] = STATE(208),
    [sym__short_helper] = STATE(208),
    [sym_short_ref] = STATE(208),
    [sym_short_copy] = STATE(208),
    [sym_short_fn_ref] = STATE(208),
    [sym_short_quote] = STATE(208),
    [sym_bool_literal] = STATE(208),
    [sym_str_literal] = STATE(208),
    [sym_char_literal] = STATE(208),
    [sym_pattern_literal] = STATE(208),
    [sym_array_expression] = STATE(208),
    [sym_map_expression] = STATE(208),
    [sym_symbol] = STATE(208),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(250),
    [sym_float_literal] = ACTIONS(250),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(250),
  },
  [20] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(50),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [aux_sym_typed_parameters_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(226),
    [anon_sym_Char] = ACTIONS(226),
    [anon_sym_Int] = ACTIONS(226),
    [anon_sym_Long] = ACTIONS(226),
    [anon_sym_Float] = ACTIONS(226),
    [anon_sym_Double] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_VectorN] = ACTIONS(226),
    [anon_sym_String] = ACTIONS(226),
    [anon_sym_Pattern] = ACTIONS(226),
    [anon_sym_Array] = ACTIONS(226),
    [anon_sym_Map] = ACTIONS(226),
    [anon_sym_Maybe] = ACTIONS(226),
    [anon_sym_Result] = ACTIONS(226),
    [anon_sym_Id] = ACTIONS(226),
    [anon_sym_Ptr] = ACTIONS(226),
    [anon_sym_RBRACK2] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
  },
  [21] = {
    [sym__s_expr] = STATE(203),
    [sym__expr] = STATE(203),
    [sym__literals] = STATE(203),
    [sym__short_helper] = STATE(203),
    [sym_short_ref] = STATE(203),
    [sym_short_copy] = STATE(203),
    [sym_short_fn_ref] = STATE(203),
    [sym_short_quote] = STATE(203),
    [sym_bool_literal] = STATE(203),
    [sym_str_literal] = STATE(203),
    [sym_char_literal] = STATE(203),
    [sym_pattern_literal] = STATE(203),
    [sym_array_expression] = STATE(203),
    [sym_map_expression] = STATE(203),
    [sym_symbol] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(256),
    [sym_float_literal] = ACTIONS(256),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(256),
  },
  [22] = {
    [sym__s_expr] = STATE(210),
    [sym__expr] = STATE(210),
    [sym__literals] = STATE(210),
    [sym__short_helper] = STATE(210),
    [sym_short_ref] = STATE(210),
    [sym_short_copy] = STATE(210),
    [sym_short_fn_ref] = STATE(210),
    [sym_short_quote] = STATE(210),
    [sym_bool_literal] = STATE(210),
    [sym_str_literal] = STATE(210),
    [sym_char_literal] = STATE(210),
    [sym_pattern_literal] = STATE(210),
    [sym_array_expression] = STATE(210),
    [sym_map_expression] = STATE(210),
    [sym_symbol] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(260),
    [sym_float_literal] = ACTIONS(260),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(260),
  },
  [23] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(50),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [aux_sym_typed_parameters_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_Bool] = ACTIONS(265),
    [anon_sym_Char] = ACTIONS(265),
    [anon_sym_Int] = ACTIONS(265),
    [anon_sym_Long] = ACTIONS(265),
    [anon_sym_Float] = ACTIONS(265),
    [anon_sym_Double] = ACTIONS(265),
    [anon_sym_Vector2] = ACTIONS(265),
    [anon_sym_Vector3] = ACTIONS(265),
    [anon_sym_VectorN] = ACTIONS(265),
    [anon_sym_String] = ACTIONS(265),
    [anon_sym_Pattern] = ACTIONS(265),
    [anon_sym_Array] = ACTIONS(265),
    [anon_sym_Map] = ACTIONS(265),
    [anon_sym_Maybe] = ACTIONS(265),
    [anon_sym_Result] = ACTIONS(265),
    [anon_sym_Id] = ACTIONS(265),
    [anon_sym_Ptr] = ACTIONS(265),
    [anon_sym_RBRACK2] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(282),
  },
  [24] = {
    [sym__s_expr] = STATE(34),
    [sym__expr] = STATE(34),
    [sym__literals] = STATE(34),
    [sym__short_helper] = STATE(34),
    [sym_short_ref] = STATE(34),
    [sym_short_copy] = STATE(34),
    [sym_short_fn_ref] = STATE(34),
    [sym_short_quote] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [sym_symbol] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(285),
  },
  [25] = {
    [sym__s_expr] = STATE(15),
    [sym__expr] = STATE(15),
    [sym__literals] = STATE(15),
    [sym__short_helper] = STATE(15),
    [sym_short_ref] = STATE(15),
    [sym_short_copy] = STATE(15),
    [sym_short_fn_ref] = STATE(15),
    [sym_short_quote] = STATE(15),
    [sym_bool_literal] = STATE(15),
    [sym_str_literal] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_pattern_literal] = STATE(15),
    [sym_array_expression] = STATE(15),
    [sym_map_expression] = STATE(15),
    [sym_symbol] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(287),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(287),
  },
  [26] = {
    [sym__s_expr] = STATE(113),
    [sym__expr] = STATE(113),
    [sym__literals] = STATE(113),
    [sym__short_helper] = STATE(113),
    [sym_short_ref] = STATE(113),
    [sym_short_copy] = STATE(113),
    [sym_short_fn_ref] = STATE(113),
    [sym_short_quote] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_char_literal] = STATE(113),
    [sym_pattern_literal] = STATE(113),
    [sym_array_expression] = STATE(113),
    [sym_map_expression] = STATE(113),
    [sym_symbol] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(289),
  },
  [27] = {
    [sym__s_expr] = STATE(114),
    [sym__expr] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__short_helper] = STATE(114),
    [sym_short_ref] = STATE(114),
    [sym_short_copy] = STATE(114),
    [sym_short_fn_ref] = STATE(114),
    [sym_short_quote] = STATE(114),
    [sym_bool_literal] = STATE(114),
    [sym_str_literal] = STATE(114),
    [sym_char_literal] = STATE(114),
    [sym_pattern_literal] = STATE(114),
    [sym_array_expression] = STATE(114),
    [sym_map_expression] = STATE(114),
    [sym_symbol] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(291),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(291),
  },
  [28] = {
    [sym__s_expr] = STATE(121),
    [sym__expr] = STATE(121),
    [sym__literals] = STATE(121),
    [sym__short_helper] = STATE(121),
    [sym_short_ref] = STATE(121),
    [sym_short_copy] = STATE(121),
    [sym_short_fn_ref] = STATE(121),
    [sym_short_quote] = STATE(121),
    [sym_bool_literal] = STATE(121),
    [sym_str_literal] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_pattern_literal] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_map_expression] = STATE(121),
    [sym_symbol] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(293),
    [sym_float_literal] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(293),
  },
  [29] = {
    [sym__s_expr] = STATE(169),
    [sym__expr] = STATE(169),
    [sym__literals] = STATE(169),
    [sym__short_helper] = STATE(169),
    [sym_short_ref] = STATE(169),
    [sym_short_copy] = STATE(169),
    [sym_short_fn_ref] = STATE(169),
    [sym_short_quote] = STATE(169),
    [sym_bool_literal] = STATE(169),
    [sym_str_literal] = STATE(169),
    [sym_char_literal] = STATE(169),
    [sym_pattern_literal] = STATE(169),
    [sym_array_expression] = STATE(169),
    [sym_map_expression] = STATE(169),
    [sym_symbol] = STATE(169),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(307),
    [sym_float_literal] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [sym_identifier] = ACTIONS(307),
  },
  [30] = {
    [sym__s_expr] = STATE(168),
    [sym__expr] = STATE(168),
    [sym__literals] = STATE(168),
    [sym__short_helper] = STATE(168),
    [sym_short_ref] = STATE(168),
    [sym_short_copy] = STATE(168),
    [sym_short_fn_ref] = STATE(168),
    [sym_short_quote] = STATE(168),
    [sym_bool_literal] = STATE(168),
    [sym_str_literal] = STATE(168),
    [sym_char_literal] = STATE(168),
    [sym_pattern_literal] = STATE(168),
    [sym_array_expression] = STATE(168),
    [sym_map_expression] = STATE(168),
    [sym_symbol] = STATE(168),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(321),
    [sym_float_literal] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [sym_identifier] = ACTIONS(321),
  },
  [31] = {
    [sym__s_expr] = STATE(52),
    [sym__expr] = STATE(52),
    [sym__literals] = STATE(52),
    [sym__short_helper] = STATE(52),
    [sym_short_ref] = STATE(52),
    [sym_short_copy] = STATE(52),
    [sym_short_fn_ref] = STATE(52),
    [sym_short_quote] = STATE(52),
    [sym_bool_literal] = STATE(52),
    [sym_str_literal] = STATE(52),
    [sym_char_literal] = STATE(52),
    [sym_pattern_literal] = STATE(52),
    [sym_array_expression] = STATE(52),
    [sym_map_expression] = STATE(52),
    [sym_symbol] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [sym_identifier] = ACTIONS(327),
  },
  [32] = {
    [sym__s_expr] = STATE(24),
    [sym__expr] = STATE(24),
    [sym__literals] = STATE(24),
    [sym__short_helper] = STATE(24),
    [sym_short_ref] = STATE(24),
    [sym_short_copy] = STATE(24),
    [sym_short_fn_ref] = STATE(24),
    [sym_short_quote] = STATE(24),
    [sym_bool_literal] = STATE(24),
    [sym_str_literal] = STATE(24),
    [sym_char_literal] = STATE(24),
    [sym_pattern_literal] = STATE(24),
    [sym_array_expression] = STATE(24),
    [sym_map_expression] = STATE(24),
    [sym_symbol] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(341),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(341),
  },
  [33] = {
    [sym__s_expr] = STATE(170),
    [sym__expr] = STATE(170),
    [sym__literals] = STATE(170),
    [sym__short_helper] = STATE(170),
    [sym_short_ref] = STATE(170),
    [sym_short_copy] = STATE(170),
    [sym_short_fn_ref] = STATE(170),
    [sym_short_quote] = STATE(170),
    [sym_bool_literal] = STATE(170),
    [sym_str_literal] = STATE(170),
    [sym_char_literal] = STATE(170),
    [sym_pattern_literal] = STATE(170),
    [sym_array_expression] = STATE(170),
    [sym_map_expression] = STATE(170),
    [sym_symbol] = STATE(170),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [sym_identifier] = ACTIONS(343),
  },
  [34] = {
    [sym__s_expr] = STATE(234),
    [sym__expr] = STATE(234),
    [sym__literals] = STATE(234),
    [sym__short_helper] = STATE(234),
    [sym_short_ref] = STATE(234),
    [sym_short_copy] = STATE(234),
    [sym_short_fn_ref] = STATE(234),
    [sym_short_quote] = STATE(234),
    [sym_bool_literal] = STATE(234),
    [sym_str_literal] = STATE(234),
    [sym_char_literal] = STATE(234),
    [sym_pattern_literal] = STATE(234),
    [sym_array_expression] = STATE(234),
    [sym_map_expression] = STATE(234),
    [sym_symbol] = STATE(234),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(345),
    [sym_float_literal] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(345),
  },
  [35] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_short_quote] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [sym_symbol] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(347),
    [sym_float_literal] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(347),
  },
  [36] = {
    [sym__s_expr] = STATE(171),
    [sym__expr] = STATE(171),
    [sym__literals] = STATE(171),
    [sym__short_helper] = STATE(171),
    [sym_short_ref] = STATE(171),
    [sym_short_copy] = STATE(171),
    [sym_short_fn_ref] = STATE(171),
    [sym_short_quote] = STATE(171),
    [sym_bool_literal] = STATE(171),
    [sym_str_literal] = STATE(171),
    [sym_char_literal] = STATE(171),
    [sym_pattern_literal] = STATE(171),
    [sym_array_expression] = STATE(171),
    [sym_map_expression] = STATE(171),
    [sym_symbol] = STATE(171),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(349),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [sym_identifier] = ACTIONS(349),
  },
  [37] = {
    [sym__s_expr] = STATE(219),
    [sym__expr] = STATE(219),
    [sym__literals] = STATE(219),
    [sym__short_helper] = STATE(219),
    [sym_short_ref] = STATE(219),
    [sym_short_copy] = STATE(219),
    [sym_short_fn_ref] = STATE(219),
    [sym_short_quote] = STATE(219),
    [sym_bool_literal] = STATE(219),
    [sym_str_literal] = STATE(219),
    [sym_char_literal] = STATE(219),
    [sym_pattern_literal] = STATE(219),
    [sym_array_expression] = STATE(219),
    [sym_map_expression] = STATE(219),
    [sym_symbol] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(351),
    [sym_float_literal] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(351),
  },
  [38] = {
    [sym__s_expr] = STATE(206),
    [sym__expr] = STATE(206),
    [sym__literals] = STATE(206),
    [sym__short_helper] = STATE(206),
    [sym_short_ref] = STATE(206),
    [sym_short_copy] = STATE(206),
    [sym_short_fn_ref] = STATE(206),
    [sym_short_quote] = STATE(206),
    [sym_bool_literal] = STATE(206),
    [sym_str_literal] = STATE(206),
    [sym_char_literal] = STATE(206),
    [sym_pattern_literal] = STATE(206),
    [sym_array_expression] = STATE(206),
    [sym_map_expression] = STATE(206),
    [sym_symbol] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(353),
    [sym_float_literal] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(353),
  },
  [39] = {
    [sym__s_expr] = STATE(205),
    [sym__expr] = STATE(205),
    [sym__literals] = STATE(205),
    [sym__short_helper] = STATE(205),
    [sym_short_ref] = STATE(205),
    [sym_short_copy] = STATE(205),
    [sym_short_fn_ref] = STATE(205),
    [sym_short_quote] = STATE(205),
    [sym_bool_literal] = STATE(205),
    [sym_str_literal] = STATE(205),
    [sym_char_literal] = STATE(205),
    [sym_pattern_literal] = STATE(205),
    [sym_array_expression] = STATE(205),
    [sym_map_expression] = STATE(205),
    [sym_symbol] = STATE(205),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(355),
    [sym_float_literal] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(355),
  },
  [40] = {
    [sym__s_expr] = STATE(211),
    [sym__expr] = STATE(211),
    [sym__literals] = STATE(211),
    [sym__short_helper] = STATE(211),
    [sym_short_ref] = STATE(211),
    [sym_short_copy] = STATE(211),
    [sym_short_fn_ref] = STATE(211),
    [sym_short_quote] = STATE(211),
    [sym_bool_literal] = STATE(211),
    [sym_str_literal] = STATE(211),
    [sym_char_literal] = STATE(211),
    [sym_pattern_literal] = STATE(211),
    [sym_array_expression] = STATE(211),
    [sym_map_expression] = STATE(211),
    [sym_symbol] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(357),
    [sym_float_literal] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(357),
  },
  [41] = {
    [sym__s_expr] = STATE(188),
    [sym__expr] = STATE(188),
    [sym__literals] = STATE(188),
    [sym__short_helper] = STATE(188),
    [sym_short_ref] = STATE(188),
    [sym_short_copy] = STATE(188),
    [sym_short_fn_ref] = STATE(188),
    [sym_short_quote] = STATE(188),
    [sym_bool_literal] = STATE(188),
    [sym_str_literal] = STATE(188),
    [sym_char_literal] = STATE(188),
    [sym_pattern_literal] = STATE(188),
    [sym_array_expression] = STATE(188),
    [sym_map_expression] = STATE(188),
    [sym_symbol] = STATE(188),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [sym_integer_literal] = ACTIONS(359),
    [sym_float_literal] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [sym_identifier] = ACTIONS(359),
  },
  [42] = {
    [sym__s_expr] = STATE(56),
    [sym__expr] = STATE(56),
    [sym__literals] = STATE(56),
    [sym__short_helper] = STATE(56),
    [sym_short_ref] = STATE(56),
    [sym_short_copy] = STATE(56),
    [sym_short_fn_ref] = STATE(56),
    [sym_short_quote] = STATE(56),
    [sym_bool_literal] = STATE(56),
    [sym_str_literal] = STATE(56),
    [sym_char_literal] = STATE(56),
    [sym_pattern_literal] = STATE(56),
    [sym_array_expression] = STATE(56),
    [sym_map_expression] = STATE(56),
    [sym_symbol] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(361),
    [sym_float_literal] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [sym_identifier] = ACTIONS(361),
  },
  [43] = {
    [sym__s_expr] = STATE(55),
    [sym__expr] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__short_helper] = STATE(55),
    [sym_short_ref] = STATE(55),
    [sym_short_copy] = STATE(55),
    [sym_short_fn_ref] = STATE(55),
    [sym_short_quote] = STATE(55),
    [sym_bool_literal] = STATE(55),
    [sym_str_literal] = STATE(55),
    [sym_char_literal] = STATE(55),
    [sym_pattern_literal] = STATE(55),
    [sym_array_expression] = STATE(55),
    [sym_map_expression] = STATE(55),
    [sym_symbol] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [sym_identifier] = ACTIONS(363),
  },
  [44] = {
    [sym__s_expr] = STATE(54),
    [sym__expr] = STATE(54),
    [sym__literals] = STATE(54),
    [sym__short_helper] = STATE(54),
    [sym_short_ref] = STATE(54),
    [sym_short_copy] = STATE(54),
    [sym_short_fn_ref] = STATE(54),
    [sym_short_quote] = STATE(54),
    [sym_bool_literal] = STATE(54),
    [sym_str_literal] = STATE(54),
    [sym_char_literal] = STATE(54),
    [sym_pattern_literal] = STATE(54),
    [sym_array_expression] = STATE(54),
    [sym_map_expression] = STATE(54),
    [sym_symbol] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(365),
    [sym_float_literal] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [sym_identifier] = ACTIONS(365),
  },
  [45] = {
    [sym__s_expr] = STATE(220),
    [sym__expr] = STATE(220),
    [sym__literals] = STATE(220),
    [sym__short_helper] = STATE(220),
    [sym_short_ref] = STATE(220),
    [sym_short_copy] = STATE(220),
    [sym_short_fn_ref] = STATE(220),
    [sym_short_quote] = STATE(220),
    [sym_bool_literal] = STATE(220),
    [sym_str_literal] = STATE(220),
    [sym_char_literal] = STATE(220),
    [sym_pattern_literal] = STATE(220),
    [sym_array_expression] = STATE(220),
    [sym_map_expression] = STATE(220),
    [sym_symbol] = STATE(220),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_integer_literal] = ACTIONS(367),
    [sym_float_literal] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(367),
  },
  [46] = {
    [sym__short_helper] = STATE(198),
    [sym_type] = STATE(198),
    [sym_complex_type] = STATE(127),
    [sym_short_ref] = STATE(198),
    [sym_short_copy] = STATE(198),
    [sym_short_fn_ref] = STATE(198),
    [sym_short_quote] = STATE(198),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_Bool] = ACTIONS(371),
    [anon_sym_Char] = ACTIONS(371),
    [anon_sym_Int] = ACTIONS(371),
    [anon_sym_Long] = ACTIONS(371),
    [anon_sym_Float] = ACTIONS(371),
    [anon_sym_Double] = ACTIONS(371),
    [anon_sym_Vector2] = ACTIONS(371),
    [anon_sym_Vector3] = ACTIONS(371),
    [anon_sym_VectorN] = ACTIONS(371),
    [anon_sym_String] = ACTIONS(371),
    [anon_sym_Pattern] = ACTIONS(371),
    [anon_sym_Array] = ACTIONS(371),
    [anon_sym_Map] = ACTIONS(371),
    [anon_sym_Maybe] = ACTIONS(371),
    [anon_sym_Result] = ACTIONS(371),
    [anon_sym_Id] = ACTIONS(371),
    [anon_sym_Ptr] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(373),
  },
  [47] = {
    [sym__short_helper] = STATE(17),
    [sym_type] = STATE(17),
    [sym_complex_type] = STATE(127),
    [sym_short_ref] = STATE(17),
    [sym_short_copy] = STATE(17),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_Bool] = ACTIONS(371),
    [anon_sym_Char] = ACTIONS(371),
    [anon_sym_Int] = ACTIONS(371),
    [anon_sym_Long] = ACTIONS(371),
    [anon_sym_Float] = ACTIONS(371),
    [anon_sym_Double] = ACTIONS(371),
    [anon_sym_Vector2] = ACTIONS(371),
    [anon_sym_Vector3] = ACTIONS(371),
    [anon_sym_VectorN] = ACTIONS(371),
    [anon_sym_String] = ACTIONS(371),
    [anon_sym_Pattern] = ACTIONS(371),
    [anon_sym_Array] = ACTIONS(371),
    [anon_sym_Map] = ACTIONS(371),
    [anon_sym_Maybe] = ACTIONS(371),
    [anon_sym_Result] = ACTIONS(371),
    [anon_sym_Id] = ACTIONS(371),
    [anon_sym_Ptr] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(373),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_Bool] = ACTIONS(379),
    [anon_sym_Char] = ACTIONS(379),
    [anon_sym_Int] = ACTIONS(379),
    [anon_sym_Long] = ACTIONS(379),
    [anon_sym_Float] = ACTIONS(379),
    [anon_sym_Double] = ACTIONS(379),
    [anon_sym_Vector2] = ACTIONS(379),
    [anon_sym_Vector3] = ACTIONS(379),
    [anon_sym_VectorN] = ACTIONS(379),
    [anon_sym_String] = ACTIONS(379),
    [anon_sym_Pattern] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(379),
    [anon_sym_Map] = ACTIONS(379),
    [anon_sym_Maybe] = ACTIONS(379),
    [anon_sym_Result] = ACTIONS(379),
    [anon_sym_Id] = ACTIONS(379),
    [anon_sym_Ptr] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_RBRACK2] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_Bool] = ACTIONS(383),
    [anon_sym_Char] = ACTIONS(383),
    [anon_sym_Int] = ACTIONS(383),
    [anon_sym_Long] = ACTIONS(383),
    [anon_sym_Float] = ACTIONS(383),
    [anon_sym_Double] = ACTIONS(383),
    [anon_sym_Vector2] = ACTIONS(383),
    [anon_sym_Vector3] = ACTIONS(383),
    [anon_sym_VectorN] = ACTIONS(383),
    [anon_sym_String] = ACTIONS(383),
    [anon_sym_Pattern] = ACTIONS(383),
    [anon_sym_Array] = ACTIONS(383),
    [anon_sym_Map] = ACTIONS(383),
    [anon_sym_Maybe] = ACTIONS(383),
    [anon_sym_Result] = ACTIONS(383),
    [anon_sym_Id] = ACTIONS(383),
    [anon_sym_Ptr] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RBRACK2] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_Bool] = ACTIONS(387),
    [anon_sym_Char] = ACTIONS(387),
    [anon_sym_Int] = ACTIONS(387),
    [anon_sym_Long] = ACTIONS(387),
    [anon_sym_Float] = ACTIONS(387),
    [anon_sym_Double] = ACTIONS(387),
    [anon_sym_Vector2] = ACTIONS(387),
    [anon_sym_Vector3] = ACTIONS(387),
    [anon_sym_VectorN] = ACTIONS(387),
    [anon_sym_String] = ACTIONS(387),
    [anon_sym_Pattern] = ACTIONS(387),
    [anon_sym_Array] = ACTIONS(387),
    [anon_sym_Map] = ACTIONS(387),
    [anon_sym_Maybe] = ACTIONS(387),
    [anon_sym_Result] = ACTIONS(387),
    [anon_sym_Id] = ACTIONS(387),
    [anon_sym_Ptr] = ACTIONS(387),
    [anon_sym_RBRACK2] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_Bool] = ACTIONS(391),
    [anon_sym_Char] = ACTIONS(391),
    [anon_sym_Int] = ACTIONS(391),
    [anon_sym_Long] = ACTIONS(391),
    [anon_sym_Float] = ACTIONS(391),
    [anon_sym_Double] = ACTIONS(391),
    [anon_sym_Vector2] = ACTIONS(391),
    [anon_sym_Vector3] = ACTIONS(391),
    [anon_sym_VectorN] = ACTIONS(391),
    [anon_sym_String] = ACTIONS(391),
    [anon_sym_Pattern] = ACTIONS(391),
    [anon_sym_Array] = ACTIONS(391),
    [anon_sym_Map] = ACTIONS(391),
    [anon_sym_Maybe] = ACTIONS(391),
    [anon_sym_Result] = ACTIONS(391),
    [anon_sym_Id] = ACTIONS(391),
    [anon_sym_Ptr] = ACTIONS(391),
    [anon_sym_RBRACK2] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_Bool] = ACTIONS(395),
    [anon_sym_Char] = ACTIONS(395),
    [anon_sym_Int] = ACTIONS(395),
    [anon_sym_Long] = ACTIONS(395),
    [anon_sym_Float] = ACTIONS(395),
    [anon_sym_Double] = ACTIONS(395),
    [anon_sym_Vector2] = ACTIONS(395),
    [anon_sym_Vector3] = ACTIONS(395),
    [anon_sym_VectorN] = ACTIONS(395),
    [anon_sym_String] = ACTIONS(395),
    [anon_sym_Pattern] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(395),
    [anon_sym_Map] = ACTIONS(395),
    [anon_sym_Maybe] = ACTIONS(395),
    [anon_sym_Result] = ACTIONS(395),
    [anon_sym_Id] = ACTIONS(395),
    [anon_sym_Ptr] = ACTIONS(395),
    [anon_sym_RBRACK2] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_Bool] = ACTIONS(399),
    [anon_sym_Char] = ACTIONS(399),
    [anon_sym_Int] = ACTIONS(399),
    [anon_sym_Long] = ACTIONS(399),
    [anon_sym_Float] = ACTIONS(399),
    [anon_sym_Double] = ACTIONS(399),
    [anon_sym_Vector2] = ACTIONS(399),
    [anon_sym_Vector3] = ACTIONS(399),
    [anon_sym_VectorN] = ACTIONS(399),
    [anon_sym_String] = ACTIONS(399),
    [anon_sym_Pattern] = ACTIONS(399),
    [anon_sym_Array] = ACTIONS(399),
    [anon_sym_Map] = ACTIONS(399),
    [anon_sym_Maybe] = ACTIONS(399),
    [anon_sym_Result] = ACTIONS(399),
    [anon_sym_Id] = ACTIONS(399),
    [anon_sym_Ptr] = ACTIONS(399),
    [anon_sym_RBRACK2] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_Bool] = ACTIONS(403),
    [anon_sym_Char] = ACTIONS(403),
    [anon_sym_Int] = ACTIONS(403),
    [anon_sym_Long] = ACTIONS(403),
    [anon_sym_Float] = ACTIONS(403),
    [anon_sym_Double] = ACTIONS(403),
    [anon_sym_Vector2] = ACTIONS(403),
    [anon_sym_Vector3] = ACTIONS(403),
    [anon_sym_VectorN] = ACTIONS(403),
    [anon_sym_String] = ACTIONS(403),
    [anon_sym_Pattern] = ACTIONS(403),
    [anon_sym_Array] = ACTIONS(403),
    [anon_sym_Map] = ACTIONS(403),
    [anon_sym_Maybe] = ACTIONS(403),
    [anon_sym_Result] = ACTIONS(403),
    [anon_sym_Id] = ACTIONS(403),
    [anon_sym_Ptr] = ACTIONS(403),
    [anon_sym_RBRACK2] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_Bool] = ACTIONS(407),
    [anon_sym_Char] = ACTIONS(407),
    [anon_sym_Int] = ACTIONS(407),
    [anon_sym_Long] = ACTIONS(407),
    [anon_sym_Float] = ACTIONS(407),
    [anon_sym_Double] = ACTIONS(407),
    [anon_sym_Vector2] = ACTIONS(407),
    [anon_sym_Vector3] = ACTIONS(407),
    [anon_sym_VectorN] = ACTIONS(407),
    [anon_sym_String] = ACTIONS(407),
    [anon_sym_Pattern] = ACTIONS(407),
    [anon_sym_Array] = ACTIONS(407),
    [anon_sym_Map] = ACTIONS(407),
    [anon_sym_Maybe] = ACTIONS(407),
    [anon_sym_Result] = ACTIONS(407),
    [anon_sym_Id] = ACTIONS(407),
    [anon_sym_Ptr] = ACTIONS(407),
    [anon_sym_RBRACK2] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [sym_identifier] = ACTIONS(407),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_Bool] = ACTIONS(411),
    [anon_sym_Char] = ACTIONS(411),
    [anon_sym_Int] = ACTIONS(411),
    [anon_sym_Long] = ACTIONS(411),
    [anon_sym_Float] = ACTIONS(411),
    [anon_sym_Double] = ACTIONS(411),
    [anon_sym_Vector2] = ACTIONS(411),
    [anon_sym_Vector3] = ACTIONS(411),
    [anon_sym_VectorN] = ACTIONS(411),
    [anon_sym_String] = ACTIONS(411),
    [anon_sym_Pattern] = ACTIONS(411),
    [anon_sym_Array] = ACTIONS(411),
    [anon_sym_Map] = ACTIONS(411),
    [anon_sym_Maybe] = ACTIONS(411),
    [anon_sym_Result] = ACTIONS(411),
    [anon_sym_Id] = ACTIONS(411),
    [anon_sym_Ptr] = ACTIONS(411),
    [anon_sym_RBRACK2] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_Bool] = ACTIONS(415),
    [anon_sym_Char] = ACTIONS(415),
    [anon_sym_Int] = ACTIONS(415),
    [anon_sym_Long] = ACTIONS(415),
    [anon_sym_Float] = ACTIONS(415),
    [anon_sym_Double] = ACTIONS(415),
    [anon_sym_Vector2] = ACTIONS(415),
    [anon_sym_Vector3] = ACTIONS(415),
    [anon_sym_VectorN] = ACTIONS(415),
    [anon_sym_String] = ACTIONS(415),
    [anon_sym_Pattern] = ACTIONS(415),
    [anon_sym_Array] = ACTIONS(415),
    [anon_sym_Map] = ACTIONS(415),
    [anon_sym_Maybe] = ACTIONS(415),
    [anon_sym_Result] = ACTIONS(415),
    [anon_sym_Id] = ACTIONS(415),
    [anon_sym_Ptr] = ACTIONS(415),
    [anon_sym_RBRACK2] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_Bool] = ACTIONS(419),
    [anon_sym_Char] = ACTIONS(419),
    [anon_sym_Int] = ACTIONS(419),
    [anon_sym_Long] = ACTIONS(419),
    [anon_sym_Float] = ACTIONS(419),
    [anon_sym_Double] = ACTIONS(419),
    [anon_sym_Vector2] = ACTIONS(419),
    [anon_sym_Vector3] = ACTIONS(419),
    [anon_sym_VectorN] = ACTIONS(419),
    [anon_sym_String] = ACTIONS(419),
    [anon_sym_Pattern] = ACTIONS(419),
    [anon_sym_Array] = ACTIONS(419),
    [anon_sym_Map] = ACTIONS(419),
    [anon_sym_Maybe] = ACTIONS(419),
    [anon_sym_Result] = ACTIONS(419),
    [anon_sym_Id] = ACTIONS(419),
    [anon_sym_Ptr] = ACTIONS(419),
    [anon_sym_RBRACK2] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_Bool] = ACTIONS(423),
    [anon_sym_Char] = ACTIONS(423),
    [anon_sym_Int] = ACTIONS(423),
    [anon_sym_Long] = ACTIONS(423),
    [anon_sym_Float] = ACTIONS(423),
    [anon_sym_Double] = ACTIONS(423),
    [anon_sym_Vector2] = ACTIONS(423),
    [anon_sym_Vector3] = ACTIONS(423),
    [anon_sym_VectorN] = ACTIONS(423),
    [anon_sym_String] = ACTIONS(423),
    [anon_sym_Pattern] = ACTIONS(423),
    [anon_sym_Array] = ACTIONS(423),
    [anon_sym_Map] = ACTIONS(423),
    [anon_sym_Maybe] = ACTIONS(423),
    [anon_sym_Result] = ACTIONS(423),
    [anon_sym_Id] = ACTIONS(423),
    [anon_sym_Ptr] = ACTIONS(423),
    [anon_sym_RBRACK2] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [sym_identifier] = ACTIONS(423),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_Bool] = ACTIONS(427),
    [anon_sym_Char] = ACTIONS(427),
    [anon_sym_Int] = ACTIONS(427),
    [anon_sym_Long] = ACTIONS(427),
    [anon_sym_Float] = ACTIONS(427),
    [anon_sym_Double] = ACTIONS(427),
    [anon_sym_Vector2] = ACTIONS(427),
    [anon_sym_Vector3] = ACTIONS(427),
    [anon_sym_VectorN] = ACTIONS(427),
    [anon_sym_String] = ACTIONS(427),
    [anon_sym_Pattern] = ACTIONS(427),
    [anon_sym_Array] = ACTIONS(427),
    [anon_sym_Map] = ACTIONS(427),
    [anon_sym_Maybe] = ACTIONS(427),
    [anon_sym_Result] = ACTIONS(427),
    [anon_sym_Id] = ACTIONS(427),
    [anon_sym_Ptr] = ACTIONS(427),
    [anon_sym_RBRACK2] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [sym_identifier] = ACTIONS(427),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_Bool] = ACTIONS(431),
    [anon_sym_Char] = ACTIONS(431),
    [anon_sym_Int] = ACTIONS(431),
    [anon_sym_Long] = ACTIONS(431),
    [anon_sym_Float] = ACTIONS(431),
    [anon_sym_Double] = ACTIONS(431),
    [anon_sym_Vector2] = ACTIONS(431),
    [anon_sym_Vector3] = ACTIONS(431),
    [anon_sym_VectorN] = ACTIONS(431),
    [anon_sym_String] = ACTIONS(431),
    [anon_sym_Pattern] = ACTIONS(431),
    [anon_sym_Array] = ACTIONS(431),
    [anon_sym_Map] = ACTIONS(431),
    [anon_sym_Maybe] = ACTIONS(431),
    [anon_sym_Result] = ACTIONS(431),
    [anon_sym_Id] = ACTIONS(431),
    [anon_sym_Ptr] = ACTIONS(431),
    [anon_sym_RBRACK2] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [sym_identifier] = ACTIONS(431),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_Bool] = ACTIONS(435),
    [anon_sym_Char] = ACTIONS(435),
    [anon_sym_Int] = ACTIONS(435),
    [anon_sym_Long] = ACTIONS(435),
    [anon_sym_Float] = ACTIONS(435),
    [anon_sym_Double] = ACTIONS(435),
    [anon_sym_Vector2] = ACTIONS(435),
    [anon_sym_Vector3] = ACTIONS(435),
    [anon_sym_VectorN] = ACTIONS(435),
    [anon_sym_String] = ACTIONS(435),
    [anon_sym_Pattern] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(435),
    [anon_sym_Map] = ACTIONS(435),
    [anon_sym_Maybe] = ACTIONS(435),
    [anon_sym_Result] = ACTIONS(435),
    [anon_sym_Id] = ACTIONS(435),
    [anon_sym_Ptr] = ACTIONS(435),
    [anon_sym_RBRACK2] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_Bool] = ACTIONS(439),
    [anon_sym_Char] = ACTIONS(439),
    [anon_sym_Int] = ACTIONS(439),
    [anon_sym_Long] = ACTIONS(439),
    [anon_sym_Float] = ACTIONS(439),
    [anon_sym_Double] = ACTIONS(439),
    [anon_sym_Vector2] = ACTIONS(439),
    [anon_sym_Vector3] = ACTIONS(439),
    [anon_sym_VectorN] = ACTIONS(439),
    [anon_sym_String] = ACTIONS(439),
    [anon_sym_Pattern] = ACTIONS(439),
    [anon_sym_Array] = ACTIONS(439),
    [anon_sym_Map] = ACTIONS(439),
    [anon_sym_Maybe] = ACTIONS(439),
    [anon_sym_Result] = ACTIONS(439),
    [anon_sym_Id] = ACTIONS(439),
    [anon_sym_Ptr] = ACTIONS(439),
    [anon_sym_RBRACK2] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_identifier] = ACTIONS(439),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_Bool] = ACTIONS(443),
    [anon_sym_Char] = ACTIONS(443),
    [anon_sym_Int] = ACTIONS(443),
    [anon_sym_Long] = ACTIONS(443),
    [anon_sym_Float] = ACTIONS(443),
    [anon_sym_Double] = ACTIONS(443),
    [anon_sym_Vector2] = ACTIONS(443),
    [anon_sym_Vector3] = ACTIONS(443),
    [anon_sym_VectorN] = ACTIONS(443),
    [anon_sym_String] = ACTIONS(443),
    [anon_sym_Pattern] = ACTIONS(443),
    [anon_sym_Array] = ACTIONS(443),
    [anon_sym_Map] = ACTIONS(443),
    [anon_sym_Maybe] = ACTIONS(443),
    [anon_sym_Result] = ACTIONS(443),
    [anon_sym_Id] = ACTIONS(443),
    [anon_sym_Ptr] = ACTIONS(443),
    [anon_sym_RBRACK2] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [sym_identifier] = ACTIONS(443),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_Bool] = ACTIONS(447),
    [anon_sym_Char] = ACTIONS(447),
    [anon_sym_Int] = ACTIONS(447),
    [anon_sym_Long] = ACTIONS(447),
    [anon_sym_Float] = ACTIONS(447),
    [anon_sym_Double] = ACTIONS(447),
    [anon_sym_Vector2] = ACTIONS(447),
    [anon_sym_Vector3] = ACTIONS(447),
    [anon_sym_VectorN] = ACTIONS(447),
    [anon_sym_String] = ACTIONS(447),
    [anon_sym_Pattern] = ACTIONS(447),
    [anon_sym_Array] = ACTIONS(447),
    [anon_sym_Map] = ACTIONS(447),
    [anon_sym_Maybe] = ACTIONS(447),
    [anon_sym_Result] = ACTIONS(447),
    [anon_sym_Id] = ACTIONS(447),
    [anon_sym_Ptr] = ACTIONS(447),
    [anon_sym_RBRACK2] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_Bool] = ACTIONS(451),
    [anon_sym_Char] = ACTIONS(451),
    [anon_sym_Int] = ACTIONS(451),
    [anon_sym_Long] = ACTIONS(451),
    [anon_sym_Float] = ACTIONS(451),
    [anon_sym_Double] = ACTIONS(451),
    [anon_sym_Vector2] = ACTIONS(451),
    [anon_sym_Vector3] = ACTIONS(451),
    [anon_sym_VectorN] = ACTIONS(451),
    [anon_sym_String] = ACTIONS(451),
    [anon_sym_Pattern] = ACTIONS(451),
    [anon_sym_Array] = ACTIONS(451),
    [anon_sym_Map] = ACTIONS(451),
    [anon_sym_Maybe] = ACTIONS(451),
    [anon_sym_Result] = ACTIONS(451),
    [anon_sym_Id] = ACTIONS(451),
    [anon_sym_Ptr] = ACTIONS(451),
    [anon_sym_RBRACK2] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_Bool] = ACTIONS(455),
    [anon_sym_Char] = ACTIONS(455),
    [anon_sym_Int] = ACTIONS(455),
    [anon_sym_Long] = ACTIONS(455),
    [anon_sym_Float] = ACTIONS(455),
    [anon_sym_Double] = ACTIONS(455),
    [anon_sym_Vector2] = ACTIONS(455),
    [anon_sym_Vector3] = ACTIONS(455),
    [anon_sym_VectorN] = ACTIONS(455),
    [anon_sym_String] = ACTIONS(455),
    [anon_sym_Pattern] = ACTIONS(455),
    [anon_sym_Array] = ACTIONS(455),
    [anon_sym_Map] = ACTIONS(455),
    [anon_sym_Maybe] = ACTIONS(455),
    [anon_sym_Result] = ACTIONS(455),
    [anon_sym_Id] = ACTIONS(455),
    [anon_sym_Ptr] = ACTIONS(455),
    [anon_sym_RBRACK2] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_Bool] = ACTIONS(459),
    [anon_sym_Char] = ACTIONS(459),
    [anon_sym_Int] = ACTIONS(459),
    [anon_sym_Long] = ACTIONS(459),
    [anon_sym_Float] = ACTIONS(459),
    [anon_sym_Double] = ACTIONS(459),
    [anon_sym_Vector2] = ACTIONS(459),
    [anon_sym_Vector3] = ACTIONS(459),
    [anon_sym_VectorN] = ACTIONS(459),
    [anon_sym_String] = ACTIONS(459),
    [anon_sym_Pattern] = ACTIONS(459),
    [anon_sym_Array] = ACTIONS(459),
    [anon_sym_Map] = ACTIONS(459),
    [anon_sym_Maybe] = ACTIONS(459),
    [anon_sym_Result] = ACTIONS(459),
    [anon_sym_Id] = ACTIONS(459),
    [anon_sym_Ptr] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_identifier] = ACTIONS(459),
  },
  [69] = {
    [sym_interface_fn] = STATE(197),
    [aux_sym_complex_type_repeat1] = STATE(83),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [anon_sym_Fn] = ACTIONS(465),
    [anon_sym_] = ACTIONS(465),
    [sym_identifier] = ACTIONS(467),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [sym_identifier] = ACTIONS(471),
  },
  [71] = {
    [sym_complex_type] = STATE(76),
    [aux_sym_fields_repeat1] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [anon_sym_RBRACK2] = ACTIONS(475),
    [sym_identifier] = ACTIONS(477),
  },
  [72] = {
    [sym_complex_type] = STATE(76),
    [aux_sym_fields_repeat1] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [anon_sym_RBRACK2] = ACTIONS(479),
    [sym_identifier] = ACTIONS(477),
  },
  [73] = {
    [sym_complex_type] = STATE(76),
    [aux_sym_fields_repeat1] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_Bool] = ACTIONS(484),
    [anon_sym_Char] = ACTIONS(484),
    [anon_sym_Int] = ACTIONS(484),
    [anon_sym_Long] = ACTIONS(484),
    [anon_sym_Float] = ACTIONS(484),
    [anon_sym_Double] = ACTIONS(484),
    [anon_sym_Vector2] = ACTIONS(484),
    [anon_sym_Vector3] = ACTIONS(484),
    [anon_sym_VectorN] = ACTIONS(484),
    [anon_sym_String] = ACTIONS(484),
    [anon_sym_Pattern] = ACTIONS(484),
    [anon_sym_Array] = ACTIONS(484),
    [anon_sym_Map] = ACTIONS(484),
    [anon_sym_Maybe] = ACTIONS(484),
    [anon_sym_Result] = ACTIONS(484),
    [anon_sym_Id] = ACTIONS(484),
    [anon_sym_Ptr] = ACTIONS(484),
    [anon_sym_RBRACK2] = ACTIONS(487),
    [sym_identifier] = ACTIONS(489),
  },
  [74] = {
    [sym_complex_type] = STATE(76),
    [aux_sym_fields_repeat1] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [anon_sym_RBRACK2] = ACTIONS(492),
    [sym_identifier] = ACTIONS(477),
  },
  [75] = {
    [sym_complex_type] = STATE(76),
    [aux_sym_fields_repeat1] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_Bool] = ACTIONS(473),
    [anon_sym_Char] = ACTIONS(473),
    [anon_sym_Int] = ACTIONS(473),
    [anon_sym_Long] = ACTIONS(473),
    [anon_sym_Float] = ACTIONS(473),
    [anon_sym_Double] = ACTIONS(473),
    [anon_sym_Vector2] = ACTIONS(473),
    [anon_sym_Vector3] = ACTIONS(473),
    [anon_sym_VectorN] = ACTIONS(473),
    [anon_sym_String] = ACTIONS(473),
    [anon_sym_Pattern] = ACTIONS(473),
    [anon_sym_Array] = ACTIONS(473),
    [anon_sym_Map] = ACTIONS(473),
    [anon_sym_Maybe] = ACTIONS(473),
    [anon_sym_Result] = ACTIONS(473),
    [anon_sym_Id] = ACTIONS(473),
    [anon_sym_Ptr] = ACTIONS(473),
    [anon_sym_RBRACK2] = ACTIONS(494),
    [sym_identifier] = ACTIONS(477),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(496),
    [anon_sym_Bool] = ACTIONS(498),
    [anon_sym_Char] = ACTIONS(498),
    [anon_sym_Int] = ACTIONS(498),
    [anon_sym_Long] = ACTIONS(498),
    [anon_sym_Float] = ACTIONS(498),
    [anon_sym_Double] = ACTIONS(498),
    [anon_sym_Vector2] = ACTIONS(498),
    [anon_sym_Vector3] = ACTIONS(498),
    [anon_sym_VectorN] = ACTIONS(498),
    [anon_sym_String] = ACTIONS(498),
    [anon_sym_Pattern] = ACTIONS(498),
    [anon_sym_Array] = ACTIONS(498),
    [anon_sym_Map] = ACTIONS(498),
    [anon_sym_Maybe] = ACTIONS(498),
    [anon_sym_Result] = ACTIONS(498),
    [anon_sym_Id] = ACTIONS(498),
    [anon_sym_Ptr] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_RBRACK2] = ACTIONS(496),
    [sym_identifier] = ACTIONS(498),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_Bool] = ACTIONS(504),
    [anon_sym_Char] = ACTIONS(504),
    [anon_sym_Int] = ACTIONS(504),
    [anon_sym_Long] = ACTIONS(504),
    [anon_sym_Float] = ACTIONS(504),
    [anon_sym_Double] = ACTIONS(504),
    [anon_sym_Vector2] = ACTIONS(504),
    [anon_sym_Vector3] = ACTIONS(504),
    [anon_sym_VectorN] = ACTIONS(504),
    [anon_sym_String] = ACTIONS(504),
    [anon_sym_Pattern] = ACTIONS(504),
    [anon_sym_Array] = ACTIONS(504),
    [anon_sym_Map] = ACTIONS(504),
    [anon_sym_Maybe] = ACTIONS(504),
    [anon_sym_Result] = ACTIONS(504),
    [anon_sym_Id] = ACTIONS(504),
    [anon_sym_Ptr] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RBRACK2] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
  },
  [78] = {
    [sym_type] = STATE(39),
    [sym_complex_type] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_Bool] = ACTIONS(371),
    [anon_sym_Char] = ACTIONS(371),
    [anon_sym_Int] = ACTIONS(371),
    [anon_sym_Long] = ACTIONS(371),
    [anon_sym_Float] = ACTIONS(371),
    [anon_sym_Double] = ACTIONS(371),
    [anon_sym_Vector2] = ACTIONS(371),
    [anon_sym_Vector3] = ACTIONS(371),
    [anon_sym_VectorN] = ACTIONS(371),
    [anon_sym_String] = ACTIONS(371),
    [anon_sym_Pattern] = ACTIONS(371),
    [anon_sym_Array] = ACTIONS(371),
    [anon_sym_Map] = ACTIONS(371),
    [anon_sym_Maybe] = ACTIONS(371),
    [anon_sym_Result] = ACTIONS(371),
    [anon_sym_Id] = ACTIONS(371),
    [anon_sym_Ptr] = ACTIONS(371),
    [sym_identifier] = ACTIONS(373),
  },
  [79] = {
    [aux_sym_complex_type_repeat1] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [sym_identifier] = ACTIONS(510),
  },
  [80] = {
    [aux_sym_complex_type_repeat1] = STATE(83),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [sym_identifier] = ACTIONS(467),
  },
  [81] = {
    [aux_sym_complex_type_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [sym_identifier] = ACTIONS(514),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_Bool] = ACTIONS(518),
    [anon_sym_Char] = ACTIONS(518),
    [anon_sym_Int] = ACTIONS(518),
    [anon_sym_Long] = ACTIONS(518),
    [anon_sym_Float] = ACTIONS(518),
    [anon_sym_Double] = ACTIONS(518),
    [anon_sym_Vector2] = ACTIONS(518),
    [anon_sym_Vector3] = ACTIONS(518),
    [anon_sym_VectorN] = ACTIONS(518),
    [anon_sym_String] = ACTIONS(518),
    [anon_sym_Pattern] = ACTIONS(518),
    [anon_sym_Array] = ACTIONS(518),
    [anon_sym_Map] = ACTIONS(518),
    [anon_sym_Maybe] = ACTIONS(518),
    [anon_sym_Result] = ACTIONS(518),
    [anon_sym_Id] = ACTIONS(518),
    [anon_sym_Ptr] = ACTIONS(518),
    [anon_sym_RBRACK2] = ACTIONS(516),
    [sym_identifier] = ACTIONS(518),
  },
  [83] = {
    [aux_sym_complex_type_repeat1] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [sym_identifier] = ACTIONS(510),
  },
  [84] = {
    [aux_sym_complex_type_repeat1] = STATE(84),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_Bool] = ACTIONS(524),
    [anon_sym_Char] = ACTIONS(524),
    [anon_sym_Int] = ACTIONS(524),
    [anon_sym_Long] = ACTIONS(524),
    [anon_sym_Float] = ACTIONS(524),
    [anon_sym_Double] = ACTIONS(524),
    [anon_sym_Vector2] = ACTIONS(524),
    [anon_sym_Vector3] = ACTIONS(524),
    [anon_sym_VectorN] = ACTIONS(524),
    [anon_sym_String] = ACTIONS(524),
    [anon_sym_Pattern] = ACTIONS(524),
    [anon_sym_Array] = ACTIONS(524),
    [anon_sym_Map] = ACTIONS(524),
    [anon_sym_Maybe] = ACTIONS(524),
    [anon_sym_Result] = ACTIONS(524),
    [anon_sym_Id] = ACTIONS(524),
    [anon_sym_Ptr] = ACTIONS(524),
    [sym_identifier] = ACTIONS(527),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_Bool] = ACTIONS(530),
    [anon_sym_Char] = ACTIONS(530),
    [anon_sym_Int] = ACTIONS(530),
    [anon_sym_Long] = ACTIONS(530),
    [anon_sym_Float] = ACTIONS(530),
    [anon_sym_Double] = ACTIONS(530),
    [anon_sym_Vector2] = ACTIONS(530),
    [anon_sym_Vector3] = ACTIONS(530),
    [anon_sym_VectorN] = ACTIONS(530),
    [anon_sym_String] = ACTIONS(530),
    [anon_sym_Pattern] = ACTIONS(530),
    [anon_sym_Array] = ACTIONS(530),
    [anon_sym_Map] = ACTIONS(530),
    [anon_sym_Maybe] = ACTIONS(530),
    [anon_sym_Result] = ACTIONS(530),
    [anon_sym_Id] = ACTIONS(530),
    [anon_sym_Ptr] = ACTIONS(530),
    [anon_sym_RBRACK2] = ACTIONS(487),
    [sym_identifier] = ACTIONS(530),
  },
  [86] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(532),
    [sym_float_literal] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(534),
    [sym_identifier] = ACTIONS(532),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK2] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [sym_integer_literal] = ACTIONS(391),
    [sym_float_literal] = ACTIONS(391),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [88] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(532),
    [sym_float_literal] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(536),
    [sym_identifier] = ACTIONS(532),
  },
  [89] = {
    [sym__literals] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_array_expression_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK2] = ACTIONS(538),
    [sym_integer_literal] = ACTIONS(540),
    [sym_float_literal] = ACTIONS(540),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(540),
  },
  [90] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(532),
    [sym_float_literal] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(542),
    [sym_identifier] = ACTIONS(532),
  },
  [91] = {
    [sym__literals] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_array_expression_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK2] = ACTIONS(544),
    [sym_integer_literal] = ACTIONS(540),
    [sym_float_literal] = ACTIONS(540),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(540),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK2] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [sym_integer_literal] = ACTIONS(455),
    [sym_float_literal] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_BSLASH] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK2] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [sym_integer_literal] = ACTIONS(443),
    [sym_float_literal] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [sym_identifier] = ACTIONS(443),
  },
  [94] = {
    [sym__literals] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_array_expression_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_RBRACK2] = ACTIONS(549),
    [sym_integer_literal] = ACTIONS(551),
    [sym_float_literal] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(554),
    [anon_sym_false] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_BSLASH] = ACTIONS(560),
    [anon_sym_POUND_DQUOTE] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(566),
    [sym_identifier] = ACTIONS(551),
  },
  [95] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_array_expression_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK2] = ACTIONS(569),
    [sym_integer_literal] = ACTIONS(571),
    [sym_float_literal] = ACTIONS(571),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(571),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_integer_literal] = ACTIONS(439),
    [sym_float_literal] = ACTIONS(439),
    [anon_sym_true] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_BSLASH] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(437),
    [sym_identifier] = ACTIONS(439),
  },
  [97] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(573),
    [sym_integer_literal] = ACTIONS(576),
    [sym_float_literal] = ACTIONS(576),
    [anon_sym_true] = ACTIONS(579),
    [anon_sym_false] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [anon_sym_BSLASH] = ACTIONS(585),
    [anon_sym_POUND_DQUOTE] = ACTIONS(588),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(594),
    [sym_identifier] = ACTIONS(576),
  },
  [98] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(532),
    [sym_float_literal] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(596),
    [sym_identifier] = ACTIONS(532),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK2] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [sym_integer_literal] = ACTIONS(399),
    [sym_float_literal] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_Bool] = ACTIONS(600),
    [anon_sym_Char] = ACTIONS(600),
    [anon_sym_Int] = ACTIONS(600),
    [anon_sym_Long] = ACTIONS(600),
    [anon_sym_Float] = ACTIONS(600),
    [anon_sym_Double] = ACTIONS(600),
    [anon_sym_Vector2] = ACTIONS(600),
    [anon_sym_Vector3] = ACTIONS(600),
    [anon_sym_VectorN] = ACTIONS(600),
    [anon_sym_String] = ACTIONS(600),
    [anon_sym_Pattern] = ACTIONS(600),
    [anon_sym_Array] = ACTIONS(600),
    [anon_sym_Map] = ACTIONS(600),
    [anon_sym_Maybe] = ACTIONS(600),
    [anon_sym_Result] = ACTIONS(600),
    [anon_sym_Id] = ACTIONS(600),
    [anon_sym_Ptr] = ACTIONS(600),
    [sym_identifier] = ACTIONS(600),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK2] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [sym_integer_literal] = ACTIONS(419),
    [sym_float_literal] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK2] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [sym_integer_literal] = ACTIONS(435),
    [sym_float_literal] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(435),
    [anon_sym_false] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_BSLASH] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
  },
  [103] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(532),
    [sym_float_literal] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(602),
    [sym_identifier] = ACTIONS(532),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK2] = ACTIONS(425),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [sym_integer_literal] = ACTIONS(427),
    [sym_float_literal] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_BSLASH] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(425),
    [sym_identifier] = ACTIONS(427),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK2] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_integer_literal] = ACTIONS(451),
    [sym_float_literal] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_false] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK2] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [sym_integer_literal] = ACTIONS(423),
    [sym_float_literal] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [sym_identifier] = ACTIONS(423),
  },
  [107] = {
    [sym__literals] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [aux_sym_map_expression_repeat1] = STATE(98),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(532),
    [sym_float_literal] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_identifier] = ACTIONS(532),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK2] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
  },
  [109] = {
    [sym__literals] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_array_expression_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK2] = ACTIONS(606),
    [sym_integer_literal] = ACTIONS(540),
    [sym_float_literal] = ACTIONS(540),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(540),
  },
  [110] = {
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [aux_sym_array_expression_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK2] = ACTIONS(608),
    [sym_integer_literal] = ACTIONS(610),
    [sym_float_literal] = ACTIONS(610),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(610),
  },
  [111] = {
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK2] = ACTIONS(612),
    [sym_integer_literal] = ACTIONS(614),
    [sym_float_literal] = ACTIONS(614),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(614),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_DOT] = ACTIONS(618),
    [anon_sym_AMP] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(616),
    [anon_sym_TILDE] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [sym_integer_literal] = ACTIONS(620),
    [sym_float_literal] = ACTIONS(620),
    [anon_sym_true] = ACTIONS(620),
    [anon_sym_false] = ACTIONS(620),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_BSLASH] = ACTIONS(616),
    [anon_sym_POUND_DQUOTE] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_COLON] = ACTIONS(616),
    [sym_identifier] = ACTIONS(620),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [sym_integer_literal] = ACTIONS(411),
    [sym_float_literal] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [sym_integer_literal] = ACTIONS(407),
    [sym_float_literal] = ACTIONS(407),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [sym_identifier] = ACTIONS(407),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(622),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_AMP] = ACTIONS(622),
    [anon_sym_AT] = ACTIONS(622),
    [anon_sym_TILDE] = ACTIONS(622),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [sym_integer_literal] = ACTIONS(624),
    [sym_float_literal] = ACTIONS(624),
    [anon_sym_true] = ACTIONS(624),
    [anon_sym_false] = ACTIONS(624),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [anon_sym_BSLASH] = ACTIONS(622),
    [anon_sym_POUND_DQUOTE] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_COLON] = ACTIONS(622),
    [sym_identifier] = ACTIONS(624),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_AMP] = ACTIONS(626),
    [anon_sym_AT] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [sym_integer_literal] = ACTIONS(628),
    [sym_float_literal] = ACTIONS(628),
    [anon_sym_true] = ACTIONS(628),
    [anon_sym_false] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_BSLASH] = ACTIONS(626),
    [anon_sym_POUND_DQUOTE] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [sym_identifier] = ACTIONS(628),
  },
  [117] = {
    [sym__literals] = STATE(131),
    [sym_bool_literal] = STATE(131),
    [sym_str_literal] = STATE(131),
    [sym_char_literal] = STATE(131),
    [sym_pattern_literal] = STATE(131),
    [sym_array_expression] = STATE(131),
    [sym_map_expression] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(630),
    [sym_float_literal] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(630),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [sym_integer_literal] = ACTIONS(379),
    [sym_float_literal] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(379),
    [anon_sym_false] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [sym_integer_literal] = ACTIONS(431),
    [sym_float_literal] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(431),
    [anon_sym_false] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [sym_identifier] = ACTIONS(431),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_AMP] = ACTIONS(632),
    [anon_sym_AT] = ACTIONS(632),
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [sym_integer_literal] = ACTIONS(634),
    [sym_float_literal] = ACTIONS(634),
    [anon_sym_true] = ACTIONS(634),
    [anon_sym_false] = ACTIONS(634),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [anon_sym_BSLASH] = ACTIONS(632),
    [anon_sym_POUND_DQUOTE] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(632),
    [sym_identifier] = ACTIONS(634),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [sym_integer_literal] = ACTIONS(403),
    [sym_float_literal] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(403),
    [anon_sym_false] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_AMP] = ACTIONS(636),
    [anon_sym_AT] = ACTIONS(636),
    [anon_sym_TILDE] = ACTIONS(636),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [sym_integer_literal] = ACTIONS(638),
    [sym_float_literal] = ACTIONS(638),
    [anon_sym_true] = ACTIONS(638),
    [anon_sym_false] = ACTIONS(638),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [anon_sym_BSLASH] = ACTIONS(636),
    [anon_sym_POUND_DQUOTE] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(636),
    [anon_sym_COLON] = ACTIONS(636),
    [sym_identifier] = ACTIONS(638),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_AMP] = ACTIONS(640),
    [anon_sym_AT] = ACTIONS(640),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [sym_integer_literal] = ACTIONS(642),
    [sym_float_literal] = ACTIONS(642),
    [anon_sym_true] = ACTIONS(642),
    [anon_sym_false] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [anon_sym_BSLASH] = ACTIONS(640),
    [anon_sym_POUND_DQUOTE] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(640),
    [sym_identifier] = ACTIONS(642),
  },
  [124] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [sym_integer_literal] = ACTIONS(383),
    [sym_float_literal] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [125] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [sym_integer_literal] = ACTIONS(395),
    [sym_float_literal] = ACTIONS(395),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_AMP] = ACTIONS(644),
    [anon_sym_AT] = ACTIONS(644),
    [anon_sym_TILDE] = ACTIONS(644),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [sym_integer_literal] = ACTIONS(646),
    [sym_float_literal] = ACTIONS(646),
    [anon_sym_true] = ACTIONS(646),
    [anon_sym_false] = ACTIONS(646),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [anon_sym_BSLASH] = ACTIONS(644),
    [anon_sym_POUND_DQUOTE] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(644),
    [sym_identifier] = ACTIONS(646),
  },
  [127] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_integer_literal] = ACTIONS(387),
    [sym_float_literal] = ACTIONS(387),
    [anon_sym_true] = ACTIONS(387),
    [anon_sym_false] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_BSLASH] = ACTIONS(385),
    [anon_sym_POUND_DQUOTE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [sym_integer_literal] = ACTIONS(415),
    [sym_float_literal] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [129] = {
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_RPAREN] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_AMP] = ACTIONS(648),
    [anon_sym_AT] = ACTIONS(648),
    [anon_sym_TILDE] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [sym_integer_literal] = ACTIONS(650),
    [sym_float_literal] = ACTIONS(650),
    [anon_sym_true] = ACTIONS(650),
    [anon_sym_false] = ACTIONS(650),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [anon_sym_BSLASH] = ACTIONS(648),
    [anon_sym_POUND_DQUOTE] = ACTIONS(648),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(648),
    [sym_identifier] = ACTIONS(650),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(652),
    [anon_sym_RPAREN] = ACTIONS(652),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_AMP] = ACTIONS(652),
    [anon_sym_AT] = ACTIONS(652),
    [anon_sym_TILDE] = ACTIONS(652),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [sym_integer_literal] = ACTIONS(654),
    [sym_float_literal] = ACTIONS(654),
    [anon_sym_true] = ACTIONS(654),
    [anon_sym_false] = ACTIONS(654),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [anon_sym_BSLASH] = ACTIONS(652),
    [anon_sym_POUND_DQUOTE] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(652),
    [anon_sym_COLON] = ACTIONS(652),
    [sym_identifier] = ACTIONS(654),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(656),
    [sym_integer_literal] = ACTIONS(658),
    [sym_float_literal] = ACTIONS(658),
    [anon_sym_true] = ACTIONS(658),
    [anon_sym_false] = ACTIONS(658),
    [anon_sym_DQUOTE] = ACTIONS(656),
    [anon_sym_BSLASH] = ACTIONS(656),
    [anon_sym_POUND_DQUOTE] = ACTIONS(656),
    [anon_sym_LBRACE] = ACTIONS(656),
    [anon_sym_RBRACE] = ACTIONS(656),
    [sym_identifier] = ACTIONS(658),
  },
  [132] = {
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(662),
    [anon_sym_LPAREN] = ACTIONS(665),
  },
  [133] = {
    [sym_line_comment] = STATE(132),
    [sym__s_expr] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [134] = {
    [sym_symbol] = STATE(134),
    [aux_sym_parameters_repeat1] = STATE(134),
    [anon_sym_RBRACK2] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(672),
    [sym_identifier] = ACTIONS(675),
  },
  [135] = {
    [sym_fields] = STATE(194),
    [aux_sym__deftype2_repeat1] = STATE(155),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(682),
  },
  [136] = {
    [sym_symbol] = STATE(134),
    [aux_sym_parameters_repeat1] = STATE(134),
    [anon_sym_RBRACK2] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(686),
    [sym_identifier] = ACTIONS(688),
  },
  [137] = {
    [sym_symbol] = STATE(136),
    [aux_sym_parameters_repeat1] = STATE(136),
    [anon_sym_RBRACK2] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(686),
    [sym_identifier] = ACTIONS(692),
  },
  [138] = {
    [sym__deftype1] = STATE(215),
    [sym__deftype2] = STATE(215),
    [sym__name_deftypes] = STATE(135),
    [anon_sym_LPAREN] = ACTIONS(694),
    [sym_identifier] = ACTIONS(696),
  },
  [139] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(700),
    [sym_escape_sequence] = ACTIONS(702),
  },
  [140] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(704),
    [sym_escape_sequence] = ACTIONS(702),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(706),
    [anon_sym_SEMI] = ACTIONS(706),
    [anon_sym_LPAREN] = ACTIONS(706),
    [anon_sym_RPAREN] = ACTIONS(706),
  },
  [142] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(708),
    [sym_escape_sequence] = ACTIONS(702),
  },
  [143] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(710),
    [sym_escape_sequence] = ACTIONS(702),
  },
  [144] = {
    [aux_sym_str_literal_repeat1] = STATE(140),
    [aux_sym_str_literal_token1] = ACTIONS(712),
    [anon_sym_DQUOTE2] = ACTIONS(714),
    [sym_escape_sequence] = ACTIONS(716),
  },
  [145] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(718),
    [sym_escape_sequence] = ACTIONS(702),
  },
  [146] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(720),
    [sym_escape_sequence] = ACTIONS(702),
  },
  [147] = {
    [aux_sym_str_literal_repeat1] = STATE(142),
    [aux_sym_str_literal_token1] = ACTIONS(722),
    [anon_sym_DQUOTE2] = ACTIONS(724),
    [sym_escape_sequence] = ACTIONS(726),
  },
  [148] = {
    [aux_sym_str_literal_repeat1] = STATE(143),
    [aux_sym_str_literal_token1] = ACTIONS(728),
    [anon_sym_DQUOTE2] = ACTIONS(730),
    [sym_escape_sequence] = ACTIONS(732),
  },
  [149] = {
    [aux_sym_str_literal_repeat1] = STATE(146),
    [aux_sym_str_literal_token1] = ACTIONS(734),
    [anon_sym_DQUOTE2] = ACTIONS(736),
    [sym_escape_sequence] = ACTIONS(738),
  },
  [150] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(740),
    [anon_sym_DQUOTE2] = ACTIONS(743),
    [sym_escape_sequence] = ACTIONS(745),
  },
  [151] = {
    [aux_sym_str_literal_repeat1] = STATE(145),
    [aux_sym_str_literal_token1] = ACTIONS(748),
    [anon_sym_DQUOTE2] = ACTIONS(750),
    [sym_escape_sequence] = ACTIONS(752),
  },
  [152] = {
    [aux_sym_str_literal_repeat1] = STATE(139),
    [aux_sym_str_literal_token1] = ACTIONS(754),
    [anon_sym_DQUOTE2] = ACTIONS(756),
    [sym_escape_sequence] = ACTIONS(758),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(760),
  },
  [154] = {
    [aux_sym__name_deftypes_repeat1] = STATE(162),
    [anon_sym_RPAREN2] = ACTIONS(762),
    [sym_identifier] = ACTIONS(764),
  },
  [155] = {
    [aux_sym__deftype2_repeat1] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(766),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
  },
  [157] = {
    [anon_sym_RBRACK2] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [158] = {
    [aux_sym_let_pairs_repeat1] = STATE(158),
    [anon_sym_RBRACK] = ACTIONS(770),
    [sym_identifier] = ACTIONS(772),
  },
  [159] = {
    [sym_interface_fn] = STATE(200),
    [anon_sym_Fn] = ACTIONS(775),
    [anon_sym_] = ACTIONS(775),
  },
  [160] = {
    [aux_sym_let_pairs_repeat1] = STATE(164),
    [anon_sym_RBRACK] = ACTIONS(777),
    [sym_identifier] = ACTIONS(779),
  },
  [161] = {
    [aux_sym__deftype2_repeat1] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(781),
    [anon_sym_RPAREN] = ACTIONS(784),
  },
  [162] = {
    [aux_sym__name_deftypes_repeat1] = STATE(163),
    [anon_sym_RPAREN2] = ACTIONS(786),
    [sym_identifier] = ACTIONS(788),
  },
  [163] = {
    [aux_sym__name_deftypes_repeat1] = STATE(163),
    [anon_sym_RPAREN2] = ACTIONS(790),
    [sym_identifier] = ACTIONS(792),
  },
  [164] = {
    [aux_sym_let_pairs_repeat1] = STATE(158),
    [anon_sym_RBRACK] = ACTIONS(795),
    [sym_identifier] = ACTIONS(779),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(797),
    [anon_sym_RPAREN] = ACTIONS(797),
    [anon_sym_LBRACK] = ACTIONS(797),
  },
  [166] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(799),
  },
  [167] = {
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_identifier] = ACTIONS(453),
  },
  [168] = {
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_identifier] = ACTIONS(393),
  },
  [169] = {
    [anon_sym_RBRACK] = ACTIONS(409),
    [sym_identifier] = ACTIONS(409),
  },
  [170] = {
    [anon_sym_RBRACK] = ACTIONS(405),
    [sym_identifier] = ACTIONS(405),
  },
  [171] = {
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
  },
  [172] = {
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_identifier] = ACTIONS(389),
  },
  [173] = {
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_identifier] = ACTIONS(421),
  },
  [174] = {
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_identifier] = ACTIONS(425),
  },
  [175] = {
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_identifier] = ACTIONS(433),
  },
  [176] = {
    [sym_parameters] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(799),
  },
  [177] = {
    [anon_sym_RBRACK] = ACTIONS(437),
    [sym_identifier] = ACTIONS(437),
  },
  [178] = {
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_identifier] = ACTIONS(441),
  },
  [179] = {
    [sym_let_pairs] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(801),
  },
  [180] = {
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_identifier] = ACTIONS(445),
  },
  [181] = {
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_identifier] = ACTIONS(417),
  },
  [182] = {
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_identifier] = ACTIONS(397),
  },
  [183] = {
    [aux_sym_str_literal_token1] = ACTIONS(803),
    [sym_escape_sequence] = ACTIONS(805),
  },
  [184] = {
    [aux_sym_str_literal_token1] = ACTIONS(807),
    [sym_escape_sequence] = ACTIONS(809),
  },
  [185] = {
    [sym_parameters] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(799),
  },
  [186] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(799),
  },
  [187] = {
    [aux_sym_str_literal_token1] = ACTIONS(811),
    [sym_escape_sequence] = ACTIONS(813),
  },
  [188] = {
    [anon_sym_RBRACK] = ACTIONS(815),
    [sym_identifier] = ACTIONS(815),
  },
  [189] = {
    [sym_fields] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(817),
  },
  [190] = {
    [anon_sym_LPAREN] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
  },
  [191] = {
    [sym_typed_parameters] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(821),
  },
  [192] = {
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [193] = {
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_identifier] = ACTIONS(449),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(823),
  },
  [195] = {
    [anon_sym_RPAREN2] = ACTIONS(825),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(827),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(829),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(833),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(835),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(837),
  },
  [202] = {
    [aux_sym_line_comment_token1] = ACTIONS(839),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(841),
  },
  [204] = {
    [sym_identifier] = ACTIONS(843),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(845),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(847),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(849),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(851),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(853),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(857),
  },
  [212] = {
    [sym_identifier] = ACTIONS(859),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(861),
  },
  [214] = {
    [sym_identifier] = ACTIONS(863),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(865),
  },
  [216] = {
    [sym_identifier] = ACTIONS(867),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(869),
  },
  [218] = {
    [anon_sym_LPAREN] = ACTIONS(871),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(873),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(875),
  },
  [221] = {
    [anon_sym_RPAREN] = ACTIONS(877),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(879),
  },
  [223] = {
    [sym_identifier] = ACTIONS(881),
  },
  [224] = {
    [anon_sym_RPAREN2] = ACTIONS(869),
  },
  [225] = {
    [sym_identifier] = ACTIONS(883),
  },
  [226] = {
    [sym_identifier] = ACTIONS(885),
  },
  [227] = {
    [sym_identifier] = ACTIONS(887),
  },
  [228] = {
    [anon_sym_RPAREN2] = ACTIONS(827),
  },
  [229] = {
    [sym_identifier] = ACTIONS(889),
  },
  [230] = {
    [sym_identifier] = ACTIONS(891),
  },
  [231] = {
    [sym_identifier] = ACTIONS(893),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(895),
  },
  [233] = {
    [sym_identifier] = ACTIONS(897),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(899),
  },
  [235] = {
    [sym_identifier] = ACTIONS(901),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(903),
  },
  [237] = {
    [sym_identifier] = ACTIONS(905),
  },
  [238] = {
    [sym_identifier] = ACTIONS(907),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(909),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(202),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(238),
  [11] = {.count = 1, .reusable = false}, SHIFT(176),
  [13] = {.count = 1, .reusable = false}, SHIFT(235),
  [15] = {.count = 1, .reusable = false}, SHIFT(179),
  [17] = {.count = 1, .reusable = true}, SHIFT(95),
  [19] = {.count = 1, .reusable = false}, SHIFT(13),
  [21] = {.count = 1, .reusable = false}, SHIFT(32),
  [23] = {.count = 1, .reusable = false}, SHIFT(25),
  [25] = {.count = 1, .reusable = false}, SHIFT(45),
  [27] = {.count = 1, .reusable = false}, SHIFT(37),
  [29] = {.count = 1, .reusable = false}, SHIFT(233),
  [31] = {.count = 1, .reusable = false}, SHIFT(78),
  [33] = {.count = 1, .reusable = false}, SHIFT(230),
  [35] = {.count = 1, .reusable = false}, SHIFT(229),
  [37] = {.count = 1, .reusable = false}, SHIFT(227),
  [39] = {.count = 1, .reusable = false}, SHIFT(226),
  [41] = {.count = 1, .reusable = false}, SHIFT(225),
  [43] = {.count = 1, .reusable = false}, SHIFT(138),
  [45] = {.count = 1, .reusable = true}, SHIFT(35),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, SHIFT(28),
  [53] = {.count = 1, .reusable = false}, SHIFT(232),
  [55] = {.count = 1, .reusable = false}, SHIFT(105),
  [57] = {.count = 1, .reusable = true}, SHIFT(152),
  [59] = {.count = 1, .reusable = true}, SHIFT(184),
  [61] = {.count = 1, .reusable = true}, SHIFT(151),
  [63] = {.count = 1, .reusable = true}, SHIFT(107),
  [65] = {.count = 1, .reusable = true}, SHIFT(223),
  [67] = {.count = 1, .reusable = false}, SHIFT(112),
  [69] = {.count = 1, .reusable = false}, SHIFT(222),
  [71] = {.count = 1, .reusable = false}, SHIFT(213),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [75] = {.count = 1, .reusable = false}, SHIFT(130),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [79] = {.count = 1, .reusable = false}, SHIFT(10),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [83] = {.count = 1, .reusable = false}, SHIFT(6),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(3),
  [88] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(95),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(35),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(26),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(27),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(28),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(130),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(105),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(152),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(184),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(151),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(107),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 18), SHIFT_REPEAT(223),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 24),
  [128] = {.count = 1, .reusable = false}, SHIFT(115),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(95),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(35),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(26),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(27),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(28),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(10),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(105),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(152),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(184),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(151),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(107),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(223),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(3),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(95),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(35),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(26),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(27),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(28),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(115),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(105),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(152),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(184),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(151),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(107),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 37), SHIFT_REPEAT(223),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 10),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 16),
  [218] = {.count = 1, .reusable = false}, SHIFT(201),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [222] = {.count = 1, .reusable = false}, SHIFT(207),
  [224] = {.count = 1, .reusable = true}, SHIFT(81),
  [226] = {.count = 1, .reusable = false}, SHIFT(57),
  [228] = {.count = 1, .reusable = true}, SHIFT(70),
  [230] = {.count = 1, .reusable = true}, SHIFT(31),
  [232] = {.count = 1, .reusable = true}, SHIFT(42),
  [234] = {.count = 1, .reusable = true}, SHIFT(43),
  [236] = {.count = 1, .reusable = true}, SHIFT(44),
  [238] = {.count = 1, .reusable = false}, SHIFT(50),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 22),
  [242] = {.count = 1, .reusable = false}, SHIFT(199),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 16),
  [246] = {.count = 1, .reusable = false}, SHIFT(221),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [250] = {.count = 1, .reusable = false}, SHIFT(208),
  [252] = {.count = 1, .reusable = true}, SHIFT(68),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 16),
  [256] = {.count = 1, .reusable = false}, SHIFT(203),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [260] = {.count = 1, .reusable = false}, SHIFT(210),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(81),
  [265] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(57),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(42),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(43),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [285] = {.count = 1, .reusable = false}, SHIFT(34),
  [287] = {.count = 1, .reusable = false}, SHIFT(15),
  [289] = {.count = 1, .reusable = false}, SHIFT(113),
  [291] = {.count = 1, .reusable = false}, SHIFT(114),
  [293] = {.count = 1, .reusable = false}, SHIFT(121),
  [295] = {.count = 1, .reusable = true}, SHIFT(4),
  [297] = {.count = 1, .reusable = true}, SHIFT(111),
  [299] = {.count = 1, .reusable = true}, SHIFT(30),
  [301] = {.count = 1, .reusable = true}, SHIFT(29),
  [303] = {.count = 1, .reusable = true}, SHIFT(33),
  [305] = {.count = 1, .reusable = true}, SHIFT(36),
  [307] = {.count = 1, .reusable = false}, SHIFT(169),
  [309] = {.count = 1, .reusable = false}, SHIFT(193),
  [311] = {.count = 1, .reusable = true}, SHIFT(149),
  [313] = {.count = 1, .reusable = true}, SHIFT(187),
  [315] = {.count = 1, .reusable = true}, SHIFT(144),
  [317] = {.count = 1, .reusable = true}, SHIFT(86),
  [319] = {.count = 1, .reusable = true}, SHIFT(231),
  [321] = {.count = 1, .reusable = false}, SHIFT(168),
  [323] = {.count = 1, .reusable = true}, SHIFT(2),
  [325] = {.count = 1, .reusable = true}, SHIFT(110),
  [327] = {.count = 1, .reusable = false}, SHIFT(52),
  [329] = {.count = 1, .reusable = false}, SHIFT(66),
  [331] = {.count = 1, .reusable = true}, SHIFT(148),
  [333] = {.count = 1, .reusable = true}, SHIFT(183),
  [335] = {.count = 1, .reusable = true}, SHIFT(147),
  [337] = {.count = 1, .reusable = true}, SHIFT(103),
  [339] = {.count = 1, .reusable = true}, SHIFT(237),
  [341] = {.count = 1, .reusable = false}, SHIFT(24),
  [343] = {.count = 1, .reusable = false}, SHIFT(170),
  [345] = {.count = 1, .reusable = false}, SHIFT(234),
  [347] = {.count = 1, .reusable = false}, SHIFT(125),
  [349] = {.count = 1, .reusable = false}, SHIFT(171),
  [351] = {.count = 1, .reusable = false}, SHIFT(219),
  [353] = {.count = 1, .reusable = false}, SHIFT(206),
  [355] = {.count = 1, .reusable = false}, SHIFT(205),
  [357] = {.count = 1, .reusable = false}, SHIFT(211),
  [359] = {.count = 1, .reusable = false}, SHIFT(188),
  [361] = {.count = 1, .reusable = false}, SHIFT(56),
  [363] = {.count = 1, .reusable = false}, SHIFT(55),
  [365] = {.count = 1, .reusable = false}, SHIFT(54),
  [367] = {.count = 1, .reusable = false}, SHIFT(220),
  [369] = {.count = 1, .reusable = true}, SHIFT(80),
  [371] = {.count = 1, .reusable = false}, SHIFT(128),
  [373] = {.count = 1, .reusable = false}, SHIFT(127),
  [375] = {.count = 1, .reusable = true}, SHIFT(69),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 28),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 28),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 9),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 9),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [461] = {.count = 1, .reusable = true}, SHIFT(118),
  [463] = {.count = 1, .reusable = false}, SHIFT(100),
  [465] = {.count = 1, .reusable = false}, SHIFT(191),
  [467] = {.count = 1, .reusable = false}, SHIFT(83),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [473] = {.count = 1, .reusable = false}, SHIFT(77),
  [475] = {.count = 1, .reusable = true}, SHIFT(196),
  [477] = {.count = 1, .reusable = false}, SHIFT(76),
  [479] = {.count = 1, .reusable = true}, SHIFT(217),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(81),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(77),
  [487] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [489] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(76),
  [492] = {.count = 1, .reusable = true}, SHIFT(228),
  [494] = {.count = 1, .reusable = true}, SHIFT(224),
  [496] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [498] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [500] = {.count = 1, .reusable = true}, SHIFT(85),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 38),
  [504] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 38),
  [506] = {.count = 1, .reusable = true}, SHIFT(82),
  [508] = {.count = 1, .reusable = true}, SHIFT(49),
  [510] = {.count = 1, .reusable = false}, SHIFT(84),
  [512] = {.count = 1, .reusable = true}, SHIFT(48),
  [514] = {.count = 1, .reusable = false}, SHIFT(79),
  [516] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 38),
  [518] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 38),
  [520] = {.count = 1, .reusable = true}, SHIFT(124),
  [522] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(100),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(84),
  [530] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [532] = {.count = 1, .reusable = false}, SHIFT(117),
  [534] = {.count = 1, .reusable = true}, SHIFT(175),
  [536] = {.count = 1, .reusable = true}, SHIFT(182),
  [538] = {.count = 1, .reusable = true}, SHIFT(178),
  [540] = {.count = 1, .reusable = false}, SHIFT(94),
  [542] = {.count = 1, .reusable = true}, SHIFT(53),
  [544] = {.count = 1, .reusable = true}, SHIFT(64),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(95),
  [549] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(94),
  [554] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(105),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(152),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(184),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(151),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(107),
  [569] = {.count = 1, .reusable = true}, SHIFT(92),
  [571] = {.count = 1, .reusable = false}, SHIFT(109),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(95),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(117),
  [579] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(105),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(152),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(184),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(151),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(107),
  [594] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [596] = {.count = 1, .reusable = true}, SHIFT(99),
  [598] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 9),
  [600] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 9),
  [602] = {.count = 1, .reusable = true}, SHIFT(62),
  [604] = {.count = 1, .reusable = true}, SHIFT(102),
  [606] = {.count = 1, .reusable = true}, SHIFT(93),
  [608] = {.count = 1, .reusable = true}, SHIFT(67),
  [610] = {.count = 1, .reusable = false}, SHIFT(91),
  [612] = {.count = 1, .reusable = true}, SHIFT(167),
  [614] = {.count = 1, .reusable = false}, SHIFT(89),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [618] = {.count = 1, .reusable = true}, SHIFT(214),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [622] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 23),
  [624] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 23),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [630] = {.count = 1, .reusable = false}, SHIFT(131),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 30),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 30),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 33),
  [642] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 33),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [652] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [654] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [656] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 27),
  [658] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 27),
  [660] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [670] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(212),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(134),
  [678] = {.count = 1, .reusable = true}, SHIFT(204),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 12),
  [682] = {.count = 1, .reusable = true}, SHIFT(71),
  [684] = {.count = 1, .reusable = true}, SHIFT(122),
  [686] = {.count = 1, .reusable = true}, SHIFT(212),
  [688] = {.count = 1, .reusable = true}, SHIFT(134),
  [690] = {.count = 1, .reusable = true}, SHIFT(129),
  [692] = {.count = 1, .reusable = true}, SHIFT(136),
  [694] = {.count = 1, .reusable = true}, SHIFT(216),
  [696] = {.count = 1, .reusable = true}, SHIFT(153),
  [698] = {.count = 1, .reusable = false}, SHIFT(150),
  [700] = {.count = 1, .reusable = true}, SHIFT(108),
  [702] = {.count = 1, .reusable = true}, SHIFT(150),
  [704] = {.count = 1, .reusable = true}, SHIFT(181),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [708] = {.count = 1, .reusable = true}, SHIFT(58),
  [710] = {.count = 1, .reusable = true}, SHIFT(65),
  [712] = {.count = 1, .reusable = false}, SHIFT(140),
  [714] = {.count = 1, .reusable = true}, SHIFT(174),
  [716] = {.count = 1, .reusable = true}, SHIFT(140),
  [718] = {.count = 1, .reusable = true}, SHIFT(101),
  [720] = {.count = 1, .reusable = true}, SHIFT(180),
  [722] = {.count = 1, .reusable = false}, SHIFT(142),
  [724] = {.count = 1, .reusable = true}, SHIFT(60),
  [726] = {.count = 1, .reusable = true}, SHIFT(142),
  [728] = {.count = 1, .reusable = false}, SHIFT(143),
  [730] = {.count = 1, .reusable = true}, SHIFT(51),
  [732] = {.count = 1, .reusable = true}, SHIFT(143),
  [734] = {.count = 1, .reusable = false}, SHIFT(146),
  [736] = {.count = 1, .reusable = true}, SHIFT(172),
  [738] = {.count = 1, .reusable = true}, SHIFT(146),
  [740] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(150),
  [743] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(150),
  [748] = {.count = 1, .reusable = false}, SHIFT(145),
  [750] = {.count = 1, .reusable = true}, SHIFT(104),
  [752] = {.count = 1, .reusable = true}, SHIFT(145),
  [754] = {.count = 1, .reusable = false}, SHIFT(139),
  [756] = {.count = 1, .reusable = true}, SHIFT(87),
  [758] = {.count = 1, .reusable = true}, SHIFT(139),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [762] = {.count = 1, .reusable = true}, SHIFT(156),
  [764] = {.count = 1, .reusable = true}, SHIFT(162),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 26),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 10),
  [770] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34), SHIFT_REPEAT(41),
  [775] = {.count = 1, .reusable = true}, SHIFT(191),
  [777] = {.count = 1, .reusable = true}, SHIFT(126),
  [779] = {.count = 1, .reusable = true}, SHIFT(41),
  [781] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 39), SHIFT_REPEAT(204),
  [784] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 39),
  [786] = {.count = 1, .reusable = true}, SHIFT(165),
  [788] = {.count = 1, .reusable = true}, SHIFT(163),
  [790] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [792] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(163),
  [795] = {.count = 1, .reusable = true}, SHIFT(123),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 41),
  [799] = {.count = 1, .reusable = true}, SHIFT(137),
  [801] = {.count = 1, .reusable = true}, SHIFT(160),
  [803] = {.count = 1, .reusable = false}, SHIFT(59),
  [805] = {.count = 1, .reusable = true}, SHIFT(59),
  [807] = {.count = 1, .reusable = false}, SHIFT(106),
  [809] = {.count = 1, .reusable = true}, SHIFT(106),
  [811] = {.count = 1, .reusable = false}, SHIFT(173),
  [813] = {.count = 1, .reusable = true}, SHIFT(173),
  [815] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 32),
  [817] = {.count = 1, .reusable = true}, SHIFT(74),
  [819] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 43),
  [821] = {.count = 1, .reusable = true}, SHIFT(16),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 25),
  [825] = {.count = 1, .reusable = true}, SHIFT(190),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [829] = {.count = 1, .reusable = true}, SHIFT(209),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 42),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 36),
  [835] = {.count = 1, .reusable = true}, SHIFT(236),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 31),
  [839] = {.count = 1, .reusable = true}, SHIFT(141),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 31),
  [843] = {.count = 1, .reusable = true}, SHIFT(189),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 21),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 20),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 19),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 17),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 40),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 15),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 14),
  [859] = {.count = 1, .reusable = true}, SHIFT(157),
  [861] = {.count = 1, .reusable = true}, SHIFT(177),
  [863] = {.count = 1, .reusable = true}, SHIFT(120),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 11),
  [867] = {.count = 1, .reusable = true}, SHIFT(154),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [871] = {.count = 1, .reusable = true}, SHIFT(159),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 31),
  [879] = {.count = 1, .reusable = true}, SHIFT(96),
  [881] = {.count = 1, .reusable = true}, SHIFT(119),
  [883] = {.count = 1, .reusable = true}, SHIFT(12),
  [885] = {.count = 1, .reusable = true}, SHIFT(186),
  [887] = {.count = 1, .reusable = true}, SHIFT(166),
  [889] = {.count = 1, .reusable = true}, SHIFT(218),
  [891] = {.count = 1, .reusable = true}, SHIFT(47),
  [893] = {.count = 1, .reusable = true}, SHIFT(192),
  [895] = {.count = 1, .reusable = true}, SHIFT(63),
  [897] = {.count = 1, .reusable = true}, SHIFT(38),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 35),
  [901] = {.count = 1, .reusable = true}, SHIFT(185),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 40),
  [905] = {.count = 1, .reusable = true}, SHIFT(61),
  [907] = {.count = 1, .reusable = true}, SHIFT(40),
  [909] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_carp(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
