#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 205
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
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
  anon_sym_Fn = 41,
  anon_sym_ = 42,
  anon_sym_AMP = 43,
  anon_sym_AT = 44,
  anon_sym_TILDE = 45,
  anon_sym_SQUOTE = 46,
  sym_integer_literal = 47,
  sym_float_literal = 48,
  anon_sym_true = 49,
  anon_sym_false = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_str_literal_token1 = 52,
  anon_sym_DQUOTE2 = 53,
  anon_sym_BSLASH = 54,
  anon_sym_POUND_DQUOTE = 55,
  sym_escape_sequence = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_COLON = 59,
  sym_identifier = 60,
  sym_source_file = 61,
  sym_line_comment = 62,
  sym__s_expr = 63,
  sym__expr = 64,
  sym__anything = 65,
  sym__s_forms = 66,
  sym__defs = 67,
  sym__literals = 68,
  sym__short_helper = 69,
  sym_def = 70,
  sym_fn = 71,
  sym_defn = 72,
  sym_let = 73,
  sym_let_pairs = 74,
  sym_do = 75,
  sym_if = 76,
  sym_while = 77,
  sym_ref = 78,
  sym_address = 79,
  sym_set = 80,
  sym_the = 81,
  sym_register = 82,
  sym_type = 83,
  sym_complex_type = 84,
  sym_call_expression = 85,
  sym_call_name = 86,
  sym_definterface = 87,
  sym_defmacro = 88,
  sym_defndynamic = 89,
  sym_defmodule = 90,
  sym_interface_fn = 91,
  sym_short_ref = 92,
  sym_short_copy = 93,
  sym_short_fn_ref = 94,
  sym_short_quote = 95,
  sym_parameters = 96,
  sym_typed_parameters = 97,
  sym_bool_literal = 98,
  sym_str_literal = 99,
  sym_char_literal = 100,
  sym_pattern_literal = 101,
  sym_array_expression = 102,
  sym_map_expression = 103,
  sym_symbol = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_let_pairs_repeat1 = 106,
  aux_sym_do_repeat1 = 107,
  aux_sym_complex_type_repeat1 = 108,
  aux_sym_call_expression_repeat1 = 109,
  aux_sym_defmodule_repeat1 = 110,
  aux_sym_parameters_repeat1 = 111,
  aux_sym_typed_parameters_repeat1 = 112,
  aux_sym_str_literal_repeat1 = 113,
  aux_sym_array_expression_repeat1 = 114,
  aux_sym_map_expression_repeat1 = 115,
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
  [anon_sym_Bool] = "identifier",
  [anon_sym_Char] = "identifier",
  [anon_sym_Int] = "identifier",
  [anon_sym_Long] = "identifier",
  [anon_sym_Float] = "identifier",
  [anon_sym_Double] = "identifier",
  [anon_sym_Vector2] = "identifier",
  [anon_sym_Vector3] = "identifier",
  [anon_sym_VectorN] = "identifier",
  [anon_sym_String] = "identifier",
  [anon_sym_Pattern] = "identifier",
  [anon_sym_Array] = "identifier",
  [anon_sym_Map] = "identifier",
  [anon_sym_Maybe] = "identifier",
  [anon_sym_Result] = "identifier",
  [anon_sym_Id] = "identifier",
  [anon_sym_Ptr] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_definterface] = "definterface",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_defndynamic] = "defndynamic",
  [anon_sym_defmodule] = "defmodule",
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
    .named = true,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Vector2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Vector3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_VectorN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Map] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Maybe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Result] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Ptr] = {
    .visible = true,
    .named = true,
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
  field_fn = 8,
  field_key = 9,
  field_module = 10,
  field_name = 11,
  field_pairs = 12,
  field_parameters = 13,
  field_return_type = 14,
  field_then = 15,
  field_type = 16,
  field_typed_params = 17,
  field_value = 18,
  field_value_name = 19,
  field_var = 20,
  field_variable = 21,
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
  [field_fn] = "fn",
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
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 4},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 3},
  [26] = {.index = 43, .length = 2},
  [27] = {.index = 45, .length = 2},
  [28] = {.index = 47, .length = 4},
  [29] = {.index = 51, .length = 3},
  [30] = {.index = 54, .length = 3},
  [31] = {.index = 57, .length = 2},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 2},
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
    {field_argument, 1},
    {field_call_name, 0},
  [11] =
    {field_name, 1},
    {field_value, 2},
  [13] =
    {field_body, 2},
    {field_parameters, 1},
  [15] =
    {field_name, 1},
    {field_parameters, 2},
  [17] =
    {field_body, 2},
    {field_pairs, 1},
  [19] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [21] =
    {field_body, 2},
    {field_condition, 1},
  [23] =
    {field_expr, 2},
    {field_variable, 1},
  [25] =
    {field_expr, 2},
    {field_type, 1},
  [27] =
    {field_definition, 0},
  [28] =
    {field_definition, 2, .inherited = true},
    {field_name, 1},
  [30] =
    {field_key, 0},
    {field_value, 1},
  [32] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [38] =
    {field_module, 0},
    {field_name, 2},
  [40] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [43] =
    {field_expr, 1},
    {field_var, 0},
  [45] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [47] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [51] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [54] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [57] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [59] =
    {field_fn, 3},
    {field_name, 1},
  [61] =
    {field_return_type, 2},
    {field_typed_params, 1},
};

