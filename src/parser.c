#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 193
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
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
  anon_sym_Fn = 39,
  anon_sym_ = 40,
  anon_sym_AMP = 41,
  anon_sym_AT = 42,
  anon_sym_TILDE = 43,
  anon_sym_SQUOTE = 44,
  sym_integer_literal = 45,
  sym_float_literal = 46,
  anon_sym_true = 47,
  anon_sym_false = 48,
  anon_sym_DQUOTE = 49,
  aux_sym_str_literal_token1 = 50,
  anon_sym_DQUOTE2 = 51,
  anon_sym_BSLASH = 52,
  anon_sym_POUND_DQUOTE = 53,
  sym_escape_sequence = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_COLON = 57,
  sym_identifier = 58,
  sym_source_file = 59,
  sym_line_comment = 60,
  sym__s_expr = 61,
  sym__expr = 62,
  sym__anything = 63,
  sym__s_forms = 64,
  sym__defs = 65,
  sym__literals = 66,
  sym__short_helper = 67,
  sym_def = 68,
  sym_fn = 69,
  sym_defn = 70,
  sym_let = 71,
  sym_let_pairs = 72,
  sym_do = 73,
  sym_if = 74,
  sym_while = 75,
  sym_ref = 76,
  sym_address = 77,
  sym_set = 78,
  sym_the = 79,
  sym_type = 80,
  sym_complex_type = 81,
  sym_call_expression = 82,
  sym_call_name = 83,
  sym_definterface = 84,
  sym_defmacro = 85,
  sym_defndynamic = 86,
  sym_interface_fn = 87,
  sym_short_ref = 88,
  sym_short_copy = 89,
  sym_short_fn_ref = 90,
  sym_short_quote = 91,
  sym_parameters = 92,
  sym_typed_parameters = 93,
  sym_bool_literal = 94,
  sym_str_literal = 95,
  sym_char_literal = 96,
  sym_pattern_literal = 97,
  sym_array_expression = 98,
  sym_map_expression = 99,
  sym_symbol = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_let_pairs_repeat1 = 102,
  aux_sym_do_repeat1 = 103,
  aux_sym_complex_type_repeat1 = 104,
  aux_sym_call_expression_repeat1 = 105,
  aux_sym_parameters_repeat1 = 106,
  aux_sym_typed_parameters_repeat1 = 107,
  aux_sym_str_literal_repeat1 = 108,
  aux_sym_array_expression_repeat1 = 109,
  aux_sym_map_expression_repeat1 = 110,
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
  field_else = 5,
  field_expr = 6,
  field_fn = 7,
  field_key = 8,
  field_module = 9,
  field_name = 10,
  field_pairs = 11,
  field_parameters = 12,
  field_return_type = 13,
  field_then = 14,
  field_type = 15,
  field_typed_params = 16,
  field_value = 17,
  field_var = 18,
  field_variable = 19,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
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
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 4},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 4},
  [26] = {.index = 47, .length = 3},
  [27] = {.index = 50, .length = 2},
  [28] = {.index = 52, .length = 2},
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
    {field_argument, 1},
    {field_call_name, 0},
  [10] =
    {field_name, 1},
    {field_value, 2},
  [12] =
    {field_body, 2},
    {field_parameters, 1},
  [14] =
    {field_name, 1},
    {field_parameters, 2},
  [16] =
    {field_body, 2},
    {field_pairs, 1},
  [18] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [20] =
    {field_body, 2},
    {field_condition, 1},
  [22] =
    {field_expr, 2},
    {field_variable, 1},
  [24] =
    {field_expr, 2},
    {field_type, 1},
  [26] =
    {field_key, 0},
    {field_value, 1},
  [28] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [30] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_module, 0},
    {field_name, 2},
  [36] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [39] =
    {field_expr, 1},
    {field_var, 0},
  [41] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [43] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [47] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [50] =
    {field_fn, 3},
    {field_name, 1},
  [52] =
    {field_return_type, 2},
    {field_typed_params, 1},
};

