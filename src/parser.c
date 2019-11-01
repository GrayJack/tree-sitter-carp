#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 198
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
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
  anon_sym_Bool = 18,
  anon_sym_Char = 19,
  anon_sym_Int = 20,
  anon_sym_Long = 21,
  anon_sym_Float = 22,
  anon_sym_Double = 23,
  anon_sym_Vector2 = 24,
  anon_sym_Vector3 = 25,
  anon_sym_VectorN = 26,
  anon_sym_String = 27,
  anon_sym_Pattern = 28,
  anon_sym_Array = 29,
  anon_sym_Map = 30,
  anon_sym_Maybe = 31,
  anon_sym_Result = 32,
  anon_sym_Id = 33,
  anon_sym_Ptr = 34,
  anon_sym_DOT = 35,
  anon_sym_definterface = 36,
  anon_sym_defmacro = 37,
  anon_sym_defndynamic = 38,
  anon_sym_defmodule = 39,
  anon_sym_Fn = 40,
  anon_sym_ = 41,
  anon_sym_AMP = 42,
  anon_sym_AT = 43,
  anon_sym_TILDE = 44,
  anon_sym_SQUOTE = 45,
  sym_integer_literal = 46,
  sym_float_literal = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_str_literal_token1 = 51,
  anon_sym_DQUOTE2 = 52,
  anon_sym_BSLASH = 53,
  anon_sym_POUND_DQUOTE = 54,
  sym_escape_sequence = 55,
  anon_sym_LBRACE = 56,
  anon_sym_RBRACE = 57,
  anon_sym_COLON = 58,
  sym_identifier = 59,
  sym_source_file = 60,
  sym_line_comment = 61,
  sym__s_expr = 62,
  sym__expr = 63,
  sym__anything = 64,
  sym__s_forms = 65,
  sym__defs = 66,
  sym__literals = 67,
  sym__short_helper = 68,
  sym_def = 69,
  sym_fn = 70,
  sym_defn = 71,
  sym_let = 72,
  sym_let_pairs = 73,
  sym_do = 74,
  sym_if = 75,
  sym_while = 76,
  sym_ref = 77,
  sym_address = 78,
  sym_set = 79,
  sym_the = 80,
  sym_type = 81,
  sym_complex_type = 82,
  sym_call_expression = 83,
  sym_call_name = 84,
  sym_definterface = 85,
  sym_defmacro = 86,
  sym_defndynamic = 87,
  sym_defmodule = 88,
  sym_interface_fn = 89,
  sym_short_ref = 90,
  sym_short_copy = 91,
  sym_short_fn_ref = 92,
  sym_short_quote = 93,
  sym_parameters = 94,
  sym_typed_parameters = 95,
  sym_bool_literal = 96,
  sym_str_literal = 97,
  sym_char_literal = 98,
  sym_pattern_literal = 99,
  sym_array_expression = 100,
  sym_map_expression = 101,
  sym_symbol = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_let_pairs_repeat1 = 104,
  aux_sym_do_repeat1 = 105,
  aux_sym_complex_type_repeat1 = 106,
  aux_sym_call_expression_repeat1 = 107,
  aux_sym_defmodule_repeat1 = 108,
  aux_sym_parameters_repeat1 = 109,
  aux_sym_typed_parameters_repeat1 = 110,
  aux_sym_str_literal_repeat1 = 111,
  aux_sym_array_expression_repeat1 = 112,
  aux_sym_map_expression_repeat1 = 113,
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
  field_var = 19,
  field_variable = 20,
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
  [30] = {.index = 54, .length = 2},
  [31] = {.index = 56, .length = 2},
  [32] = {.index = 58, .length = 2},
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
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [56] =
    {field_fn, 3},
    {field_name, 1},
  [58] =
    {field_return_type, 2},
    {field_typed_params, 1},
};