static TSSymbol ts_alias_sequences[34][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == 955) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == 955) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == 955) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(26);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_fn);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(191);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_let);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_do);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_if);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_while);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_ref);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_address);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_set_BANG);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_the);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_register);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Bool);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Char);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_Int);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Long);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Float);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Double);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_VectorN);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_String);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Pattern);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Array);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Map);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Maybe);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Result);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Id);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Ptr);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_definterface);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_defmacro);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_defndynamic);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_defmodule);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Fn);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(46);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(25);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(104);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 't') ADVANCE(158);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(100);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(178);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(110);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(142);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(181);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(168);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(115);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(175);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(103);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(169);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(189);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(30);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(31);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(24);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(132);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(92);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(41);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(47);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(133);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(93);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(188);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(174);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(97);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(147);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(38);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(60);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(134);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(48);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(128);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(186);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(145);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(57);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(153);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(94);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(95);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(165);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(34);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(187);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(111);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(27);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(96);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(109);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(143);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(49);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(148);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(193);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
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
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
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
  [100] = {.lex_state = 2},
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
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
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
    [sym_source_file] = STATE(204),
    [sym_line_comment] = STATE(120),
    [sym__s_expr] = STATE(120),
    [aux_sym_source_file_repeat1] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(198),
    [sym__s_expr] = STATE(198),
    [sym__anything] = STATE(198),
    [sym__s_forms] = STATE(198),
    [sym__defs] = STATE(198),
    [sym__literals] = STATE(198),
    [sym__short_helper] = STATE(198),
    [sym_def] = STATE(198),
    [sym_fn] = STATE(198),
    [sym_defn] = STATE(198),
    [sym_let] = STATE(198),
    [sym_do] = STATE(198),
    [sym_if] = STATE(198),
    [sym_while] = STATE(198),
    [sym_ref] = STATE(198),
    [sym_address] = STATE(198),
    [sym_set] = STATE(198),
    [sym_the] = STATE(198),
    [sym_register] = STATE(198),
    [sym_call_expression] = STATE(198),
    [sym_call_name] = STATE(5),
    [sym_definterface] = STATE(198),
    [sym_defmacro] = STATE(198),
    [sym_defndynamic] = STATE(198),
    [sym_defmodule] = STATE(198),
    [sym_short_ref] = STATE(198),
    [sym_short_copy] = STATE(198),
    [sym_short_fn_ref] = STATE(110),
    [sym_short_quote] = STATE(198),
    [sym_bool_literal] = STATE(198),
    [sym_str_literal] = STATE(198),
    [sym_char_literal] = STATE(198),
    [sym_pattern_literal] = STATE(198),
    [sym_array_expression] = STATE(198),
    [sym_map_expression] = STATE(198),
    [sym_symbol] = STATE(198),
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
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(51),
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
    [sym_line_comment] = STATE(188),
    [sym__s_expr] = STATE(188),
    [sym__anything] = STATE(188),
    [sym__s_forms] = STATE(188),
    [sym__defs] = STATE(188),
    [sym__literals] = STATE(188),
    [sym__short_helper] = STATE(188),
    [sym_def] = STATE(188),
    [sym_fn] = STATE(188),
    [sym_defn] = STATE(188),
    [sym_let] = STATE(188),
    [sym_do] = STATE(188),
    [sym_if] = STATE(188),
    [sym_while] = STATE(188),
    [sym_ref] = STATE(188),
    [sym_address] = STATE(188),
    [sym_set] = STATE(188),
    [sym_the] = STATE(188),
    [sym_register] = STATE(188),
    [sym_call_expression] = STATE(188),
    [sym_call_name] = STATE(5),
    [sym_definterface] = STATE(188),
    [sym_defmacro] = STATE(188),
    [sym_defndynamic] = STATE(188),
    [sym_defmodule] = STATE(188),
    [sym_short_ref] = STATE(188),
    [sym_short_copy] = STATE(188),
    [sym_short_fn_ref] = STATE(110),
    [sym_short_quote] = STATE(188),
    [sym_bool_literal] = STATE(188),
    [sym_str_literal] = STATE(188),
    [sym_char_literal] = STATE(188),
    [sym_pattern_literal] = STATE(188),
    [sym_array_expression] = STATE(188),
    [sym_map_expression] = STATE(188),
    [sym_symbol] = STATE(188),
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
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(69),
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
  [4] = {
    [sym_line_comment] = STATE(181),
    [sym__s_expr] = STATE(181),
    [sym__anything] = STATE(181),
    [sym__s_forms] = STATE(181),
    [sym__defs] = STATE(181),
    [sym__literals] = STATE(181),
    [sym__short_helper] = STATE(181),
    [sym_def] = STATE(181),
    [sym_fn] = STATE(181),
    [sym_defn] = STATE(181),
    [sym_let] = STATE(181),
    [sym_do] = STATE(181),
    [sym_if] = STATE(181),
    [sym_while] = STATE(181),
    [sym_ref] = STATE(181),
    [sym_address] = STATE(181),
    [sym_set] = STATE(181),
    [sym_the] = STATE(181),
    [sym_register] = STATE(181),
    [sym_call_expression] = STATE(181),
    [sym_call_name] = STATE(5),
    [sym_definterface] = STATE(181),
    [sym_defmacro] = STATE(181),
    [sym_defndynamic] = STATE(181),
    [sym_defmodule] = STATE(181),
    [sym_short_ref] = STATE(181),
    [sym_short_copy] = STATE(181),
    [sym_short_fn_ref] = STATE(110),
    [sym_short_quote] = STATE(181),
    [sym_bool_literal] = STATE(181),
    [sym_str_literal] = STATE(181),
    [sym_char_literal] = STATE(181),
    [sym_pattern_literal] = STATE(181),
    [sym_array_expression] = STATE(181),
    [sym_map_expression] = STATE(181),
    [sym_symbol] = STATE(181),
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
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(73),
    [sym_float_literal] = ACTIONS(75),
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
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(79),
    [sym_float_literal] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(79),
  },
  [6] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_short_quote] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [sym_symbol] = STATE(12),
    [aux_sym_call_expression_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(85),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(85),
  },
  [7] = {
    [sym__s_expr] = STATE(116),
    [sym__expr] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__short_helper] = STATE(116),
    [sym_short_ref] = STATE(116),
    [sym_short_copy] = STATE(116),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [sym_symbol] = STATE(116),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_integer_literal] = ACTIONS(109),
    [sym_float_literal] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(121),
    [anon_sym_POUND_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_identifier] = ACTIONS(109),
  },
  [8] = {
    [sym__s_expr] = STATE(116),
    [sym__expr] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__short_helper] = STATE(116),
    [sym_short_ref] = STATE(116),
    [sym_short_copy] = STATE(116),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [sym_symbol] = STATE(116),
    [aux_sym_do_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(135),
  },
  [9] = {
    [sym__s_expr] = STATE(116),
    [sym__expr] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__short_helper] = STATE(116),
    [sym_short_ref] = STATE(116),
    [sym_short_copy] = STATE(116),
    [sym_short_fn_ref] = STATE(116),
    [sym_short_quote] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [sym_symbol] = STATE(116),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(135),
  },
  [10] = {
    [sym__s_expr] = STATE(105),
    [sym__expr] = STATE(105),
    [sym__literals] = STATE(105),
    [sym__short_helper] = STATE(105),
    [sym_short_ref] = STATE(105),
    [sym_short_copy] = STATE(105),
    [sym_short_fn_ref] = STATE(105),
    [sym_short_quote] = STATE(105),
    [sym_bool_literal] = STATE(105),
    [sym_str_literal] = STATE(105),
    [sym_char_literal] = STATE(105),
    [sym_pattern_literal] = STATE(105),
    [sym_array_expression] = STATE(105),
    [sym_map_expression] = STATE(105),
    [sym_symbol] = STATE(105),
    [aux_sym_defmodule_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(143),
  },
  [11] = {
    [sym__s_expr] = STATE(105),
    [sym__expr] = STATE(105),
    [sym__literals] = STATE(105),
    [sym__short_helper] = STATE(105),
    [sym_short_ref] = STATE(105),
    [sym_short_copy] = STATE(105),
    [sym_short_fn_ref] = STATE(105),
    [sym_short_quote] = STATE(105),
    [sym_bool_literal] = STATE(105),
    [sym_str_literal] = STATE(105),
    [sym_char_literal] = STATE(105),
    [sym_pattern_literal] = STATE(105),
    [sym_array_expression] = STATE(105),
    [sym_map_expression] = STATE(105),
    [sym_symbol] = STATE(105),
    [aux_sym_defmodule_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [sym_integer_literal] = ACTIONS(167),
    [sym_float_literal] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_BSLASH] = ACTIONS(179),
    [anon_sym_POUND_DQUOTE] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_identifier] = ACTIONS(167),
  },
  [12] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_short_quote] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [sym_symbol] = STATE(12),
    [aux_sym_call_expression_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(214),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_POUND_DQUOTE] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(232),
    [sym_identifier] = ACTIONS(211),
  },
  [13] = {
    [sym__s_expr] = STATE(105),
    [sym__expr] = STATE(105),
    [sym__literals] = STATE(105),
    [sym__short_helper] = STATE(105),
    [sym_short_ref] = STATE(105),
    [sym_short_copy] = STATE(105),
    [sym_short_fn_ref] = STATE(105),
    [sym_short_quote] = STATE(105),
    [sym_bool_literal] = STATE(105),
    [sym_str_literal] = STATE(105),
    [sym_char_literal] = STATE(105),
    [sym_pattern_literal] = STATE(105),
    [sym_array_expression] = STATE(105),
    [sym_map_expression] = STATE(105),
    [sym_symbol] = STATE(105),
    [aux_sym_defmodule_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(143),
  },
  [14] = {
    [sym__short_helper] = STATE(16),
    [sym_type] = STATE(16),
    [sym_complex_type] = STATE(66),
    [sym_short_ref] = STATE(16),
    [sym_short_copy] = STATE(16),
    [sym_short_fn_ref] = STATE(16),
    [sym_short_quote] = STATE(16),
    [aux_sym_typed_parameters_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_Bool] = ACTIONS(241),
    [anon_sym_Char] = ACTIONS(241),
    [anon_sym_Int] = ACTIONS(241),
    [anon_sym_Long] = ACTIONS(241),
    [anon_sym_Float] = ACTIONS(241),
    [anon_sym_Double] = ACTIONS(241),
    [anon_sym_Vector2] = ACTIONS(243),
    [anon_sym_Vector3] = ACTIONS(243),
    [anon_sym_VectorN] = ACTIONS(241),
    [anon_sym_String] = ACTIONS(241),
    [anon_sym_Pattern] = ACTIONS(241),
    [anon_sym_Array] = ACTIONS(241),
    [anon_sym_Map] = ACTIONS(241),
    [anon_sym_Maybe] = ACTIONS(241),
    [anon_sym_Result] = ACTIONS(241),
    [anon_sym_Id] = ACTIONS(241),
    [anon_sym_Ptr] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(241),
  },
  [15] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(255),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(255),
  },
  [16] = {
    [sym__short_helper] = STATE(16),
    [sym_type] = STATE(16),
    [sym_complex_type] = STATE(66),
    [sym_short_ref] = STATE(16),
    [sym_short_copy] = STATE(16),
    [sym_short_fn_ref] = STATE(16),
    [sym_short_quote] = STATE(16),
    [aux_sym_typed_parameters_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_Bool] = ACTIONS(264),
    [anon_sym_Char] = ACTIONS(264),
    [anon_sym_Int] = ACTIONS(264),
    [anon_sym_Long] = ACTIONS(264),
    [anon_sym_Float] = ACTIONS(264),
    [anon_sym_Double] = ACTIONS(264),
    [anon_sym_Vector2] = ACTIONS(267),
    [anon_sym_Vector3] = ACTIONS(267),
    [anon_sym_VectorN] = ACTIONS(264),
    [anon_sym_String] = ACTIONS(264),
    [anon_sym_Pattern] = ACTIONS(264),
    [anon_sym_Array] = ACTIONS(264),
    [anon_sym_Map] = ACTIONS(264),
    [anon_sym_Maybe] = ACTIONS(264),
    [anon_sym_Result] = ACTIONS(264),
    [anon_sym_Id] = ACTIONS(264),
    [anon_sym_Ptr] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(264),
  },
  [17] = {
    [sym__s_expr] = STATE(176),
    [sym__expr] = STATE(176),
    [sym__literals] = STATE(176),
    [sym__short_helper] = STATE(176),
    [sym_short_ref] = STATE(176),
    [sym_short_copy] = STATE(176),
    [sym_short_fn_ref] = STATE(176),
    [sym_short_quote] = STATE(176),
    [sym_bool_literal] = STATE(176),
    [sym_str_literal] = STATE(176),
    [sym_char_literal] = STATE(176),
    [sym_pattern_literal] = STATE(176),
    [sym_array_expression] = STATE(176),
    [sym_map_expression] = STATE(176),
    [sym_symbol] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(284),
    [sym_float_literal] = ACTIONS(286),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(284),
  },
  [18] = {
    [sym__short_helper] = STATE(14),
    [sym_type] = STATE(14),
    [sym_complex_type] = STATE(66),
    [sym_short_ref] = STATE(14),
    [sym_short_copy] = STATE(14),
    [sym_short_fn_ref] = STATE(14),
    [sym_short_quote] = STATE(14),
    [aux_sym_typed_parameters_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_Bool] = ACTIONS(241),
    [anon_sym_Char] = ACTIONS(241),
    [anon_sym_Int] = ACTIONS(241),
    [anon_sym_Long] = ACTIONS(241),
    [anon_sym_Float] = ACTIONS(241),
    [anon_sym_Double] = ACTIONS(241),
    [anon_sym_Vector2] = ACTIONS(243),
    [anon_sym_Vector3] = ACTIONS(243),
    [anon_sym_VectorN] = ACTIONS(241),
    [anon_sym_String] = ACTIONS(241),
    [anon_sym_Pattern] = ACTIONS(241),
    [anon_sym_Array] = ACTIONS(241),
    [anon_sym_Map] = ACTIONS(241),
    [anon_sym_Maybe] = ACTIONS(241),
    [anon_sym_Result] = ACTIONS(241),
    [anon_sym_Id] = ACTIONS(241),
    [anon_sym_Ptr] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(241),
  },
  [19] = {
    [sym__s_expr] = STATE(200),
    [sym__expr] = STATE(200),
    [sym__literals] = STATE(200),
    [sym__short_helper] = STATE(200),
    [sym_short_ref] = STATE(200),
    [sym_short_copy] = STATE(200),
    [sym_short_fn_ref] = STATE(200),
    [sym_short_quote] = STATE(200),
    [sym_bool_literal] = STATE(200),
    [sym_str_literal] = STATE(200),
    [sym_char_literal] = STATE(200),
    [sym_pattern_literal] = STATE(200),
    [sym_array_expression] = STATE(200),
    [sym_map_expression] = STATE(200),
    [sym_symbol] = STATE(200),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(292),
    [sym_float_literal] = ACTIONS(294),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(292),
  },
  [20] = {
    [sym__s_expr] = STATE(186),
    [sym__expr] = STATE(186),
    [sym__literals] = STATE(186),
    [sym__short_helper] = STATE(186),
    [sym_short_ref] = STATE(186),
    [sym_short_copy] = STATE(186),
    [sym_short_fn_ref] = STATE(186),
    [sym_short_quote] = STATE(186),
    [sym_bool_literal] = STATE(186),
    [sym_str_literal] = STATE(186),
    [sym_char_literal] = STATE(186),
    [sym_pattern_literal] = STATE(186),
    [sym_array_expression] = STATE(186),
    [sym_map_expression] = STATE(186),
    [sym_symbol] = STATE(186),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(298),
    [sym_float_literal] = ACTIONS(300),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(298),
  },
  [21] = {
    [sym__s_expr] = STATE(175),
    [sym__expr] = STATE(175),
    [sym__literals] = STATE(175),
    [sym__short_helper] = STATE(175),
    [sym_short_ref] = STATE(175),
    [sym_short_copy] = STATE(175),
    [sym_short_fn_ref] = STATE(175),
    [sym_short_quote] = STATE(175),
    [sym_bool_literal] = STATE(175),
    [sym_str_literal] = STATE(175),
    [sym_char_literal] = STATE(175),
    [sym_pattern_literal] = STATE(175),
    [sym_array_expression] = STATE(175),
    [sym_map_expression] = STATE(175),
    [sym_symbol] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(304),
    [sym_float_literal] = ACTIONS(306),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(304),
  },
  [22] = {
    [sym__s_expr] = STATE(174),
    [sym__expr] = STATE(174),
    [sym__literals] = STATE(174),
    [sym__short_helper] = STATE(174),
    [sym_short_ref] = STATE(174),
    [sym_short_copy] = STATE(174),
    [sym_short_fn_ref] = STATE(174),
    [sym_short_quote] = STATE(174),
    [sym_bool_literal] = STATE(174),
    [sym_str_literal] = STATE(174),
    [sym_char_literal] = STATE(174),
    [sym_pattern_literal] = STATE(174),
    [sym_array_expression] = STATE(174),
    [sym_map_expression] = STATE(174),
    [sym_symbol] = STATE(174),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(310),
    [sym_float_literal] = ACTIONS(312),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(310),
  },
  [23] = {
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
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(318),
    [sym_float_literal] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(322),
    [anon_sym_false] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(332),
    [sym_identifier] = ACTIONS(318),
  },
  [24] = {
    [sym__s_expr] = STATE(106),
    [sym__expr] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__short_helper] = STATE(106),
    [sym_short_ref] = STATE(106),
    [sym_short_copy] = STATE(106),
    [sym_short_fn_ref] = STATE(106),
    [sym_short_quote] = STATE(106),
    [sym_bool_literal] = STATE(106),
    [sym_str_literal] = STATE(106),
    [sym_char_literal] = STATE(106),
    [sym_pattern_literal] = STATE(106),
    [sym_array_expression] = STATE(106),
    [sym_map_expression] = STATE(106),
    [sym_symbol] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(334),
    [sym_float_literal] = ACTIONS(336),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(334),
  },
  [25] = {
    [sym__s_expr] = STATE(104),
    [sym__expr] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__short_helper] = STATE(104),
    [sym_short_ref] = STATE(104),
    [sym_short_copy] = STATE(104),
    [sym_short_fn_ref] = STATE(104),
    [sym_short_quote] = STATE(104),
    [sym_bool_literal] = STATE(104),
    [sym_str_literal] = STATE(104),
    [sym_char_literal] = STATE(104),
    [sym_pattern_literal] = STATE(104),
    [sym_array_expression] = STATE(104),
    [sym_map_expression] = STATE(104),
    [sym_symbol] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(338),
    [sym_float_literal] = ACTIONS(340),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(338),
  },
  [26] = {
    [sym__s_expr] = STATE(103),
    [sym__expr] = STATE(103),
    [sym__literals] = STATE(103),
    [sym__short_helper] = STATE(103),
    [sym_short_ref] = STATE(103),
    [sym_short_copy] = STATE(103),
    [sym_short_fn_ref] = STATE(103),
    [sym_short_quote] = STATE(103),
    [sym_bool_literal] = STATE(103),
    [sym_str_literal] = STATE(103),
    [sym_char_literal] = STATE(103),
    [sym_pattern_literal] = STATE(103),
    [sym_array_expression] = STATE(103),
    [sym_map_expression] = STATE(103),
    [sym_symbol] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(342),
    [sym_float_literal] = ACTIONS(344),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(342),
  },
  [27] = {
    [sym__s_expr] = STATE(112),
    [sym__expr] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__short_helper] = STATE(112),
    [sym_short_ref] = STATE(112),
    [sym_short_copy] = STATE(112),
    [sym_short_fn_ref] = STATE(112),
    [sym_short_quote] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [sym_symbol] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(346),
    [sym_float_literal] = ACTIONS(348),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(346),
  },
  [28] = {
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
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [sym_integer_literal] = ACTIONS(362),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(370),
    [anon_sym_POUND_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(362),
  },
  [29] = {
    [sym__s_expr] = STATE(58),
    [sym__expr] = STATE(58),
    [sym__literals] = STATE(58),
    [sym__short_helper] = STATE(58),
    [sym_short_ref] = STATE(58),
    [sym_short_copy] = STATE(58),
    [sym_short_fn_ref] = STATE(58),
    [sym_short_quote] = STATE(58),
    [sym_bool_literal] = STATE(58),
    [sym_str_literal] = STATE(58),
    [sym_char_literal] = STATE(58),
    [sym_pattern_literal] = STATE(58),
    [sym_array_expression] = STATE(58),
    [sym_map_expression] = STATE(58),
    [sym_symbol] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(378),
    [sym_float_literal] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(322),
    [anon_sym_false] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(332),
    [sym_identifier] = ACTIONS(378),
  },
  [30] = {
    [sym__s_expr] = STATE(61),
    [sym__expr] = STATE(61),
    [sym__literals] = STATE(61),
    [sym__short_helper] = STATE(61),
    [sym_short_ref] = STATE(61),
    [sym_short_copy] = STATE(61),
    [sym_short_fn_ref] = STATE(61),
    [sym_short_quote] = STATE(61),
    [sym_bool_literal] = STATE(61),
    [sym_str_literal] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_pattern_literal] = STATE(61),
    [sym_array_expression] = STATE(61),
    [sym_map_expression] = STATE(61),
    [sym_symbol] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(382),
    [sym_float_literal] = ACTIONS(384),
    [anon_sym_true] = ACTIONS(322),
    [anon_sym_false] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(332),
    [sym_identifier] = ACTIONS(382),
  },
  [31] = {
    [sym__s_expr] = STATE(63),
    [sym__expr] = STATE(63),
    [sym__literals] = STATE(63),
    [sym__short_helper] = STATE(63),
    [sym_short_ref] = STATE(63),
    [sym_short_copy] = STATE(63),
    [sym_short_fn_ref] = STATE(63),
    [sym_short_quote] = STATE(63),
    [sym_bool_literal] = STATE(63),
    [sym_str_literal] = STATE(63),
    [sym_char_literal] = STATE(63),
    [sym_pattern_literal] = STATE(63),
    [sym_array_expression] = STATE(63),
    [sym_map_expression] = STATE(63),
    [sym_symbol] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_integer_literal] = ACTIONS(386),
    [sym_float_literal] = ACTIONS(388),
    [anon_sym_true] = ACTIONS(322),
    [anon_sym_false] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(332),
    [sym_identifier] = ACTIONS(386),
  },
  [32] = {
    [sym__s_expr] = STATE(182),
    [sym__expr] = STATE(182),
    [sym__literals] = STATE(182),
    [sym__short_helper] = STATE(182),
    [sym_short_ref] = STATE(182),
    [sym_short_copy] = STATE(182),
    [sym_short_fn_ref] = STATE(182),
    [sym_short_quote] = STATE(182),
    [sym_bool_literal] = STATE(182),
    [sym_str_literal] = STATE(182),
    [sym_char_literal] = STATE(182),
    [sym_pattern_literal] = STATE(182),
    [sym_array_expression] = STATE(182),
    [sym_map_expression] = STATE(182),
    [sym_symbol] = STATE(182),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(390),
    [sym_float_literal] = ACTIONS(392),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(390),
  },
  [33] = {
    [sym__s_expr] = STATE(172),
    [sym__expr] = STATE(172),
    [sym__literals] = STATE(172),
    [sym__short_helper] = STATE(172),
    [sym_short_ref] = STATE(172),
    [sym_short_copy] = STATE(172),
    [sym_short_fn_ref] = STATE(172),
    [sym_short_quote] = STATE(172),
    [sym_bool_literal] = STATE(172),
    [sym_str_literal] = STATE(172),
    [sym_char_literal] = STATE(172),
    [sym_pattern_literal] = STATE(172),
    [sym_array_expression] = STATE(172),
    [sym_map_expression] = STATE(172),
    [sym_symbol] = STATE(172),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(394),
    [sym_float_literal] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(394),
  },
  [34] = {
    [sym__s_expr] = STATE(173),
    [sym__expr] = STATE(173),
    [sym__literals] = STATE(173),
    [sym__short_helper] = STATE(173),
    [sym_short_ref] = STATE(173),
    [sym_short_copy] = STATE(173),
    [sym_short_fn_ref] = STATE(173),
    [sym_short_quote] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [sym_symbol] = STATE(173),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(398),
    [sym_float_literal] = ACTIONS(400),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(398),
  },
  [35] = {
    [sym__s_expr] = STATE(165),
    [sym__expr] = STATE(165),
    [sym__literals] = STATE(165),
    [sym__short_helper] = STATE(165),
    [sym_short_ref] = STATE(165),
    [sym_short_copy] = STATE(165),
    [sym_short_fn_ref] = STATE(165),
    [sym_short_quote] = STATE(165),
    [sym_bool_literal] = STATE(165),
    [sym_str_literal] = STATE(165),
    [sym_char_literal] = STATE(165),
    [sym_pattern_literal] = STATE(165),
    [sym_array_expression] = STATE(165),
    [sym_map_expression] = STATE(165),
    [sym_symbol] = STATE(165),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [sym_integer_literal] = ACTIONS(402),
    [sym_float_literal] = ACTIONS(404),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(370),
    [anon_sym_POUND_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(402),
  },
  [36] = {
    [sym__s_expr] = STATE(185),
    [sym__expr] = STATE(185),
    [sym__literals] = STATE(185),
    [sym__short_helper] = STATE(185),
    [sym_short_ref] = STATE(185),
    [sym_short_copy] = STATE(185),
    [sym_short_fn_ref] = STATE(185),
    [sym_short_quote] = STATE(185),
    [sym_bool_literal] = STATE(185),
    [sym_str_literal] = STATE(185),
    [sym_char_literal] = STATE(185),
    [sym_pattern_literal] = STATE(185),
    [sym_array_expression] = STATE(185),
    [sym_map_expression] = STATE(185),
    [sym_symbol] = STATE(185),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(406),
    [sym_float_literal] = ACTIONS(408),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(406),
  },
  [37] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(410),
    [sym_float_literal] = ACTIONS(412),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(410),
  },
  [38] = {
    [sym__s_expr] = STATE(22),
    [sym__expr] = STATE(22),
    [sym__literals] = STATE(22),
    [sym__short_helper] = STATE(22),
    [sym_short_ref] = STATE(22),
    [sym_short_copy] = STATE(22),
    [sym_short_fn_ref] = STATE(22),
    [sym_short_quote] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [sym_symbol] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(414),
    [sym_float_literal] = ACTIONS(416),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(414),
  },
  [39] = {
    [sym__s_expr] = STATE(178),
    [sym__expr] = STATE(178),
    [sym__literals] = STATE(178),
    [sym__short_helper] = STATE(178),
    [sym_short_ref] = STATE(178),
    [sym_short_copy] = STATE(178),
    [sym_short_fn_ref] = STATE(178),
    [sym_short_quote] = STATE(178),
    [sym_bool_literal] = STATE(178),
    [sym_str_literal] = STATE(178),
    [sym_char_literal] = STATE(178),
    [sym_pattern_literal] = STATE(178),
    [sym_array_expression] = STATE(178),
    [sym_map_expression] = STATE(178),
    [sym_symbol] = STATE(178),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(418),
    [sym_float_literal] = ACTIONS(420),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(418),
  },
  [40] = {
    [sym__s_expr] = STATE(45),
    [sym__expr] = STATE(45),
    [sym__literals] = STATE(45),
    [sym__short_helper] = STATE(45),
    [sym_short_ref] = STATE(45),
    [sym_short_copy] = STATE(45),
    [sym_short_fn_ref] = STATE(45),
    [sym_short_quote] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_pattern_literal] = STATE(45),
    [sym_array_expression] = STATE(45),
    [sym_map_expression] = STATE(45),
    [sym_symbol] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(422),
    [sym_float_literal] = ACTIONS(424),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(422),
  },
  [41] = {
    [sym__s_expr] = STATE(166),
    [sym__expr] = STATE(166),
    [sym__literals] = STATE(166),
    [sym__short_helper] = STATE(166),
    [sym_short_ref] = STATE(166),
    [sym_short_copy] = STATE(166),
    [sym_short_fn_ref] = STATE(166),
    [sym_short_quote] = STATE(166),
    [sym_bool_literal] = STATE(166),
    [sym_str_literal] = STATE(166),
    [sym_char_literal] = STATE(166),
    [sym_pattern_literal] = STATE(166),
    [sym_array_expression] = STATE(166),
    [sym_map_expression] = STATE(166),
    [sym_symbol] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [sym_integer_literal] = ACTIONS(426),
    [sym_float_literal] = ACTIONS(428),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(370),
    [anon_sym_POUND_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(426),
  },
  [42] = {
    [sym__s_expr] = STATE(202),
    [sym__expr] = STATE(202),
    [sym__literals] = STATE(202),
    [sym__short_helper] = STATE(202),
    [sym_short_ref] = STATE(202),
    [sym_short_copy] = STATE(202),
    [sym_short_fn_ref] = STATE(202),
    [sym_short_quote] = STATE(202),
    [sym_bool_literal] = STATE(202),
    [sym_str_literal] = STATE(202),
    [sym_char_literal] = STATE(202),
    [sym_pattern_literal] = STATE(202),
    [sym_array_expression] = STATE(202),
    [sym_map_expression] = STATE(202),
    [sym_symbol] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(430),
    [sym_float_literal] = ACTIONS(432),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(430),
  },
  [43] = {
    [sym__s_expr] = STATE(167),
    [sym__expr] = STATE(167),
    [sym__literals] = STATE(167),
    [sym__short_helper] = STATE(167),
    [sym_short_ref] = STATE(167),
    [sym_short_copy] = STATE(167),
    [sym_short_fn_ref] = STATE(167),
    [sym_short_quote] = STATE(167),
    [sym_bool_literal] = STATE(167),
    [sym_str_literal] = STATE(167),
    [sym_char_literal] = STATE(167),
    [sym_pattern_literal] = STATE(167),
    [sym_array_expression] = STATE(167),
    [sym_map_expression] = STATE(167),
    [sym_symbol] = STATE(167),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [sym_integer_literal] = ACTIONS(434),
    [sym_float_literal] = ACTIONS(436),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(370),
    [anon_sym_POUND_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(434),
  },
  [44] = {
    [sym__s_expr] = STATE(154),
    [sym__expr] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__short_helper] = STATE(154),
    [sym_short_ref] = STATE(154),
    [sym_short_copy] = STATE(154),
    [sym_short_fn_ref] = STATE(154),
    [sym_short_quote] = STATE(154),
    [sym_bool_literal] = STATE(154),
    [sym_str_literal] = STATE(154),
    [sym_char_literal] = STATE(154),
    [sym_pattern_literal] = STATE(154),
    [sym_array_expression] = STATE(154),
    [sym_map_expression] = STATE(154),
    [sym_symbol] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [sym_integer_literal] = ACTIONS(438),
    [sym_float_literal] = ACTIONS(440),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(370),
    [anon_sym_POUND_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(438),
  },
  [45] = {
    [sym__s_expr] = STATE(42),
    [sym__expr] = STATE(42),
    [sym__literals] = STATE(42),
    [sym__short_helper] = STATE(42),
    [sym_short_ref] = STATE(42),
    [sym_short_copy] = STATE(42),
    [sym_short_fn_ref] = STATE(42),
    [sym_short_quote] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_char_literal] = STATE(42),
    [sym_pattern_literal] = STATE(42),
    [sym_array_expression] = STATE(42),
    [sym_map_expression] = STATE(42),
    [sym_symbol] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(442),
    [sym_float_literal] = ACTIONS(444),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(442),
  },
  [46] = {
    [sym__short_helper] = STATE(32),
    [sym_type] = STATE(32),
    [sym_complex_type] = STATE(117),
    [sym_short_ref] = STATE(32),
    [sym_short_copy] = STATE(32),
    [sym_short_fn_ref] = STATE(32),
    [sym_short_quote] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_Bool] = ACTIONS(448),
    [anon_sym_Char] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_Long] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Double] = ACTIONS(448),
    [anon_sym_Vector2] = ACTIONS(450),
    [anon_sym_Vector3] = ACTIONS(450),
    [anon_sym_VectorN] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_Pattern] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [anon_sym_Maybe] = ACTIONS(448),
    [anon_sym_Result] = ACTIONS(448),
    [anon_sym_Id] = ACTIONS(448),
    [anon_sym_Ptr] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(448),
  },
  [47] = {
    [sym__short_helper] = STATE(183),
    [sym_type] = STATE(183),
    [sym_complex_type] = STATE(117),
    [sym_short_ref] = STATE(183),
    [sym_short_copy] = STATE(183),
    [sym_short_fn_ref] = STATE(183),
    [sym_short_quote] = STATE(183),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_Bool] = ACTIONS(448),
    [anon_sym_Char] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_Long] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Double] = ACTIONS(448),
    [anon_sym_Vector2] = ACTIONS(450),
    [anon_sym_Vector3] = ACTIONS(450),
    [anon_sym_VectorN] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_Pattern] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [anon_sym_Maybe] = ACTIONS(448),
    [anon_sym_Result] = ACTIONS(448),
    [anon_sym_Id] = ACTIONS(448),
    [anon_sym_Ptr] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(448),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [anon_sym_Bool] = ACTIONS(456),
    [anon_sym_Char] = ACTIONS(456),
    [anon_sym_Int] = ACTIONS(456),
    [anon_sym_Long] = ACTIONS(456),
    [anon_sym_Float] = ACTIONS(456),
    [anon_sym_Double] = ACTIONS(456),
    [anon_sym_Vector2] = ACTIONS(454),
    [anon_sym_Vector3] = ACTIONS(454),
    [anon_sym_VectorN] = ACTIONS(456),
    [anon_sym_String] = ACTIONS(456),
    [anon_sym_Pattern] = ACTIONS(456),
    [anon_sym_Array] = ACTIONS(456),
    [anon_sym_Map] = ACTIONS(456),
    [anon_sym_Maybe] = ACTIONS(456),
    [anon_sym_Result] = ACTIONS(456),
    [anon_sym_Id] = ACTIONS(456),
    [anon_sym_Ptr] = ACTIONS(456),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_AT] = ACTIONS(454),
    [anon_sym_TILDE] = ACTIONS(454),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [sym_identifier] = ACTIONS(456),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [anon_sym_Bool] = ACTIONS(460),
    [anon_sym_Char] = ACTIONS(460),
    [anon_sym_Int] = ACTIONS(460),
    [anon_sym_Long] = ACTIONS(460),
    [anon_sym_Float] = ACTIONS(460),
    [anon_sym_Double] = ACTIONS(460),
    [anon_sym_Vector2] = ACTIONS(458),
    [anon_sym_Vector3] = ACTIONS(458),
    [anon_sym_VectorN] = ACTIONS(460),
    [anon_sym_String] = ACTIONS(460),
    [anon_sym_Pattern] = ACTIONS(460),
    [anon_sym_Array] = ACTIONS(460),
    [anon_sym_Map] = ACTIONS(460),
    [anon_sym_Maybe] = ACTIONS(460),
    [anon_sym_Result] = ACTIONS(460),
    [anon_sym_Id] = ACTIONS(460),
    [anon_sym_Ptr] = ACTIONS(460),
    [anon_sym_AMP] = ACTIONS(458),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_TILDE] = ACTIONS(458),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [anon_sym_Bool] = ACTIONS(464),
    [anon_sym_Char] = ACTIONS(464),
    [anon_sym_Int] = ACTIONS(464),
    [anon_sym_Long] = ACTIONS(464),
    [anon_sym_Float] = ACTIONS(464),
    [anon_sym_Double] = ACTIONS(464),
    [anon_sym_Vector2] = ACTIONS(462),
    [anon_sym_Vector3] = ACTIONS(462),
    [anon_sym_VectorN] = ACTIONS(464),
    [anon_sym_String] = ACTIONS(464),
    [anon_sym_Pattern] = ACTIONS(464),
    [anon_sym_Array] = ACTIONS(464),
    [anon_sym_Map] = ACTIONS(464),
    [anon_sym_Maybe] = ACTIONS(464),
    [anon_sym_Result] = ACTIONS(464),
    [anon_sym_Id] = ACTIONS(464),
    [anon_sym_Ptr] = ACTIONS(464),
    [anon_sym_AMP] = ACTIONS(462),
    [anon_sym_AT] = ACTIONS(462),
    [anon_sym_TILDE] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [anon_sym_Bool] = ACTIONS(468),
    [anon_sym_Char] = ACTIONS(468),
    [anon_sym_Int] = ACTIONS(468),
    [anon_sym_Long] = ACTIONS(468),
    [anon_sym_Float] = ACTIONS(468),
    [anon_sym_Double] = ACTIONS(468),
    [anon_sym_Vector2] = ACTIONS(466),
    [anon_sym_Vector3] = ACTIONS(466),
    [anon_sym_VectorN] = ACTIONS(468),
    [anon_sym_String] = ACTIONS(468),
    [anon_sym_Pattern] = ACTIONS(468),
    [anon_sym_Array] = ACTIONS(468),
    [anon_sym_Map] = ACTIONS(468),
    [anon_sym_Maybe] = ACTIONS(468),
    [anon_sym_Result] = ACTIONS(468),
    [anon_sym_Id] = ACTIONS(468),
    [anon_sym_Ptr] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_AT] = ACTIONS(466),
    [anon_sym_TILDE] = ACTIONS(466),
    [anon_sym_SQUOTE] = ACTIONS(466),
    [sym_identifier] = ACTIONS(468),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [anon_sym_Bool] = ACTIONS(472),
    [anon_sym_Char] = ACTIONS(472),
    [anon_sym_Int] = ACTIONS(472),
    [anon_sym_Long] = ACTIONS(472),
    [anon_sym_Float] = ACTIONS(472),
    [anon_sym_Double] = ACTIONS(472),
    [anon_sym_Vector2] = ACTIONS(470),
    [anon_sym_Vector3] = ACTIONS(470),
    [anon_sym_VectorN] = ACTIONS(472),
    [anon_sym_String] = ACTIONS(472),
    [anon_sym_Pattern] = ACTIONS(472),
    [anon_sym_Array] = ACTIONS(472),
    [anon_sym_Map] = ACTIONS(472),
    [anon_sym_Maybe] = ACTIONS(472),
    [anon_sym_Result] = ACTIONS(472),
    [anon_sym_Id] = ACTIONS(472),
    [anon_sym_Ptr] = ACTIONS(472),
    [anon_sym_AMP] = ACTIONS(470),
    [anon_sym_AT] = ACTIONS(470),
    [anon_sym_TILDE] = ACTIONS(470),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [sym_identifier] = ACTIONS(472),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_Bool] = ACTIONS(476),
    [anon_sym_Char] = ACTIONS(476),
    [anon_sym_Int] = ACTIONS(476),
    [anon_sym_Long] = ACTIONS(476),
    [anon_sym_Float] = ACTIONS(476),
    [anon_sym_Double] = ACTIONS(476),
    [anon_sym_Vector2] = ACTIONS(474),
    [anon_sym_Vector3] = ACTIONS(474),
    [anon_sym_VectorN] = ACTIONS(476),
    [anon_sym_String] = ACTIONS(476),
    [anon_sym_Pattern] = ACTIONS(476),
    [anon_sym_Array] = ACTIONS(476),
    [anon_sym_Map] = ACTIONS(476),
    [anon_sym_Maybe] = ACTIONS(476),
    [anon_sym_Result] = ACTIONS(476),
    [anon_sym_Id] = ACTIONS(476),
    [anon_sym_Ptr] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_AT] = ACTIONS(474),
    [anon_sym_TILDE] = ACTIONS(474),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [sym_identifier] = ACTIONS(476),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [anon_sym_Bool] = ACTIONS(480),
    [anon_sym_Char] = ACTIONS(480),
    [anon_sym_Int] = ACTIONS(480),
    [anon_sym_Long] = ACTIONS(480),
    [anon_sym_Float] = ACTIONS(480),
    [anon_sym_Double] = ACTIONS(480),
    [anon_sym_Vector2] = ACTIONS(478),
    [anon_sym_Vector3] = ACTIONS(478),
    [anon_sym_VectorN] = ACTIONS(480),
    [anon_sym_String] = ACTIONS(480),
    [anon_sym_Pattern] = ACTIONS(480),
    [anon_sym_Array] = ACTIONS(480),
    [anon_sym_Map] = ACTIONS(480),
    [anon_sym_Maybe] = ACTIONS(480),
    [anon_sym_Result] = ACTIONS(480),
    [anon_sym_Id] = ACTIONS(480),
    [anon_sym_Ptr] = ACTIONS(480),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_TILDE] = ACTIONS(478),
    [anon_sym_SQUOTE] = ACTIONS(478),
    [sym_identifier] = ACTIONS(480),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [anon_sym_Bool] = ACTIONS(484),
    [anon_sym_Char] = ACTIONS(484),
    [anon_sym_Int] = ACTIONS(484),
    [anon_sym_Long] = ACTIONS(484),
    [anon_sym_Float] = ACTIONS(484),
    [anon_sym_Double] = ACTIONS(484),
    [anon_sym_Vector2] = ACTIONS(482),
    [anon_sym_Vector3] = ACTIONS(482),
    [anon_sym_VectorN] = ACTIONS(484),
    [anon_sym_String] = ACTIONS(484),
    [anon_sym_Pattern] = ACTIONS(484),
    [anon_sym_Array] = ACTIONS(484),
    [anon_sym_Map] = ACTIONS(484),
    [anon_sym_Maybe] = ACTIONS(484),
    [anon_sym_Result] = ACTIONS(484),
    [anon_sym_Id] = ACTIONS(484),
    [anon_sym_Ptr] = ACTIONS(484),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_AT] = ACTIONS(482),
    [anon_sym_TILDE] = ACTIONS(482),
    [anon_sym_SQUOTE] = ACTIONS(482),
    [sym_identifier] = ACTIONS(484),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [anon_sym_Bool] = ACTIONS(488),
    [anon_sym_Char] = ACTIONS(488),
    [anon_sym_Int] = ACTIONS(488),
    [anon_sym_Long] = ACTIONS(488),
    [anon_sym_Float] = ACTIONS(488),
    [anon_sym_Double] = ACTIONS(488),
    [anon_sym_Vector2] = ACTIONS(486),
    [anon_sym_Vector3] = ACTIONS(486),
    [anon_sym_VectorN] = ACTIONS(488),
    [anon_sym_String] = ACTIONS(488),
    [anon_sym_Pattern] = ACTIONS(488),
    [anon_sym_Array] = ACTIONS(488),
    [anon_sym_Map] = ACTIONS(488),
    [anon_sym_Maybe] = ACTIONS(488),
    [anon_sym_Result] = ACTIONS(488),
    [anon_sym_Id] = ACTIONS(488),
    [anon_sym_Ptr] = ACTIONS(488),
    [anon_sym_AMP] = ACTIONS(486),
    [anon_sym_AT] = ACTIONS(486),
    [anon_sym_TILDE] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [sym_identifier] = ACTIONS(488),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [anon_sym_Bool] = ACTIONS(492),
    [anon_sym_Char] = ACTIONS(492),
    [anon_sym_Int] = ACTIONS(492),
    [anon_sym_Long] = ACTIONS(492),
    [anon_sym_Float] = ACTIONS(492),
    [anon_sym_Double] = ACTIONS(492),
    [anon_sym_Vector2] = ACTIONS(490),
    [anon_sym_Vector3] = ACTIONS(490),
    [anon_sym_VectorN] = ACTIONS(492),
    [anon_sym_String] = ACTIONS(492),
    [anon_sym_Pattern] = ACTIONS(492),
    [anon_sym_Array] = ACTIONS(492),
    [anon_sym_Map] = ACTIONS(492),
    [anon_sym_Maybe] = ACTIONS(492),
    [anon_sym_Result] = ACTIONS(492),
    [anon_sym_Id] = ACTIONS(492),
    [anon_sym_Ptr] = ACTIONS(492),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_AT] = ACTIONS(490),
    [anon_sym_TILDE] = ACTIONS(490),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [anon_sym_Bool] = ACTIONS(496),
    [anon_sym_Char] = ACTIONS(496),
    [anon_sym_Int] = ACTIONS(496),
    [anon_sym_Long] = ACTIONS(496),
    [anon_sym_Float] = ACTIONS(496),
    [anon_sym_Double] = ACTIONS(496),
    [anon_sym_Vector2] = ACTIONS(494),
    [anon_sym_Vector3] = ACTIONS(494),
    [anon_sym_VectorN] = ACTIONS(496),
    [anon_sym_String] = ACTIONS(496),
    [anon_sym_Pattern] = ACTIONS(496),
    [anon_sym_Array] = ACTIONS(496),
    [anon_sym_Map] = ACTIONS(496),
    [anon_sym_Maybe] = ACTIONS(496),
    [anon_sym_Result] = ACTIONS(496),
    [anon_sym_Id] = ACTIONS(496),
    [anon_sym_Ptr] = ACTIONS(496),
    [anon_sym_AMP] = ACTIONS(494),
    [anon_sym_AT] = ACTIONS(494),
    [anon_sym_TILDE] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(494),
    [sym_identifier] = ACTIONS(496),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [anon_sym_Bool] = ACTIONS(500),
    [anon_sym_Char] = ACTIONS(500),
    [anon_sym_Int] = ACTIONS(500),
    [anon_sym_Long] = ACTIONS(500),
    [anon_sym_Float] = ACTIONS(500),
    [anon_sym_Double] = ACTIONS(500),
    [anon_sym_Vector2] = ACTIONS(498),
    [anon_sym_Vector3] = ACTIONS(498),
    [anon_sym_VectorN] = ACTIONS(500),
    [anon_sym_String] = ACTIONS(500),
    [anon_sym_Pattern] = ACTIONS(500),
    [anon_sym_Array] = ACTIONS(500),
    [anon_sym_Map] = ACTIONS(500),
    [anon_sym_Maybe] = ACTIONS(500),
    [anon_sym_Result] = ACTIONS(500),
    [anon_sym_Id] = ACTIONS(500),
    [anon_sym_Ptr] = ACTIONS(500),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_AT] = ACTIONS(498),
    [anon_sym_TILDE] = ACTIONS(498),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [sym_identifier] = ACTIONS(500),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [anon_sym_Bool] = ACTIONS(504),
    [anon_sym_Char] = ACTIONS(504),
    [anon_sym_Int] = ACTIONS(504),
    [anon_sym_Long] = ACTIONS(504),
    [anon_sym_Float] = ACTIONS(504),
    [anon_sym_Double] = ACTIONS(504),
    [anon_sym_Vector2] = ACTIONS(502),
    [anon_sym_Vector3] = ACTIONS(502),
    [anon_sym_VectorN] = ACTIONS(504),
    [anon_sym_String] = ACTIONS(504),
    [anon_sym_Pattern] = ACTIONS(504),
    [anon_sym_Array] = ACTIONS(504),
    [anon_sym_Map] = ACTIONS(504),
    [anon_sym_Maybe] = ACTIONS(504),
    [anon_sym_Result] = ACTIONS(504),
    [anon_sym_Id] = ACTIONS(504),
    [anon_sym_Ptr] = ACTIONS(504),
    [anon_sym_AMP] = ACTIONS(502),
    [anon_sym_AT] = ACTIONS(502),
    [anon_sym_TILDE] = ACTIONS(502),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
    [anon_sym_Bool] = ACTIONS(508),
    [anon_sym_Char] = ACTIONS(508),
    [anon_sym_Int] = ACTIONS(508),
    [anon_sym_Long] = ACTIONS(508),
    [anon_sym_Float] = ACTIONS(508),
    [anon_sym_Double] = ACTIONS(508),
    [anon_sym_Vector2] = ACTIONS(506),
    [anon_sym_Vector3] = ACTIONS(506),
    [anon_sym_VectorN] = ACTIONS(508),
    [anon_sym_String] = ACTIONS(508),
    [anon_sym_Pattern] = ACTIONS(508),
    [anon_sym_Array] = ACTIONS(508),
    [anon_sym_Map] = ACTIONS(508),
    [anon_sym_Maybe] = ACTIONS(508),
    [anon_sym_Result] = ACTIONS(508),
    [anon_sym_Id] = ACTIONS(508),
    [anon_sym_Ptr] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(506),
    [anon_sym_AT] = ACTIONS(506),
    [anon_sym_TILDE] = ACTIONS(506),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_identifier] = ACTIONS(508),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [anon_sym_Bool] = ACTIONS(512),
    [anon_sym_Char] = ACTIONS(512),
    [anon_sym_Int] = ACTIONS(512),
    [anon_sym_Long] = ACTIONS(512),
    [anon_sym_Float] = ACTIONS(512),
    [anon_sym_Double] = ACTIONS(512),
    [anon_sym_Vector2] = ACTIONS(510),
    [anon_sym_Vector3] = ACTIONS(510),
    [anon_sym_VectorN] = ACTIONS(512),
    [anon_sym_String] = ACTIONS(512),
    [anon_sym_Pattern] = ACTIONS(512),
    [anon_sym_Array] = ACTIONS(512),
    [anon_sym_Map] = ACTIONS(512),
    [anon_sym_Maybe] = ACTIONS(512),
    [anon_sym_Result] = ACTIONS(512),
    [anon_sym_Id] = ACTIONS(512),
    [anon_sym_Ptr] = ACTIONS(512),
    [anon_sym_AMP] = ACTIONS(510),
    [anon_sym_AT] = ACTIONS(510),
    [anon_sym_TILDE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [sym_identifier] = ACTIONS(512),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_RBRACK] = ACTIONS(514),
    [anon_sym_Bool] = ACTIONS(516),
    [anon_sym_Char] = ACTIONS(516),
    [anon_sym_Int] = ACTIONS(516),
    [anon_sym_Long] = ACTIONS(516),
    [anon_sym_Float] = ACTIONS(516),
    [anon_sym_Double] = ACTIONS(516),
    [anon_sym_Vector2] = ACTIONS(514),
    [anon_sym_Vector3] = ACTIONS(514),
    [anon_sym_VectorN] = ACTIONS(516),
    [anon_sym_String] = ACTIONS(516),
    [anon_sym_Pattern] = ACTIONS(516),
    [anon_sym_Array] = ACTIONS(516),
    [anon_sym_Map] = ACTIONS(516),
    [anon_sym_Maybe] = ACTIONS(516),
    [anon_sym_Result] = ACTIONS(516),
    [anon_sym_Id] = ACTIONS(516),
    [anon_sym_Ptr] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(514),
    [anon_sym_AT] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(514),
    [sym_identifier] = ACTIONS(516),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(518),
    [anon_sym_RBRACK] = ACTIONS(518),
    [anon_sym_Bool] = ACTIONS(520),
    [anon_sym_Char] = ACTIONS(520),
    [anon_sym_Int] = ACTIONS(520),
    [anon_sym_Long] = ACTIONS(520),
    [anon_sym_Float] = ACTIONS(520),
    [anon_sym_Double] = ACTIONS(520),
    [anon_sym_Vector2] = ACTIONS(518),
    [anon_sym_Vector3] = ACTIONS(518),
    [anon_sym_VectorN] = ACTIONS(520),
    [anon_sym_String] = ACTIONS(520),
    [anon_sym_Pattern] = ACTIONS(520),
    [anon_sym_Array] = ACTIONS(520),
    [anon_sym_Map] = ACTIONS(520),
    [anon_sym_Maybe] = ACTIONS(520),
    [anon_sym_Result] = ACTIONS(520),
    [anon_sym_Id] = ACTIONS(520),
    [anon_sym_Ptr] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_TILDE] = ACTIONS(518),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [sym_identifier] = ACTIONS(520),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(522),
    [anon_sym_RBRACK] = ACTIONS(522),
    [anon_sym_Bool] = ACTIONS(524),
    [anon_sym_Char] = ACTIONS(524),
    [anon_sym_Int] = ACTIONS(524),
    [anon_sym_Long] = ACTIONS(524),
    [anon_sym_Float] = ACTIONS(524),
    [anon_sym_Double] = ACTIONS(524),
    [anon_sym_Vector2] = ACTIONS(522),
    [anon_sym_Vector3] = ACTIONS(522),
    [anon_sym_VectorN] = ACTIONS(524),
    [anon_sym_String] = ACTIONS(524),
    [anon_sym_Pattern] = ACTIONS(524),
    [anon_sym_Array] = ACTIONS(524),
    [anon_sym_Map] = ACTIONS(524),
    [anon_sym_Maybe] = ACTIONS(524),
    [anon_sym_Result] = ACTIONS(524),
    [anon_sym_Id] = ACTIONS(524),
    [anon_sym_Ptr] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(522),
    [anon_sym_TILDE] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [sym_identifier] = ACTIONS(524),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_Bool] = ACTIONS(528),
    [anon_sym_Char] = ACTIONS(528),
    [anon_sym_Int] = ACTIONS(528),
    [anon_sym_Long] = ACTIONS(528),
    [anon_sym_Float] = ACTIONS(528),
    [anon_sym_Double] = ACTIONS(528),
    [anon_sym_Vector2] = ACTIONS(526),
    [anon_sym_Vector3] = ACTIONS(526),
    [anon_sym_VectorN] = ACTIONS(528),
    [anon_sym_String] = ACTIONS(528),
    [anon_sym_Pattern] = ACTIONS(528),
    [anon_sym_Array] = ACTIONS(528),
    [anon_sym_Map] = ACTIONS(528),
    [anon_sym_Maybe] = ACTIONS(528),
    [anon_sym_Result] = ACTIONS(528),
    [anon_sym_Id] = ACTIONS(528),
    [anon_sym_Ptr] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_TILDE] = ACTIONS(526),
    [anon_sym_SQUOTE] = ACTIONS(526),
    [sym_identifier] = ACTIONS(528),
  },
  [67] = {
    [sym_interface_fn] = STATE(187),
    [aux_sym_complex_type_repeat1] = STATE(72),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_Bool] = ACTIONS(532),
    [anon_sym_Char] = ACTIONS(532),
    [anon_sym_Int] = ACTIONS(532),
    [anon_sym_Long] = ACTIONS(532),
    [anon_sym_Float] = ACTIONS(532),
    [anon_sym_Double] = ACTIONS(532),
    [anon_sym_Vector2] = ACTIONS(534),
    [anon_sym_Vector3] = ACTIONS(534),
    [anon_sym_VectorN] = ACTIONS(532),
    [anon_sym_String] = ACTIONS(532),
    [anon_sym_Pattern] = ACTIONS(532),
    [anon_sym_Array] = ACTIONS(532),
    [anon_sym_Map] = ACTIONS(532),
    [anon_sym_Maybe] = ACTIONS(532),
    [anon_sym_Result] = ACTIONS(532),
    [anon_sym_Id] = ACTIONS(532),
    [anon_sym_Ptr] = ACTIONS(532),
    [anon_sym_Fn] = ACTIONS(536),
    [anon_sym_] = ACTIONS(536),
    [sym_identifier] = ACTIONS(532),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_Bool] = ACTIONS(540),
    [anon_sym_Char] = ACTIONS(540),
    [anon_sym_Int] = ACTIONS(540),
    [anon_sym_Long] = ACTIONS(540),
    [anon_sym_Float] = ACTIONS(540),
    [anon_sym_Double] = ACTIONS(540),
    [anon_sym_Vector2] = ACTIONS(538),
    [anon_sym_Vector3] = ACTIONS(538),
    [anon_sym_VectorN] = ACTIONS(540),
    [anon_sym_String] = ACTIONS(540),
    [anon_sym_Pattern] = ACTIONS(540),
    [anon_sym_Array] = ACTIONS(540),
    [anon_sym_Map] = ACTIONS(540),
    [anon_sym_Maybe] = ACTIONS(540),
    [anon_sym_Result] = ACTIONS(540),
    [anon_sym_Id] = ACTIONS(540),
    [anon_sym_Ptr] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_TILDE] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [sym_identifier] = ACTIONS(540),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_Bool] = ACTIONS(544),
    [anon_sym_Char] = ACTIONS(544),
    [anon_sym_Int] = ACTIONS(544),
    [anon_sym_Long] = ACTIONS(544),
    [anon_sym_Float] = ACTIONS(544),
    [anon_sym_Double] = ACTIONS(544),
    [anon_sym_Vector2] = ACTIONS(542),
    [anon_sym_Vector3] = ACTIONS(542),
    [anon_sym_VectorN] = ACTIONS(544),
    [anon_sym_String] = ACTIONS(544),
    [anon_sym_Pattern] = ACTIONS(544),
    [anon_sym_Array] = ACTIONS(544),
    [anon_sym_Map] = ACTIONS(544),
    [anon_sym_Maybe] = ACTIONS(544),
    [anon_sym_Result] = ACTIONS(544),
    [anon_sym_Id] = ACTIONS(544),
    [anon_sym_Ptr] = ACTIONS(544),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(542),
    [sym_identifier] = ACTIONS(544),
  },
  [70] = {
    [sym_type] = STATE(33),
    [sym_complex_type] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_Bool] = ACTIONS(448),
    [anon_sym_Char] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_Long] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Double] = ACTIONS(448),
    [anon_sym_Vector2] = ACTIONS(450),
    [anon_sym_Vector3] = ACTIONS(450),
    [anon_sym_VectorN] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_Pattern] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [anon_sym_Maybe] = ACTIONS(448),
    [anon_sym_Result] = ACTIONS(448),
    [anon_sym_Id] = ACTIONS(448),
    [anon_sym_Ptr] = ACTIONS(448),
    [sym_identifier] = ACTIONS(448),
  },
  [71] = {
    [aux_sym_complex_type_repeat1] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_Bool] = ACTIONS(548),
    [anon_sym_Char] = ACTIONS(548),
    [anon_sym_Int] = ACTIONS(548),
    [anon_sym_Long] = ACTIONS(548),
    [anon_sym_Float] = ACTIONS(548),
    [anon_sym_Double] = ACTIONS(548),
    [anon_sym_Vector2] = ACTIONS(551),
    [anon_sym_Vector3] = ACTIONS(551),
    [anon_sym_VectorN] = ACTIONS(548),
    [anon_sym_String] = ACTIONS(548),
    [anon_sym_Pattern] = ACTIONS(548),
    [anon_sym_Array] = ACTIONS(548),
    [anon_sym_Map] = ACTIONS(548),
    [anon_sym_Maybe] = ACTIONS(548),
    [anon_sym_Result] = ACTIONS(548),
    [anon_sym_Id] = ACTIONS(548),
    [anon_sym_Ptr] = ACTIONS(548),
    [sym_identifier] = ACTIONS(548),
  },
  [72] = {
    [aux_sym_complex_type_repeat1] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_Bool] = ACTIONS(556),
    [anon_sym_Char] = ACTIONS(556),
    [anon_sym_Int] = ACTIONS(556),
    [anon_sym_Long] = ACTIONS(556),
    [anon_sym_Float] = ACTIONS(556),
    [anon_sym_Double] = ACTIONS(556),
    [anon_sym_Vector2] = ACTIONS(558),
    [anon_sym_Vector3] = ACTIONS(558),
    [anon_sym_VectorN] = ACTIONS(556),
    [anon_sym_String] = ACTIONS(556),
    [anon_sym_Pattern] = ACTIONS(556),
    [anon_sym_Array] = ACTIONS(556),
    [anon_sym_Map] = ACTIONS(556),
    [anon_sym_Maybe] = ACTIONS(556),
    [anon_sym_Result] = ACTIONS(556),
    [anon_sym_Id] = ACTIONS(556),
    [anon_sym_Ptr] = ACTIONS(556),
    [sym_identifier] = ACTIONS(556),
  },
  [73] = {
    [aux_sym_complex_type_repeat1] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(560),
    [anon_sym_Bool] = ACTIONS(556),
    [anon_sym_Char] = ACTIONS(556),
    [anon_sym_Int] = ACTIONS(556),
    [anon_sym_Long] = ACTIONS(556),
    [anon_sym_Float] = ACTIONS(556),
    [anon_sym_Double] = ACTIONS(556),
    [anon_sym_Vector2] = ACTIONS(558),
    [anon_sym_Vector3] = ACTIONS(558),
    [anon_sym_VectorN] = ACTIONS(556),
    [anon_sym_String] = ACTIONS(556),
    [anon_sym_Pattern] = ACTIONS(556),
    [anon_sym_Array] = ACTIONS(556),
    [anon_sym_Map] = ACTIONS(556),
    [anon_sym_Maybe] = ACTIONS(556),
    [anon_sym_Result] = ACTIONS(556),
    [anon_sym_Id] = ACTIONS(556),
    [anon_sym_Ptr] = ACTIONS(556),
    [sym_identifier] = ACTIONS(556),
  },
  [74] = {
    [aux_sym_complex_type_repeat1] = STATE(73),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_Bool] = ACTIONS(564),
    [anon_sym_Char] = ACTIONS(564),
    [anon_sym_Int] = ACTIONS(564),
    [anon_sym_Long] = ACTIONS(564),
    [anon_sym_Float] = ACTIONS(564),
    [anon_sym_Double] = ACTIONS(564),
    [anon_sym_Vector2] = ACTIONS(566),
    [anon_sym_Vector3] = ACTIONS(566),
    [anon_sym_VectorN] = ACTIONS(564),
    [anon_sym_String] = ACTIONS(564),
    [anon_sym_Pattern] = ACTIONS(564),
    [anon_sym_Array] = ACTIONS(564),
    [anon_sym_Map] = ACTIONS(564),
    [anon_sym_Maybe] = ACTIONS(564),
    [anon_sym_Result] = ACTIONS(564),
    [anon_sym_Id] = ACTIONS(564),
    [anon_sym_Ptr] = ACTIONS(564),
    [sym_identifier] = ACTIONS(564),
  },
  [75] = {
    [aux_sym_complex_type_repeat1] = STATE(72),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_Bool] = ACTIONS(532),
    [anon_sym_Char] = ACTIONS(532),
    [anon_sym_Int] = ACTIONS(532),
    [anon_sym_Long] = ACTIONS(532),
    [anon_sym_Float] = ACTIONS(532),
    [anon_sym_Double] = ACTIONS(532),
    [anon_sym_Vector2] = ACTIONS(534),
    [anon_sym_Vector3] = ACTIONS(534),
    [anon_sym_VectorN] = ACTIONS(532),
    [anon_sym_String] = ACTIONS(532),
    [anon_sym_Pattern] = ACTIONS(532),
    [anon_sym_Array] = ACTIONS(532),
    [anon_sym_Map] = ACTIONS(532),
    [anon_sym_Maybe] = ACTIONS(532),
    [anon_sym_Result] = ACTIONS(532),
    [anon_sym_Id] = ACTIONS(532),
    [anon_sym_Ptr] = ACTIONS(532),
    [sym_identifier] = ACTIONS(532),
  },
  [76] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(572),
    [sym_identifier] = ACTIONS(568),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [anon_sym_AMP] = ACTIONS(510),
    [anon_sym_AT] = ACTIONS(510),
    [anon_sym_TILDE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [sym_integer_literal] = ACTIONS(512),
    [sym_float_literal] = ACTIONS(510),
    [anon_sym_true] = ACTIONS(512),
    [anon_sym_false] = ACTIONS(512),
    [anon_sym_DQUOTE] = ACTIONS(510),
    [anon_sym_BSLASH] = ACTIONS(510),
    [anon_sym_POUND_DQUOTE] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [sym_identifier] = ACTIONS(512),
  },
  [78] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(574),
    [sym_identifier] = ACTIONS(568),
  },
  [79] = {
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [aux_sym_array_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(576),
    [sym_integer_literal] = ACTIONS(578),
    [sym_float_literal] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(578),
  },
  [80] = {
    [sym__literals] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_array_expression_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(582),
    [sym_integer_literal] = ACTIONS(584),
    [sym_float_literal] = ACTIONS(586),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(584),
  },
  [81] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(78),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(588),
    [sym_identifier] = ACTIONS(568),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_AT] = ACTIONS(498),
    [anon_sym_TILDE] = ACTIONS(498),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [sym_integer_literal] = ACTIONS(500),
    [sym_float_literal] = ACTIONS(498),
    [anon_sym_true] = ACTIONS(500),
    [anon_sym_false] = ACTIONS(500),
    [anon_sym_DQUOTE] = ACTIONS(498),
    [anon_sym_BSLASH] = ACTIONS(498),
    [anon_sym_POUND_DQUOTE] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [sym_identifier] = ACTIONS(500),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_AT] = ACTIONS(490),
    [anon_sym_TILDE] = ACTIONS(490),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [sym_integer_literal] = ACTIONS(492),
    [sym_float_literal] = ACTIONS(490),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_false] = ACTIONS(492),
    [anon_sym_DQUOTE] = ACTIONS(490),
    [anon_sym_BSLASH] = ACTIONS(490),
    [anon_sym_POUND_DQUOTE] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
  },
  [84] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(590),
    [sym_identifier] = ACTIONS(568),
  },
  [85] = {
    [sym__literals] = STATE(79),
    [sym_bool_literal] = STATE(79),
    [sym_str_literal] = STATE(79),
    [sym_char_literal] = STATE(79),
    [sym_pattern_literal] = STATE(79),
    [sym_array_expression] = STATE(79),
    [sym_map_expression] = STATE(79),
    [aux_sym_array_expression_repeat1] = STATE(79),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(592),
    [sym_integer_literal] = ACTIONS(594),
    [sym_float_literal] = ACTIONS(596),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(594),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_AT] = ACTIONS(466),
    [anon_sym_TILDE] = ACTIONS(466),
    [anon_sym_SQUOTE] = ACTIONS(466),
    [sym_integer_literal] = ACTIONS(468),
    [sym_float_literal] = ACTIONS(466),
    [anon_sym_true] = ACTIONS(468),
    [anon_sym_false] = ACTIONS(468),
    [anon_sym_DQUOTE] = ACTIONS(466),
    [anon_sym_BSLASH] = ACTIONS(466),
    [anon_sym_POUND_DQUOTE] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_COLON] = ACTIONS(466),
    [sym_identifier] = ACTIONS(468),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_TILDE] = ACTIONS(478),
    [anon_sym_SQUOTE] = ACTIONS(478),
    [sym_integer_literal] = ACTIONS(480),
    [sym_float_literal] = ACTIONS(478),
    [anon_sym_true] = ACTIONS(480),
    [anon_sym_false] = ACTIONS(480),
    [anon_sym_DQUOTE] = ACTIONS(478),
    [anon_sym_BSLASH] = ACTIONS(478),
    [anon_sym_POUND_DQUOTE] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_identifier] = ACTIONS(480),
  },
  [88] = {
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [aux_sym_array_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(601),
    [sym_integer_literal] = ACTIONS(603),
    [sym_float_literal] = ACTIONS(606),
    [anon_sym_true] = ACTIONS(609),
    [anon_sym_false] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [anon_sym_BSLASH] = ACTIONS(615),
    [anon_sym_POUND_DQUOTE] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(621),
    [sym_identifier] = ACTIONS(603),
  },
  [89] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(624),
    [sym_integer_literal] = ACTIONS(627),
    [sym_float_literal] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(633),
    [anon_sym_false] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [anon_sym_BSLASH] = ACTIONS(639),
    [anon_sym_POUND_DQUOTE] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(648),
    [sym_identifier] = ACTIONS(627),
  },
  [90] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(650),
    [sym_identifier] = ACTIONS(568),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_LBRACK] = ACTIONS(522),
    [anon_sym_RBRACK] = ACTIONS(522),
    [anon_sym_AMP] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(522),
    [anon_sym_TILDE] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [sym_integer_literal] = ACTIONS(524),
    [sym_float_literal] = ACTIONS(522),
    [anon_sym_true] = ACTIONS(524),
    [anon_sym_false] = ACTIONS(524),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [anon_sym_BSLASH] = ACTIONS(522),
    [anon_sym_POUND_DQUOTE] = ACTIONS(522),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(522),
    [sym_identifier] = ACTIONS(524),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_AT] = ACTIONS(454),
    [anon_sym_TILDE] = ACTIONS(454),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [sym_integer_literal] = ACTIONS(456),
    [sym_float_literal] = ACTIONS(454),
    [anon_sym_true] = ACTIONS(456),
    [anon_sym_false] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [anon_sym_BSLASH] = ACTIONS(454),
    [anon_sym_POUND_DQUOTE] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
    [sym_identifier] = ACTIONS(456),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [anon_sym_AMP] = ACTIONS(458),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_TILDE] = ACTIONS(458),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [sym_integer_literal] = ACTIONS(460),
    [sym_float_literal] = ACTIONS(458),
    [anon_sym_true] = ACTIONS(460),
    [anon_sym_false] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [anon_sym_BSLASH] = ACTIONS(458),
    [anon_sym_POUND_DQUOTE] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(458),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_COLON] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [94] = {
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [aux_sym_array_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(652),
    [sym_integer_literal] = ACTIONS(578),
    [sym_float_literal] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(578),
  },
  [95] = {
    [sym__literals] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_char_literal] = STATE(97),
    [sym_pattern_literal] = STATE(97),
    [sym_array_expression] = STATE(97),
    [sym_map_expression] = STATE(97),
    [aux_sym_array_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(654),
    [sym_integer_literal] = ACTIONS(656),
    [sym_float_literal] = ACTIONS(658),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(656),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(518),
    [anon_sym_RBRACK] = ACTIONS(518),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_TILDE] = ACTIONS(518),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [sym_integer_literal] = ACTIONS(520),
    [sym_float_literal] = ACTIONS(518),
    [anon_sym_true] = ACTIONS(520),
    [anon_sym_false] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [anon_sym_BSLASH] = ACTIONS(518),
    [anon_sym_POUND_DQUOTE] = ACTIONS(518),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_COLON] = ACTIONS(518),
    [sym_identifier] = ACTIONS(520),
  },
  [97] = {
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [aux_sym_array_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(660),
    [sym_integer_literal] = ACTIONS(578),
    [sym_float_literal] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(578),
  },
  [98] = {
    [sym__literals] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [aux_sym_map_expression_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(662),
    [sym_identifier] = ACTIONS(568),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_AT] = ACTIONS(474),
    [anon_sym_TILDE] = ACTIONS(474),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [sym_integer_literal] = ACTIONS(476),
    [sym_float_literal] = ACTIONS(474),
    [anon_sym_true] = ACTIONS(476),
    [anon_sym_false] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(474),
    [anon_sym_POUND_DQUOTE] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(474),
    [sym_identifier] = ACTIONS(476),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [anon_sym_AMP] = ACTIONS(502),
    [anon_sym_AT] = ACTIONS(502),
    [anon_sym_TILDE] = ACTIONS(502),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [sym_integer_literal] = ACTIONS(504),
    [sym_float_literal] = ACTIONS(502),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_false] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [anon_sym_BSLASH] = ACTIONS(502),
    [anon_sym_POUND_DQUOTE] = ACTIONS(502),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_DOT] = ACTIONS(666),
    [anon_sym_AMP] = ACTIONS(664),
    [anon_sym_AT] = ACTIONS(664),
    [anon_sym_TILDE] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [sym_integer_literal] = ACTIONS(668),
    [sym_float_literal] = ACTIONS(664),
    [anon_sym_true] = ACTIONS(668),
    [anon_sym_false] = ACTIONS(668),
    [anon_sym_DQUOTE] = ACTIONS(664),
    [anon_sym_BSLASH] = ACTIONS(664),
    [anon_sym_POUND_DQUOTE] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_COLON] = ACTIONS(664),
    [sym_identifier] = ACTIONS(668),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(470),
    [anon_sym_AT] = ACTIONS(470),
    [anon_sym_TILDE] = ACTIONS(470),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [sym_integer_literal] = ACTIONS(472),
    [sym_float_literal] = ACTIONS(470),
    [anon_sym_true] = ACTIONS(472),
    [anon_sym_false] = ACTIONS(472),
    [anon_sym_DQUOTE] = ACTIONS(470),
    [anon_sym_BSLASH] = ACTIONS(470),
    [anon_sym_POUND_DQUOTE] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [sym_identifier] = ACTIONS(472),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_AT] = ACTIONS(482),
    [anon_sym_TILDE] = ACTIONS(482),
    [anon_sym_SQUOTE] = ACTIONS(482),
    [sym_integer_literal] = ACTIONS(484),
    [sym_float_literal] = ACTIONS(482),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_false] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(482),
    [anon_sym_BSLASH] = ACTIONS(482),
    [anon_sym_POUND_DQUOTE] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [sym_identifier] = ACTIONS(484),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_AMP] = ACTIONS(494),
    [anon_sym_AT] = ACTIONS(494),
    [anon_sym_TILDE] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(494),
    [sym_integer_literal] = ACTIONS(496),
    [sym_float_literal] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_false] = ACTIONS(496),
    [anon_sym_DQUOTE] = ACTIONS(494),
    [anon_sym_BSLASH] = ACTIONS(494),
    [anon_sym_POUND_DQUOTE] = ACTIONS(494),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [sym_identifier] = ACTIONS(496),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_RPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_AMP] = ACTIONS(670),
    [anon_sym_AT] = ACTIONS(670),
    [anon_sym_TILDE] = ACTIONS(670),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [sym_integer_literal] = ACTIONS(672),
    [sym_float_literal] = ACTIONS(670),
    [anon_sym_true] = ACTIONS(672),
    [anon_sym_false] = ACTIONS(672),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_BSLASH] = ACTIONS(670),
    [anon_sym_POUND_DQUOTE] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(670),
    [sym_identifier] = ACTIONS(672),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_AMP] = ACTIONS(506),
    [anon_sym_AT] = ACTIONS(506),
    [anon_sym_TILDE] = ACTIONS(506),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_integer_literal] = ACTIONS(508),
    [sym_float_literal] = ACTIONS(506),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_false] = ACTIONS(508),
    [anon_sym_DQUOTE] = ACTIONS(506),
    [anon_sym_BSLASH] = ACTIONS(506),
    [anon_sym_POUND_DQUOTE] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [sym_identifier] = ACTIONS(508),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_AMP] = ACTIONS(674),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_TILDE] = ACTIONS(674),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [sym_integer_literal] = ACTIONS(676),
    [sym_float_literal] = ACTIONS(674),
    [anon_sym_true] = ACTIONS(676),
    [anon_sym_false] = ACTIONS(676),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [anon_sym_BSLASH] = ACTIONS(674),
    [anon_sym_POUND_DQUOTE] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [sym_identifier] = ACTIONS(676),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(462),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_AMP] = ACTIONS(462),
    [anon_sym_AT] = ACTIONS(462),
    [anon_sym_TILDE] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [sym_integer_literal] = ACTIONS(464),
    [sym_float_literal] = ACTIONS(462),
    [anon_sym_true] = ACTIONS(464),
    [anon_sym_false] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [anon_sym_BSLASH] = ACTIONS(462),
    [anon_sym_POUND_DQUOTE] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_AMP] = ACTIONS(678),
    [anon_sym_AT] = ACTIONS(678),
    [anon_sym_TILDE] = ACTIONS(678),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [sym_integer_literal] = ACTIONS(680),
    [sym_float_literal] = ACTIONS(678),
    [anon_sym_true] = ACTIONS(680),
    [anon_sym_false] = ACTIONS(680),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_BSLASH] = ACTIONS(678),
    [anon_sym_POUND_DQUOTE] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [sym_identifier] = ACTIONS(680),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_AMP] = ACTIONS(682),
    [anon_sym_AT] = ACTIONS(682),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [sym_integer_literal] = ACTIONS(684),
    [sym_float_literal] = ACTIONS(682),
    [anon_sym_true] = ACTIONS(684),
    [anon_sym_false] = ACTIONS(684),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_BSLASH] = ACTIONS(682),
    [anon_sym_POUND_DQUOTE] = ACTIONS(682),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(682),
    [sym_identifier] = ACTIONS(684),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(686),
    [anon_sym_AMP] = ACTIONS(686),
    [anon_sym_AT] = ACTIONS(686),
    [anon_sym_TILDE] = ACTIONS(686),
    [anon_sym_SQUOTE] = ACTIONS(686),
    [sym_integer_literal] = ACTIONS(688),
    [sym_float_literal] = ACTIONS(686),
    [anon_sym_true] = ACTIONS(688),
    [anon_sym_false] = ACTIONS(688),
    [anon_sym_DQUOTE] = ACTIONS(686),
    [anon_sym_BSLASH] = ACTIONS(686),
    [anon_sym_POUND_DQUOTE] = ACTIONS(686),
    [anon_sym_LBRACE] = ACTIONS(686),
    [anon_sym_COLON] = ACTIONS(686),
    [sym_identifier] = ACTIONS(688),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_LBRACK] = ACTIONS(514),
    [anon_sym_AMP] = ACTIONS(514),
    [anon_sym_AT] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(514),
    [sym_integer_literal] = ACTIONS(516),
    [sym_float_literal] = ACTIONS(514),
    [anon_sym_true] = ACTIONS(516),
    [anon_sym_false] = ACTIONS(516),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [anon_sym_BSLASH] = ACTIONS(514),
    [anon_sym_POUND_DQUOTE] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [sym_identifier] = ACTIONS(516),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(690),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_LBRACK] = ACTIONS(690),
    [anon_sym_AMP] = ACTIONS(690),
    [anon_sym_AT] = ACTIONS(690),
    [anon_sym_TILDE] = ACTIONS(690),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [sym_integer_literal] = ACTIONS(692),
    [sym_float_literal] = ACTIONS(690),
    [anon_sym_true] = ACTIONS(692),
    [anon_sym_false] = ACTIONS(692),
    [anon_sym_DQUOTE] = ACTIONS(690),
    [anon_sym_BSLASH] = ACTIONS(690),
    [anon_sym_POUND_DQUOTE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [sym_identifier] = ACTIONS(692),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
    [anon_sym_LBRACK] = ACTIONS(694),
    [anon_sym_AMP] = ACTIONS(694),
    [anon_sym_AT] = ACTIONS(694),
    [anon_sym_TILDE] = ACTIONS(694),
    [anon_sym_SQUOTE] = ACTIONS(694),
    [sym_integer_literal] = ACTIONS(696),
    [sym_float_literal] = ACTIONS(694),
    [anon_sym_true] = ACTIONS(696),
    [anon_sym_false] = ACTIONS(696),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_BSLASH] = ACTIONS(694),
    [anon_sym_POUND_DQUOTE] = ACTIONS(694),
    [anon_sym_LBRACE] = ACTIONS(694),
    [anon_sym_COLON] = ACTIONS(694),
    [sym_identifier] = ACTIONS(696),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_AMP] = ACTIONS(486),
    [anon_sym_AT] = ACTIONS(486),
    [anon_sym_TILDE] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [sym_integer_literal] = ACTIONS(488),
    [sym_float_literal] = ACTIONS(486),
    [anon_sym_true] = ACTIONS(488),
    [anon_sym_false] = ACTIONS(488),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(486),
    [anon_sym_POUND_DQUOTE] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(486),
    [sym_identifier] = ACTIONS(488),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(698),
    [anon_sym_AMP] = ACTIONS(698),
    [anon_sym_AT] = ACTIONS(698),
    [anon_sym_TILDE] = ACTIONS(698),
    [anon_sym_SQUOTE] = ACTIONS(698),
    [sym_integer_literal] = ACTIONS(700),
    [sym_float_literal] = ACTIONS(698),
    [anon_sym_true] = ACTIONS(700),
    [anon_sym_false] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [anon_sym_BSLASH] = ACTIONS(698),
    [anon_sym_POUND_DQUOTE] = ACTIONS(698),
    [anon_sym_LBRACE] = ACTIONS(698),
    [anon_sym_COLON] = ACTIONS(698),
    [sym_identifier] = ACTIONS(700),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_AMP] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_TILDE] = ACTIONS(526),
    [anon_sym_SQUOTE] = ACTIONS(526),
    [sym_integer_literal] = ACTIONS(528),
    [sym_float_literal] = ACTIONS(526),
    [anon_sym_true] = ACTIONS(528),
    [anon_sym_false] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(526),
    [anon_sym_BSLASH] = ACTIONS(526),
    [anon_sym_POUND_DQUOTE] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [sym_identifier] = ACTIONS(528),
  },
  [118] = {
    [sym__literals] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(702),
    [sym_float_literal] = ACTIONS(704),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(702),
  },
  [119] = {
    [anon_sym_LBRACK] = ACTIONS(706),
    [sym_integer_literal] = ACTIONS(708),
    [sym_float_literal] = ACTIONS(706),
    [anon_sym_true] = ACTIONS(708),
    [anon_sym_false] = ACTIONS(708),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [anon_sym_BSLASH] = ACTIONS(706),
    [anon_sym_POUND_DQUOTE] = ACTIONS(706),
    [anon_sym_LBRACE] = ACTIONS(706),
    [anon_sym_RBRACE] = ACTIONS(706),
    [sym_identifier] = ACTIONS(708),
  },
  [120] = {
    [sym_line_comment] = STATE(121),
    [sym__s_expr] = STATE(121),
    [aux_sym_source_file_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(710),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [121] = {
    [sym_line_comment] = STATE(121),
    [sym__s_expr] = STATE(121),
    [aux_sym_source_file_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_LPAREN] = ACTIONS(717),
  },
  [122] = {
    [sym_symbol] = STATE(124),
    [aux_sym_parameters_repeat1] = STATE(124),
    [anon_sym_RBRACK] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(722),
  },
  [123] = {
    [sym_symbol] = STATE(123),
    [aux_sym_parameters_repeat1] = STATE(123),
    [anon_sym_RBRACK] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(726),
    [sym_identifier] = ACTIONS(729),
  },
  [124] = {
    [sym_symbol] = STATE(123),
    [aux_sym_parameters_repeat1] = STATE(123),
    [anon_sym_RBRACK] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(376),
    [sym_identifier] = ACTIONS(734),
  },
  [125] = {
    [aux_sym_str_literal_repeat1] = STATE(128),
    [aux_sym_str_literal_token1] = ACTIONS(736),
    [anon_sym_DQUOTE2] = ACTIONS(738),
    [sym_escape_sequence] = ACTIONS(740),
  },
  [126] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(742),
    [anon_sym_DQUOTE2] = ACTIONS(745),
    [sym_escape_sequence] = ACTIONS(747),
  },
  [127] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(752),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [128] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(756),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [129] = {
    [aux_sym_str_literal_repeat1] = STATE(127),
    [aux_sym_str_literal_token1] = ACTIONS(758),
    [anon_sym_DQUOTE2] = ACTIONS(760),
    [sym_escape_sequence] = ACTIONS(762),
  },
  [130] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(764),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [131] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(766),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [132] = {
    [aux_sym_str_literal_repeat1] = STATE(135),
    [aux_sym_str_literal_token1] = ACTIONS(768),
    [anon_sym_DQUOTE2] = ACTIONS(770),
    [sym_escape_sequence] = ACTIONS(772),
  },
  [133] = {
    [aux_sym_str_literal_repeat1] = STATE(136),
    [aux_sym_str_literal_token1] = ACTIONS(774),
    [anon_sym_DQUOTE2] = ACTIONS(776),
    [sym_escape_sequence] = ACTIONS(778),
  },
  [134] = {
    [aux_sym_str_literal_repeat1] = STATE(130),
    [aux_sym_str_literal_token1] = ACTIONS(780),
    [anon_sym_DQUOTE2] = ACTIONS(782),
    [sym_escape_sequence] = ACTIONS(784),
  },
  [135] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(786),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [136] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(750),
    [anon_sym_DQUOTE2] = ACTIONS(788),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [137] = {
    [aux_sym_str_literal_repeat1] = STATE(131),
    [aux_sym_str_literal_token1] = ACTIONS(790),
    [anon_sym_DQUOTE2] = ACTIONS(792),
    [sym_escape_sequence] = ACTIONS(794),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(796),
    [anon_sym_SEMI] = ACTIONS(796),
    [anon_sym_LPAREN] = ACTIONS(796),
    [anon_sym_RPAREN] = ACTIONS(796),
  },
  [139] = {
    [anon_sym_RBRACK] = ACTIONS(462),
    [anon_sym_COLON] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
  },
  [140] = {
    [aux_sym_let_pairs_repeat1] = STATE(141),
    [anon_sym_RBRACK] = ACTIONS(798),
    [sym_identifier] = ACTIONS(800),
  },
  [141] = {
    [aux_sym_let_pairs_repeat1] = STATE(143),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym_identifier] = ACTIONS(800),
  },
  [142] = {
    [sym_interface_fn] = STATE(177),
    [anon_sym_Fn] = ACTIONS(804),
    [anon_sym_] = ACTIONS(804),
  },
  [143] = {
    [aux_sym_let_pairs_repeat1] = STATE(143),
    [anon_sym_RBRACK] = ACTIONS(806),
    [sym_identifier] = ACTIONS(808),
  },
  [144] = {
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym_identifier] = ACTIONS(466),
  },
  [145] = {
    [anon_sym_RBRACK] = ACTIONS(518),
    [sym_identifier] = ACTIONS(518),
  },
  [146] = {
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym_identifier] = ACTIONS(510),
  },
  [147] = {
    [sym_parameters] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(811),
  },
  [148] = {
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
  },
  [149] = {
    [anon_sym_RBRACK] = ACTIONS(478),
    [sym_identifier] = ACTIONS(478),
  },
  [150] = {
    [sym_let_pairs] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(813),
  },
  [151] = {
    [anon_sym_RBRACK] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
  },
  [152] = {
    [aux_sym_str_literal_token1] = ACTIONS(815),
    [sym_escape_sequence] = ACTIONS(817),
  },
  [153] = {
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_identifier] = ACTIONS(502),
  },
  [154] = {
    [anon_sym_RBRACK] = ACTIONS(819),
    [sym_identifier] = ACTIONS(819),
  },
  [155] = {
    [aux_sym_str_literal_token1] = ACTIONS(821),
    [sym_escape_sequence] = ACTIONS(823),
  },
  [156] = {
    [sym_parameters] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(811),
  },
  [157] = {
    [sym_typed_parameters] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(825),
  },
  [158] = {
    [sym_parameters] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(811),
  },
  [159] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(811),
  },
  [160] = {
    [aux_sym_str_literal_token1] = ACTIONS(827),
    [sym_escape_sequence] = ACTIONS(829),
  },
  [161] = {
    [anon_sym_RBRACK] = ACTIONS(522),
    [sym_identifier] = ACTIONS(522),
  },
  [162] = {
    [anon_sym_RBRACK] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
  },
  [163] = {
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_identifier] = ACTIONS(458),
  },
  [164] = {
    [anon_sym_RBRACK] = ACTIONS(454),
    [sym_identifier] = ACTIONS(454),
  },
  [165] = {
    [anon_sym_RBRACK] = ACTIONS(506),
    [sym_identifier] = ACTIONS(506),
  },
  [166] = {
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym_identifier] = ACTIONS(494),
  },
  [167] = {
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym_identifier] = ACTIONS(482),
  },
  [168] = {
    [anon_sym_RBRACK] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(833),
  },
  [171] = {
    [aux_sym_line_comment_token1] = ACTIONS(835),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(837),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(839),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(841),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(843),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(845),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(847),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(849),
  },
  [179] = {
    [sym_identifier] = ACTIONS(851),
  },
  [180] = {
    [sym_identifier] = ACTIONS(853),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(857),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(859),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(861),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(863),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(865),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(867),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(869),
  },
  [189] = {
    [sym_identifier] = ACTIONS(871),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(873),
  },
  [191] = {
    [sym_identifier] = ACTIONS(875),
  },
  [192] = {
    [sym_identifier] = ACTIONS(877),
  },
  [193] = {
    [sym_identifier] = ACTIONS(879),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(881),
  },
  [195] = {
    [sym_identifier] = ACTIONS(883),
  },
  [196] = {
    [sym_identifier] = ACTIONS(885),
  },
  [197] = {
    [sym_identifier] = ACTIONS(887),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(889),
  },
  [199] = {
    [sym_identifier] = ACTIONS(891),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(893),
  },
  [201] = {
    [sym_identifier] = ACTIONS(895),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(897),
  },
  [203] = {
    [sym_identifier] = ACTIONS(899),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(901),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(171),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(203),
  [11] = {.count = 1, .reusable = false}, SHIFT(147),
  [13] = {.count = 1, .reusable = false}, SHIFT(201),
  [15] = {.count = 1, .reusable = false}, SHIFT(150),
  [17] = {.count = 1, .reusable = true}, SHIFT(80),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(40),
  [23] = {.count = 1, .reusable = false}, SHIFT(38),
  [25] = {.count = 1, .reusable = false}, SHIFT(37),
  [27] = {.count = 1, .reusable = false}, SHIFT(36),
  [29] = {.count = 1, .reusable = false}, SHIFT(199),
  [31] = {.count = 1, .reusable = false}, SHIFT(70),
  [33] = {.count = 1, .reusable = false}, SHIFT(196),
  [35] = {.count = 1, .reusable = false}, SHIFT(195),
  [37] = {.count = 1, .reusable = false}, SHIFT(193),
  [39] = {.count = 1, .reusable = false}, SHIFT(192),
  [41] = {.count = 1, .reusable = false}, SHIFT(191),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = false}, SHIFT(198),
  [53] = {.count = 1, .reusable = true}, SHIFT(198),
  [55] = {.count = 1, .reusable = false}, SHIFT(83),
  [57] = {.count = 1, .reusable = true}, SHIFT(125),
  [59] = {.count = 1, .reusable = true}, SHIFT(155),
  [61] = {.count = 1, .reusable = true}, SHIFT(129),
  [63] = {.count = 1, .reusable = true}, SHIFT(84),
  [65] = {.count = 1, .reusable = true}, SHIFT(189),
  [67] = {.count = 1, .reusable = false}, SHIFT(101),
  [69] = {.count = 1, .reusable = false}, SHIFT(188),
  [71] = {.count = 1, .reusable = true}, SHIFT(188),
  [73] = {.count = 1, .reusable = false}, SHIFT(181),
  [75] = {.count = 1, .reusable = true}, SHIFT(181),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [79] = {.count = 1, .reusable = false}, SHIFT(6),
  [81] = {.count = 1, .reusable = true}, SHIFT(6),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 10),
  [85] = {.count = 1, .reusable = false}, SHIFT(12),
  [87] = {.count = 1, .reusable = true}, SHIFT(12),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(3),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(80),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(24),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(26),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(27),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(116),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(116),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(83),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(125),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(155),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(129),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(84),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(189),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(116),
  [137] = {.count = 1, .reusable = true}, SHIFT(116),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 9),
  [143] = {.count = 1, .reusable = false}, SHIFT(105),
  [145] = {.count = 1, .reusable = true}, SHIFT(105),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(3),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(80),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(24),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(25),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(26),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(27),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(105),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(105),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(83),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(125),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(155),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(129),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(84),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 31), SHIFT_REPEAT(189),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(80),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(24),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(25),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(26),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(27),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(12),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(12),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(83),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(125),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(155),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(129),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(84),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(189),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 20),
  [237] = {.count = 1, .reusable = true}, SHIFT(74),
  [239] = {.count = 1, .reusable = true}, SHIFT(68),
  [241] = {.count = 1, .reusable = false}, SHIFT(66),
  [243] = {.count = 1, .reusable = true}, SHIFT(66),
  [245] = {.count = 1, .reusable = true}, SHIFT(30),
  [247] = {.count = 1, .reusable = true}, SHIFT(29),
  [249] = {.count = 1, .reusable = true}, SHIFT(23),
  [251] = {.count = 1, .reusable = true}, SHIFT(31),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [255] = {.count = 1, .reusable = false}, SHIFT(169),
  [257] = {.count = 1, .reusable = true}, SHIFT(169),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(74),
  [262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(30),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(29),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(23),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [284] = {.count = 1, .reusable = false}, SHIFT(176),
  [286] = {.count = 1, .reusable = true}, SHIFT(176),
  [288] = {.count = 1, .reusable = true}, SHIFT(69),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 13),
  [292] = {.count = 1, .reusable = false}, SHIFT(200),
  [294] = {.count = 1, .reusable = true}, SHIFT(200),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 13),
  [298] = {.count = 1, .reusable = false}, SHIFT(186),
  [300] = {.count = 1, .reusable = true}, SHIFT(186),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 13),
  [304] = {.count = 1, .reusable = false}, SHIFT(175),
  [306] = {.count = 1, .reusable = true}, SHIFT(175),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [310] = {.count = 1, .reusable = false}, SHIFT(174),
  [312] = {.count = 1, .reusable = true}, SHIFT(174),
  [314] = {.count = 1, .reusable = true}, SHIFT(2),
  [316] = {.count = 1, .reusable = true}, SHIFT(85),
  [318] = {.count = 1, .reusable = false}, SHIFT(55),
  [320] = {.count = 1, .reusable = true}, SHIFT(55),
  [322] = {.count = 1, .reusable = false}, SHIFT(57),
  [324] = {.count = 1, .reusable = true}, SHIFT(132),
  [326] = {.count = 1, .reusable = true}, SHIFT(152),
  [328] = {.count = 1, .reusable = true}, SHIFT(133),
  [330] = {.count = 1, .reusable = true}, SHIFT(81),
  [332] = {.count = 1, .reusable = true}, SHIFT(197),
  [334] = {.count = 1, .reusable = false}, SHIFT(106),
  [336] = {.count = 1, .reusable = true}, SHIFT(106),
  [338] = {.count = 1, .reusable = false}, SHIFT(104),
  [340] = {.count = 1, .reusable = true}, SHIFT(104),
  [342] = {.count = 1, .reusable = false}, SHIFT(103),
  [344] = {.count = 1, .reusable = true}, SHIFT(103),
  [346] = {.count = 1, .reusable = false}, SHIFT(112),
  [348] = {.count = 1, .reusable = true}, SHIFT(112),
  [350] = {.count = 1, .reusable = true}, SHIFT(4),
  [352] = {.count = 1, .reusable = true}, SHIFT(95),
  [354] = {.count = 1, .reusable = true}, SHIFT(35),
  [356] = {.count = 1, .reusable = true}, SHIFT(41),
  [358] = {.count = 1, .reusable = true}, SHIFT(43),
  [360] = {.count = 1, .reusable = true}, SHIFT(28),
  [362] = {.count = 1, .reusable = false}, SHIFT(168),
  [364] = {.count = 1, .reusable = true}, SHIFT(168),
  [366] = {.count = 1, .reusable = false}, SHIFT(162),
  [368] = {.count = 1, .reusable = true}, SHIFT(137),
  [370] = {.count = 1, .reusable = true}, SHIFT(160),
  [372] = {.count = 1, .reusable = true}, SHIFT(134),
  [374] = {.count = 1, .reusable = true}, SHIFT(98),
  [376] = {.count = 1, .reusable = true}, SHIFT(180),
  [378] = {.count = 1, .reusable = false}, SHIFT(58),
  [380] = {.count = 1, .reusable = true}, SHIFT(58),
  [382] = {.count = 1, .reusable = false}, SHIFT(61),
  [384] = {.count = 1, .reusable = true}, SHIFT(61),
  [386] = {.count = 1, .reusable = false}, SHIFT(63),
  [388] = {.count = 1, .reusable = true}, SHIFT(63),
  [390] = {.count = 1, .reusable = false}, SHIFT(182),
  [392] = {.count = 1, .reusable = true}, SHIFT(182),
  [394] = {.count = 1, .reusable = false}, SHIFT(172),
  [396] = {.count = 1, .reusable = true}, SHIFT(172),
  [398] = {.count = 1, .reusable = false}, SHIFT(173),
  [400] = {.count = 1, .reusable = true}, SHIFT(173),
  [402] = {.count = 1, .reusable = false}, SHIFT(165),
  [404] = {.count = 1, .reusable = true}, SHIFT(165),
  [406] = {.count = 1, .reusable = false}, SHIFT(185),
  [408] = {.count = 1, .reusable = true}, SHIFT(185),
  [410] = {.count = 1, .reusable = false}, SHIFT(170),
  [412] = {.count = 1, .reusable = true}, SHIFT(170),
  [414] = {.count = 1, .reusable = false}, SHIFT(22),
  [416] = {.count = 1, .reusable = true}, SHIFT(22),
  [418] = {.count = 1, .reusable = false}, SHIFT(178),
  [420] = {.count = 1, .reusable = true}, SHIFT(178),
  [422] = {.count = 1, .reusable = false}, SHIFT(45),
  [424] = {.count = 1, .reusable = true}, SHIFT(45),
  [426] = {.count = 1, .reusable = false}, SHIFT(166),
  [428] = {.count = 1, .reusable = true}, SHIFT(166),
  [430] = {.count = 1, .reusable = false}, SHIFT(202),
  [432] = {.count = 1, .reusable = true}, SHIFT(202),
  [434] = {.count = 1, .reusable = false}, SHIFT(167),
  [436] = {.count = 1, .reusable = true}, SHIFT(167),
  [438] = {.count = 1, .reusable = false}, SHIFT(154),
  [440] = {.count = 1, .reusable = true}, SHIFT(154),
  [442] = {.count = 1, .reusable = false}, SHIFT(42),
  [444] = {.count = 1, .reusable = true}, SHIFT(42),
  [446] = {.count = 1, .reusable = true}, SHIFT(67),
  [448] = {.count = 1, .reusable = false}, SHIFT(117),
  [450] = {.count = 1, .reusable = true}, SHIFT(117),
  [452] = {.count = 1, .reusable = true}, SHIFT(75),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [500] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 22),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 22),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [530] = {.count = 1, .reusable = true}, SHIFT(102),
  [532] = {.count = 1, .reusable = false}, SHIFT(72),
  [534] = {.count = 1, .reusable = true}, SHIFT(72),
  [536] = {.count = 1, .reusable = false}, SHIFT(157),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(71),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(71),
  [554] = {.count = 1, .reusable = true}, SHIFT(115),
  [556] = {.count = 1, .reusable = false}, SHIFT(71),
  [558] = {.count = 1, .reusable = true}, SHIFT(71),
  [560] = {.count = 1, .reusable = true}, SHIFT(56),
  [562] = {.count = 1, .reusable = true}, SHIFT(52),
  [564] = {.count = 1, .reusable = false}, SHIFT(73),
  [566] = {.count = 1, .reusable = true}, SHIFT(73),
  [568] = {.count = 1, .reusable = false}, SHIFT(118),
  [570] = {.count = 1, .reusable = true}, SHIFT(118),
  [572] = {.count = 1, .reusable = true}, SHIFT(100),
  [574] = {.count = 1, .reusable = true}, SHIFT(60),
  [576] = {.count = 1, .reusable = true}, SHIFT(54),
  [578] = {.count = 1, .reusable = false}, SHIFT(88),
  [580] = {.count = 1, .reusable = true}, SHIFT(88),
  [582] = {.count = 1, .reusable = true}, SHIFT(93),
  [584] = {.count = 1, .reusable = false}, SHIFT(94),
  [586] = {.count = 1, .reusable = true}, SHIFT(94),
  [588] = {.count = 1, .reusable = true}, SHIFT(62),
  [590] = {.count = 1, .reusable = true}, SHIFT(77),
  [592] = {.count = 1, .reusable = true}, SHIFT(49),
  [594] = {.count = 1, .reusable = false}, SHIFT(79),
  [596] = {.count = 1, .reusable = true}, SHIFT(79),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(80),
  [601] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [603] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(88),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(88),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(83),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(125),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(155),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(129),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(84),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(80),
  [627] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(118),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(118),
  [633] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(83),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(125),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(155),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(129),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(84),
  [648] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23),
  [650] = {.count = 1, .reusable = true}, SHIFT(153),
  [652] = {.count = 1, .reusable = true}, SHIFT(87),
  [654] = {.count = 1, .reusable = true}, SHIFT(163),
  [656] = {.count = 1, .reusable = false}, SHIFT(97),
  [658] = {.count = 1, .reusable = true}, SHIFT(97),
  [660] = {.count = 1, .reusable = true}, SHIFT(149),
  [662] = {.count = 1, .reusable = true}, SHIFT(146),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [666] = {.count = 1, .reusable = true}, SHIFT(179),
  [668] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [670] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 19),
  [672] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 19),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [676] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 24),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 24),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [684] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [688] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 27),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 27),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [696] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [698] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [700] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [702] = {.count = 1, .reusable = false}, SHIFT(119),
  [704] = {.count = 1, .reusable = true}, SHIFT(119),
  [706] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 21),
  [708] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 21),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [712] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [720] = {.count = 1, .reusable = true}, SHIFT(107),
  [722] = {.count = 1, .reusable = true}, SHIFT(124),
  [724] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(180),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(123),
  [732] = {.count = 1, .reusable = true}, SHIFT(111),
  [734] = {.count = 1, .reusable = true}, SHIFT(123),
  [736] = {.count = 1, .reusable = false}, SHIFT(128),
  [738] = {.count = 1, .reusable = true}, SHIFT(96),
  [740] = {.count = 1, .reusable = true}, SHIFT(128),
  [742] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(126),
  [745] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(126),
  [750] = {.count = 1, .reusable = false}, SHIFT(126),
  [752] = {.count = 1, .reusable = true}, SHIFT(86),
  [754] = {.count = 1, .reusable = true}, SHIFT(126),
  [756] = {.count = 1, .reusable = true}, SHIFT(99),
  [758] = {.count = 1, .reusable = false}, SHIFT(127),
  [760] = {.count = 1, .reusable = true}, SHIFT(91),
  [762] = {.count = 1, .reusable = true}, SHIFT(127),
  [764] = {.count = 1, .reusable = true}, SHIFT(144),
  [766] = {.count = 1, .reusable = true}, SHIFT(151),
  [768] = {.count = 1, .reusable = false}, SHIFT(135),
  [770] = {.count = 1, .reusable = true}, SHIFT(64),
  [772] = {.count = 1, .reusable = true}, SHIFT(135),
  [774] = {.count = 1, .reusable = false}, SHIFT(136),
  [776] = {.count = 1, .reusable = true}, SHIFT(65),
  [778] = {.count = 1, .reusable = true}, SHIFT(136),
  [780] = {.count = 1, .reusable = false}, SHIFT(130),
  [782] = {.count = 1, .reusable = true}, SHIFT(161),
  [784] = {.count = 1, .reusable = true}, SHIFT(130),
  [786] = {.count = 1, .reusable = true}, SHIFT(53),
  [788] = {.count = 1, .reusable = true}, SHIFT(51),
  [790] = {.count = 1, .reusable = false}, SHIFT(131),
  [792] = {.count = 1, .reusable = true}, SHIFT(145),
  [794] = {.count = 1, .reusable = true}, SHIFT(131),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [798] = {.count = 1, .reusable = true}, SHIFT(114),
  [800] = {.count = 1, .reusable = true}, SHIFT(44),
  [802] = {.count = 1, .reusable = true}, SHIFT(113),
  [804] = {.count = 1, .reusable = true}, SHIFT(157),
  [806] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 28),
  [808] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 28), SHIFT_REPEAT(44),
  [811] = {.count = 1, .reusable = true}, SHIFT(122),
  [813] = {.count = 1, .reusable = true}, SHIFT(140),
  [815] = {.count = 1, .reusable = false}, SHIFT(48),
  [817] = {.count = 1, .reusable = true}, SHIFT(48),
  [819] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 26),
  [821] = {.count = 1, .reusable = false}, SHIFT(92),
  [823] = {.count = 1, .reusable = true}, SHIFT(92),
  [825] = {.count = 1, .reusable = true}, SHIFT(18),
  [827] = {.count = 1, .reusable = false}, SHIFT(164),
  [829] = {.count = 1, .reusable = true}, SHIFT(164),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 14),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [835] = {.count = 1, .reusable = true}, SHIFT(138),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 18),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 17),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 16),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 25),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 12),
  [847] = {.count = 1, .reusable = true}, SHIFT(190),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 11),
  [851] = {.count = 1, .reusable = true}, SHIFT(109),
  [853] = {.count = 1, .reusable = true}, SHIFT(139),
  [855] = {.count = 1, .reusable = true}, SHIFT(148),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 30),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 33),
  [861] = {.count = 1, .reusable = true}, SHIFT(142),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 25),
  [867] = {.count = 1, .reusable = true}, SHIFT(194),
  [869] = {.count = 1, .reusable = true}, SHIFT(82),
  [871] = {.count = 1, .reusable = true}, SHIFT(108),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 32),
  [875] = {.count = 1, .reusable = true}, SHIFT(10),
  [877] = {.count = 1, .reusable = true}, SHIFT(159),
  [879] = {.count = 1, .reusable = true}, SHIFT(158),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 32),
  [883] = {.count = 1, .reusable = true}, SHIFT(184),
  [885] = {.count = 1, .reusable = true}, SHIFT(46),
  [887] = {.count = 1, .reusable = true}, SHIFT(50),
  [889] = {.count = 1, .reusable = true}, SHIFT(59),
  [891] = {.count = 1, .reusable = true}, SHIFT(34),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 25),
  [895] = {.count = 1, .reusable = true}, SHIFT(156),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 29),
  [899] = {.count = 1, .reusable = true}, SHIFT(39),
  [901] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