static TSSymbol ts_alias_sequences[29][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(174);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == 955) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(174);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == 955) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(174);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '~') ADVANCE(65);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(83);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 955) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
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
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(91);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Fn);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 62:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 72:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 85:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 91:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 98:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 105:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 107:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 108:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 109:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 111:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 112:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 113:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 116:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 117:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 118:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 119:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 121:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 122:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 123:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 125:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 126:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 133:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 139:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 142:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 148:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 154:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 155:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 165:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 169:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 170:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 172:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 173:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 178:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 182:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 185:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
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
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 8},
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
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
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
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
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
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 0},
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
    [sym_source_file] = STATE(192),
    [sym_line_comment] = STATE(114),
    [sym__s_expr] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(186),
    [sym__s_expr] = STATE(186),
    [sym__anything] = STATE(186),
    [sym__s_forms] = STATE(186),
    [sym__defs] = STATE(186),
    [sym__literals] = STATE(186),
    [sym__short_helper] = STATE(186),
    [sym_def] = STATE(186),
    [sym_fn] = STATE(186),
    [sym_defn] = STATE(186),
    [sym_let] = STATE(186),
    [sym_do] = STATE(186),
    [sym_if] = STATE(186),
    [sym_while] = STATE(186),
    [sym_ref] = STATE(186),
    [sym_address] = STATE(186),
    [sym_set] = STATE(186),
    [sym_the] = STATE(186),
    [sym_call_expression] = STATE(186),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(186),
    [sym_defmacro] = STATE(186),
    [sym_defndynamic] = STATE(186),
    [sym_short_ref] = STATE(186),
    [sym_short_copy] = STATE(186),
    [sym_short_fn_ref] = STATE(100),
    [sym_short_quote] = STATE(186),
    [sym_bool_literal] = STATE(186),
    [sym_str_literal] = STATE(186),
    [sym_char_literal] = STATE(186),
    [sym_pattern_literal] = STATE(186),
    [sym_array_expression] = STATE(186),
    [sym_map_expression] = STATE(186),
    [sym_symbol] = STATE(186),
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
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(47),
    [sym_float_literal] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
  },
  [3] = {
    [sym_line_comment] = STATE(166),
    [sym__s_expr] = STATE(166),
    [sym__anything] = STATE(166),
    [sym__s_forms] = STATE(166),
    [sym__defs] = STATE(166),
    [sym__literals] = STATE(166),
    [sym__short_helper] = STATE(166),
    [sym_def] = STATE(166),
    [sym_fn] = STATE(166),
    [sym_defn] = STATE(166),
    [sym_let] = STATE(166),
    [sym_do] = STATE(166),
    [sym_if] = STATE(166),
    [sym_while] = STATE(166),
    [sym_ref] = STATE(166),
    [sym_address] = STATE(166),
    [sym_set] = STATE(166),
    [sym_the] = STATE(166),
    [sym_call_expression] = STATE(166),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(166),
    [sym_defmacro] = STATE(166),
    [sym_defndynamic] = STATE(166),
    [sym_short_ref] = STATE(166),
    [sym_short_copy] = STATE(166),
    [sym_short_fn_ref] = STATE(100),
    [sym_short_quote] = STATE(166),
    [sym_bool_literal] = STATE(166),
    [sym_str_literal] = STATE(166),
    [sym_char_literal] = STATE(166),
    [sym_pattern_literal] = STATE(166),
    [sym_array_expression] = STATE(166),
    [sym_map_expression] = STATE(166),
    [sym_symbol] = STATE(166),
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
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
  },
  [4] = {
    [sym_line_comment] = STATE(169),
    [sym__s_expr] = STATE(169),
    [sym__anything] = STATE(169),
    [sym__s_forms] = STATE(169),
    [sym__defs] = STATE(169),
    [sym__literals] = STATE(169),
    [sym__short_helper] = STATE(169),
    [sym_def] = STATE(169),
    [sym_fn] = STATE(169),
    [sym_defn] = STATE(169),
    [sym_let] = STATE(169),
    [sym_do] = STATE(169),
    [sym_if] = STATE(169),
    [sym_while] = STATE(169),
    [sym_ref] = STATE(169),
    [sym_address] = STATE(169),
    [sym_set] = STATE(169),
    [sym_the] = STATE(169),
    [sym_call_expression] = STATE(169),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(169),
    [sym_defmacro] = STATE(169),
    [sym_defndynamic] = STATE(169),
    [sym_short_ref] = STATE(169),
    [sym_short_copy] = STATE(169),
    [sym_short_fn_ref] = STATE(100),
    [sym_short_quote] = STATE(169),
    [sym_bool_literal] = STATE(169),
    [sym_str_literal] = STATE(169),
    [sym_char_literal] = STATE(169),
    [sym_pattern_literal] = STATE(169),
    [sym_array_expression] = STATE(169),
    [sym_map_expression] = STATE(169),
    [sym_symbol] = STATE(169),
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
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(69),
    [sym_float_literal] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
  },
  [5] = {
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
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_integer_literal] = ACTIONS(93),
    [sym_float_literal] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_BSLASH] = ACTIONS(105),
    [anon_sym_POUND_DQUOTE] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(114),
    [sym_identifier] = ACTIONS(93),
  },
  [6] = {
    [sym__s_expr] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__literals] = STATE(9),
    [sym__short_helper] = STATE(9),
    [sym_short_ref] = STATE(9),
    [sym_short_copy] = STATE(9),
    [sym_short_fn_ref] = STATE(9),
    [sym_short_quote] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [sym_symbol] = STATE(9),
    [aux_sym_call_expression_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(119),
    [sym_float_literal] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(119),
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
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(125),
    [sym_float_literal] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(125),
  },
  [8] = {
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
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(131),
  },
  [9] = {
    [sym__s_expr] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__literals] = STATE(9),
    [sym__short_helper] = STATE(9),
    [sym_short_ref] = STATE(9),
    [sym_short_copy] = STATE(9),
    [sym_short_fn_ref] = STATE(9),
    [sym_short_quote] = STATE(9),
    [sym_bool_literal] = STATE(9),
    [sym_str_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_pattern_literal] = STATE(9),
    [sym_array_expression] = STATE(9),
    [sym_map_expression] = STATE(9),
    [sym_symbol] = STATE(9),
    [aux_sym_call_expression_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [sym_integer_literal] = ACTIONS(155),
    [sym_float_literal] = ACTIONS(158),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_BSLASH] = ACTIONS(167),
    [anon_sym_POUND_DQUOTE] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(176),
    [sym_identifier] = ACTIONS(155),
  },
  [10] = {
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
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(131),
  },
  [11] = {
    [sym__short_helper] = STATE(19),
    [sym_type] = STATE(19),
    [sym_complex_type] = STATE(45),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [aux_sym_typed_parameters_repeat1] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_Bool] = ACTIONS(185),
    [anon_sym_Char] = ACTIONS(185),
    [anon_sym_Int] = ACTIONS(185),
    [anon_sym_Long] = ACTIONS(185),
    [anon_sym_Float] = ACTIONS(185),
    [anon_sym_Double] = ACTIONS(185),
    [anon_sym_Vector2] = ACTIONS(187),
    [anon_sym_Vector3] = ACTIONS(187),
    [anon_sym_VectorN] = ACTIONS(185),
    [anon_sym_String] = ACTIONS(185),
    [anon_sym_Pattern] = ACTIONS(185),
    [anon_sym_Array] = ACTIONS(185),
    [anon_sym_Map] = ACTIONS(185),
    [anon_sym_Maybe] = ACTIONS(185),
    [anon_sym_Result] = ACTIONS(185),
    [anon_sym_Id] = ACTIONS(185),
    [anon_sym_Ptr] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_identifier] = ACTIONS(185),
  },
  [12] = {
    [sym__short_helper] = STATE(11),
    [sym_type] = STATE(11),
    [sym_complex_type] = STATE(45),
    [sym_short_ref] = STATE(11),
    [sym_short_copy] = STATE(11),
    [sym_short_fn_ref] = STATE(11),
    [sym_short_quote] = STATE(11),
    [aux_sym_typed_parameters_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_Bool] = ACTIONS(185),
    [anon_sym_Char] = ACTIONS(185),
    [anon_sym_Int] = ACTIONS(185),
    [anon_sym_Long] = ACTIONS(185),
    [anon_sym_Float] = ACTIONS(185),
    [anon_sym_Double] = ACTIONS(185),
    [anon_sym_Vector2] = ACTIONS(187),
    [anon_sym_Vector3] = ACTIONS(187),
    [anon_sym_VectorN] = ACTIONS(185),
    [anon_sym_String] = ACTIONS(185),
    [anon_sym_Pattern] = ACTIONS(185),
    [anon_sym_Array] = ACTIONS(185),
    [anon_sym_Map] = ACTIONS(185),
    [anon_sym_Maybe] = ACTIONS(185),
    [anon_sym_Result] = ACTIONS(185),
    [anon_sym_Id] = ACTIONS(185),
    [anon_sym_Ptr] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_identifier] = ACTIONS(185),
  },
  [13] = {
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
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(201),
    [sym_float_literal] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(201),
  },
  [14] = {
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
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(207),
    [sym_float_literal] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(207),
  },
  [15] = {
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
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(213),
    [sym_float_literal] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(213),
  },
  [16] = {
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
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(219),
    [sym_float_literal] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(219),
  },
  [17] = {
    [sym__s_expr] = STATE(190),
    [sym__expr] = STATE(190),
    [sym__literals] = STATE(190),
    [sym__short_helper] = STATE(190),
    [sym_short_ref] = STATE(190),
    [sym_short_copy] = STATE(190),
    [sym_short_fn_ref] = STATE(190),
    [sym_short_quote] = STATE(190),
    [sym_bool_literal] = STATE(190),
    [sym_str_literal] = STATE(190),
    [sym_char_literal] = STATE(190),
    [sym_pattern_literal] = STATE(190),
    [sym_array_expression] = STATE(190),
    [sym_map_expression] = STATE(190),
    [sym_symbol] = STATE(190),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(225),
    [sym_float_literal] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(225),
  },
  [18] = {
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
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(231),
    [sym_float_literal] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(231),
  },
  [19] = {
    [sym__short_helper] = STATE(19),
    [sym_type] = STATE(19),
    [sym_complex_type] = STATE(45),
    [sym_short_ref] = STATE(19),
    [sym_short_copy] = STATE(19),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(19),
    [aux_sym_typed_parameters_repeat1] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_Bool] = ACTIONS(240),
    [anon_sym_Char] = ACTIONS(240),
    [anon_sym_Int] = ACTIONS(240),
    [anon_sym_Long] = ACTIONS(240),
    [anon_sym_Float] = ACTIONS(240),
    [anon_sym_Double] = ACTIONS(240),
    [anon_sym_Vector2] = ACTIONS(243),
    [anon_sym_Vector3] = ACTIONS(243),
    [anon_sym_VectorN] = ACTIONS(240),
    [anon_sym_String] = ACTIONS(240),
    [anon_sym_Pattern] = ACTIONS(240),
    [anon_sym_Array] = ACTIONS(240),
    [anon_sym_Map] = ACTIONS(240),
    [anon_sym_Maybe] = ACTIONS(240),
    [anon_sym_Result] = ACTIONS(240),
    [anon_sym_Id] = ACTIONS(240),
    [anon_sym_Ptr] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [sym_identifier] = ACTIONS(240),
  },
  [20] = {
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
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(270),
  },
  [21] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(286),
    [sym_float_literal] = ACTIONS(288),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(286),
  },
  [22] = {
    [sym__s_expr] = STATE(111),
    [sym__expr] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__short_helper] = STATE(111),
    [sym_short_ref] = STATE(111),
    [sym_short_copy] = STATE(111),
    [sym_short_fn_ref] = STATE(111),
    [sym_short_quote] = STATE(111),
    [sym_bool_literal] = STATE(111),
    [sym_str_literal] = STATE(111),
    [sym_char_literal] = STATE(111),
    [sym_pattern_literal] = STATE(111),
    [sym_array_expression] = STATE(111),
    [sym_map_expression] = STATE(111),
    [sym_symbol] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(290),
    [sym_float_literal] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(290),
  },
  [23] = {
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
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(294),
    [sym_float_literal] = ACTIONS(296),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(294),
  },
  [24] = {
    [sym__s_expr] = STATE(101),
    [sym__expr] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__short_helper] = STATE(101),
    [sym_short_ref] = STATE(101),
    [sym_short_copy] = STATE(101),
    [sym_short_fn_ref] = STATE(101),
    [sym_short_quote] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [sym_symbol] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(298),
    [sym_float_literal] = ACTIONS(300),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(298),
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
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(302),
    [sym_float_literal] = ACTIONS(304),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(302),
  },
  [26] = {
    [sym__s_expr] = STATE(137),
    [sym__expr] = STATE(137),
    [sym__literals] = STATE(137),
    [sym__short_helper] = STATE(137),
    [sym_short_ref] = STATE(137),
    [sym_short_copy] = STATE(137),
    [sym_short_fn_ref] = STATE(137),
    [sym_short_quote] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym_str_literal] = STATE(137),
    [sym_char_literal] = STATE(137),
    [sym_pattern_literal] = STATE(137),
    [sym_array_expression] = STATE(137),
    [sym_map_expression] = STATE(137),
    [sym_symbol] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [sym_integer_literal] = ACTIONS(306),
    [sym_float_literal] = ACTIONS(308),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(306),
  },
  [27] = {
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
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_integer_literal] = ACTIONS(314),
    [sym_float_literal] = ACTIONS(316),
    [anon_sym_true] = ACTIONS(318),
    [anon_sym_false] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_POUND_DQUOTE] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(328),
    [sym_identifier] = ACTIONS(314),
  },
  [28] = {
    [sym__s_expr] = STATE(158),
    [sym__expr] = STATE(158),
    [sym__literals] = STATE(158),
    [sym__short_helper] = STATE(158),
    [sym_short_ref] = STATE(158),
    [sym_short_copy] = STATE(158),
    [sym_short_fn_ref] = STATE(158),
    [sym_short_quote] = STATE(158),
    [sym_bool_literal] = STATE(158),
    [sym_str_literal] = STATE(158),
    [sym_char_literal] = STATE(158),
    [sym_pattern_literal] = STATE(158),
    [sym_array_expression] = STATE(158),
    [sym_map_expression] = STATE(158),
    [sym_symbol] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [sym_integer_literal] = ACTIONS(330),
    [sym_float_literal] = ACTIONS(332),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(330),
  },
  [29] = {
    [sym__s_expr] = STATE(163),
    [sym__expr] = STATE(163),
    [sym__literals] = STATE(163),
    [sym__short_helper] = STATE(163),
    [sym_short_ref] = STATE(163),
    [sym_short_copy] = STATE(163),
    [sym_short_fn_ref] = STATE(163),
    [sym_short_quote] = STATE(163),
    [sym_bool_literal] = STATE(163),
    [sym_str_literal] = STATE(163),
    [sym_char_literal] = STATE(163),
    [sym_pattern_literal] = STATE(163),
    [sym_array_expression] = STATE(163),
    [sym_map_expression] = STATE(163),
    [sym_symbol] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(334),
    [sym_float_literal] = ACTIONS(336),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(334),
  },
  [30] = {
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
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [sym_integer_literal] = ACTIONS(338),
    [sym_float_literal] = ACTIONS(340),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(338),
  },
  [31] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(342),
    [sym_float_literal] = ACTIONS(344),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(342),
  },
  [32] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(346),
    [sym_float_literal] = ACTIONS(348),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(346),
  },
  [33] = {
    [sym__s_expr] = STATE(16),
    [sym__expr] = STATE(16),
    [sym__literals] = STATE(16),
    [sym__short_helper] = STATE(16),
    [sym_short_ref] = STATE(16),
    [sym_short_copy] = STATE(16),
    [sym_short_fn_ref] = STATE(16),
    [sym_short_quote] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_pattern_literal] = STATE(16),
    [sym_array_expression] = STATE(16),
    [sym_map_expression] = STATE(16),
    [sym_symbol] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(350),
    [sym_float_literal] = ACTIONS(352),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(350),
  },
  [34] = {
    [sym__s_expr] = STATE(60),
    [sym__expr] = STATE(60),
    [sym__literals] = STATE(60),
    [sym__short_helper] = STATE(60),
    [sym_short_ref] = STATE(60),
    [sym_short_copy] = STATE(60),
    [sym_short_fn_ref] = STATE(60),
    [sym_short_quote] = STATE(60),
    [sym_bool_literal] = STATE(60),
    [sym_str_literal] = STATE(60),
    [sym_char_literal] = STATE(60),
    [sym_pattern_literal] = STATE(60),
    [sym_array_expression] = STATE(60),
    [sym_map_expression] = STATE(60),
    [sym_symbol] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_integer_literal] = ACTIONS(354),
    [sym_float_literal] = ACTIONS(356),
    [anon_sym_true] = ACTIONS(318),
    [anon_sym_false] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_POUND_DQUOTE] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(328),
    [sym_identifier] = ACTIONS(354),
  },
  [35] = {
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
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_integer_literal] = ACTIONS(358),
    [sym_float_literal] = ACTIONS(360),
    [anon_sym_true] = ACTIONS(318),
    [anon_sym_false] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_POUND_DQUOTE] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(328),
    [sym_identifier] = ACTIONS(358),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(362),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(362),
  },
  [37] = {
    [sym__s_expr] = STATE(32),
    [sym__expr] = STATE(32),
    [sym__literals] = STATE(32),
    [sym__short_helper] = STATE(32),
    [sym_short_ref] = STATE(32),
    [sym_short_copy] = STATE(32),
    [sym_short_fn_ref] = STATE(32),
    [sym_short_quote] = STATE(32),
    [sym_bool_literal] = STATE(32),
    [sym_str_literal] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_pattern_literal] = STATE(32),
    [sym_array_expression] = STATE(32),
    [sym_map_expression] = STATE(32),
    [sym_symbol] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(366),
    [sym_float_literal] = ACTIONS(368),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(366),
  },
  [38] = {
    [sym__s_expr] = STATE(151),
    [sym__expr] = STATE(151),
    [sym__literals] = STATE(151),
    [sym__short_helper] = STATE(151),
    [sym_short_ref] = STATE(151),
    [sym_short_copy] = STATE(151),
    [sym_short_fn_ref] = STATE(151),
    [sym_short_quote] = STATE(151),
    [sym_bool_literal] = STATE(151),
    [sym_str_literal] = STATE(151),
    [sym_char_literal] = STATE(151),
    [sym_pattern_literal] = STATE(151),
    [sym_array_expression] = STATE(151),
    [sym_map_expression] = STATE(151),
    [sym_symbol] = STATE(151),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [sym_integer_literal] = ACTIONS(370),
    [sym_float_literal] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_POUND_DQUOTE] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(370),
  },
  [39] = {
    [sym__s_expr] = STATE(37),
    [sym__expr] = STATE(37),
    [sym__literals] = STATE(37),
    [sym__short_helper] = STATE(37),
    [sym_short_ref] = STATE(37),
    [sym_short_copy] = STATE(37),
    [sym_short_fn_ref] = STATE(37),
    [sym_short_quote] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [sym_str_literal] = STATE(37),
    [sym_char_literal] = STATE(37),
    [sym_pattern_literal] = STATE(37),
    [sym_array_expression] = STATE(37),
    [sym_map_expression] = STATE(37),
    [sym_symbol] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(374),
    [sym_float_literal] = ACTIONS(376),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(374),
  },
  [40] = {
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_short_quote] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [sym_symbol] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_integer_literal] = ACTIONS(378),
    [sym_float_literal] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(318),
    [anon_sym_false] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_POUND_DQUOTE] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(328),
    [sym_identifier] = ACTIONS(378),
  },
  [41] = {
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
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_integer_literal] = ACTIONS(382),
    [sym_float_literal] = ACTIONS(384),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(382),
  },
  [42] = {
    [sym__short_helper] = STATE(180),
    [sym_type] = STATE(180),
    [sym_complex_type] = STATE(108),
    [sym_short_ref] = STATE(180),
    [sym_short_copy] = STATE(180),
    [sym_short_fn_ref] = STATE(180),
    [sym_short_quote] = STATE(180),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_Bool] = ACTIONS(388),
    [anon_sym_Char] = ACTIONS(388),
    [anon_sym_Int] = ACTIONS(388),
    [anon_sym_Long] = ACTIONS(388),
    [anon_sym_Float] = ACTIONS(388),
    [anon_sym_Double] = ACTIONS(388),
    [anon_sym_Vector2] = ACTIONS(390),
    [anon_sym_Vector3] = ACTIONS(390),
    [anon_sym_VectorN] = ACTIONS(388),
    [anon_sym_String] = ACTIONS(388),
    [anon_sym_Pattern] = ACTIONS(388),
    [anon_sym_Array] = ACTIONS(388),
    [anon_sym_Map] = ACTIONS(388),
    [anon_sym_Maybe] = ACTIONS(388),
    [anon_sym_Result] = ACTIONS(388),
    [anon_sym_Id] = ACTIONS(388),
    [anon_sym_Ptr] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(388),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(392),
    [anon_sym_Bool] = ACTIONS(394),
    [anon_sym_Char] = ACTIONS(394),
    [anon_sym_Int] = ACTIONS(394),
    [anon_sym_Long] = ACTIONS(394),
    [anon_sym_Float] = ACTIONS(394),
    [anon_sym_Double] = ACTIONS(394),
    [anon_sym_Vector2] = ACTIONS(392),
    [anon_sym_Vector3] = ACTIONS(392),
    [anon_sym_VectorN] = ACTIONS(394),
    [anon_sym_String] = ACTIONS(394),
    [anon_sym_Pattern] = ACTIONS(394),
    [anon_sym_Array] = ACTIONS(394),
    [anon_sym_Map] = ACTIONS(394),
    [anon_sym_Maybe] = ACTIONS(394),
    [anon_sym_Result] = ACTIONS(394),
    [anon_sym_Id] = ACTIONS(394),
    [anon_sym_Ptr] = ACTIONS(394),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(392),
    [sym_identifier] = ACTIONS(394),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_Bool] = ACTIONS(398),
    [anon_sym_Char] = ACTIONS(398),
    [anon_sym_Int] = ACTIONS(398),
    [anon_sym_Long] = ACTIONS(398),
    [anon_sym_Float] = ACTIONS(398),
    [anon_sym_Double] = ACTIONS(398),
    [anon_sym_Vector2] = ACTIONS(396),
    [anon_sym_Vector3] = ACTIONS(396),
    [anon_sym_VectorN] = ACTIONS(398),
    [anon_sym_String] = ACTIONS(398),
    [anon_sym_Pattern] = ACTIONS(398),
    [anon_sym_Array] = ACTIONS(398),
    [anon_sym_Map] = ACTIONS(398),
    [anon_sym_Maybe] = ACTIONS(398),
    [anon_sym_Result] = ACTIONS(398),
    [anon_sym_Id] = ACTIONS(398),
    [anon_sym_Ptr] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(396),
    [anon_sym_AT] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [sym_identifier] = ACTIONS(398),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_Bool] = ACTIONS(402),
    [anon_sym_Char] = ACTIONS(402),
    [anon_sym_Int] = ACTIONS(402),
    [anon_sym_Long] = ACTIONS(402),
    [anon_sym_Float] = ACTIONS(402),
    [anon_sym_Double] = ACTIONS(402),
    [anon_sym_Vector2] = ACTIONS(400),
    [anon_sym_Vector3] = ACTIONS(400),
    [anon_sym_VectorN] = ACTIONS(402),
    [anon_sym_String] = ACTIONS(402),
    [anon_sym_Pattern] = ACTIONS(402),
    [anon_sym_Array] = ACTIONS(402),
    [anon_sym_Map] = ACTIONS(402),
    [anon_sym_Maybe] = ACTIONS(402),
    [anon_sym_Result] = ACTIONS(402),
    [anon_sym_Id] = ACTIONS(402),
    [anon_sym_Ptr] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(400),
    [anon_sym_AT] = ACTIONS(400),
    [anon_sym_TILDE] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [sym_identifier] = ACTIONS(402),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_Bool] = ACTIONS(406),
    [anon_sym_Char] = ACTIONS(406),
    [anon_sym_Int] = ACTIONS(406),
    [anon_sym_Long] = ACTIONS(406),
    [anon_sym_Float] = ACTIONS(406),
    [anon_sym_Double] = ACTIONS(406),
    [anon_sym_Vector2] = ACTIONS(404),
    [anon_sym_Vector3] = ACTIONS(404),
    [anon_sym_VectorN] = ACTIONS(406),
    [anon_sym_String] = ACTIONS(406),
    [anon_sym_Pattern] = ACTIONS(406),
    [anon_sym_Array] = ACTIONS(406),
    [anon_sym_Map] = ACTIONS(406),
    [anon_sym_Maybe] = ACTIONS(406),
    [anon_sym_Result] = ACTIONS(406),
    [anon_sym_Id] = ACTIONS(406),
    [anon_sym_Ptr] = ACTIONS(406),
    [anon_sym_AMP] = ACTIONS(404),
    [anon_sym_AT] = ACTIONS(404),
    [anon_sym_TILDE] = ACTIONS(404),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [sym_identifier] = ACTIONS(406),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_Bool] = ACTIONS(410),
    [anon_sym_Char] = ACTIONS(410),
    [anon_sym_Int] = ACTIONS(410),
    [anon_sym_Long] = ACTIONS(410),
    [anon_sym_Float] = ACTIONS(410),
    [anon_sym_Double] = ACTIONS(410),
    [anon_sym_Vector2] = ACTIONS(408),
    [anon_sym_Vector3] = ACTIONS(408),
    [anon_sym_VectorN] = ACTIONS(410),
    [anon_sym_String] = ACTIONS(410),
    [anon_sym_Pattern] = ACTIONS(410),
    [anon_sym_Array] = ACTIONS(410),
    [anon_sym_Map] = ACTIONS(410),
    [anon_sym_Maybe] = ACTIONS(410),
    [anon_sym_Result] = ACTIONS(410),
    [anon_sym_Id] = ACTIONS(410),
    [anon_sym_Ptr] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_AT] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [sym_identifier] = ACTIONS(410),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_Bool] = ACTIONS(414),
    [anon_sym_Char] = ACTIONS(414),
    [anon_sym_Int] = ACTIONS(414),
    [anon_sym_Long] = ACTIONS(414),
    [anon_sym_Float] = ACTIONS(414),
    [anon_sym_Double] = ACTIONS(414),
    [anon_sym_Vector2] = ACTIONS(412),
    [anon_sym_Vector3] = ACTIONS(412),
    [anon_sym_VectorN] = ACTIONS(414),
    [anon_sym_String] = ACTIONS(414),
    [anon_sym_Pattern] = ACTIONS(414),
    [anon_sym_Array] = ACTIONS(414),
    [anon_sym_Map] = ACTIONS(414),
    [anon_sym_Maybe] = ACTIONS(414),
    [anon_sym_Result] = ACTIONS(414),
    [anon_sym_Id] = ACTIONS(414),
    [anon_sym_Ptr] = ACTIONS(414),
    [anon_sym_AMP] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(412),
    [anon_sym_TILDE] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [sym_identifier] = ACTIONS(414),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
    [anon_sym_Bool] = ACTIONS(418),
    [anon_sym_Char] = ACTIONS(418),
    [anon_sym_Int] = ACTIONS(418),
    [anon_sym_Long] = ACTIONS(418),
    [anon_sym_Float] = ACTIONS(418),
    [anon_sym_Double] = ACTIONS(418),
    [anon_sym_Vector2] = ACTIONS(416),
    [anon_sym_Vector3] = ACTIONS(416),
    [anon_sym_VectorN] = ACTIONS(418),
    [anon_sym_String] = ACTIONS(418),
    [anon_sym_Pattern] = ACTIONS(418),
    [anon_sym_Array] = ACTIONS(418),
    [anon_sym_Map] = ACTIONS(418),
    [anon_sym_Maybe] = ACTIONS(418),
    [anon_sym_Result] = ACTIONS(418),
    [anon_sym_Id] = ACTIONS(418),
    [anon_sym_Ptr] = ACTIONS(418),
    [anon_sym_AMP] = ACTIONS(416),
    [anon_sym_AT] = ACTIONS(416),
    [anon_sym_TILDE] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [sym_identifier] = ACTIONS(418),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_Bool] = ACTIONS(422),
    [anon_sym_Char] = ACTIONS(422),
    [anon_sym_Int] = ACTIONS(422),
    [anon_sym_Long] = ACTIONS(422),
    [anon_sym_Float] = ACTIONS(422),
    [anon_sym_Double] = ACTIONS(422),
    [anon_sym_Vector2] = ACTIONS(420),
    [anon_sym_Vector3] = ACTIONS(420),
    [anon_sym_VectorN] = ACTIONS(422),
    [anon_sym_String] = ACTIONS(422),
    [anon_sym_Pattern] = ACTIONS(422),
    [anon_sym_Array] = ACTIONS(422),
    [anon_sym_Map] = ACTIONS(422),
    [anon_sym_Maybe] = ACTIONS(422),
    [anon_sym_Result] = ACTIONS(422),
    [anon_sym_Id] = ACTIONS(422),
    [anon_sym_Ptr] = ACTIONS(422),
    [anon_sym_AMP] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [sym_identifier] = ACTIONS(422),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_Bool] = ACTIONS(426),
    [anon_sym_Char] = ACTIONS(426),
    [anon_sym_Int] = ACTIONS(426),
    [anon_sym_Long] = ACTIONS(426),
    [anon_sym_Float] = ACTIONS(426),
    [anon_sym_Double] = ACTIONS(426),
    [anon_sym_Vector2] = ACTIONS(424),
    [anon_sym_Vector3] = ACTIONS(424),
    [anon_sym_VectorN] = ACTIONS(426),
    [anon_sym_String] = ACTIONS(426),
    [anon_sym_Pattern] = ACTIONS(426),
    [anon_sym_Array] = ACTIONS(426),
    [anon_sym_Map] = ACTIONS(426),
    [anon_sym_Maybe] = ACTIONS(426),
    [anon_sym_Result] = ACTIONS(426),
    [anon_sym_Id] = ACTIONS(426),
    [anon_sym_Ptr] = ACTIONS(426),
    [anon_sym_AMP] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(424),
    [anon_sym_TILDE] = ACTIONS(424),
    [anon_sym_SQUOTE] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_Bool] = ACTIONS(430),
    [anon_sym_Char] = ACTIONS(430),
    [anon_sym_Int] = ACTIONS(430),
    [anon_sym_Long] = ACTIONS(430),
    [anon_sym_Float] = ACTIONS(430),
    [anon_sym_Double] = ACTIONS(430),
    [anon_sym_Vector2] = ACTIONS(428),
    [anon_sym_Vector3] = ACTIONS(428),
    [anon_sym_VectorN] = ACTIONS(430),
    [anon_sym_String] = ACTIONS(430),
    [anon_sym_Pattern] = ACTIONS(430),
    [anon_sym_Array] = ACTIONS(430),
    [anon_sym_Map] = ACTIONS(430),
    [anon_sym_Maybe] = ACTIONS(430),
    [anon_sym_Result] = ACTIONS(430),
    [anon_sym_Id] = ACTIONS(430),
    [anon_sym_Ptr] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [sym_identifier] = ACTIONS(430),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_Bool] = ACTIONS(434),
    [anon_sym_Char] = ACTIONS(434),
    [anon_sym_Int] = ACTIONS(434),
    [anon_sym_Long] = ACTIONS(434),
    [anon_sym_Float] = ACTIONS(434),
    [anon_sym_Double] = ACTIONS(434),
    [anon_sym_Vector2] = ACTIONS(432),
    [anon_sym_Vector3] = ACTIONS(432),
    [anon_sym_VectorN] = ACTIONS(434),
    [anon_sym_String] = ACTIONS(434),
    [anon_sym_Pattern] = ACTIONS(434),
    [anon_sym_Array] = ACTIONS(434),
    [anon_sym_Map] = ACTIONS(434),
    [anon_sym_Maybe] = ACTIONS(434),
    [anon_sym_Result] = ACTIONS(434),
    [anon_sym_Id] = ACTIONS(434),
    [anon_sym_Ptr] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(432),
    [anon_sym_TILDE] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [sym_identifier] = ACTIONS(434),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(436),
    [anon_sym_Bool] = ACTIONS(438),
    [anon_sym_Char] = ACTIONS(438),
    [anon_sym_Int] = ACTIONS(438),
    [anon_sym_Long] = ACTIONS(438),
    [anon_sym_Float] = ACTIONS(438),
    [anon_sym_Double] = ACTIONS(438),
    [anon_sym_Vector2] = ACTIONS(436),
    [anon_sym_Vector3] = ACTIONS(436),
    [anon_sym_VectorN] = ACTIONS(438),
    [anon_sym_String] = ACTIONS(438),
    [anon_sym_Pattern] = ACTIONS(438),
    [anon_sym_Array] = ACTIONS(438),
    [anon_sym_Map] = ACTIONS(438),
    [anon_sym_Maybe] = ACTIONS(438),
    [anon_sym_Result] = ACTIONS(438),
    [anon_sym_Id] = ACTIONS(438),
    [anon_sym_Ptr] = ACTIONS(438),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(436),
    [anon_sym_TILDE] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(436),
    [sym_identifier] = ACTIONS(438),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_RBRACK] = ACTIONS(440),
    [anon_sym_Bool] = ACTIONS(442),
    [anon_sym_Char] = ACTIONS(442),
    [anon_sym_Int] = ACTIONS(442),
    [anon_sym_Long] = ACTIONS(442),
    [anon_sym_Float] = ACTIONS(442),
    [anon_sym_Double] = ACTIONS(442),
    [anon_sym_Vector2] = ACTIONS(440),
    [anon_sym_Vector3] = ACTIONS(440),
    [anon_sym_VectorN] = ACTIONS(442),
    [anon_sym_String] = ACTIONS(442),
    [anon_sym_Pattern] = ACTIONS(442),
    [anon_sym_Array] = ACTIONS(442),
    [anon_sym_Map] = ACTIONS(442),
    [anon_sym_Maybe] = ACTIONS(442),
    [anon_sym_Result] = ACTIONS(442),
    [anon_sym_Id] = ACTIONS(442),
    [anon_sym_Ptr] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [sym_identifier] = ACTIONS(442),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_Bool] = ACTIONS(446),
    [anon_sym_Char] = ACTIONS(446),
    [anon_sym_Int] = ACTIONS(446),
    [anon_sym_Long] = ACTIONS(446),
    [anon_sym_Float] = ACTIONS(446),
    [anon_sym_Double] = ACTIONS(446),
    [anon_sym_Vector2] = ACTIONS(444),
    [anon_sym_Vector3] = ACTIONS(444),
    [anon_sym_VectorN] = ACTIONS(446),
    [anon_sym_String] = ACTIONS(446),
    [anon_sym_Pattern] = ACTIONS(446),
    [anon_sym_Array] = ACTIONS(446),
    [anon_sym_Map] = ACTIONS(446),
    [anon_sym_Maybe] = ACTIONS(446),
    [anon_sym_Result] = ACTIONS(446),
    [anon_sym_Id] = ACTIONS(446),
    [anon_sym_Ptr] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_AT] = ACTIONS(444),
    [anon_sym_TILDE] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(444),
    [sym_identifier] = ACTIONS(446),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_Bool] = ACTIONS(450),
    [anon_sym_Char] = ACTIONS(450),
    [anon_sym_Int] = ACTIONS(450),
    [anon_sym_Long] = ACTIONS(450),
    [anon_sym_Float] = ACTIONS(450),
    [anon_sym_Double] = ACTIONS(450),
    [anon_sym_Vector2] = ACTIONS(448),
    [anon_sym_Vector3] = ACTIONS(448),
    [anon_sym_VectorN] = ACTIONS(450),
    [anon_sym_String] = ACTIONS(450),
    [anon_sym_Pattern] = ACTIONS(450),
    [anon_sym_Array] = ACTIONS(450),
    [anon_sym_Map] = ACTIONS(450),
    [anon_sym_Maybe] = ACTIONS(450),
    [anon_sym_Result] = ACTIONS(450),
    [anon_sym_Id] = ACTIONS(450),
    [anon_sym_Ptr] = ACTIONS(450),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_AT] = ACTIONS(448),
    [anon_sym_TILDE] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(448),
    [sym_identifier] = ACTIONS(450),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [anon_sym_Bool] = ACTIONS(454),
    [anon_sym_Char] = ACTIONS(454),
    [anon_sym_Int] = ACTIONS(454),
    [anon_sym_Long] = ACTIONS(454),
    [anon_sym_Float] = ACTIONS(454),
    [anon_sym_Double] = ACTIONS(454),
    [anon_sym_Vector2] = ACTIONS(452),
    [anon_sym_Vector3] = ACTIONS(452),
    [anon_sym_VectorN] = ACTIONS(454),
    [anon_sym_String] = ACTIONS(454),
    [anon_sym_Pattern] = ACTIONS(454),
    [anon_sym_Array] = ACTIONS(454),
    [anon_sym_Map] = ACTIONS(454),
    [anon_sym_Maybe] = ACTIONS(454),
    [anon_sym_Result] = ACTIONS(454),
    [anon_sym_Id] = ACTIONS(454),
    [anon_sym_Ptr] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(452),
    [anon_sym_TILDE] = ACTIONS(452),
    [anon_sym_SQUOTE] = ACTIONS(452),
    [sym_identifier] = ACTIONS(454),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [anon_sym_Bool] = ACTIONS(458),
    [anon_sym_Char] = ACTIONS(458),
    [anon_sym_Int] = ACTIONS(458),
    [anon_sym_Long] = ACTIONS(458),
    [anon_sym_Float] = ACTIONS(458),
    [anon_sym_Double] = ACTIONS(458),
    [anon_sym_Vector2] = ACTIONS(456),
    [anon_sym_Vector3] = ACTIONS(456),
    [anon_sym_VectorN] = ACTIONS(458),
    [anon_sym_String] = ACTIONS(458),
    [anon_sym_Pattern] = ACTIONS(458),
    [anon_sym_Array] = ACTIONS(458),
    [anon_sym_Map] = ACTIONS(458),
    [anon_sym_Maybe] = ACTIONS(458),
    [anon_sym_Result] = ACTIONS(458),
    [anon_sym_Id] = ACTIONS(458),
    [anon_sym_Ptr] = ACTIONS(458),
    [anon_sym_AMP] = ACTIONS(456),
    [anon_sym_AT] = ACTIONS(456),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [sym_identifier] = ACTIONS(458),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [anon_sym_Bool] = ACTIONS(462),
    [anon_sym_Char] = ACTIONS(462),
    [anon_sym_Int] = ACTIONS(462),
    [anon_sym_Long] = ACTIONS(462),
    [anon_sym_Float] = ACTIONS(462),
    [anon_sym_Double] = ACTIONS(462),
    [anon_sym_Vector2] = ACTIONS(460),
    [anon_sym_Vector3] = ACTIONS(460),
    [anon_sym_VectorN] = ACTIONS(462),
    [anon_sym_String] = ACTIONS(462),
    [anon_sym_Pattern] = ACTIONS(462),
    [anon_sym_Array] = ACTIONS(462),
    [anon_sym_Map] = ACTIONS(462),
    [anon_sym_Maybe] = ACTIONS(462),
    [anon_sym_Result] = ACTIONS(462),
    [anon_sym_Id] = ACTIONS(462),
    [anon_sym_Ptr] = ACTIONS(462),
    [anon_sym_AMP] = ACTIONS(460),
    [anon_sym_AT] = ACTIONS(460),
    [anon_sym_TILDE] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [sym_identifier] = ACTIONS(462),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [anon_sym_Bool] = ACTIONS(466),
    [anon_sym_Char] = ACTIONS(466),
    [anon_sym_Int] = ACTIONS(466),
    [anon_sym_Long] = ACTIONS(466),
    [anon_sym_Float] = ACTIONS(466),
    [anon_sym_Double] = ACTIONS(466),
    [anon_sym_Vector2] = ACTIONS(464),
    [anon_sym_Vector3] = ACTIONS(464),
    [anon_sym_VectorN] = ACTIONS(466),
    [anon_sym_String] = ACTIONS(466),
    [anon_sym_Pattern] = ACTIONS(466),
    [anon_sym_Array] = ACTIONS(466),
    [anon_sym_Map] = ACTIONS(466),
    [anon_sym_Maybe] = ACTIONS(466),
    [anon_sym_Result] = ACTIONS(466),
    [anon_sym_Id] = ACTIONS(466),
    [anon_sym_Ptr] = ACTIONS(466),
    [anon_sym_AMP] = ACTIONS(464),
    [anon_sym_AT] = ACTIONS(464),
    [anon_sym_TILDE] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [sym_identifier] = ACTIONS(466),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_Bool] = ACTIONS(470),
    [anon_sym_Char] = ACTIONS(470),
    [anon_sym_Int] = ACTIONS(470),
    [anon_sym_Long] = ACTIONS(470),
    [anon_sym_Float] = ACTIONS(470),
    [anon_sym_Double] = ACTIONS(470),
    [anon_sym_Vector2] = ACTIONS(468),
    [anon_sym_Vector3] = ACTIONS(468),
    [anon_sym_VectorN] = ACTIONS(470),
    [anon_sym_String] = ACTIONS(470),
    [anon_sym_Pattern] = ACTIONS(470),
    [anon_sym_Array] = ACTIONS(470),
    [anon_sym_Map] = ACTIONS(470),
    [anon_sym_Maybe] = ACTIONS(470),
    [anon_sym_Result] = ACTIONS(470),
    [anon_sym_Id] = ACTIONS(470),
    [anon_sym_Ptr] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_TILDE] = ACTIONS(468),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [sym_identifier] = ACTIONS(470),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_Bool] = ACTIONS(474),
    [anon_sym_Char] = ACTIONS(474),
    [anon_sym_Int] = ACTIONS(474),
    [anon_sym_Long] = ACTIONS(474),
    [anon_sym_Float] = ACTIONS(474),
    [anon_sym_Double] = ACTIONS(474),
    [anon_sym_Vector2] = ACTIONS(472),
    [anon_sym_Vector3] = ACTIONS(472),
    [anon_sym_VectorN] = ACTIONS(474),
    [anon_sym_String] = ACTIONS(474),
    [anon_sym_Pattern] = ACTIONS(474),
    [anon_sym_Array] = ACTIONS(474),
    [anon_sym_Map] = ACTIONS(474),
    [anon_sym_Maybe] = ACTIONS(474),
    [anon_sym_Result] = ACTIONS(474),
    [anon_sym_Id] = ACTIONS(474),
    [anon_sym_Ptr] = ACTIONS(474),
    [anon_sym_AMP] = ACTIONS(472),
    [anon_sym_AT] = ACTIONS(472),
    [anon_sym_TILDE] = ACTIONS(472),
    [anon_sym_SQUOTE] = ACTIONS(472),
    [sym_identifier] = ACTIONS(474),
  },
  [64] = {
    [sym_type] = STATE(41),
    [sym_complex_type] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_Bool] = ACTIONS(388),
    [anon_sym_Char] = ACTIONS(388),
    [anon_sym_Int] = ACTIONS(388),
    [anon_sym_Long] = ACTIONS(388),
    [anon_sym_Float] = ACTIONS(388),
    [anon_sym_Double] = ACTIONS(388),
    [anon_sym_Vector2] = ACTIONS(390),
    [anon_sym_Vector3] = ACTIONS(390),
    [anon_sym_VectorN] = ACTIONS(388),
    [anon_sym_String] = ACTIONS(388),
    [anon_sym_Pattern] = ACTIONS(388),
    [anon_sym_Array] = ACTIONS(388),
    [anon_sym_Map] = ACTIONS(388),
    [anon_sym_Maybe] = ACTIONS(388),
    [anon_sym_Result] = ACTIONS(388),
    [anon_sym_Id] = ACTIONS(388),
    [anon_sym_Ptr] = ACTIONS(388),
    [sym_identifier] = ACTIONS(388),
  },
  [65] = {
    [aux_sym_complex_type_repeat1] = STATE(66),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_Bool] = ACTIONS(478),
    [anon_sym_Char] = ACTIONS(478),
    [anon_sym_Int] = ACTIONS(478),
    [anon_sym_Long] = ACTIONS(478),
    [anon_sym_Float] = ACTIONS(478),
    [anon_sym_Double] = ACTIONS(478),
    [anon_sym_Vector2] = ACTIONS(480),
    [anon_sym_Vector3] = ACTIONS(480),
    [anon_sym_VectorN] = ACTIONS(478),
    [anon_sym_String] = ACTIONS(478),
    [anon_sym_Pattern] = ACTIONS(478),
    [anon_sym_Array] = ACTIONS(478),
    [anon_sym_Map] = ACTIONS(478),
    [anon_sym_Maybe] = ACTIONS(478),
    [anon_sym_Result] = ACTIONS(478),
    [anon_sym_Id] = ACTIONS(478),
    [anon_sym_Ptr] = ACTIONS(478),
    [sym_identifier] = ACTIONS(478),
  },
  [66] = {
    [aux_sym_complex_type_repeat1] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_Bool] = ACTIONS(484),
    [anon_sym_Char] = ACTIONS(484),
    [anon_sym_Int] = ACTIONS(484),
    [anon_sym_Long] = ACTIONS(484),
    [anon_sym_Float] = ACTIONS(484),
    [anon_sym_Double] = ACTIONS(484),
    [anon_sym_Vector2] = ACTIONS(486),
    [anon_sym_Vector3] = ACTIONS(486),
    [anon_sym_VectorN] = ACTIONS(484),
    [anon_sym_String] = ACTIONS(484),
    [anon_sym_Pattern] = ACTIONS(484),
    [anon_sym_Array] = ACTIONS(484),
    [anon_sym_Map] = ACTIONS(484),
    [anon_sym_Maybe] = ACTIONS(484),
    [anon_sym_Result] = ACTIONS(484),
    [anon_sym_Id] = ACTIONS(484),
    [anon_sym_Ptr] = ACTIONS(484),
    [sym_identifier] = ACTIONS(484),
  },
  [67] = {
    [aux_sym_complex_type_repeat1] = STATE(68),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_Bool] = ACTIONS(490),
    [anon_sym_Char] = ACTIONS(490),
    [anon_sym_Int] = ACTIONS(490),
    [anon_sym_Long] = ACTIONS(490),
    [anon_sym_Float] = ACTIONS(490),
    [anon_sym_Double] = ACTIONS(490),
    [anon_sym_Vector2] = ACTIONS(492),
    [anon_sym_Vector3] = ACTIONS(492),
    [anon_sym_VectorN] = ACTIONS(490),
    [anon_sym_String] = ACTIONS(490),
    [anon_sym_Pattern] = ACTIONS(490),
    [anon_sym_Array] = ACTIONS(490),
    [anon_sym_Map] = ACTIONS(490),
    [anon_sym_Maybe] = ACTIONS(490),
    [anon_sym_Result] = ACTIONS(490),
    [anon_sym_Id] = ACTIONS(490),
    [anon_sym_Ptr] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
  },
  [68] = {
    [aux_sym_complex_type_repeat1] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_Bool] = ACTIONS(484),
    [anon_sym_Char] = ACTIONS(484),
    [anon_sym_Int] = ACTIONS(484),
    [anon_sym_Long] = ACTIONS(484),
    [anon_sym_Float] = ACTIONS(484),
    [anon_sym_Double] = ACTIONS(484),
    [anon_sym_Vector2] = ACTIONS(486),
    [anon_sym_Vector3] = ACTIONS(486),
    [anon_sym_VectorN] = ACTIONS(484),
    [anon_sym_String] = ACTIONS(484),
    [anon_sym_Pattern] = ACTIONS(484),
    [anon_sym_Array] = ACTIONS(484),
    [anon_sym_Map] = ACTIONS(484),
    [anon_sym_Maybe] = ACTIONS(484),
    [anon_sym_Result] = ACTIONS(484),
    [anon_sym_Id] = ACTIONS(484),
    [anon_sym_Ptr] = ACTIONS(484),
    [sym_identifier] = ACTIONS(484),
  },
  [69] = {
    [aux_sym_complex_type_repeat1] = STATE(69),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_Bool] = ACTIONS(498),
    [anon_sym_Char] = ACTIONS(498),
    [anon_sym_Int] = ACTIONS(498),
    [anon_sym_Long] = ACTIONS(498),
    [anon_sym_Float] = ACTIONS(498),
    [anon_sym_Double] = ACTIONS(498),
    [anon_sym_Vector2] = ACTIONS(501),
    [anon_sym_Vector3] = ACTIONS(501),
    [anon_sym_VectorN] = ACTIONS(498),
    [anon_sym_String] = ACTIONS(498),
    [anon_sym_Pattern] = ACTIONS(498),
    [anon_sym_Array] = ACTIONS(498),
    [anon_sym_Map] = ACTIONS(498),
    [anon_sym_Maybe] = ACTIONS(498),
    [anon_sym_Result] = ACTIONS(498),
    [anon_sym_Id] = ACTIONS(498),
    [anon_sym_Ptr] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_AT] = ACTIONS(444),
    [anon_sym_TILDE] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(444),
    [sym_integer_literal] = ACTIONS(446),
    [sym_float_literal] = ACTIONS(444),
    [anon_sym_true] = ACTIONS(446),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [anon_sym_BSLASH] = ACTIONS(444),
    [anon_sym_POUND_DQUOTE] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [sym_identifier] = ACTIONS(446),
  },
  [71] = {
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym_integer_literal] = ACTIONS(506),
    [sym_float_literal] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(506),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_AMP] = ACTIONS(396),
    [anon_sym_AT] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [sym_integer_literal] = ACTIONS(398),
    [sym_float_literal] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(398),
    [anon_sym_false] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(396),
    [anon_sym_BSLASH] = ACTIONS(396),
    [anon_sym_POUND_DQUOTE] = ACTIONS(396),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(396),
    [sym_identifier] = ACTIONS(398),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_RBRACK] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [sym_integer_literal] = ACTIONS(442),
    [sym_float_literal] = ACTIONS(440),
    [anon_sym_true] = ACTIONS(442),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [anon_sym_BSLASH] = ACTIONS(440),
    [anon_sym_POUND_DQUOTE] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [sym_identifier] = ACTIONS(442),
  },
  [74] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(514),
    [sym_identifier] = ACTIONS(510),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(436),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(436),
    [anon_sym_TILDE] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(436),
    [sym_integer_literal] = ACTIONS(438),
    [sym_float_literal] = ACTIONS(436),
    [anon_sym_true] = ACTIONS(438),
    [anon_sym_false] = ACTIONS(438),
    [anon_sym_DQUOTE] = ACTIONS(436),
    [anon_sym_BSLASH] = ACTIONS(436),
    [anon_sym_POUND_DQUOTE] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(436),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_COLON] = ACTIONS(436),
    [sym_identifier] = ACTIONS(438),
  },
  [76] = {
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(516),
    [sym_integer_literal] = ACTIONS(506),
    [sym_float_literal] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(506),
  },
  [77] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(518),
    [sym_identifier] = ACTIONS(510),
  },
  [78] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(520),
    [sym_identifier] = ACTIONS(510),
  },
  [79] = {
    [sym__literals] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(522),
    [sym_integer_literal] = ACTIONS(524),
    [sym_float_literal] = ACTIONS(526),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(524),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [sym_integer_literal] = ACTIONS(430),
    [sym_float_literal] = ACTIONS(428),
    [anon_sym_true] = ACTIONS(430),
    [anon_sym_false] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [anon_sym_BSLASH] = ACTIONS(428),
    [anon_sym_POUND_DQUOTE] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [sym_identifier] = ACTIONS(430),
  },
  [81] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(528),
    [sym_identifier] = ACTIONS(510),
  },
  [82] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(530),
    [sym_identifier] = ACTIONS(510),
  },
  [83] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(532),
    [sym_integer_literal] = ACTIONS(535),
    [sym_float_literal] = ACTIONS(538),
    [anon_sym_true] = ACTIONS(541),
    [anon_sym_false] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(544),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(556),
    [sym_identifier] = ACTIONS(535),
  },
  [84] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_map_expression_repeat1] = STATE(82),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(558),
    [sym_identifier] = ACTIONS(510),
  },
  [85] = {
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [aux_sym_array_expression_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym_integer_literal] = ACTIONS(562),
    [sym_float_literal] = ACTIONS(564),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(562),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_AMP] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [sym_integer_literal] = ACTIONS(422),
    [sym_float_literal] = ACTIONS(420),
    [anon_sym_true] = ACTIONS(422),
    [anon_sym_false] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(420),
    [anon_sym_BSLASH] = ACTIONS(420),
    [anon_sym_POUND_DQUOTE] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(420),
    [sym_identifier] = ACTIONS(422),
  },
  [87] = {
    [sym__literals] = STATE(71),
    [sym_bool_literal] = STATE(71),
    [sym_str_literal] = STATE(71),
    [sym_char_literal] = STATE(71),
    [sym_pattern_literal] = STATE(71),
    [sym_array_expression] = STATE(71),
    [sym_map_expression] = STATE(71),
    [aux_sym_array_expression_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(566),
    [sym_integer_literal] = ACTIONS(568),
    [sym_float_literal] = ACTIONS(570),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(568),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_AMP] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(424),
    [anon_sym_TILDE] = ACTIONS(424),
    [anon_sym_SQUOTE] = ACTIONS(424),
    [sym_integer_literal] = ACTIONS(426),
    [sym_float_literal] = ACTIONS(424),
    [anon_sym_true] = ACTIONS(426),
    [anon_sym_false] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(424),
    [anon_sym_BSLASH] = ACTIONS(424),
    [anon_sym_POUND_DQUOTE] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_COLON] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
  },
  [89] = {
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(575),
    [sym_integer_literal] = ACTIONS(577),
    [sym_float_literal] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(583),
    [anon_sym_false] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(586),
    [anon_sym_BSLASH] = ACTIONS(589),
    [anon_sym_POUND_DQUOTE] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(595),
    [sym_identifier] = ACTIONS(577),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_LBRACK] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(392),
    [sym_integer_literal] = ACTIONS(394),
    [sym_float_literal] = ACTIONS(392),
    [anon_sym_true] = ACTIONS(394),
    [anon_sym_false] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(392),
    [anon_sym_BSLASH] = ACTIONS(392),
    [anon_sym_POUND_DQUOTE] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [sym_identifier] = ACTIONS(394),
  },
  [91] = {
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [aux_sym_array_expression_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(598),
    [sym_integer_literal] = ACTIONS(506),
    [sym_float_literal] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(506),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
    [anon_sym_AMP] = ACTIONS(416),
    [anon_sym_AT] = ACTIONS(416),
    [anon_sym_TILDE] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [sym_integer_literal] = ACTIONS(418),
    [sym_float_literal] = ACTIONS(416),
    [anon_sym_true] = ACTIONS(418),
    [anon_sym_false] = ACTIONS(418),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [anon_sym_BSLASH] = ACTIONS(416),
    [anon_sym_POUND_DQUOTE] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_COLON] = ACTIONS(416),
    [sym_identifier] = ACTIONS(418),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_AT] = ACTIONS(448),
    [anon_sym_TILDE] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(448),
    [sym_integer_literal] = ACTIONS(450),
    [sym_float_literal] = ACTIONS(448),
    [anon_sym_true] = ACTIONS(450),
    [anon_sym_false] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [anon_sym_BSLASH] = ACTIONS(448),
    [anon_sym_POUND_DQUOTE] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_COLON] = ACTIONS(448),
    [sym_identifier] = ACTIONS(450),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_AMP] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(412),
    [anon_sym_TILDE] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [sym_integer_literal] = ACTIONS(414),
    [sym_float_literal] = ACTIONS(412),
    [anon_sym_true] = ACTIONS(414),
    [anon_sym_false] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_BSLASH] = ACTIONS(412),
    [anon_sym_POUND_DQUOTE] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(412),
    [sym_identifier] = ACTIONS(414),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(600),
    [anon_sym_RPAREN] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_DOT] = ACTIONS(602),
    [anon_sym_AMP] = ACTIONS(600),
    [anon_sym_AT] = ACTIONS(600),
    [anon_sym_TILDE] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [sym_integer_literal] = ACTIONS(604),
    [sym_float_literal] = ACTIONS(600),
    [anon_sym_true] = ACTIONS(604),
    [anon_sym_false] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_BSLASH] = ACTIONS(600),
    [anon_sym_POUND_DQUOTE] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(600),
    [sym_identifier] = ACTIONS(604),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(606),
    [anon_sym_RPAREN] = ACTIONS(606),
    [anon_sym_LBRACK] = ACTIONS(606),
    [anon_sym_AMP] = ACTIONS(606),
    [anon_sym_AT] = ACTIONS(606),
    [anon_sym_TILDE] = ACTIONS(606),
    [anon_sym_SQUOTE] = ACTIONS(606),
    [sym_integer_literal] = ACTIONS(608),
    [sym_float_literal] = ACTIONS(606),
    [anon_sym_true] = ACTIONS(608),
    [anon_sym_false] = ACTIONS(608),
    [anon_sym_DQUOTE] = ACTIONS(606),
    [anon_sym_BSLASH] = ACTIONS(606),
    [anon_sym_POUND_DQUOTE] = ACTIONS(606),
    [anon_sym_LBRACE] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(606),
    [sym_identifier] = ACTIONS(608),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(432),
    [anon_sym_TILDE] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [sym_integer_literal] = ACTIONS(434),
    [sym_float_literal] = ACTIONS(432),
    [anon_sym_true] = ACTIONS(434),
    [anon_sym_false] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [anon_sym_BSLASH] = ACTIONS(432),
    [anon_sym_POUND_DQUOTE] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [sym_identifier] = ACTIONS(434),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_AMP] = ACTIONS(610),
    [anon_sym_AT] = ACTIONS(610),
    [anon_sym_TILDE] = ACTIONS(610),
    [anon_sym_SQUOTE] = ACTIONS(610),
    [sym_integer_literal] = ACTIONS(612),
    [sym_float_literal] = ACTIONS(610),
    [anon_sym_true] = ACTIONS(612),
    [anon_sym_false] = ACTIONS(612),
    [anon_sym_DQUOTE] = ACTIONS(610),
    [anon_sym_BSLASH] = ACTIONS(610),
    [anon_sym_POUND_DQUOTE] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(610),
    [sym_identifier] = ACTIONS(612),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_AMP] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_TILDE] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(614),
    [sym_integer_literal] = ACTIONS(616),
    [sym_float_literal] = ACTIONS(614),
    [anon_sym_true] = ACTIONS(616),
    [anon_sym_false] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(614),
    [anon_sym_BSLASH] = ACTIONS(614),
    [anon_sym_POUND_DQUOTE] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_COLON] = ACTIONS(614),
    [sym_identifier] = ACTIONS(616),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_AMP] = ACTIONS(618),
    [anon_sym_AT] = ACTIONS(618),
    [anon_sym_TILDE] = ACTIONS(618),
    [anon_sym_SQUOTE] = ACTIONS(618),
    [sym_integer_literal] = ACTIONS(620),
    [sym_float_literal] = ACTIONS(618),
    [anon_sym_true] = ACTIONS(620),
    [anon_sym_false] = ACTIONS(620),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [anon_sym_BSLASH] = ACTIONS(618),
    [anon_sym_POUND_DQUOTE] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(618),
    [anon_sym_COLON] = ACTIONS(618),
    [sym_identifier] = ACTIONS(620),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_AMP] = ACTIONS(456),
    [anon_sym_AT] = ACTIONS(456),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [sym_integer_literal] = ACTIONS(458),
    [sym_float_literal] = ACTIONS(456),
    [anon_sym_true] = ACTIONS(458),
    [anon_sym_false] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(456),
    [anon_sym_BSLASH] = ACTIONS(456),
    [anon_sym_POUND_DQUOTE] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(456),
    [sym_identifier] = ACTIONS(458),
  },
  [102] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(622),
    [sym_float_literal] = ACTIONS(624),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(622),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_AMP] = ACTIONS(626),
    [anon_sym_AT] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [sym_integer_literal] = ACTIONS(628),
    [sym_float_literal] = ACTIONS(626),
    [anon_sym_true] = ACTIONS(628),
    [anon_sym_false] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_BSLASH] = ACTIONS(626),
    [anon_sym_POUND_DQUOTE] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [sym_identifier] = ACTIONS(628),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_AMP] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(452),
    [anon_sym_TILDE] = ACTIONS(452),
    [anon_sym_SQUOTE] = ACTIONS(452),
    [sym_integer_literal] = ACTIONS(454),
    [sym_float_literal] = ACTIONS(452),
    [anon_sym_true] = ACTIONS(454),
    [anon_sym_false] = ACTIONS(454),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_BSLASH] = ACTIONS(452),
    [anon_sym_POUND_DQUOTE] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [sym_identifier] = ACTIONS(454),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_AMP] = ACTIONS(464),
    [anon_sym_AT] = ACTIONS(464),
    [anon_sym_TILDE] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [sym_integer_literal] = ACTIONS(466),
    [sym_float_literal] = ACTIONS(464),
    [anon_sym_true] = ACTIONS(466),
    [anon_sym_false] = ACTIONS(466),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [anon_sym_BSLASH] = ACTIONS(464),
    [anon_sym_POUND_DQUOTE] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_COLON] = ACTIONS(464),
    [sym_identifier] = ACTIONS(466),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_AMP] = ACTIONS(630),
    [anon_sym_AT] = ACTIONS(630),
    [anon_sym_TILDE] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [sym_integer_literal] = ACTIONS(632),
    [sym_float_literal] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(632),
    [anon_sym_false] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_BSLASH] = ACTIONS(630),
    [anon_sym_POUND_DQUOTE] = ACTIONS(630),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(630),
    [sym_identifier] = ACTIONS(632),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_AMP] = ACTIONS(634),
    [anon_sym_AT] = ACTIONS(634),
    [anon_sym_TILDE] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [sym_integer_literal] = ACTIONS(636),
    [sym_float_literal] = ACTIONS(634),
    [anon_sym_true] = ACTIONS(636),
    [anon_sym_false] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(634),
    [anon_sym_BSLASH] = ACTIONS(634),
    [anon_sym_POUND_DQUOTE] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(634),
    [sym_identifier] = ACTIONS(636),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_AMP] = ACTIONS(400),
    [anon_sym_AT] = ACTIONS(400),
    [anon_sym_TILDE] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [sym_integer_literal] = ACTIONS(402),
    [sym_float_literal] = ACTIONS(400),
    [anon_sym_true] = ACTIONS(402),
    [anon_sym_false] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [anon_sym_BSLASH] = ACTIONS(400),
    [anon_sym_POUND_DQUOTE] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(400),
    [sym_identifier] = ACTIONS(402),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_AMP] = ACTIONS(404),
    [anon_sym_AT] = ACTIONS(404),
    [anon_sym_TILDE] = ACTIONS(404),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [sym_integer_literal] = ACTIONS(406),
    [sym_float_literal] = ACTIONS(404),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_false] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [anon_sym_BSLASH] = ACTIONS(404),
    [anon_sym_POUND_DQUOTE] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(404),
    [sym_identifier] = ACTIONS(406),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_AT] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [sym_integer_literal] = ACTIONS(410),
    [sym_float_literal] = ACTIONS(408),
    [anon_sym_true] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(408),
    [anon_sym_BSLASH] = ACTIONS(408),
    [anon_sym_POUND_DQUOTE] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(408),
    [sym_identifier] = ACTIONS(410),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_AMP] = ACTIONS(460),
    [anon_sym_AT] = ACTIONS(460),
    [anon_sym_TILDE] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [sym_integer_literal] = ACTIONS(462),
    [sym_float_literal] = ACTIONS(460),
    [anon_sym_true] = ACTIONS(462),
    [anon_sym_false] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [anon_sym_BSLASH] = ACTIONS(460),
    [anon_sym_POUND_DQUOTE] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_COLON] = ACTIONS(460),
    [sym_identifier] = ACTIONS(462),
  },
  [112] = {
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_integer_literal] = ACTIONS(640),
    [sym_float_literal] = ACTIONS(638),
    [anon_sym_true] = ACTIONS(640),
    [anon_sym_false] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_BSLASH] = ACTIONS(638),
    [anon_sym_POUND_DQUOTE] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_RBRACE] = ACTIONS(638),
    [sym_identifier] = ACTIONS(640),
  },
  [113] = {
    [sym_line_comment] = STATE(113),
    [sym__s_expr] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_LPAREN] = ACTIONS(647),
  },
  [114] = {
    [sym_line_comment] = STATE(113),
    [sym__s_expr] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(650),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [115] = {
    [sym_symbol] = STATE(117),
    [aux_sym_parameters_repeat1] = STATE(117),
    [anon_sym_RBRACK] = ACTIONS(652),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(654),
  },
  [116] = {
    [sym_symbol] = STATE(115),
    [aux_sym_parameters_repeat1] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(656),
    [anon_sym_COLON] = ACTIONS(284),
    [sym_identifier] = ACTIONS(658),
  },
  [117] = {
    [sym_symbol] = STATE(117),
    [aux_sym_parameters_repeat1] = STATE(117),
    [anon_sym_RBRACK] = ACTIONS(660),
    [anon_sym_COLON] = ACTIONS(662),
    [sym_identifier] = ACTIONS(665),
  },
  [118] = {
    [aux_sym_str_literal_repeat1] = STATE(129),
    [aux_sym_str_literal_token1] = ACTIONS(668),
    [anon_sym_DQUOTE2] = ACTIONS(670),
    [sym_escape_sequence] = ACTIONS(672),
  },
  [119] = {
    [aux_sym_str_literal_repeat1] = STATE(127),
    [aux_sym_str_literal_token1] = ACTIONS(674),
    [anon_sym_DQUOTE2] = ACTIONS(676),
    [sym_escape_sequence] = ACTIONS(678),
  },
  [120] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [121] = {
    [aux_sym_str_literal_repeat1] = STATE(130),
    [aux_sym_str_literal_token1] = ACTIONS(686),
    [anon_sym_DQUOTE2] = ACTIONS(688),
    [sym_escape_sequence] = ACTIONS(690),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [anon_sym_SEMI] = ACTIONS(692),
    [anon_sym_LPAREN] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
  },
  [123] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(694),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [124] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(696),
    [anon_sym_DQUOTE2] = ACTIONS(699),
    [sym_escape_sequence] = ACTIONS(701),
  },
  [125] = {
    [aux_sym_str_literal_repeat1] = STATE(120),
    [aux_sym_str_literal_token1] = ACTIONS(704),
    [anon_sym_DQUOTE2] = ACTIONS(706),
    [sym_escape_sequence] = ACTIONS(708),
  },
  [126] = {
    [aux_sym_str_literal_repeat1] = STATE(123),
    [aux_sym_str_literal_token1] = ACTIONS(710),
    [anon_sym_DQUOTE2] = ACTIONS(712),
    [sym_escape_sequence] = ACTIONS(714),
  },
  [127] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(716),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [128] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(718),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [129] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(720),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [130] = {
    [aux_sym_str_literal_repeat1] = STATE(124),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(722),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [131] = {
    [aux_sym_str_literal_repeat1] = STATE(128),
    [aux_sym_str_literal_token1] = ACTIONS(724),
    [anon_sym_DQUOTE2] = ACTIONS(726),
    [sym_escape_sequence] = ACTIONS(728),
  },
  [132] = {
    [sym_interface_fn] = STATE(188),
    [anon_sym_Fn] = ACTIONS(730),
    [anon_sym_] = ACTIONS(730),
  },
  [133] = {
    [aux_sym_let_pairs_repeat1] = STATE(135),
    [anon_sym_RBRACK] = ACTIONS(732),
    [sym_identifier] = ACTIONS(734),
  },
  [134] = {
    [aux_sym_let_pairs_repeat1] = STATE(133),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_identifier] = ACTIONS(734),
  },
  [135] = {
    [aux_sym_let_pairs_repeat1] = STATE(135),
    [anon_sym_RBRACK] = ACTIONS(738),
    [sym_identifier] = ACTIONS(740),
  },
  [136] = {
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [sym_identifier] = ACTIONS(432),
  },
  [137] = {
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym_identifier] = ACTIONS(456),
  },
  [138] = {
    [sym_parameters] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(743),
  },
  [139] = {
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_identifier] = ACTIONS(420),
  },
  [140] = {
    [anon_sym_RBRACK] = ACTIONS(416),
    [sym_identifier] = ACTIONS(416),
  },
  [141] = {
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_identifier] = ACTIONS(412),
  },
  [142] = {
    [aux_sym_str_literal_token1] = ACTIONS(745),
    [sym_escape_sequence] = ACTIONS(747),
  },
  [143] = {
    [sym_parameters] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(743),
  },
  [144] = {
    [sym_typed_parameters] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(749),
  },
  [145] = {
    [sym_parameters] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(743),
  },
  [146] = {
    [anon_sym_RBRACK] = ACTIONS(428),
    [sym_identifier] = ACTIONS(428),
  },
  [147] = {
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_identifier] = ACTIONS(436),
  },
  [148] = {
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_identifier] = ACTIONS(440),
  },
  [149] = {
    [anon_sym_RBRACK] = ACTIONS(396),
    [sym_identifier] = ACTIONS(396),
  },
  [150] = {
    [anon_sym_RBRACK] = ACTIONS(424),
    [sym_identifier] = ACTIONS(424),
  },
  [151] = {
    [anon_sym_RBRACK] = ACTIONS(751),
    [sym_identifier] = ACTIONS(751),
  },
  [152] = {
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_identifier] = ACTIONS(448),
  },
  [153] = {
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_identifier] = ACTIONS(452),
  },
  [154] = {
    [aux_sym_str_literal_token1] = ACTIONS(753),
    [sym_escape_sequence] = ACTIONS(755),
  },
  [155] = {
    [sym_let_pairs] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(757),
  },
  [156] = {
    [anon_sym_RBRACK] = ACTIONS(464),
    [sym_identifier] = ACTIONS(464),
  },
  [157] = {
    [aux_sym_str_literal_token1] = ACTIONS(759),
    [sym_escape_sequence] = ACTIONS(761),
  },
  [158] = {
    [anon_sym_RBRACK] = ACTIONS(460),
    [sym_identifier] = ACTIONS(460),
  },
  [159] = {
    [anon_sym_RBRACK] = ACTIONS(392),
    [sym_identifier] = ACTIONS(392),
  },
  [160] = {
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_identifier] = ACTIONS(444),
  },
  [161] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(743),
  },
  [162] = {
    [sym_identifier] = ACTIONS(763),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(765),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(767),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(769),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(771),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(773),
  },
  [168] = {
    [sym_identifier] = ACTIONS(775),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(777),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(779),
  },
  [171] = {
    [sym_identifier] = ACTIONS(781),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(783),
  },
  [173] = {
    [sym_identifier] = ACTIONS(785),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(787),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(789),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(791),
  },
  [177] = {
    [sym_identifier] = ACTIONS(793),
  },
  [178] = {
    [sym_identifier] = ACTIONS(795),
  },
  [179] = {
    [sym_identifier] = ACTIONS(797),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(799),
  },
  [181] = {
    [sym_identifier] = ACTIONS(801),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(803),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(805),
  },
  [184] = {
    [sym_identifier] = ACTIONS(807),
  },
  [185] = {
    [sym_identifier] = ACTIONS(809),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(811),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(813),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(815),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(817),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(819),
  },
  [191] = {
    [aux_sym_line_comment_token1] = ACTIONS(821),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(823),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(191),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(179),
  [11] = {.count = 1, .reusable = false}, SHIFT(161),
  [13] = {.count = 1, .reusable = false}, SHIFT(177),
  [15] = {.count = 1, .reusable = false}, SHIFT(155),
  [17] = {.count = 1, .reusable = true}, SHIFT(85),
  [19] = {.count = 1, .reusable = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(39),
  [23] = {.count = 1, .reusable = false}, SHIFT(33),
  [25] = {.count = 1, .reusable = false}, SHIFT(31),
  [27] = {.count = 1, .reusable = false}, SHIFT(29),
  [29] = {.count = 1, .reusable = false}, SHIFT(173),
  [31] = {.count = 1, .reusable = false}, SHIFT(64),
  [33] = {.count = 1, .reusable = false}, SHIFT(162),
  [35] = {.count = 1, .reusable = false}, SHIFT(178),
  [37] = {.count = 1, .reusable = false}, SHIFT(181),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = false}, SHIFT(186),
  [49] = {.count = 1, .reusable = true}, SHIFT(186),
  [51] = {.count = 1, .reusable = false}, SHIFT(70),
  [53] = {.count = 1, .reusable = true}, SHIFT(119),
  [55] = {.count = 1, .reusable = true}, SHIFT(142),
  [57] = {.count = 1, .reusable = true}, SHIFT(118),
  [59] = {.count = 1, .reusable = true}, SHIFT(81),
  [61] = {.count = 1, .reusable = true}, SHIFT(171),
  [63] = {.count = 1, .reusable = false}, SHIFT(95),
  [65] = {.count = 1, .reusable = false}, SHIFT(166),
  [67] = {.count = 1, .reusable = true}, SHIFT(166),
  [69] = {.count = 1, .reusable = false}, SHIFT(169),
  [71] = {.count = 1, .reusable = true}, SHIFT(169),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(85),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(22),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(23),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(24),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(25),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(106),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(106),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(70),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(119),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(142),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(118),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(81),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(171),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [119] = {.count = 1, .reusable = false}, SHIFT(9),
  [121] = {.count = 1, .reusable = true}, SHIFT(9),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [125] = {.count = 1, .reusable = false}, SHIFT(6),
  [127] = {.count = 1, .reusable = true}, SHIFT(6),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [131] = {.count = 1, .reusable = false}, SHIFT(106),
  [133] = {.count = 1, .reusable = true}, SHIFT(106),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [138] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(85),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(23),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(24),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(25),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(9),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(9),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(70),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(119),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(142),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(118),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(81),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(171),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(67),
  [183] = {.count = 1, .reusable = true}, SHIFT(62),
  [185] = {.count = 1, .reusable = false}, SHIFT(45),
  [187] = {.count = 1, .reusable = true}, SHIFT(45),
  [189] = {.count = 1, .reusable = true}, SHIFT(34),
  [191] = {.count = 1, .reusable = true}, SHIFT(35),
  [193] = {.count = 1, .reusable = true}, SHIFT(40),
  [195] = {.count = 1, .reusable = true}, SHIFT(27),
  [197] = {.count = 1, .reusable = true}, SHIFT(63),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [201] = {.count = 1, .reusable = false}, SHIFT(172),
  [203] = {.count = 1, .reusable = true}, SHIFT(172),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [207] = {.count = 1, .reusable = false}, SHIFT(170),
  [209] = {.count = 1, .reusable = true}, SHIFT(170),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 12),
  [213] = {.count = 1, .reusable = false}, SHIFT(183),
  [215] = {.count = 1, .reusable = true}, SHIFT(183),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [219] = {.count = 1, .reusable = false}, SHIFT(167),
  [221] = {.count = 1, .reusable = true}, SHIFT(167),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [225] = {.count = 1, .reusable = false}, SHIFT(190),
  [227] = {.count = 1, .reusable = true}, SHIFT(190),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 12),
  [231] = {.count = 1, .reusable = false}, SHIFT(187),
  [233] = {.count = 1, .reusable = true}, SHIFT(187),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(67),
  [238] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(45),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(45),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(34),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(35),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(40),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [258] = {.count = 1, .reusable = true}, SHIFT(4),
  [260] = {.count = 1, .reusable = true}, SHIFT(87),
  [262] = {.count = 1, .reusable = true}, SHIFT(28),
  [264] = {.count = 1, .reusable = true}, SHIFT(30),
  [266] = {.count = 1, .reusable = true}, SHIFT(26),
  [268] = {.count = 1, .reusable = true}, SHIFT(20),
  [270] = {.count = 1, .reusable = false}, SHIFT(153),
  [272] = {.count = 1, .reusable = true}, SHIFT(153),
  [274] = {.count = 1, .reusable = false}, SHIFT(160),
  [276] = {.count = 1, .reusable = true}, SHIFT(126),
  [278] = {.count = 1, .reusable = true}, SHIFT(157),
  [280] = {.count = 1, .reusable = true}, SHIFT(125),
  [282] = {.count = 1, .reusable = true}, SHIFT(84),
  [284] = {.count = 1, .reusable = true}, SHIFT(168),
  [286] = {.count = 1, .reusable = false}, SHIFT(176),
  [288] = {.count = 1, .reusable = true}, SHIFT(176),
  [290] = {.count = 1, .reusable = false}, SHIFT(111),
  [292] = {.count = 1, .reusable = true}, SHIFT(111),
  [294] = {.count = 1, .reusable = false}, SHIFT(105),
  [296] = {.count = 1, .reusable = true}, SHIFT(105),
  [298] = {.count = 1, .reusable = false}, SHIFT(101),
  [300] = {.count = 1, .reusable = true}, SHIFT(101),
  [302] = {.count = 1, .reusable = false}, SHIFT(104),
  [304] = {.count = 1, .reusable = true}, SHIFT(104),
  [306] = {.count = 1, .reusable = false}, SHIFT(137),
  [308] = {.count = 1, .reusable = true}, SHIFT(137),
  [310] = {.count = 1, .reusable = true}, SHIFT(2),
  [312] = {.count = 1, .reusable = true}, SHIFT(79),
  [314] = {.count = 1, .reusable = false}, SHIFT(58),
  [316] = {.count = 1, .reusable = true}, SHIFT(58),
  [318] = {.count = 1, .reusable = false}, SHIFT(56),
  [320] = {.count = 1, .reusable = true}, SHIFT(121),
  [322] = {.count = 1, .reusable = true}, SHIFT(154),
  [324] = {.count = 1, .reusable = true}, SHIFT(131),
  [326] = {.count = 1, .reusable = true}, SHIFT(78),
  [328] = {.count = 1, .reusable = true}, SHIFT(185),
  [330] = {.count = 1, .reusable = false}, SHIFT(158),
  [332] = {.count = 1, .reusable = true}, SHIFT(158),
  [334] = {.count = 1, .reusable = false}, SHIFT(163),
  [336] = {.count = 1, .reusable = true}, SHIFT(163),
  [338] = {.count = 1, .reusable = false}, SHIFT(156),
  [340] = {.count = 1, .reusable = true}, SHIFT(156),
  [342] = {.count = 1, .reusable = false}, SHIFT(165),
  [344] = {.count = 1, .reusable = true}, SHIFT(165),
  [346] = {.count = 1, .reusable = false}, SHIFT(189),
  [348] = {.count = 1, .reusable = true}, SHIFT(189),
  [350] = {.count = 1, .reusable = false}, SHIFT(16),
  [352] = {.count = 1, .reusable = true}, SHIFT(16),
  [354] = {.count = 1, .reusable = false}, SHIFT(60),
  [356] = {.count = 1, .reusable = true}, SHIFT(60),
  [358] = {.count = 1, .reusable = false}, SHIFT(61),
  [360] = {.count = 1, .reusable = true}, SHIFT(61),
  [362] = {.count = 1, .reusable = false}, SHIFT(164),
  [364] = {.count = 1, .reusable = true}, SHIFT(164),
  [366] = {.count = 1, .reusable = false}, SHIFT(32),
  [368] = {.count = 1, .reusable = true}, SHIFT(32),
  [370] = {.count = 1, .reusable = false}, SHIFT(151),
  [372] = {.count = 1, .reusable = true}, SHIFT(151),
  [374] = {.count = 1, .reusable = false}, SHIFT(37),
  [376] = {.count = 1, .reusable = true}, SHIFT(37),
  [378] = {.count = 1, .reusable = false}, SHIFT(59),
  [380] = {.count = 1, .reusable = true}, SHIFT(59),
  [382] = {.count = 1, .reusable = false}, SHIFT(175),
  [384] = {.count = 1, .reusable = true}, SHIFT(175),
  [386] = {.count = 1, .reusable = true}, SHIFT(65),
  [388] = {.count = 1, .reusable = false}, SHIFT(108),
  [390] = {.count = 1, .reusable = true}, SHIFT(108),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [476] = {.count = 1, .reusable = true}, SHIFT(109),
  [478] = {.count = 1, .reusable = false}, SHIFT(66),
  [480] = {.count = 1, .reusable = true}, SHIFT(66),
  [482] = {.count = 1, .reusable = true}, SHIFT(110),
  [484] = {.count = 1, .reusable = false}, SHIFT(69),
  [486] = {.count = 1, .reusable = true}, SHIFT(69),
  [488] = {.count = 1, .reusable = true}, SHIFT(46),
  [490] = {.count = 1, .reusable = false}, SHIFT(68),
  [492] = {.count = 1, .reusable = true}, SHIFT(68),
  [494] = {.count = 1, .reusable = true}, SHIFT(47),
  [496] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [498] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(69),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(69),
  [504] = {.count = 1, .reusable = true}, SHIFT(150),
  [506] = {.count = 1, .reusable = false}, SHIFT(89),
  [508] = {.count = 1, .reusable = true}, SHIFT(89),
  [510] = {.count = 1, .reusable = false}, SHIFT(102),
  [512] = {.count = 1, .reusable = true}, SHIFT(102),
  [514] = {.count = 1, .reusable = true}, SHIFT(48),
  [516] = {.count = 1, .reusable = true}, SHIFT(51),
  [518] = {.count = 1, .reusable = true}, SHIFT(94),
  [520] = {.count = 1, .reusable = true}, SHIFT(54),
  [522] = {.count = 1, .reusable = true}, SHIFT(43),
  [524] = {.count = 1, .reusable = false}, SHIFT(76),
  [526] = {.count = 1, .reusable = true}, SHIFT(76),
  [528] = {.count = 1, .reusable = true}, SHIFT(75),
  [530] = {.count = 1, .reusable = true}, SHIFT(141),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(85),
  [535] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(102),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(102),
  [541] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(70),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(119),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(142),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(118),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(81),
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20),
  [558] = {.count = 1, .reusable = true}, SHIFT(147),
  [560] = {.count = 1, .reusable = true}, SHIFT(90),
  [562] = {.count = 1, .reusable = false}, SHIFT(91),
  [564] = {.count = 1, .reusable = true}, SHIFT(91),
  [566] = {.count = 1, .reusable = true}, SHIFT(159),
  [568] = {.count = 1, .reusable = false}, SHIFT(71),
  [570] = {.count = 1, .reusable = true}, SHIFT(71),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(85),
  [575] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [577] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(89),
  [580] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(89),
  [583] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(70),
  [586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(119),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(142),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(118),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(81),
  [598] = {.count = 1, .reusable = true}, SHIFT(88),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [602] = {.count = 1, .reusable = true}, SHIFT(184),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 21),
  [608] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 21),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [622] = {.count = 1, .reusable = false}, SHIFT(112),
  [624] = {.count = 1, .reusable = true}, SHIFT(112),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [630] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [632] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [638] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [640] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [642] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [652] = {.count = 1, .reusable = true}, SHIFT(103),
  [654] = {.count = 1, .reusable = true}, SHIFT(117),
  [656] = {.count = 1, .reusable = true}, SHIFT(98),
  [658] = {.count = 1, .reusable = true}, SHIFT(115),
  [660] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(168),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(117),
  [668] = {.count = 1, .reusable = false}, SHIFT(129),
  [670] = {.count = 1, .reusable = true}, SHIFT(73),
  [672] = {.count = 1, .reusable = true}, SHIFT(129),
  [674] = {.count = 1, .reusable = false}, SHIFT(127),
  [676] = {.count = 1, .reusable = true}, SHIFT(93),
  [678] = {.count = 1, .reusable = true}, SHIFT(127),
  [680] = {.count = 1, .reusable = false}, SHIFT(124),
  [682] = {.count = 1, .reusable = true}, SHIFT(140),
  [684] = {.count = 1, .reusable = true}, SHIFT(124),
  [686] = {.count = 1, .reusable = false}, SHIFT(130),
  [688] = {.count = 1, .reusable = true}, SHIFT(57),
  [690] = {.count = 1, .reusable = true}, SHIFT(130),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [694] = {.count = 1, .reusable = true}, SHIFT(139),
  [696] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(124),
  [699] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [701] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(124),
  [704] = {.count = 1, .reusable = false}, SHIFT(120),
  [706] = {.count = 1, .reusable = true}, SHIFT(148),
  [708] = {.count = 1, .reusable = true}, SHIFT(120),
  [710] = {.count = 1, .reusable = false}, SHIFT(123),
  [712] = {.count = 1, .reusable = true}, SHIFT(152),
  [714] = {.count = 1, .reusable = true}, SHIFT(123),
  [716] = {.count = 1, .reusable = true}, SHIFT(86),
  [718] = {.count = 1, .reusable = true}, SHIFT(49),
  [720] = {.count = 1, .reusable = true}, SHIFT(92),
  [722] = {.count = 1, .reusable = true}, SHIFT(50),
  [724] = {.count = 1, .reusable = false}, SHIFT(128),
  [726] = {.count = 1, .reusable = true}, SHIFT(55),
  [728] = {.count = 1, .reusable = true}, SHIFT(128),
  [730] = {.count = 1, .reusable = true}, SHIFT(144),
  [732] = {.count = 1, .reusable = true}, SHIFT(107),
  [734] = {.count = 1, .reusable = true}, SHIFT(38),
  [736] = {.count = 1, .reusable = true}, SHIFT(99),
  [738] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25), SHIFT_REPEAT(38),
  [743] = {.count = 1, .reusable = true}, SHIFT(116),
  [745] = {.count = 1, .reusable = false}, SHIFT(72),
  [747] = {.count = 1, .reusable = true}, SHIFT(72),
  [749] = {.count = 1, .reusable = true}, SHIFT(12),
  [751] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [753] = {.count = 1, .reusable = false}, SHIFT(44),
  [755] = {.count = 1, .reusable = true}, SHIFT(44),
  [757] = {.count = 1, .reusable = true}, SHIFT(134),
  [759] = {.count = 1, .reusable = false}, SHIFT(149),
  [761] = {.count = 1, .reusable = true}, SHIFT(149),
  [763] = {.count = 1, .reusable = true}, SHIFT(174),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 16),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [771] = {.count = 1, .reusable = true}, SHIFT(80),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [775] = {.count = 1, .reusable = true}, SHIFT(136),
  [777] = {.count = 1, .reusable = true}, SHIFT(146),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [781] = {.count = 1, .reusable = true}, SHIFT(97),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [785] = {.count = 1, .reusable = true}, SHIFT(36),
  [787] = {.count = 1, .reusable = true}, SHIFT(132),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 17),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [793] = {.count = 1, .reusable = true}, SHIFT(138),
  [795] = {.count = 1, .reusable = true}, SHIFT(145),
  [797] = {.count = 1, .reusable = true}, SHIFT(21),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 28),
  [801] = {.count = 1, .reusable = true}, SHIFT(143),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 27),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 22),
  [807] = {.count = 1, .reusable = true}, SHIFT(96),
  [809] = {.count = 1, .reusable = true}, SHIFT(53),
  [811] = {.count = 1, .reusable = true}, SHIFT(52),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 22),
  [815] = {.count = 1, .reusable = true}, SHIFT(182),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 26),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 22),
  [821] = {.count = 1, .reusable = true}, SHIFT(122),
  [823] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