static TSSymbol ts_alias_sequences[33][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == 'V') ADVANCE(108);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == 955) ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == 'V') ADVANCE(108);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == 955) ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == 'V') ADVANCE(108);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '~') ADVANCE(66);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ']') ADVANCE(30);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 955) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(27);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 26:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(188);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 28:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 32:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 33:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 34:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 35:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 36:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 37:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 61:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 63:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 73:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(36);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 86:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 87:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
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
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 89:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 91:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(106);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(180);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(102);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 95:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(111);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 98:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 99:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(179);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(167);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(116);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(173);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(105);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(168);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(186);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 111:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 114:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 115:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 116:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(31);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 119:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 123:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(32);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(25);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(34);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(94);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 128:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 129:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 130:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(95);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(99);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(61);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 141:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 142:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 145:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(129);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(97);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(86);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 163:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 165:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 167:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(119);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(35);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(184);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(169);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(112);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 173:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(28);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 176:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 177:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 179:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 181:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(98);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 184:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(110);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 186:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 187:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 188:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
      END_STATE();
    case 190:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(190);
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 8},
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
  [45] = {.lex_state = 8},
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
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
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
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 0},
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
    [sym_source_file] = STATE(197),
    [sym_line_comment] = STATE(118),
    [sym__s_expr] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(191),
    [sym__s_expr] = STATE(191),
    [sym__anything] = STATE(191),
    [sym__s_forms] = STATE(191),
    [sym__defs] = STATE(191),
    [sym__literals] = STATE(191),
    [sym__short_helper] = STATE(191),
    [sym_def] = STATE(191),
    [sym_fn] = STATE(191),
    [sym_defn] = STATE(191),
    [sym_let] = STATE(191),
    [sym_do] = STATE(191),
    [sym_if] = STATE(191),
    [sym_while] = STATE(191),
    [sym_ref] = STATE(191),
    [sym_address] = STATE(191),
    [sym_set] = STATE(191),
    [sym_the] = STATE(191),
    [sym_call_expression] = STATE(191),
    [sym_call_name] = STATE(9),
    [sym_definterface] = STATE(191),
    [sym_defmacro] = STATE(191),
    [sym_defndynamic] = STATE(191),
    [sym_defmodule] = STATE(191),
    [sym_short_ref] = STATE(191),
    [sym_short_copy] = STATE(191),
    [sym_short_fn_ref] = STATE(111),
    [sym_short_quote] = STATE(191),
    [sym_bool_literal] = STATE(191),
    [sym_str_literal] = STATE(191),
    [sym_char_literal] = STATE(191),
    [sym_pattern_literal] = STATE(191),
    [sym_array_expression] = STATE(191),
    [sym_map_expression] = STATE(191),
    [sym_symbol] = STATE(191),
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
    [anon_sym_definterface] = ACTIONS(33),
    [anon_sym_defmacro] = ACTIONS(35),
    [anon_sym_defndynamic] = ACTIONS(37),
    [anon_sym_defmodule] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(49),
    [sym_float_literal] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
  },
  [3] = {
    [sym_line_comment] = STATE(180),
    [sym__s_expr] = STATE(180),
    [sym__anything] = STATE(180),
    [sym__s_forms] = STATE(180),
    [sym__defs] = STATE(180),
    [sym__literals] = STATE(180),
    [sym__short_helper] = STATE(180),
    [sym_def] = STATE(180),
    [sym_fn] = STATE(180),
    [sym_defn] = STATE(180),
    [sym_let] = STATE(180),
    [sym_do] = STATE(180),
    [sym_if] = STATE(180),
    [sym_while] = STATE(180),
    [sym_ref] = STATE(180),
    [sym_address] = STATE(180),
    [sym_set] = STATE(180),
    [sym_the] = STATE(180),
    [sym_call_expression] = STATE(180),
    [sym_call_name] = STATE(9),
    [sym_definterface] = STATE(180),
    [sym_defmacro] = STATE(180),
    [sym_defndynamic] = STATE(180),
    [sym_defmodule] = STATE(180),
    [sym_short_ref] = STATE(180),
    [sym_short_copy] = STATE(180),
    [sym_short_fn_ref] = STATE(111),
    [sym_short_quote] = STATE(180),
    [sym_bool_literal] = STATE(180),
    [sym_str_literal] = STATE(180),
    [sym_char_literal] = STATE(180),
    [sym_pattern_literal] = STATE(180),
    [sym_array_expression] = STATE(180),
    [sym_map_expression] = STATE(180),
    [sym_symbol] = STATE(180),
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
    [anon_sym_definterface] = ACTIONS(33),
    [anon_sym_defmacro] = ACTIONS(35),
    [anon_sym_defndynamic] = ACTIONS(37),
    [anon_sym_defmodule] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(67),
    [sym_float_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
  },
  [4] = {
    [sym_line_comment] = STATE(174),
    [sym__s_expr] = STATE(174),
    [sym__anything] = STATE(174),
    [sym__s_forms] = STATE(174),
    [sym__defs] = STATE(174),
    [sym__literals] = STATE(174),
    [sym__short_helper] = STATE(174),
    [sym_def] = STATE(174),
    [sym_fn] = STATE(174),
    [sym_defn] = STATE(174),
    [sym_let] = STATE(174),
    [sym_do] = STATE(174),
    [sym_if] = STATE(174),
    [sym_while] = STATE(174),
    [sym_ref] = STATE(174),
    [sym_address] = STATE(174),
    [sym_set] = STATE(174),
    [sym_the] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_call_name] = STATE(9),
    [sym_definterface] = STATE(174),
    [sym_defmacro] = STATE(174),
    [sym_defndynamic] = STATE(174),
    [sym_defmodule] = STATE(174),
    [sym_short_ref] = STATE(174),
    [sym_short_copy] = STATE(174),
    [sym_short_fn_ref] = STATE(111),
    [sym_short_quote] = STATE(174),
    [sym_bool_literal] = STATE(174),
    [sym_str_literal] = STATE(174),
    [sym_char_literal] = STATE(174),
    [sym_pattern_literal] = STATE(174),
    [sym_array_expression] = STATE(174),
    [sym_map_expression] = STATE(174),
    [sym_symbol] = STATE(174),
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
    [anon_sym_definterface] = ACTIONS(33),
    [anon_sym_defmacro] = ACTIONS(35),
    [anon_sym_defndynamic] = ACTIONS(37),
    [anon_sym_defmodule] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(71),
    [sym_float_literal] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
  },
  [5] = {
    [sym__s_expr] = STATE(102),
    [sym__expr] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__short_helper] = STATE(102),
    [sym_short_ref] = STATE(102),
    [sym_short_copy] = STATE(102),
    [sym_short_fn_ref] = STATE(102),
    [sym_short_quote] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [sym_symbol] = STATE(102),
    [aux_sym_defmodule_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(77),
  },
  [6] = {
    [sym__s_expr] = STATE(11),
    [sym__expr] = STATE(11),
    [sym__literals] = STATE(11),
    [sym__short_helper] = STATE(11),
    [sym_short_ref] = STATE(11),
    [sym_short_copy] = STATE(11),
    [sym_short_fn_ref] = STATE(11),
    [sym_short_quote] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_str_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_pattern_literal] = STATE(11),
    [sym_array_expression] = STATE(11),
    [sym_map_expression] = STATE(11),
    [sym_symbol] = STATE(11),
    [aux_sym_call_expression_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(83),
    [sym_float_literal] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(83),
  },
  [7] = {
    [sym__s_expr] = STATE(100),
    [sym__expr] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__short_helper] = STATE(100),
    [sym_short_ref] = STATE(100),
    [sym_short_copy] = STATE(100),
    [sym_short_fn_ref] = STATE(100),
    [sym_short_quote] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [sym_symbol] = STATE(100),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(98),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [sym_integer_literal] = ACTIONS(107),
    [sym_float_literal] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_BSLASH] = ACTIONS(119),
    [anon_sym_POUND_DQUOTE] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(128),
    [sym_identifier] = ACTIONS(107),
  },
  [8] = {
    [sym__s_expr] = STATE(102),
    [sym__expr] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__short_helper] = STATE(102),
    [sym_short_ref] = STATE(102),
    [sym_short_copy] = STATE(102),
    [sym_short_fn_ref] = STATE(102),
    [sym_short_quote] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [sym_symbol] = STATE(102),
    [aux_sym_defmodule_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(77),
  },
  [9] = {
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
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(135),
  },
  [10] = {
    [sym__s_expr] = STATE(100),
    [sym__expr] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__short_helper] = STATE(100),
    [sym_short_ref] = STATE(100),
    [sym_short_copy] = STATE(100),
    [sym_short_fn_ref] = STATE(100),
    [sym_short_quote] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [sym_symbol] = STATE(100),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(141),
  },
  [11] = {
    [sym__s_expr] = STATE(11),
    [sym__expr] = STATE(11),
    [sym__literals] = STATE(11),
    [sym__short_helper] = STATE(11),
    [sym_short_ref] = STATE(11),
    [sym_short_copy] = STATE(11),
    [sym_short_fn_ref] = STATE(11),
    [sym_short_quote] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_str_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_pattern_literal] = STATE(11),
    [sym_array_expression] = STATE(11),
    [sym_map_expression] = STATE(11),
    [sym_symbol] = STATE(11),
    [aux_sym_call_expression_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [sym_integer_literal] = ACTIONS(165),
    [sym_float_literal] = ACTIONS(168),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_POUND_DQUOTE] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(186),
    [sym_identifier] = ACTIONS(165),
  },
  [12] = {
    [sym__s_expr] = STATE(100),
    [sym__expr] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__short_helper] = STATE(100),
    [sym_short_ref] = STATE(100),
    [sym_short_copy] = STATE(100),
    [sym_short_fn_ref] = STATE(100),
    [sym_short_quote] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [sym_symbol] = STATE(100),
    [aux_sym_do_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(141),
  },
  [13] = {
    [sym__s_expr] = STATE(102),
    [sym__expr] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__short_helper] = STATE(102),
    [sym_short_ref] = STATE(102),
    [sym_short_copy] = STATE(102),
    [sym_short_fn_ref] = STATE(102),
    [sym_short_quote] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [sym_symbol] = STATE(102),
    [aux_sym_defmodule_repeat1] = STATE(13),
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
  [14] = {
    [sym__s_expr] = STATE(189),
    [sym__expr] = STATE(189),
    [sym__literals] = STATE(189),
    [sym__short_helper] = STATE(189),
    [sym_short_ref] = STATE(189),
    [sym_short_copy] = STATE(189),
    [sym_short_fn_ref] = STATE(189),
    [sym_short_quote] = STATE(189),
    [sym_bool_literal] = STATE(189),
    [sym_str_literal] = STATE(189),
    [sym_char_literal] = STATE(189),
    [sym_pattern_literal] = STATE(189),
    [sym_array_expression] = STATE(189),
    [sym_map_expression] = STATE(189),
    [sym_symbol] = STATE(189),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(237),
    [sym_float_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(237),
  },
  [15] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(243),
  },
  [16] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(249),
    [sym_float_literal] = ACTIONS(251),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(249),
  },
  [17] = {
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
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(255),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(255),
  },
  [18] = {
    [sym__s_expr] = STATE(183),
    [sym__expr] = STATE(183),
    [sym__literals] = STATE(183),
    [sym__short_helper] = STATE(183),
    [sym_short_ref] = STATE(183),
    [sym_short_copy] = STATE(183),
    [sym_short_fn_ref] = STATE(183),
    [sym_short_quote] = STATE(183),
    [sym_bool_literal] = STATE(183),
    [sym_str_literal] = STATE(183),
    [sym_char_literal] = STATE(183),
    [sym_pattern_literal] = STATE(183),
    [sym_array_expression] = STATE(183),
    [sym_map_expression] = STATE(183),
    [sym_symbol] = STATE(183),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(261),
    [sym_float_literal] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(261),
  },
  [19] = {
    [sym__short_helper] = STATE(19),
    [sym_type] = STATE(19),
    [sym_complex_type] = STATE(50),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [aux_sym_typed_parameters_repeat1] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(268),
    [anon_sym_Bool] = ACTIONS(270),
    [anon_sym_Char] = ACTIONS(270),
    [anon_sym_Int] = ACTIONS(270),
    [anon_sym_Long] = ACTIONS(270),
    [anon_sym_Float] = ACTIONS(270),
    [anon_sym_Double] = ACTIONS(270),
    [anon_sym_Vector2] = ACTIONS(273),
    [anon_sym_Vector3] = ACTIONS(273),
    [anon_sym_VectorN] = ACTIONS(270),
    [anon_sym_String] = ACTIONS(270),
    [anon_sym_Pattern] = ACTIONS(270),
    [anon_sym_Array] = ACTIONS(270),
    [anon_sym_Map] = ACTIONS(270),
    [anon_sym_Maybe] = ACTIONS(270),
    [anon_sym_Result] = ACTIONS(270),
    [anon_sym_Id] = ACTIONS(270),
    [anon_sym_Ptr] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(276),
    [anon_sym_AT] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [sym_identifier] = ACTIONS(270),
  },
  [20] = {
    [sym__short_helper] = STATE(19),
    [sym_type] = STATE(19),
    [sym_complex_type] = STATE(50),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [aux_sym_typed_parameters_repeat1] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(290),
    [anon_sym_Bool] = ACTIONS(292),
    [anon_sym_Char] = ACTIONS(292),
    [anon_sym_Int] = ACTIONS(292),
    [anon_sym_Long] = ACTIONS(292),
    [anon_sym_Float] = ACTIONS(292),
    [anon_sym_Double] = ACTIONS(292),
    [anon_sym_Vector2] = ACTIONS(294),
    [anon_sym_Vector3] = ACTIONS(294),
    [anon_sym_VectorN] = ACTIONS(292),
    [anon_sym_String] = ACTIONS(292),
    [anon_sym_Pattern] = ACTIONS(292),
    [anon_sym_Array] = ACTIONS(292),
    [anon_sym_Map] = ACTIONS(292),
    [anon_sym_Maybe] = ACTIONS(292),
    [anon_sym_Result] = ACTIONS(292),
    [anon_sym_Id] = ACTIONS(292),
    [anon_sym_Ptr] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_identifier] = ACTIONS(292),
  },
  [21] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(306),
    [sym_float_literal] = ACTIONS(308),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(306),
  },
  [22] = {
    [sym__short_helper] = STATE(20),
    [sym_type] = STATE(20),
    [sym_complex_type] = STATE(50),
    [sym_short_ref] = STATE(20),
    [sym_short_copy] = STATE(20),
    [sym_short_fn_ref] = STATE(20),
    [sym_short_quote] = STATE(20),
    [aux_sym_typed_parameters_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_Bool] = ACTIONS(292),
    [anon_sym_Char] = ACTIONS(292),
    [anon_sym_Int] = ACTIONS(292),
    [anon_sym_Long] = ACTIONS(292),
    [anon_sym_Float] = ACTIONS(292),
    [anon_sym_Double] = ACTIONS(292),
    [anon_sym_Vector2] = ACTIONS(294),
    [anon_sym_Vector3] = ACTIONS(294),
    [anon_sym_VectorN] = ACTIONS(292),
    [anon_sym_String] = ACTIONS(292),
    [anon_sym_Pattern] = ACTIONS(292),
    [anon_sym_Array] = ACTIONS(292),
    [anon_sym_Map] = ACTIONS(292),
    [anon_sym_Maybe] = ACTIONS(292),
    [anon_sym_Result] = ACTIONS(292),
    [anon_sym_Id] = ACTIONS(292),
    [anon_sym_Ptr] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_identifier] = ACTIONS(292),
  },
  [23] = {
    [sym__s_expr] = STATE(159),
    [sym__expr] = STATE(159),
    [sym__literals] = STATE(159),
    [sym__short_helper] = STATE(159),
    [sym_short_ref] = STATE(159),
    [sym_short_copy] = STATE(159),
    [sym_short_fn_ref] = STATE(159),
    [sym_short_quote] = STATE(159),
    [sym_bool_literal] = STATE(159),
    [sym_str_literal] = STATE(159),
    [sym_char_literal] = STATE(159),
    [sym_pattern_literal] = STATE(159),
    [sym_array_expression] = STATE(159),
    [sym_map_expression] = STATE(159),
    [sym_symbol] = STATE(159),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_integer_literal] = ACTIONS(324),
    [sym_float_literal] = ACTIONS(326),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_POUND_DQUOTE] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(324),
  },
  [24] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(340),
    [sym_float_literal] = ACTIONS(342),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(340),
  },
  [25] = {
    [sym__s_expr] = STATE(109),
    [sym__expr] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__short_helper] = STATE(109),
    [sym_short_ref] = STATE(109),
    [sym_short_copy] = STATE(109),
    [sym_short_fn_ref] = STATE(109),
    [sym_short_quote] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [sym_symbol] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(344),
    [sym_float_literal] = ACTIONS(346),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(344),
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
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(348),
    [sym_float_literal] = ACTIONS(350),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(348),
  },
  [27] = {
    [sym__s_expr] = STATE(47),
    [sym__expr] = STATE(47),
    [sym__literals] = STATE(47),
    [sym__short_helper] = STATE(47),
    [sym_short_ref] = STATE(47),
    [sym_short_copy] = STATE(47),
    [sym_short_fn_ref] = STATE(47),
    [sym_short_quote] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_pattern_literal] = STATE(47),
    [sym_array_expression] = STATE(47),
    [sym_map_expression] = STATE(47),
    [sym_symbol] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_integer_literal] = ACTIONS(356),
    [sym_float_literal] = ACTIONS(358),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_false] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(364),
    [anon_sym_POUND_DQUOTE] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_identifier] = ACTIONS(356),
  },
  [28] = {
    [sym__s_expr] = STATE(30),
    [sym__expr] = STATE(30),
    [sym__literals] = STATE(30),
    [sym__short_helper] = STATE(30),
    [sym_short_ref] = STATE(30),
    [sym_short_copy] = STATE(30),
    [sym_short_fn_ref] = STATE(30),
    [sym_short_quote] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [sym_symbol] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(372),
    [sym_float_literal] = ACTIONS(374),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(372),
  },
  [29] = {
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
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(376),
    [sym_float_literal] = ACTIONS(378),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(376),
  },
  [30] = {
    [sym__s_expr] = STATE(33),
    [sym__expr] = STATE(33),
    [sym__literals] = STATE(33),
    [sym__short_helper] = STATE(33),
    [sym_short_ref] = STATE(33),
    [sym_short_copy] = STATE(33),
    [sym_short_fn_ref] = STATE(33),
    [sym_short_quote] = STATE(33),
    [sym_bool_literal] = STATE(33),
    [sym_str_literal] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_pattern_literal] = STATE(33),
    [sym_array_expression] = STATE(33),
    [sym_map_expression] = STATE(33),
    [sym_symbol] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(380),
    [sym_float_literal] = ACTIONS(382),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(380),
  },
  [31] = {
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
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(384),
    [sym_float_literal] = ACTIONS(386),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(384),
  },
  [32] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(388),
    [sym_float_literal] = ACTIONS(390),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(388),
  },
  [33] = {
    [sym__s_expr] = STATE(187),
    [sym__expr] = STATE(187),
    [sym__literals] = STATE(187),
    [sym__short_helper] = STATE(187),
    [sym_short_ref] = STATE(187),
    [sym_short_copy] = STATE(187),
    [sym_short_fn_ref] = STATE(187),
    [sym_short_quote] = STATE(187),
    [sym_bool_literal] = STATE(187),
    [sym_str_literal] = STATE(187),
    [sym_char_literal] = STATE(187),
    [sym_pattern_literal] = STATE(187),
    [sym_array_expression] = STATE(187),
    [sym_map_expression] = STATE(187),
    [sym_symbol] = STATE(187),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(392),
    [sym_float_literal] = ACTIONS(394),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(392),
  },
  [34] = {
    [sym__s_expr] = STATE(107),
    [sym__expr] = STATE(107),
    [sym__literals] = STATE(107),
    [sym__short_helper] = STATE(107),
    [sym_short_ref] = STATE(107),
    [sym_short_copy] = STATE(107),
    [sym_short_fn_ref] = STATE(107),
    [sym_short_quote] = STATE(107),
    [sym_bool_literal] = STATE(107),
    [sym_str_literal] = STATE(107),
    [sym_char_literal] = STATE(107),
    [sym_pattern_literal] = STATE(107),
    [sym_array_expression] = STATE(107),
    [sym_map_expression] = STATE(107),
    [sym_symbol] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(396),
    [sym_float_literal] = ACTIONS(398),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(396),
  },
  [35] = {
    [sym__s_expr] = STATE(161),
    [sym__expr] = STATE(161),
    [sym__literals] = STATE(161),
    [sym__short_helper] = STATE(161),
    [sym_short_ref] = STATE(161),
    [sym_short_copy] = STATE(161),
    [sym_short_fn_ref] = STATE(161),
    [sym_short_quote] = STATE(161),
    [sym_bool_literal] = STATE(161),
    [sym_str_literal] = STATE(161),
    [sym_char_literal] = STATE(161),
    [sym_pattern_literal] = STATE(161),
    [sym_array_expression] = STATE(161),
    [sym_map_expression] = STATE(161),
    [sym_symbol] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_integer_literal] = ACTIONS(400),
    [sym_float_literal] = ACTIONS(402),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_POUND_DQUOTE] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(400),
  },
  [36] = {
    [sym__s_expr] = STATE(164),
    [sym__expr] = STATE(164),
    [sym__literals] = STATE(164),
    [sym__short_helper] = STATE(164),
    [sym_short_ref] = STATE(164),
    [sym_short_copy] = STATE(164),
    [sym_short_fn_ref] = STATE(164),
    [sym_short_quote] = STATE(164),
    [sym_bool_literal] = STATE(164),
    [sym_str_literal] = STATE(164),
    [sym_char_literal] = STATE(164),
    [sym_pattern_literal] = STATE(164),
    [sym_array_expression] = STATE(164),
    [sym_map_expression] = STATE(164),
    [sym_symbol] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_integer_literal] = ACTIONS(404),
    [sym_float_literal] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_POUND_DQUOTE] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(404),
  },
  [37] = {
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
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_integer_literal] = ACTIONS(408),
    [sym_float_literal] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_false] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(364),
    [anon_sym_POUND_DQUOTE] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_identifier] = ACTIONS(408),
  },
  [38] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(412),
    [sym_float_literal] = ACTIONS(414),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(412),
  },
  [39] = {
    [sym__s_expr] = STATE(177),
    [sym__expr] = STATE(177),
    [sym__literals] = STATE(177),
    [sym__short_helper] = STATE(177),
    [sym_short_ref] = STATE(177),
    [sym_short_copy] = STATE(177),
    [sym_short_fn_ref] = STATE(177),
    [sym_short_quote] = STATE(177),
    [sym_bool_literal] = STATE(177),
    [sym_str_literal] = STATE(177),
    [sym_char_literal] = STATE(177),
    [sym_pattern_literal] = STATE(177),
    [sym_array_expression] = STATE(177),
    [sym_map_expression] = STATE(177),
    [sym_symbol] = STATE(177),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(416),
    [sym_float_literal] = ACTIONS(418),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(416),
  },
  [40] = {
    [sym__s_expr] = STATE(156),
    [sym__expr] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__short_helper] = STATE(156),
    [sym_short_ref] = STATE(156),
    [sym_short_copy] = STATE(156),
    [sym_short_fn_ref] = STATE(156),
    [sym_short_quote] = STATE(156),
    [sym_bool_literal] = STATE(156),
    [sym_str_literal] = STATE(156),
    [sym_char_literal] = STATE(156),
    [sym_pattern_literal] = STATE(156),
    [sym_array_expression] = STATE(156),
    [sym_map_expression] = STATE(156),
    [sym_symbol] = STATE(156),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_integer_literal] = ACTIONS(420),
    [sym_float_literal] = ACTIONS(422),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_POUND_DQUOTE] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(420),
  },
  [41] = {
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
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_integer_literal] = ACTIONS(424),
    [sym_float_literal] = ACTIONS(426),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_false] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(364),
    [anon_sym_POUND_DQUOTE] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_identifier] = ACTIONS(424),
  },
  [42] = {
    [sym__s_expr] = STATE(153),
    [sym__expr] = STATE(153),
    [sym__literals] = STATE(153),
    [sym__short_helper] = STATE(153),
    [sym_short_ref] = STATE(153),
    [sym_short_copy] = STATE(153),
    [sym_short_fn_ref] = STATE(153),
    [sym_short_quote] = STATE(153),
    [sym_bool_literal] = STATE(153),
    [sym_str_literal] = STATE(153),
    [sym_char_literal] = STATE(153),
    [sym_pattern_literal] = STATE(153),
    [sym_array_expression] = STATE(153),
    [sym_map_expression] = STATE(153),
    [sym_symbol] = STATE(153),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_integer_literal] = ACTIONS(428),
    [sym_float_literal] = ACTIONS(430),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_POUND_DQUOTE] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(428),
  },
  [43] = {
    [sym__s_expr] = STATE(179),
    [sym__expr] = STATE(179),
    [sym__literals] = STATE(179),
    [sym__short_helper] = STATE(179),
    [sym_short_ref] = STATE(179),
    [sym_short_copy] = STATE(179),
    [sym_short_fn_ref] = STATE(179),
    [sym_short_quote] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [sym_symbol] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_integer_literal] = ACTIONS(432),
    [sym_float_literal] = ACTIONS(434),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(432),
  },
  [44] = {
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
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_integer_literal] = ACTIONS(436),
    [sym_float_literal] = ACTIONS(438),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_false] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(364),
    [anon_sym_POUND_DQUOTE] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_identifier] = ACTIONS(436),
  },
  [45] = {
    [sym__short_helper] = STATE(192),
    [sym_type] = STATE(192),
    [sym_complex_type] = STATE(99),
    [sym_short_ref] = STATE(192),
    [sym_short_copy] = STATE(192),
    [sym_short_fn_ref] = STATE(192),
    [sym_short_quote] = STATE(192),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_Bool] = ACTIONS(442),
    [anon_sym_Char] = ACTIONS(442),
    [anon_sym_Int] = ACTIONS(442),
    [anon_sym_Long] = ACTIONS(442),
    [anon_sym_Float] = ACTIONS(442),
    [anon_sym_Double] = ACTIONS(442),
    [anon_sym_Vector2] = ACTIONS(444),
    [anon_sym_Vector3] = ACTIONS(444),
    [anon_sym_VectorN] = ACTIONS(442),
    [anon_sym_String] = ACTIONS(442),
    [anon_sym_Pattern] = ACTIONS(442),
    [anon_sym_Array] = ACTIONS(442),
    [anon_sym_Map] = ACTIONS(442),
    [anon_sym_Maybe] = ACTIONS(442),
    [anon_sym_Result] = ACTIONS(442),
    [anon_sym_Id] = ACTIONS(442),
    [anon_sym_Ptr] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(442),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [anon_sym_Bool] = ACTIONS(448),
    [anon_sym_Char] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_Long] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Double] = ACTIONS(448),
    [anon_sym_Vector2] = ACTIONS(446),
    [anon_sym_Vector3] = ACTIONS(446),
    [anon_sym_VectorN] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_Pattern] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [anon_sym_Maybe] = ACTIONS(448),
    [anon_sym_Result] = ACTIONS(448),
    [anon_sym_Id] = ACTIONS(448),
    [anon_sym_Ptr] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AT] = ACTIONS(446),
    [anon_sym_TILDE] = ACTIONS(446),
    [anon_sym_SQUOTE] = ACTIONS(446),
    [sym_identifier] = ACTIONS(448),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [anon_sym_Bool] = ACTIONS(452),
    [anon_sym_Char] = ACTIONS(452),
    [anon_sym_Int] = ACTIONS(452),
    [anon_sym_Long] = ACTIONS(452),
    [anon_sym_Float] = ACTIONS(452),
    [anon_sym_Double] = ACTIONS(452),
    [anon_sym_Vector2] = ACTIONS(450),
    [anon_sym_Vector3] = ACTIONS(450),
    [anon_sym_VectorN] = ACTIONS(452),
    [anon_sym_String] = ACTIONS(452),
    [anon_sym_Pattern] = ACTIONS(452),
    [anon_sym_Array] = ACTIONS(452),
    [anon_sym_Map] = ACTIONS(452),
    [anon_sym_Maybe] = ACTIONS(452),
    [anon_sym_Result] = ACTIONS(452),
    [anon_sym_Id] = ACTIONS(452),
    [anon_sym_Ptr] = ACTIONS(452),
    [anon_sym_AMP] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(450),
    [anon_sym_TILDE] = ACTIONS(450),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [sym_identifier] = ACTIONS(452),
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
    [sym_type] = STATE(39),
    [sym_complex_type] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_Bool] = ACTIONS(442),
    [anon_sym_Char] = ACTIONS(442),
    [anon_sym_Int] = ACTIONS(442),
    [anon_sym_Long] = ACTIONS(442),
    [anon_sym_Float] = ACTIONS(442),
    [anon_sym_Double] = ACTIONS(442),
    [anon_sym_Vector2] = ACTIONS(444),
    [anon_sym_Vector3] = ACTIONS(444),
    [anon_sym_VectorN] = ACTIONS(442),
    [anon_sym_String] = ACTIONS(442),
    [anon_sym_Pattern] = ACTIONS(442),
    [anon_sym_Array] = ACTIONS(442),
    [anon_sym_Map] = ACTIONS(442),
    [anon_sym_Maybe] = ACTIONS(442),
    [anon_sym_Result] = ACTIONS(442),
    [anon_sym_Id] = ACTIONS(442),
    [anon_sym_Ptr] = ACTIONS(442),
    [sym_identifier] = ACTIONS(442),
  },
  [68] = {
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
  [69] = {
    [aux_sym_complex_type_repeat1] = STATE(68),
    [anon_sym_RPAREN] = ACTIONS(536),
    [anon_sym_Bool] = ACTIONS(538),
    [anon_sym_Char] = ACTIONS(538),
    [anon_sym_Int] = ACTIONS(538),
    [anon_sym_Long] = ACTIONS(538),
    [anon_sym_Float] = ACTIONS(538),
    [anon_sym_Double] = ACTIONS(538),
    [anon_sym_Vector2] = ACTIONS(540),
    [anon_sym_Vector3] = ACTIONS(540),
    [anon_sym_VectorN] = ACTIONS(538),
    [anon_sym_String] = ACTIONS(538),
    [anon_sym_Pattern] = ACTIONS(538),
    [anon_sym_Array] = ACTIONS(538),
    [anon_sym_Map] = ACTIONS(538),
    [anon_sym_Maybe] = ACTIONS(538),
    [anon_sym_Result] = ACTIONS(538),
    [anon_sym_Id] = ACTIONS(538),
    [anon_sym_Ptr] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
  },
  [70] = {
    [aux_sym_complex_type_repeat1] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_Bool] = ACTIONS(544),
    [anon_sym_Char] = ACTIONS(544),
    [anon_sym_Int] = ACTIONS(544),
    [anon_sym_Long] = ACTIONS(544),
    [anon_sym_Float] = ACTIONS(544),
    [anon_sym_Double] = ACTIONS(544),
    [anon_sym_Vector2] = ACTIONS(546),
    [anon_sym_Vector3] = ACTIONS(546),
    [anon_sym_VectorN] = ACTIONS(544),
    [anon_sym_String] = ACTIONS(544),
    [anon_sym_Pattern] = ACTIONS(544),
    [anon_sym_Array] = ACTIONS(544),
    [anon_sym_Map] = ACTIONS(544),
    [anon_sym_Maybe] = ACTIONS(544),
    [anon_sym_Result] = ACTIONS(544),
    [anon_sym_Id] = ACTIONS(544),
    [anon_sym_Ptr] = ACTIONS(544),
    [sym_identifier] = ACTIONS(544),
  },
  [71] = {
    [aux_sym_complex_type_repeat1] = STATE(72),
    [anon_sym_RPAREN] = ACTIONS(548),
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
  [72] = {
    [aux_sym_complex_type_repeat1] = STATE(72),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_Bool] = ACTIONS(552),
    [anon_sym_Char] = ACTIONS(552),
    [anon_sym_Int] = ACTIONS(552),
    [anon_sym_Long] = ACTIONS(552),
    [anon_sym_Float] = ACTIONS(552),
    [anon_sym_Double] = ACTIONS(552),
    [anon_sym_Vector2] = ACTIONS(555),
    [anon_sym_Vector3] = ACTIONS(555),
    [anon_sym_VectorN] = ACTIONS(552),
    [anon_sym_String] = ACTIONS(552),
    [anon_sym_Pattern] = ACTIONS(552),
    [anon_sym_Array] = ACTIONS(552),
    [anon_sym_Map] = ACTIONS(552),
    [anon_sym_Maybe] = ACTIONS(552),
    [anon_sym_Result] = ACTIONS(552),
    [anon_sym_Id] = ACTIONS(552),
    [anon_sym_Ptr] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
  },
  [73] = {
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
  [74] = {
    [sym__literals] = STATE(84),
    [sym_bool_literal] = STATE(84),
    [sym_str_literal] = STATE(84),
    [sym_char_literal] = STATE(84),
    [sym_pattern_literal] = STATE(84),
    [sym_array_expression] = STATE(84),
    [sym_map_expression] = STATE(84),
    [aux_sym_array_expression_repeat1] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym_integer_literal] = ACTIONS(560),
    [sym_float_literal] = ACTIONS(562),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(560),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
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
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [sym_identifier] = ACTIONS(508),
  },
  [76] = {
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
  [77] = {
    [sym__literals] = STATE(95),
    [sym_bool_literal] = STATE(95),
    [sym_str_literal] = STATE(95),
    [sym_char_literal] = STATE(95),
    [sym_pattern_literal] = STATE(95),
    [sym_array_expression] = STATE(95),
    [sym_map_expression] = STATE(95),
    [aux_sym_array_expression_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_integer_literal] = ACTIONS(566),
    [sym_float_literal] = ACTIONS(568),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(566),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_LBRACK] = ACTIONS(514),
    [anon_sym_RBRACK] = ACTIONS(514),
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
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [sym_identifier] = ACTIONS(516),
  },
  [79] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(80),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(570),
    [sym_float_literal] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(574),
    [sym_identifier] = ACTIONS(570),
  },
  [80] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(570),
    [sym_float_literal] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(576),
    [sym_identifier] = ACTIONS(570),
  },
  [81] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(570),
    [sym_float_literal] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(578),
    [sym_identifier] = ACTIONS(570),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AT] = ACTIONS(446),
    [anon_sym_TILDE] = ACTIONS(446),
    [anon_sym_SQUOTE] = ACTIONS(446),
    [sym_integer_literal] = ACTIONS(448),
    [sym_float_literal] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(446),
    [anon_sym_BSLASH] = ACTIONS(446),
    [anon_sym_POUND_DQUOTE] = ACTIONS(446),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_COLON] = ACTIONS(446),
    [sym_identifier] = ACTIONS(448),
  },
  [83] = {
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
  [84] = {
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [aux_sym_array_expression_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_integer_literal] = ACTIONS(582),
    [sym_float_literal] = ACTIONS(584),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(582),
  },
  [85] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(81),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(570),
    [sym_float_literal] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(586),
    [sym_identifier] = ACTIONS(570),
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
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [aux_sym_array_expression_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym_integer_literal] = ACTIONS(582),
    [sym_float_literal] = ACTIONS(584),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(582),
  },
  [89] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(590),
    [sym_integer_literal] = ACTIONS(593),
    [sym_float_literal] = ACTIONS(596),
    [anon_sym_true] = ACTIONS(599),
    [anon_sym_false] = ACTIONS(599),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(605),
    [anon_sym_POUND_DQUOTE] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(614),
    [sym_identifier] = ACTIONS(593),
  },
  [90] = {
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
  [91] = {
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [aux_sym_array_expression_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_RBRACK] = ACTIONS(619),
    [sym_integer_literal] = ACTIONS(621),
    [sym_float_literal] = ACTIONS(624),
    [anon_sym_true] = ACTIONS(627),
    [anon_sym_false] = ACTIONS(627),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_BSLASH] = ACTIONS(633),
    [anon_sym_POUND_DQUOTE] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(639),
    [sym_identifier] = ACTIONS(621),
  },
  [92] = {
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [aux_sym_array_expression_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym_integer_literal] = ACTIONS(644),
    [sym_float_literal] = ACTIONS(646),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(644),
  },
  [93] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(570),
    [sym_float_literal] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(648),
    [sym_identifier] = ACTIONS(570),
  },
  [94] = {
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
  [95] = {
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [aux_sym_array_expression_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(650),
    [sym_integer_literal] = ACTIONS(582),
    [sym_float_literal] = ACTIONS(584),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(582),
  },
  [96] = {
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
  [97] = {
    [sym__literals] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [aux_sym_map_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(570),
    [sym_float_literal] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(652),
    [sym_identifier] = ACTIONS(570),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_AMP] = ACTIONS(654),
    [anon_sym_AT] = ACTIONS(654),
    [anon_sym_TILDE] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [sym_integer_literal] = ACTIONS(658),
    [sym_float_literal] = ACTIONS(654),
    [anon_sym_true] = ACTIONS(658),
    [anon_sym_false] = ACTIONS(658),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [anon_sym_BSLASH] = ACTIONS(654),
    [anon_sym_POUND_DQUOTE] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(654),
    [anon_sym_COLON] = ACTIONS(654),
    [sym_identifier] = ACTIONS(658),
  },
  [99] = {
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
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(660),
    [anon_sym_RPAREN] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_AMP] = ACTIONS(660),
    [anon_sym_AT] = ACTIONS(660),
    [anon_sym_TILDE] = ACTIONS(660),
    [anon_sym_SQUOTE] = ACTIONS(660),
    [sym_integer_literal] = ACTIONS(662),
    [sym_float_literal] = ACTIONS(660),
    [anon_sym_true] = ACTIONS(662),
    [anon_sym_false] = ACTIONS(662),
    [anon_sym_DQUOTE] = ACTIONS(660),
    [anon_sym_BSLASH] = ACTIONS(660),
    [anon_sym_POUND_DQUOTE] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_COLON] = ACTIONS(660),
    [sym_identifier] = ACTIONS(662),
  },
  [101] = {
    [sym__literals] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(664),
    [sym_float_literal] = ACTIONS(666),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(664),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_AMP] = ACTIONS(668),
    [anon_sym_AT] = ACTIONS(668),
    [anon_sym_TILDE] = ACTIONS(668),
    [anon_sym_SQUOTE] = ACTIONS(668),
    [sym_integer_literal] = ACTIONS(670),
    [sym_float_literal] = ACTIONS(668),
    [anon_sym_true] = ACTIONS(670),
    [anon_sym_false] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(668),
    [anon_sym_BSLASH] = ACTIONS(668),
    [anon_sym_POUND_DQUOTE] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(668),
    [anon_sym_COLON] = ACTIONS(668),
    [sym_identifier] = ACTIONS(670),
  },
  [103] = {
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
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_AMP] = ACTIONS(672),
    [anon_sym_AT] = ACTIONS(672),
    [anon_sym_TILDE] = ACTIONS(672),
    [anon_sym_SQUOTE] = ACTIONS(672),
    [sym_integer_literal] = ACTIONS(674),
    [sym_float_literal] = ACTIONS(672),
    [anon_sym_true] = ACTIONS(674),
    [anon_sym_false] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(672),
    [anon_sym_BSLASH] = ACTIONS(672),
    [anon_sym_POUND_DQUOTE] = ACTIONS(672),
    [anon_sym_LBRACE] = ACTIONS(672),
    [anon_sym_COLON] = ACTIONS(672),
    [sym_identifier] = ACTIONS(674),
  },
  [105] = {
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
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_AT] = ACTIONS(676),
    [anon_sym_TILDE] = ACTIONS(676),
    [anon_sym_SQUOTE] = ACTIONS(676),
    [sym_integer_literal] = ACTIONS(678),
    [sym_float_literal] = ACTIONS(676),
    [anon_sym_true] = ACTIONS(678),
    [anon_sym_false] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(676),
    [anon_sym_BSLASH] = ACTIONS(676),
    [anon_sym_POUND_DQUOTE] = ACTIONS(676),
    [anon_sym_LBRACE] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(676),
    [sym_identifier] = ACTIONS(678),
  },
  [107] = {
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
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_AMP] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [sym_integer_literal] = ACTIONS(682),
    [sym_float_literal] = ACTIONS(680),
    [anon_sym_true] = ACTIONS(682),
    [anon_sym_false] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [anon_sym_BSLASH] = ACTIONS(680),
    [anon_sym_POUND_DQUOTE] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [sym_identifier] = ACTIONS(682),
  },
  [109] = {
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
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_AMP] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(684),
    [anon_sym_TILDE] = ACTIONS(684),
    [anon_sym_SQUOTE] = ACTIONS(684),
    [sym_integer_literal] = ACTIONS(686),
    [sym_float_literal] = ACTIONS(684),
    [anon_sym_true] = ACTIONS(686),
    [anon_sym_false] = ACTIONS(686),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [anon_sym_BSLASH] = ACTIONS(684),
    [anon_sym_POUND_DQUOTE] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(688),
    [anon_sym_AMP] = ACTIONS(688),
    [anon_sym_AT] = ACTIONS(688),
    [anon_sym_TILDE] = ACTIONS(688),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [sym_integer_literal] = ACTIONS(690),
    [sym_float_literal] = ACTIONS(688),
    [anon_sym_true] = ACTIONS(690),
    [anon_sym_false] = ACTIONS(690),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [anon_sym_BSLASH] = ACTIONS(688),
    [anon_sym_POUND_DQUOTE] = ACTIONS(688),
    [anon_sym_LBRACE] = ACTIONS(688),
    [anon_sym_COLON] = ACTIONS(688),
    [sym_identifier] = ACTIONS(690),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
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
    [anon_sym_COLON] = ACTIONS(474),
    [sym_identifier] = ACTIONS(476),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AMP] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(450),
    [anon_sym_TILDE] = ACTIONS(450),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [sym_integer_literal] = ACTIONS(452),
    [sym_float_literal] = ACTIONS(450),
    [anon_sym_true] = ACTIONS(452),
    [anon_sym_false] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(450),
    [anon_sym_BSLASH] = ACTIONS(450),
    [anon_sym_POUND_DQUOTE] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(450),
    [sym_identifier] = ACTIONS(452),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_AT] = ACTIONS(692),
    [anon_sym_TILDE] = ACTIONS(692),
    [anon_sym_SQUOTE] = ACTIONS(692),
    [sym_integer_literal] = ACTIONS(694),
    [sym_float_literal] = ACTIONS(692),
    [anon_sym_true] = ACTIONS(694),
    [anon_sym_false] = ACTIONS(694),
    [anon_sym_DQUOTE] = ACTIONS(692),
    [anon_sym_BSLASH] = ACTIONS(692),
    [anon_sym_POUND_DQUOTE] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(692),
    [anon_sym_COLON] = ACTIONS(692),
    [sym_identifier] = ACTIONS(694),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
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
    [anon_sym_COLON] = ACTIONS(510),
    [sym_identifier] = ACTIONS(512),
  },
  [116] = {
    [anon_sym_LBRACK] = ACTIONS(696),
    [sym_integer_literal] = ACTIONS(698),
    [sym_float_literal] = ACTIONS(696),
    [anon_sym_true] = ACTIONS(698),
    [anon_sym_false] = ACTIONS(698),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [anon_sym_BSLASH] = ACTIONS(696),
    [anon_sym_POUND_DQUOTE] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_RBRACE] = ACTIONS(696),
    [sym_identifier] = ACTIONS(698),
  },
  [117] = {
    [sym_line_comment] = STATE(117),
    [sym__s_expr] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(700),
    [anon_sym_SEMI] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(705),
  },
  [118] = {
    [sym_line_comment] = STATE(117),
    [sym__s_expr] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [119] = {
    [sym_symbol] = STATE(121),
    [aux_sym_parameters_repeat1] = STATE(121),
    [anon_sym_RBRACK] = ACTIONS(710),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(712),
  },
  [120] = {
    [sym_symbol] = STATE(119),
    [aux_sym_parameters_repeat1] = STATE(119),
    [anon_sym_RBRACK] = ACTIONS(714),
    [anon_sym_COLON] = ACTIONS(338),
    [sym_identifier] = ACTIONS(716),
  },
  [121] = {
    [sym_symbol] = STATE(121),
    [aux_sym_parameters_repeat1] = STATE(121),
    [anon_sym_RBRACK] = ACTIONS(718),
    [anon_sym_COLON] = ACTIONS(720),
    [sym_identifier] = ACTIONS(723),
  },
  [122] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(726),
    [anon_sym_DQUOTE2] = ACTIONS(728),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [123] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(726),
    [anon_sym_DQUOTE2] = ACTIONS(732),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [124] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(726),
    [anon_sym_DQUOTE2] = ACTIONS(734),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [125] = {
    [aux_sym_str_literal_repeat1] = STATE(133),
    [aux_sym_str_literal_token1] = ACTIONS(736),
    [anon_sym_DQUOTE2] = ACTIONS(738),
    [sym_escape_sequence] = ACTIONS(740),
  },
  [126] = {
    [aux_sym_str_literal_repeat1] = STATE(123),
    [aux_sym_str_literal_token1] = ACTIONS(742),
    [anon_sym_DQUOTE2] = ACTIONS(744),
    [sym_escape_sequence] = ACTIONS(746),
  },
  [127] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(748),
    [anon_sym_DQUOTE2] = ACTIONS(750),
    [sym_escape_sequence] = ACTIONS(752),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(754),
    [anon_sym_SEMI] = ACTIONS(754),
    [anon_sym_LPAREN] = ACTIONS(754),
    [anon_sym_RPAREN] = ACTIONS(754),
  },
  [129] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(726),
    [anon_sym_DQUOTE2] = ACTIONS(756),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [130] = {
    [aux_sym_str_literal_repeat1] = STATE(122),
    [aux_sym_str_literal_token1] = ACTIONS(758),
    [anon_sym_DQUOTE2] = ACTIONS(760),
    [sym_escape_sequence] = ACTIONS(762),
  },
  [131] = {
    [aux_sym_str_literal_repeat1] = STATE(129),
    [aux_sym_str_literal_token1] = ACTIONS(764),
    [anon_sym_DQUOTE2] = ACTIONS(766),
    [sym_escape_sequence] = ACTIONS(768),
  },
  [132] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(726),
    [anon_sym_DQUOTE2] = ACTIONS(770),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [133] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(726),
    [anon_sym_DQUOTE2] = ACTIONS(772),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [134] = {
    [aux_sym_str_literal_repeat1] = STATE(134),
    [aux_sym_str_literal_token1] = ACTIONS(774),
    [anon_sym_DQUOTE2] = ACTIONS(777),
    [sym_escape_sequence] = ACTIONS(779),
  },
  [135] = {
    [aux_sym_str_literal_repeat1] = STATE(132),
    [aux_sym_str_literal_token1] = ACTIONS(782),
    [anon_sym_DQUOTE2] = ACTIONS(784),
    [sym_escape_sequence] = ACTIONS(786),
  },
  [136] = {
    [aux_sym_let_pairs_repeat1] = STATE(138),
    [anon_sym_RBRACK] = ACTIONS(788),
    [sym_identifier] = ACTIONS(790),
  },
  [137] = {
    [aux_sym_let_pairs_repeat1] = STATE(137),
    [anon_sym_RBRACK] = ACTIONS(792),
    [sym_identifier] = ACTIONS(794),
  },
  [138] = {
    [aux_sym_let_pairs_repeat1] = STATE(137),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym_identifier] = ACTIONS(790),
  },
  [139] = {
    [sym_interface_fn] = STATE(178),
    [anon_sym_Fn] = ACTIONS(799),
    [anon_sym_] = ACTIONS(799),
  },
  [140] = {
    [anon_sym_RBRACK] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [sym_identifier] = ACTIONS(510),
  },
  [141] = {
    [anon_sym_RBRACK] = ACTIONS(518),
    [sym_identifier] = ACTIONS(518),
  },
  [142] = {
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_identifier] = ACTIONS(446),
  },
  [143] = {
    [sym_parameters] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(801),
  },
  [144] = {
    [anon_sym_RBRACK] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
  },
  [145] = {
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
  },
  [146] = {
    [anon_sym_RBRACK] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
  },
  [147] = {
    [sym_typed_parameters] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(803),
  },
  [148] = {
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym_identifier] = ACTIONS(466),
  },
  [149] = {
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_identifier] = ACTIONS(458),
  },
  [150] = {
    [anon_sym_RBRACK] = ACTIONS(454),
    [sym_identifier] = ACTIONS(454),
  },
  [151] = {
    [aux_sym_str_literal_token1] = ACTIONS(805),
    [sym_escape_sequence] = ACTIONS(807),
  },
  [152] = {
    [anon_sym_RBRACK] = ACTIONS(506),
    [sym_identifier] = ACTIONS(506),
  },
  [153] = {
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_identifier] = ACTIONS(809),
  },
  [154] = {
    [sym_parameters] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(801),
  },
  [155] = {
    [anon_sym_RBRACK] = ACTIONS(478),
    [sym_identifier] = ACTIONS(478),
  },
  [156] = {
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym_identifier] = ACTIONS(482),
  },
  [157] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(801),
  },
  [158] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(801),
  },
  [159] = {
    [anon_sym_RBRACK] = ACTIONS(486),
    [sym_identifier] = ACTIONS(486),
  },
  [160] = {
    [aux_sym_str_literal_token1] = ACTIONS(811),
    [sym_escape_sequence] = ACTIONS(813),
  },
  [161] = {
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym_identifier] = ACTIONS(494),
  },
  [162] = {
    [aux_sym_str_literal_token1] = ACTIONS(815),
    [sym_escape_sequence] = ACTIONS(817),
  },
  [163] = {
    [sym_let_pairs] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(819),
  },
  [164] = {
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
  },
  [165] = {
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_identifier] = ACTIONS(502),
  },
  [166] = {
    [sym_identifier] = ACTIONS(821),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(823),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(825),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(827),
  },
  [170] = {
    [sym_identifier] = ACTIONS(829),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [172] = {
    [aux_sym_line_comment_token1] = ACTIONS(833),
  },
  [173] = {
    [sym_identifier] = ACTIONS(835),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(837),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(839),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(841),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(843),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(845),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(847),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(849),
  },
  [181] = {
    [sym_identifier] = ACTIONS(851),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(853),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [184] = {
    [sym_identifier] = ACTIONS(857),
  },
  [185] = {
    [sym_identifier] = ACTIONS(859),
  },
  [186] = {
    [sym_identifier] = ACTIONS(861),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(863),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(865),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(867),
  },
  [190] = {
    [sym_identifier] = ACTIONS(869),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(871),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(873),
  },
  [193] = {
    [sym_identifier] = ACTIONS(875),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(877),
  },
  [195] = {
    [sym_identifier] = ACTIONS(879),
  },
  [196] = {
    [sym_identifier] = ACTIONS(881),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(883),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(172),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(184),
  [11] = {.count = 1, .reusable = false}, SHIFT(154),
  [13] = {.count = 1, .reusable = false}, SHIFT(166),
  [15] = {.count = 1, .reusable = false}, SHIFT(163),
  [17] = {.count = 1, .reusable = true}, SHIFT(92),
  [19] = {.count = 1, .reusable = false}, SHIFT(12),
  [21] = {.count = 1, .reusable = false}, SHIFT(28),
  [23] = {.count = 1, .reusable = false}, SHIFT(29),
  [25] = {.count = 1, .reusable = false}, SHIFT(31),
  [27] = {.count = 1, .reusable = false}, SHIFT(43),
  [29] = {.count = 1, .reusable = false}, SHIFT(195),
  [31] = {.count = 1, .reusable = false}, SHIFT(67),
  [33] = {.count = 1, .reusable = false}, SHIFT(185),
  [35] = {.count = 1, .reusable = false}, SHIFT(186),
  [37] = {.count = 1, .reusable = false}, SHIFT(193),
  [39] = {.count = 1, .reusable = false}, SHIFT(170),
  [41] = {.count = 1, .reusable = true}, SHIFT(32),
  [43] = {.count = 1, .reusable = true}, SHIFT(34),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = false}, SHIFT(191),
  [51] = {.count = 1, .reusable = true}, SHIFT(191),
  [53] = {.count = 1, .reusable = false}, SHIFT(82),
  [55] = {.count = 1, .reusable = true}, SHIFT(135),
  [57] = {.count = 1, .reusable = true}, SHIFT(162),
  [59] = {.count = 1, .reusable = true}, SHIFT(125),
  [61] = {.count = 1, .reusable = true}, SHIFT(79),
  [63] = {.count = 1, .reusable = true}, SHIFT(196),
  [65] = {.count = 1, .reusable = false}, SHIFT(98),
  [67] = {.count = 1, .reusable = false}, SHIFT(180),
  [69] = {.count = 1, .reusable = true}, SHIFT(180),
  [71] = {.count = 1, .reusable = false}, SHIFT(174),
  [73] = {.count = 1, .reusable = true}, SHIFT(174),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 9),
  [77] = {.count = 1, .reusable = false}, SHIFT(102),
  [79] = {.count = 1, .reusable = true}, SHIFT(102),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 10),
  [83] = {.count = 1, .reusable = false}, SHIFT(11),
  [85] = {.count = 1, .reusable = true}, SHIFT(11),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(3),
  [90] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(92),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(32),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(34),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(26),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(100),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(100),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(82),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(135),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(162),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(125),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(79),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 15), SHIFT_REPEAT(196),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 20),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [135] = {.count = 1, .reusable = false}, SHIFT(6),
  [137] = {.count = 1, .reusable = true}, SHIFT(6),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [141] = {.count = 1, .reusable = false}, SHIFT(100),
  [143] = {.count = 1, .reusable = true}, SHIFT(100),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(92),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(32),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(34),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(25),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(26),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(11),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(11),
  [171] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(82),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(135),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(162),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(125),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(79),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(196),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(3),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(92),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(32),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(34),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(25),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(26),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(102),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(102),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(82),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(135),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(162),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(125),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(79),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 30), SHIFT_REPEAT(196),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 13),
  [237] = {.count = 1, .reusable = false}, SHIFT(189),
  [239] = {.count = 1, .reusable = true}, SHIFT(189),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [243] = {.count = 1, .reusable = false}, SHIFT(167),
  [245] = {.count = 1, .reusable = true}, SHIFT(167),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [249] = {.count = 1, .reusable = false}, SHIFT(171),
  [251] = {.count = 1, .reusable = true}, SHIFT(171),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [255] = {.count = 1, .reusable = false}, SHIFT(169),
  [257] = {.count = 1, .reusable = true}, SHIFT(169),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 13),
  [261] = {.count = 1, .reusable = false}, SHIFT(183),
  [263] = {.count = 1, .reusable = true}, SHIFT(183),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(70),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(41),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(37),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [288] = {.count = 1, .reusable = true}, SHIFT(70),
  [290] = {.count = 1, .reusable = true}, SHIFT(65),
  [292] = {.count = 1, .reusable = false}, SHIFT(50),
  [294] = {.count = 1, .reusable = true}, SHIFT(50),
  [296] = {.count = 1, .reusable = true}, SHIFT(41),
  [298] = {.count = 1, .reusable = true}, SHIFT(44),
  [300] = {.count = 1, .reusable = true}, SHIFT(37),
  [302] = {.count = 1, .reusable = true}, SHIFT(27),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 13),
  [306] = {.count = 1, .reusable = false}, SHIFT(188),
  [308] = {.count = 1, .reusable = true}, SHIFT(188),
  [310] = {.count = 1, .reusable = true}, SHIFT(66),
  [312] = {.count = 1, .reusable = true}, SHIFT(4),
  [314] = {.count = 1, .reusable = true}, SHIFT(77),
  [316] = {.count = 1, .reusable = true}, SHIFT(40),
  [318] = {.count = 1, .reusable = true}, SHIFT(23),
  [320] = {.count = 1, .reusable = true}, SHIFT(35),
  [322] = {.count = 1, .reusable = true}, SHIFT(36),
  [324] = {.count = 1, .reusable = false}, SHIFT(159),
  [326] = {.count = 1, .reusable = true}, SHIFT(159),
  [328] = {.count = 1, .reusable = false}, SHIFT(142),
  [330] = {.count = 1, .reusable = true}, SHIFT(131),
  [332] = {.count = 1, .reusable = true}, SHIFT(160),
  [334] = {.count = 1, .reusable = true}, SHIFT(130),
  [336] = {.count = 1, .reusable = true}, SHIFT(93),
  [338] = {.count = 1, .reusable = true}, SHIFT(173),
  [340] = {.count = 1, .reusable = false}, SHIFT(175),
  [342] = {.count = 1, .reusable = true}, SHIFT(175),
  [344] = {.count = 1, .reusable = false}, SHIFT(109),
  [346] = {.count = 1, .reusable = true}, SHIFT(109),
  [348] = {.count = 1, .reusable = false}, SHIFT(113),
  [350] = {.count = 1, .reusable = true}, SHIFT(113),
  [352] = {.count = 1, .reusable = true}, SHIFT(2),
  [354] = {.count = 1, .reusable = true}, SHIFT(74),
  [356] = {.count = 1, .reusable = false}, SHIFT(47),
  [358] = {.count = 1, .reusable = true}, SHIFT(47),
  [360] = {.count = 1, .reusable = false}, SHIFT(46),
  [362] = {.count = 1, .reusable = true}, SHIFT(127),
  [364] = {.count = 1, .reusable = true}, SHIFT(151),
  [366] = {.count = 1, .reusable = true}, SHIFT(126),
  [368] = {.count = 1, .reusable = true}, SHIFT(85),
  [370] = {.count = 1, .reusable = true}, SHIFT(190),
  [372] = {.count = 1, .reusable = false}, SHIFT(30),
  [374] = {.count = 1, .reusable = true}, SHIFT(30),
  [376] = {.count = 1, .reusable = false}, SHIFT(15),
  [378] = {.count = 1, .reusable = true}, SHIFT(15),
  [380] = {.count = 1, .reusable = false}, SHIFT(33),
  [382] = {.count = 1, .reusable = true}, SHIFT(33),
  [384] = {.count = 1, .reusable = false}, SHIFT(182),
  [386] = {.count = 1, .reusable = true}, SHIFT(182),
  [388] = {.count = 1, .reusable = false}, SHIFT(105),
  [390] = {.count = 1, .reusable = true}, SHIFT(105),
  [392] = {.count = 1, .reusable = false}, SHIFT(187),
  [394] = {.count = 1, .reusable = true}, SHIFT(187),
  [396] = {.count = 1, .reusable = false}, SHIFT(107),
  [398] = {.count = 1, .reusable = true}, SHIFT(107),
  [400] = {.count = 1, .reusable = false}, SHIFT(161),
  [402] = {.count = 1, .reusable = true}, SHIFT(161),
  [404] = {.count = 1, .reusable = false}, SHIFT(164),
  [406] = {.count = 1, .reusable = true}, SHIFT(164),
  [408] = {.count = 1, .reusable = false}, SHIFT(58),
  [410] = {.count = 1, .reusable = true}, SHIFT(58),
  [412] = {.count = 1, .reusable = false}, SHIFT(168),
  [414] = {.count = 1, .reusable = true}, SHIFT(168),
  [416] = {.count = 1, .reusable = false}, SHIFT(177),
  [418] = {.count = 1, .reusable = true}, SHIFT(177),
  [420] = {.count = 1, .reusable = false}, SHIFT(156),
  [422] = {.count = 1, .reusable = true}, SHIFT(156),
  [424] = {.count = 1, .reusable = false}, SHIFT(55),
  [426] = {.count = 1, .reusable = true}, SHIFT(55),
  [428] = {.count = 1, .reusable = false}, SHIFT(153),
  [430] = {.count = 1, .reusable = true}, SHIFT(153),
  [432] = {.count = 1, .reusable = false}, SHIFT(179),
  [434] = {.count = 1, .reusable = true}, SHIFT(179),
  [436] = {.count = 1, .reusable = false}, SHIFT(56),
  [438] = {.count = 1, .reusable = true}, SHIFT(56),
  [440] = {.count = 1, .reusable = true}, SHIFT(69),
  [442] = {.count = 1, .reusable = false}, SHIFT(99),
  [444] = {.count = 1, .reusable = true}, SHIFT(99),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 22),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 22),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [500] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [530] = {.count = 1, .reusable = true}, SHIFT(112),
  [532] = {.count = 1, .reusable = false}, SHIFT(72),
  [534] = {.count = 1, .reusable = true}, SHIFT(72),
  [536] = {.count = 1, .reusable = true}, SHIFT(103),
  [538] = {.count = 1, .reusable = false}, SHIFT(68),
  [540] = {.count = 1, .reusable = true}, SHIFT(68),
  [542] = {.count = 1, .reusable = true}, SHIFT(52),
  [544] = {.count = 1, .reusable = false}, SHIFT(71),
  [546] = {.count = 1, .reusable = true}, SHIFT(71),
  [548] = {.count = 1, .reusable = true}, SHIFT(53),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(72),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(72),
  [558] = {.count = 1, .reusable = true}, SHIFT(54),
  [560] = {.count = 1, .reusable = false}, SHIFT(84),
  [562] = {.count = 1, .reusable = true}, SHIFT(84),
  [564] = {.count = 1, .reusable = true}, SHIFT(155),
  [566] = {.count = 1, .reusable = false}, SHIFT(95),
  [568] = {.count = 1, .reusable = true}, SHIFT(95),
  [570] = {.count = 1, .reusable = false}, SHIFT(101),
  [572] = {.count = 1, .reusable = true}, SHIFT(101),
  [574] = {.count = 1, .reusable = true}, SHIFT(78),
  [576] = {.count = 1, .reusable = true}, SHIFT(94),
  [578] = {.count = 1, .reusable = true}, SHIFT(48),
  [580] = {.count = 1, .reusable = true}, SHIFT(57),
  [582] = {.count = 1, .reusable = false}, SHIFT(91),
  [584] = {.count = 1, .reusable = true}, SHIFT(91),
  [586] = {.count = 1, .reusable = true}, SHIFT(63),
  [588] = {.count = 1, .reusable = true}, SHIFT(90),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(92),
  [593] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(101),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(101),
  [599] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(82),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(135),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(162),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(125),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23), SHIFT_REPEAT(79),
  [614] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 23),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(92),
  [619] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(91),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(91),
  [627] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(82),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(135),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(162),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(125),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(79),
  [642] = {.count = 1, .reusable = true}, SHIFT(87),
  [644] = {.count = 1, .reusable = false}, SHIFT(88),
  [646] = {.count = 1, .reusable = true}, SHIFT(88),
  [648] = {.count = 1, .reusable = true}, SHIFT(144),
  [650] = {.count = 1, .reusable = true}, SHIFT(146),
  [652] = {.count = 1, .reusable = true}, SHIFT(150),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [656] = {.count = 1, .reusable = true}, SHIFT(181),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [660] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [662] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [664] = {.count = 1, .reusable = false}, SHIFT(116),
  [666] = {.count = 1, .reusable = true}, SHIFT(116),
  [668] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 19),
  [670] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 19),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 24),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 24),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 27),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 27),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [696] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 21),
  [698] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 21),
  [700] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [710] = {.count = 1, .reusable = true}, SHIFT(106),
  [712] = {.count = 1, .reusable = true}, SHIFT(121),
  [714] = {.count = 1, .reusable = true}, SHIFT(114),
  [716] = {.count = 1, .reusable = true}, SHIFT(119),
  [718] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(173),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(121),
  [726] = {.count = 1, .reusable = false}, SHIFT(134),
  [728] = {.count = 1, .reusable = true}, SHIFT(149),
  [730] = {.count = 1, .reusable = true}, SHIFT(134),
  [732] = {.count = 1, .reusable = true}, SHIFT(49),
  [734] = {.count = 1, .reusable = true}, SHIFT(51),
  [736] = {.count = 1, .reusable = false}, SHIFT(133),
  [738] = {.count = 1, .reusable = true}, SHIFT(76),
  [740] = {.count = 1, .reusable = true}, SHIFT(133),
  [742] = {.count = 1, .reusable = false}, SHIFT(123),
  [744] = {.count = 1, .reusable = true}, SHIFT(64),
  [746] = {.count = 1, .reusable = true}, SHIFT(123),
  [748] = {.count = 1, .reusable = false}, SHIFT(124),
  [750] = {.count = 1, .reusable = true}, SHIFT(60),
  [752] = {.count = 1, .reusable = true}, SHIFT(124),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [756] = {.count = 1, .reusable = true}, SHIFT(148),
  [758] = {.count = 1, .reusable = false}, SHIFT(122),
  [760] = {.count = 1, .reusable = true}, SHIFT(141),
  [762] = {.count = 1, .reusable = true}, SHIFT(122),
  [764] = {.count = 1, .reusable = false}, SHIFT(129),
  [766] = {.count = 1, .reusable = true}, SHIFT(165),
  [768] = {.count = 1, .reusable = true}, SHIFT(129),
  [770] = {.count = 1, .reusable = true}, SHIFT(86),
  [772] = {.count = 1, .reusable = true}, SHIFT(83),
  [774] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(134),
  [777] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [779] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(134),
  [782] = {.count = 1, .reusable = false}, SHIFT(132),
  [784] = {.count = 1, .reusable = true}, SHIFT(96),
  [786] = {.count = 1, .reusable = true}, SHIFT(132),
  [788] = {.count = 1, .reusable = true}, SHIFT(108),
  [790] = {.count = 1, .reusable = true}, SHIFT(42),
  [792] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 28),
  [794] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 28), SHIFT_REPEAT(42),
  [797] = {.count = 1, .reusable = true}, SHIFT(110),
  [799] = {.count = 1, .reusable = true}, SHIFT(147),
  [801] = {.count = 1, .reusable = true}, SHIFT(120),
  [803] = {.count = 1, .reusable = true}, SHIFT(22),
  [805] = {.count = 1, .reusable = false}, SHIFT(61),
  [807] = {.count = 1, .reusable = true}, SHIFT(61),
  [809] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 26),
  [811] = {.count = 1, .reusable = false}, SHIFT(152),
  [813] = {.count = 1, .reusable = true}, SHIFT(152),
  [815] = {.count = 1, .reusable = false}, SHIFT(75),
  [817] = {.count = 1, .reusable = true}, SHIFT(75),
  [819] = {.count = 1, .reusable = true}, SHIFT(136),
  [821] = {.count = 1, .reusable = true}, SHIFT(143),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 16),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 11),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 12),
  [829] = {.count = 1, .reusable = true}, SHIFT(5),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 14),
  [833] = {.count = 1, .reusable = true}, SHIFT(128),
  [835] = {.count = 1, .reusable = true}, SHIFT(140),
  [837] = {.count = 1, .reusable = true}, SHIFT(145),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 17),
  [841] = {.count = 1, .reusable = true}, SHIFT(139),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 18),
  [845] = {.count = 1, .reusable = true}, SHIFT(194),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [849] = {.count = 1, .reusable = true}, SHIFT(73),
  [851] = {.count = 1, .reusable = true}, SHIFT(104),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 25),
  [857] = {.count = 1, .reusable = true}, SHIFT(38),
  [859] = {.count = 1, .reusable = true}, SHIFT(176),
  [861] = {.count = 1, .reusable = true}, SHIFT(157),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 29),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 25),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 25),
  [869] = {.count = 1, .reusable = true}, SHIFT(62),
  [871] = {.count = 1, .reusable = true}, SHIFT(59),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 32),
  [875] = {.count = 1, .reusable = true}, SHIFT(158),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 31),
  [879] = {.count = 1, .reusable = true}, SHIFT(24),
  [881] = {.count = 1, .reusable = true}, SHIFT(115),
  [883] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
