#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 189
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
  anon_sym_Fn = 38,
  anon_sym_ = 39,
  anon_sym_AMP = 40,
  anon_sym_AT = 41,
  anon_sym_TILDE = 42,
  anon_sym_SQUOTE = 43,
  sym_integer_literal = 44,
  sym_float_literal = 45,
  anon_sym_true = 46,
  anon_sym_false = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_str_literal_token1 = 49,
  anon_sym_DQUOTE2 = 50,
  anon_sym_BSLASH = 51,
  anon_sym_POUND_DQUOTE = 52,
  sym_escape_sequence = 53,
  anon_sym_LBRACE = 54,
  anon_sym_RBRACE = 55,
  anon_sym_COLON = 56,
  sym_identifier = 57,
  sym_source_file = 58,
  sym_line_comment = 59,
  sym__s_expr = 60,
  sym__expr = 61,
  sym__anything = 62,
  sym__s_forms = 63,
  sym__defs = 64,
  sym__literals = 65,
  sym__short_helper = 66,
  sym_def = 67,
  sym_fn = 68,
  sym_defn = 69,
  sym_let = 70,
  sym_let_pairs = 71,
  sym_do = 72,
  sym_if = 73,
  sym_while = 74,
  sym_ref = 75,
  sym_address = 76,
  sym_set = 77,
  sym_the = 78,
  sym_type = 79,
  sym_complex_type = 80,
  sym_call_expression = 81,
  sym_call_name = 82,
  sym_definterface = 83,
  sym_defmacro = 84,
  sym_interface_fn = 85,
  sym_short_ref = 86,
  sym_short_copy = 87,
  sym_short_fn_ref = 88,
  sym_short_quote = 89,
  sym_parameters = 90,
  sym_typed_parameters = 91,
  sym_bool_literal = 92,
  sym_str_literal = 93,
  sym_char_literal = 94,
  sym_pattern_literal = 95,
  sym_array_expression = 96,
  sym_map_expression = 97,
  sym_symbol = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_let_pairs_repeat1 = 100,
  aux_sym_do_repeat1 = 101,
  aux_sym_complex_type_repeat1 = 102,
  aux_sym_call_expression_repeat1 = 103,
  aux_sym_parameters_repeat1 = 104,
  aux_sym_typed_parameters_repeat1 = 105,
  aux_sym_str_literal_repeat1 = 106,
  aux_sym_array_expression_repeat1 = 107,
  aux_sym_map_expression_repeat1 = 108,
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
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(152);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(124);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == ']') ADVANCE(30);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(82);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 955) ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
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
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(89);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 59:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
      if (lookahead == '.') ADVANCE(14);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(18);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(130);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 88:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 104:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 105:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 106:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 107:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 108:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 109:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 110:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 113:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 115:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 118:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 119:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 120:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 122:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 123:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 128:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 129:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 137:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 141:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 142:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 148:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 149:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 150:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 154:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 157:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 159:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 163:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 164:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 165:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 166:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 167:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 176:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 177:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
      END_STATE();
    case 178:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(178);
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
  [41] = {.lex_state = 8},
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
  [69] = {.lex_state = 2},
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
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
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
    [sym_source_file] = STATE(188),
    [sym_line_comment] = STATE(113),
    [sym__s_expr] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(182),
    [sym__s_expr] = STATE(182),
    [sym__anything] = STATE(182),
    [sym__s_forms] = STATE(182),
    [sym__defs] = STATE(182),
    [sym__literals] = STATE(182),
    [sym__short_helper] = STATE(182),
    [sym_def] = STATE(182),
    [sym_fn] = STATE(182),
    [sym_defn] = STATE(182),
    [sym_let] = STATE(182),
    [sym_do] = STATE(182),
    [sym_if] = STATE(182),
    [sym_while] = STATE(182),
    [sym_ref] = STATE(182),
    [sym_address] = STATE(182),
    [sym_set] = STATE(182),
    [sym_the] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(182),
    [sym_defmacro] = STATE(182),
    [sym_short_ref] = STATE(182),
    [sym_short_copy] = STATE(182),
    [sym_short_fn_ref] = STATE(101),
    [sym_short_quote] = STATE(182),
    [sym_bool_literal] = STATE(182),
    [sym_str_literal] = STATE(182),
    [sym_char_literal] = STATE(182),
    [sym_pattern_literal] = STATE(182),
    [sym_array_expression] = STATE(182),
    [sym_map_expression] = STATE(182),
    [sym_symbol] = STATE(182),
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(45),
    [sym_float_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
  },
  [3] = {
    [sym_line_comment] = STATE(167),
    [sym__s_expr] = STATE(167),
    [sym__anything] = STATE(167),
    [sym__s_forms] = STATE(167),
    [sym__defs] = STATE(167),
    [sym__literals] = STATE(167),
    [sym__short_helper] = STATE(167),
    [sym_def] = STATE(167),
    [sym_fn] = STATE(167),
    [sym_defn] = STATE(167),
    [sym_let] = STATE(167),
    [sym_do] = STATE(167),
    [sym_if] = STATE(167),
    [sym_while] = STATE(167),
    [sym_ref] = STATE(167),
    [sym_address] = STATE(167),
    [sym_set] = STATE(167),
    [sym_the] = STATE(167),
    [sym_call_expression] = STATE(167),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(167),
    [sym_defmacro] = STATE(167),
    [sym_short_ref] = STATE(167),
    [sym_short_copy] = STATE(167),
    [sym_short_fn_ref] = STATE(101),
    [sym_short_quote] = STATE(167),
    [sym_bool_literal] = STATE(167),
    [sym_str_literal] = STATE(167),
    [sym_char_literal] = STATE(167),
    [sym_pattern_literal] = STATE(167),
    [sym_array_expression] = STATE(167),
    [sym_map_expression] = STATE(167),
    [sym_symbol] = STATE(167),
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
  },
  [4] = {
    [sym_line_comment] = STATE(165),
    [sym__s_expr] = STATE(165),
    [sym__anything] = STATE(165),
    [sym__s_forms] = STATE(165),
    [sym__defs] = STATE(165),
    [sym__literals] = STATE(165),
    [sym__short_helper] = STATE(165),
    [sym_def] = STATE(165),
    [sym_fn] = STATE(165),
    [sym_defn] = STATE(165),
    [sym_let] = STATE(165),
    [sym_do] = STATE(165),
    [sym_if] = STATE(165),
    [sym_while] = STATE(165),
    [sym_ref] = STATE(165),
    [sym_address] = STATE(165),
    [sym_set] = STATE(165),
    [sym_the] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym_call_name] = STATE(7),
    [sym_definterface] = STATE(165),
    [sym_defmacro] = STATE(165),
    [sym_short_ref] = STATE(165),
    [sym_short_copy] = STATE(165),
    [sym_short_fn_ref] = STATE(101),
    [sym_short_quote] = STATE(165),
    [sym_bool_literal] = STATE(165),
    [sym_str_literal] = STATE(165),
    [sym_char_literal] = STATE(165),
    [sym_pattern_literal] = STATE(165),
    [sym_array_expression] = STATE(165),
    [sym_map_expression] = STATE(165),
    [sym_symbol] = STATE(165),
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(67),
    [sym_float_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
  },
  [5] = {
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
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(73),
    [sym_float_literal] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(73),
  },
  [6] = {
    [sym__s_expr] = STATE(96),
    [sym__expr] = STATE(96),
    [sym__literals] = STATE(96),
    [sym__short_helper] = STATE(96),
    [sym_short_ref] = STATE(96),
    [sym_short_copy] = STATE(96),
    [sym_short_fn_ref] = STATE(96),
    [sym_short_quote] = STATE(96),
    [sym_bool_literal] = STATE(96),
    [sym_str_literal] = STATE(96),
    [sym_char_literal] = STATE(96),
    [sym_pattern_literal] = STATE(96),
    [sym_array_expression] = STATE(96),
    [sym_map_expression] = STATE(96),
    [sym_symbol] = STATE(96),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(97),
    [sym_float_literal] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_BSLASH] = ACTIONS(109),
    [anon_sym_POUND_DQUOTE] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(118),
    [sym_identifier] = ACTIONS(97),
  },
  [7] = {
    [sym__s_expr] = STATE(5),
    [sym__expr] = STATE(5),
    [sym__literals] = STATE(5),
    [sym__short_helper] = STATE(5),
    [sym_short_ref] = STATE(5),
    [sym_short_copy] = STATE(5),
    [sym_short_fn_ref] = STATE(5),
    [sym_short_quote] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [sym_symbol] = STATE(5),
    [aux_sym_call_expression_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(123),
    [sym_float_literal] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(123),
  },
  [8] = {
    [sym__s_expr] = STATE(96),
    [sym__expr] = STATE(96),
    [sym__literals] = STATE(96),
    [sym__short_helper] = STATE(96),
    [sym_short_ref] = STATE(96),
    [sym_short_copy] = STATE(96),
    [sym_short_fn_ref] = STATE(96),
    [sym_short_quote] = STATE(96),
    [sym_bool_literal] = STATE(96),
    [sym_str_literal] = STATE(96),
    [sym_char_literal] = STATE(96),
    [sym_pattern_literal] = STATE(96),
    [sym_array_expression] = STATE(96),
    [sym_map_expression] = STATE(96),
    [sym_symbol] = STATE(96),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(129),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(129),
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
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(165),
    [anon_sym_POUND_DQUOTE] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(174),
    [sym_identifier] = ACTIONS(153),
  },
  [10] = {
    [sym__s_expr] = STATE(96),
    [sym__expr] = STATE(96),
    [sym__literals] = STATE(96),
    [sym__short_helper] = STATE(96),
    [sym_short_ref] = STATE(96),
    [sym_short_copy] = STATE(96),
    [sym_short_fn_ref] = STATE(96),
    [sym_short_quote] = STATE(96),
    [sym_bool_literal] = STATE(96),
    [sym_str_literal] = STATE(96),
    [sym_char_literal] = STATE(96),
    [sym_pattern_literal] = STATE(96),
    [sym_array_expression] = STATE(96),
    [sym_map_expression] = STATE(96),
    [sym_symbol] = STATE(96),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(129),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(129),
  },
  [11] = {
    [sym__short_helper] = STATE(18),
    [sym_type] = STATE(18),
    [sym_complex_type] = STATE(44),
    [sym_short_ref] = STATE(18),
    [sym_short_copy] = STATE(18),
    [sym_short_fn_ref] = STATE(18),
    [sym_short_quote] = STATE(18),
    [aux_sym_typed_parameters_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_Bool] = ACTIONS(183),
    [anon_sym_Char] = ACTIONS(183),
    [anon_sym_Int] = ACTIONS(183),
    [anon_sym_Long] = ACTIONS(183),
    [anon_sym_Float] = ACTIONS(183),
    [anon_sym_Double] = ACTIONS(183),
    [anon_sym_Vector2] = ACTIONS(185),
    [anon_sym_Vector3] = ACTIONS(185),
    [anon_sym_VectorN] = ACTIONS(183),
    [anon_sym_String] = ACTIONS(183),
    [anon_sym_Pattern] = ACTIONS(183),
    [anon_sym_Array] = ACTIONS(183),
    [anon_sym_Map] = ACTIONS(183),
    [anon_sym_Maybe] = ACTIONS(183),
    [anon_sym_Result] = ACTIONS(183),
    [anon_sym_Id] = ACTIONS(183),
    [anon_sym_Ptr] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_identifier] = ACTIONS(183),
  },
  [12] = {
    [sym__short_helper] = STATE(11),
    [sym_type] = STATE(11),
    [sym_complex_type] = STATE(44),
    [sym_short_ref] = STATE(11),
    [sym_short_copy] = STATE(11),
    [sym_short_fn_ref] = STATE(11),
    [sym_short_quote] = STATE(11),
    [aux_sym_typed_parameters_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_Bool] = ACTIONS(183),
    [anon_sym_Char] = ACTIONS(183),
    [anon_sym_Int] = ACTIONS(183),
    [anon_sym_Long] = ACTIONS(183),
    [anon_sym_Float] = ACTIONS(183),
    [anon_sym_Double] = ACTIONS(183),
    [anon_sym_Vector2] = ACTIONS(185),
    [anon_sym_Vector3] = ACTIONS(185),
    [anon_sym_VectorN] = ACTIONS(183),
    [anon_sym_String] = ACTIONS(183),
    [anon_sym_Pattern] = ACTIONS(183),
    [anon_sym_Array] = ACTIONS(183),
    [anon_sym_Map] = ACTIONS(183),
    [anon_sym_Maybe] = ACTIONS(183),
    [anon_sym_Result] = ACTIONS(183),
    [anon_sym_Id] = ACTIONS(183),
    [anon_sym_Ptr] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_identifier] = ACTIONS(183),
  },
  [13] = {
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
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(199),
    [sym_float_literal] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(199),
  },
  [14] = {
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
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(205),
    [sym_float_literal] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(205),
  },
  [15] = {
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
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(211),
  },
  [16] = {
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
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(217),
    [sym_float_literal] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(217),
  },
  [17] = {
    [sym__s_expr] = STATE(184),
    [sym__expr] = STATE(184),
    [sym__literals] = STATE(184),
    [sym__short_helper] = STATE(184),
    [sym_short_ref] = STATE(184),
    [sym_short_copy] = STATE(184),
    [sym_short_fn_ref] = STATE(184),
    [sym_short_quote] = STATE(184),
    [sym_bool_literal] = STATE(184),
    [sym_str_literal] = STATE(184),
    [sym_char_literal] = STATE(184),
    [sym_pattern_literal] = STATE(184),
    [sym_array_expression] = STATE(184),
    [sym_map_expression] = STATE(184),
    [sym_symbol] = STATE(184),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(223),
    [sym_float_literal] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(223),
  },
  [18] = {
    [sym__short_helper] = STATE(18),
    [sym_type] = STATE(18),
    [sym_complex_type] = STATE(44),
    [sym_short_ref] = STATE(18),
    [sym_short_copy] = STATE(18),
    [sym_short_fn_ref] = STATE(18),
    [sym_short_quote] = STATE(18),
    [aux_sym_typed_parameters_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_Bool] = ACTIONS(232),
    [anon_sym_Char] = ACTIONS(232),
    [anon_sym_Int] = ACTIONS(232),
    [anon_sym_Long] = ACTIONS(232),
    [anon_sym_Float] = ACTIONS(232),
    [anon_sym_Double] = ACTIONS(232),
    [anon_sym_Vector2] = ACTIONS(235),
    [anon_sym_Vector3] = ACTIONS(235),
    [anon_sym_VectorN] = ACTIONS(232),
    [anon_sym_String] = ACTIONS(232),
    [anon_sym_Pattern] = ACTIONS(232),
    [anon_sym_Array] = ACTIONS(232),
    [anon_sym_Map] = ACTIONS(232),
    [anon_sym_Maybe] = ACTIONS(232),
    [anon_sym_Result] = ACTIONS(232),
    [anon_sym_Id] = ACTIONS(232),
    [anon_sym_Ptr] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [sym_identifier] = ACTIONS(232),
  },
  [19] = {
    [sym__s_expr] = STATE(143),
    [sym__expr] = STATE(143),
    [sym__literals] = STATE(143),
    [sym__short_helper] = STATE(143),
    [sym_short_ref] = STATE(143),
    [sym_short_copy] = STATE(143),
    [sym_short_fn_ref] = STATE(143),
    [sym_short_quote] = STATE(143),
    [sym_bool_literal] = STATE(143),
    [sym_str_literal] = STATE(143),
    [sym_char_literal] = STATE(143),
    [sym_pattern_literal] = STATE(143),
    [sym_array_expression] = STATE(143),
    [sym_map_expression] = STATE(143),
    [sym_symbol] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [sym_integer_literal] = ACTIONS(262),
    [sym_float_literal] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_POUND_DQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(262),
  },
  [20] = {
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
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_integer_literal] = ACTIONS(282),
    [sym_float_literal] = ACTIONS(284),
    [anon_sym_true] = ACTIONS(286),
    [anon_sym_false] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(290),
    [anon_sym_POUND_DQUOTE] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(296),
    [sym_identifier] = ACTIONS(282),
  },
  [21] = {
    [sym__s_expr] = STATE(110),
    [sym__expr] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__short_helper] = STATE(110),
    [sym_short_ref] = STATE(110),
    [sym_short_copy] = STATE(110),
    [sym_short_fn_ref] = STATE(110),
    [sym_short_quote] = STATE(110),
    [sym_bool_literal] = STATE(110),
    [sym_str_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_pattern_literal] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_map_expression] = STATE(110),
    [sym_symbol] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(298),
    [sym_float_literal] = ACTIONS(300),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(298),
  },
  [22] = {
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(302),
    [sym_float_literal] = ACTIONS(304),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(302),
  },
  [23] = {
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(306),
    [sym_float_literal] = ACTIONS(308),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(306),
  },
  [24] = {
    [sym__s_expr] = STATE(97),
    [sym__expr] = STATE(97),
    [sym__literals] = STATE(97),
    [sym__short_helper] = STATE(97),
    [sym_short_ref] = STATE(97),
    [sym_short_copy] = STATE(97),
    [sym_short_fn_ref] = STATE(97),
    [sym_short_quote] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_char_literal] = STATE(97),
    [sym_pattern_literal] = STATE(97),
    [sym_array_expression] = STATE(97),
    [sym_map_expression] = STATE(97),
    [sym_symbol] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(310),
    [sym_float_literal] = ACTIONS(312),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(310),
  },
  [25] = {
    [sym__s_expr] = STATE(155),
    [sym__expr] = STATE(155),
    [sym__literals] = STATE(155),
    [sym__short_helper] = STATE(155),
    [sym_short_ref] = STATE(155),
    [sym_short_copy] = STATE(155),
    [sym_short_fn_ref] = STATE(155),
    [sym_short_quote] = STATE(155),
    [sym_bool_literal] = STATE(155),
    [sym_str_literal] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_pattern_literal] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_map_expression] = STATE(155),
    [sym_symbol] = STATE(155),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [sym_integer_literal] = ACTIONS(314),
    [sym_float_literal] = ACTIONS(316),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_POUND_DQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(314),
  },
  [26] = {
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
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [sym_integer_literal] = ACTIONS(318),
    [sym_float_literal] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_POUND_DQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(318),
  },
  [27] = {
    [sym__s_expr] = STATE(57),
    [sym__expr] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__short_helper] = STATE(57),
    [sym_short_ref] = STATE(57),
    [sym_short_copy] = STATE(57),
    [sym_short_fn_ref] = STATE(57),
    [sym_short_quote] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [sym_str_literal] = STATE(57),
    [sym_char_literal] = STATE(57),
    [sym_pattern_literal] = STATE(57),
    [sym_array_expression] = STATE(57),
    [sym_map_expression] = STATE(57),
    [sym_symbol] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_integer_literal] = ACTIONS(322),
    [sym_float_literal] = ACTIONS(324),
    [anon_sym_true] = ACTIONS(286),
    [anon_sym_false] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(290),
    [anon_sym_POUND_DQUOTE] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(296),
    [sym_identifier] = ACTIONS(322),
  },
  [28] = {
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(326),
    [sym_float_literal] = ACTIONS(328),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(326),
  },
  [29] = {
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
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [sym_integer_literal] = ACTIONS(330),
    [sym_float_literal] = ACTIONS(332),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_POUND_DQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(330),
  },
  [30] = {
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(334),
    [sym_float_literal] = ACTIONS(336),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(334),
  },
  [31] = {
    [sym__s_expr] = STATE(180),
    [sym__expr] = STATE(180),
    [sym__literals] = STATE(180),
    [sym__short_helper] = STATE(180),
    [sym_short_ref] = STATE(180),
    [sym_short_copy] = STATE(180),
    [sym_short_fn_ref] = STATE(180),
    [sym_short_quote] = STATE(180),
    [sym_bool_literal] = STATE(180),
    [sym_str_literal] = STATE(180),
    [sym_char_literal] = STATE(180),
    [sym_pattern_literal] = STATE(180),
    [sym_array_expression] = STATE(180),
    [sym_map_expression] = STATE(180),
    [sym_symbol] = STATE(180),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(338),
    [sym_float_literal] = ACTIONS(340),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(338),
  },
  [32] = {
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
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(342),
    [sym_float_literal] = ACTIONS(344),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(342),
  },
  [33] = {
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
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_integer_literal] = ACTIONS(346),
    [sym_float_literal] = ACTIONS(348),
    [anon_sym_true] = ACTIONS(286),
    [anon_sym_false] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(290),
    [anon_sym_POUND_DQUOTE] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(296),
    [sym_identifier] = ACTIONS(346),
  },
  [34] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(350),
    [sym_float_literal] = ACTIONS(352),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(350),
  },
  [35] = {
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(354),
    [sym_float_literal] = ACTIONS(356),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(354),
  },
  [36] = {
    [sym__s_expr] = STATE(152),
    [sym__expr] = STATE(152),
    [sym__literals] = STATE(152),
    [sym__short_helper] = STATE(152),
    [sym_short_ref] = STATE(152),
    [sym_short_copy] = STATE(152),
    [sym_short_fn_ref] = STATE(152),
    [sym_short_quote] = STATE(152),
    [sym_bool_literal] = STATE(152),
    [sym_str_literal] = STATE(152),
    [sym_char_literal] = STATE(152),
    [sym_pattern_literal] = STATE(152),
    [sym_array_expression] = STATE(152),
    [sym_map_expression] = STATE(152),
    [sym_symbol] = STATE(152),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [sym_integer_literal] = ACTIONS(358),
    [sym_float_literal] = ACTIONS(360),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_POUND_DQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(358),
  },
  [37] = {
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(362),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(362),
  },
  [38] = {
    [sym__s_expr] = STATE(17),
    [sym__expr] = STATE(17),
    [sym__literals] = STATE(17),
    [sym__short_helper] = STATE(17),
    [sym_short_ref] = STATE(17),
    [sym_short_copy] = STATE(17),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [sym_str_literal] = STATE(17),
    [sym_char_literal] = STATE(17),
    [sym_pattern_literal] = STATE(17),
    [sym_array_expression] = STATE(17),
    [sym_map_expression] = STATE(17),
    [sym_symbol] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(366),
    [sym_float_literal] = ACTIONS(368),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(366),
  },
  [39] = {
    [sym__s_expr] = STATE(35),
    [sym__expr] = STATE(35),
    [sym__literals] = STATE(35),
    [sym__short_helper] = STATE(35),
    [sym_short_ref] = STATE(35),
    [sym_short_copy] = STATE(35),
    [sym_short_fn_ref] = STATE(35),
    [sym_short_quote] = STATE(35),
    [sym_bool_literal] = STATE(35),
    [sym_str_literal] = STATE(35),
    [sym_char_literal] = STATE(35),
    [sym_pattern_literal] = STATE(35),
    [sym_array_expression] = STATE(35),
    [sym_map_expression] = STATE(35),
    [sym_symbol] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(370),
    [sym_float_literal] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [sym_identifier] = ACTIONS(370),
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
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_integer_literal] = ACTIONS(374),
    [sym_float_literal] = ACTIONS(376),
    [anon_sym_true] = ACTIONS(286),
    [anon_sym_false] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(290),
    [anon_sym_POUND_DQUOTE] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(296),
    [sym_identifier] = ACTIONS(374),
  },
  [41] = {
    [sym__short_helper] = STATE(160),
    [sym_type] = STATE(160),
    [sym_complex_type] = STATE(100),
    [sym_short_ref] = STATE(160),
    [sym_short_copy] = STATE(160),
    [sym_short_fn_ref] = STATE(160),
    [sym_short_quote] = STATE(160),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_Bool] = ACTIONS(380),
    [anon_sym_Char] = ACTIONS(380),
    [anon_sym_Int] = ACTIONS(380),
    [anon_sym_Long] = ACTIONS(380),
    [anon_sym_Float] = ACTIONS(380),
    [anon_sym_Double] = ACTIONS(380),
    [anon_sym_Vector2] = ACTIONS(382),
    [anon_sym_Vector3] = ACTIONS(382),
    [anon_sym_VectorN] = ACTIONS(380),
    [anon_sym_String] = ACTIONS(380),
    [anon_sym_Pattern] = ACTIONS(380),
    [anon_sym_Array] = ACTIONS(380),
    [anon_sym_Map] = ACTIONS(380),
    [anon_sym_Maybe] = ACTIONS(380),
    [anon_sym_Result] = ACTIONS(380),
    [anon_sym_Id] = ACTIONS(380),
    [anon_sym_Ptr] = ACTIONS(380),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(380),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(384),
    [anon_sym_Bool] = ACTIONS(386),
    [anon_sym_Char] = ACTIONS(386),
    [anon_sym_Int] = ACTIONS(386),
    [anon_sym_Long] = ACTIONS(386),
    [anon_sym_Float] = ACTIONS(386),
    [anon_sym_Double] = ACTIONS(386),
    [anon_sym_Vector2] = ACTIONS(384),
    [anon_sym_Vector3] = ACTIONS(384),
    [anon_sym_VectorN] = ACTIONS(386),
    [anon_sym_String] = ACTIONS(386),
    [anon_sym_Pattern] = ACTIONS(386),
    [anon_sym_Array] = ACTIONS(386),
    [anon_sym_Map] = ACTIONS(386),
    [anon_sym_Maybe] = ACTIONS(386),
    [anon_sym_Result] = ACTIONS(386),
    [anon_sym_Id] = ACTIONS(386),
    [anon_sym_Ptr] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [sym_identifier] = ACTIONS(386),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [anon_sym_Bool] = ACTIONS(390),
    [anon_sym_Char] = ACTIONS(390),
    [anon_sym_Int] = ACTIONS(390),
    [anon_sym_Long] = ACTIONS(390),
    [anon_sym_Float] = ACTIONS(390),
    [anon_sym_Double] = ACTIONS(390),
    [anon_sym_Vector2] = ACTIONS(388),
    [anon_sym_Vector3] = ACTIONS(388),
    [anon_sym_VectorN] = ACTIONS(390),
    [anon_sym_String] = ACTIONS(390),
    [anon_sym_Pattern] = ACTIONS(390),
    [anon_sym_Array] = ACTIONS(390),
    [anon_sym_Map] = ACTIONS(390),
    [anon_sym_Maybe] = ACTIONS(390),
    [anon_sym_Result] = ACTIONS(390),
    [anon_sym_Id] = ACTIONS(390),
    [anon_sym_Ptr] = ACTIONS(390),
    [anon_sym_AMP] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(388),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [sym_identifier] = ACTIONS(390),
  },
  [44] = {
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
  [45] = {
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
  [46] = {
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
  [47] = {
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
  [48] = {
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
  [49] = {
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
  [50] = {
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
  [51] = {
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
  [52] = {
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
  [53] = {
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
  [54] = {
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
  [55] = {
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
  [56] = {
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
  [57] = {
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
  [58] = {
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
  [59] = {
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
  [60] = {
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
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(460),
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
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(464),
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
  [63] = {
    [sym_type] = STATE(31),
    [sym_complex_type] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_Bool] = ACTIONS(380),
    [anon_sym_Char] = ACTIONS(380),
    [anon_sym_Int] = ACTIONS(380),
    [anon_sym_Long] = ACTIONS(380),
    [anon_sym_Float] = ACTIONS(380),
    [anon_sym_Double] = ACTIONS(380),
    [anon_sym_Vector2] = ACTIONS(382),
    [anon_sym_Vector3] = ACTIONS(382),
    [anon_sym_VectorN] = ACTIONS(380),
    [anon_sym_String] = ACTIONS(380),
    [anon_sym_Pattern] = ACTIONS(380),
    [anon_sym_Array] = ACTIONS(380),
    [anon_sym_Map] = ACTIONS(380),
    [anon_sym_Maybe] = ACTIONS(380),
    [anon_sym_Result] = ACTIONS(380),
    [anon_sym_Id] = ACTIONS(380),
    [anon_sym_Ptr] = ACTIONS(380),
    [sym_identifier] = ACTIONS(380),
  },
  [64] = {
    [aux_sym_complex_type_repeat1] = STATE(65),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_Bool] = ACTIONS(470),
    [anon_sym_Char] = ACTIONS(470),
    [anon_sym_Int] = ACTIONS(470),
    [anon_sym_Long] = ACTIONS(470),
    [anon_sym_Float] = ACTIONS(470),
    [anon_sym_Double] = ACTIONS(470),
    [anon_sym_Vector2] = ACTIONS(472),
    [anon_sym_Vector3] = ACTIONS(472),
    [anon_sym_VectorN] = ACTIONS(470),
    [anon_sym_String] = ACTIONS(470),
    [anon_sym_Pattern] = ACTIONS(470),
    [anon_sym_Array] = ACTIONS(470),
    [anon_sym_Map] = ACTIONS(470),
    [anon_sym_Maybe] = ACTIONS(470),
    [anon_sym_Result] = ACTIONS(470),
    [anon_sym_Id] = ACTIONS(470),
    [anon_sym_Ptr] = ACTIONS(470),
    [sym_identifier] = ACTIONS(470),
  },
  [65] = {
    [aux_sym_complex_type_repeat1] = STATE(68),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_Bool] = ACTIONS(476),
    [anon_sym_Char] = ACTIONS(476),
    [anon_sym_Int] = ACTIONS(476),
    [anon_sym_Long] = ACTIONS(476),
    [anon_sym_Float] = ACTIONS(476),
    [anon_sym_Double] = ACTIONS(476),
    [anon_sym_Vector2] = ACTIONS(478),
    [anon_sym_Vector3] = ACTIONS(478),
    [anon_sym_VectorN] = ACTIONS(476),
    [anon_sym_String] = ACTIONS(476),
    [anon_sym_Pattern] = ACTIONS(476),
    [anon_sym_Array] = ACTIONS(476),
    [anon_sym_Map] = ACTIONS(476),
    [anon_sym_Maybe] = ACTIONS(476),
    [anon_sym_Result] = ACTIONS(476),
    [anon_sym_Id] = ACTIONS(476),
    [anon_sym_Ptr] = ACTIONS(476),
    [sym_identifier] = ACTIONS(476),
  },
  [66] = {
    [aux_sym_complex_type_repeat1] = STATE(67),
    [anon_sym_RPAREN] = ACTIONS(480),
    [anon_sym_Bool] = ACTIONS(482),
    [anon_sym_Char] = ACTIONS(482),
    [anon_sym_Int] = ACTIONS(482),
    [anon_sym_Long] = ACTIONS(482),
    [anon_sym_Float] = ACTIONS(482),
    [anon_sym_Double] = ACTIONS(482),
    [anon_sym_Vector2] = ACTIONS(484),
    [anon_sym_Vector3] = ACTIONS(484),
    [anon_sym_VectorN] = ACTIONS(482),
    [anon_sym_String] = ACTIONS(482),
    [anon_sym_Pattern] = ACTIONS(482),
    [anon_sym_Array] = ACTIONS(482),
    [anon_sym_Map] = ACTIONS(482),
    [anon_sym_Maybe] = ACTIONS(482),
    [anon_sym_Result] = ACTIONS(482),
    [anon_sym_Id] = ACTIONS(482),
    [anon_sym_Ptr] = ACTIONS(482),
    [sym_identifier] = ACTIONS(482),
  },
  [67] = {
    [aux_sym_complex_type_repeat1] = STATE(68),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_Bool] = ACTIONS(476),
    [anon_sym_Char] = ACTIONS(476),
    [anon_sym_Int] = ACTIONS(476),
    [anon_sym_Long] = ACTIONS(476),
    [anon_sym_Float] = ACTIONS(476),
    [anon_sym_Double] = ACTIONS(476),
    [anon_sym_Vector2] = ACTIONS(478),
    [anon_sym_Vector3] = ACTIONS(478),
    [anon_sym_VectorN] = ACTIONS(476),
    [anon_sym_String] = ACTIONS(476),
    [anon_sym_Pattern] = ACTIONS(476),
    [anon_sym_Array] = ACTIONS(476),
    [anon_sym_Map] = ACTIONS(476),
    [anon_sym_Maybe] = ACTIONS(476),
    [anon_sym_Result] = ACTIONS(476),
    [anon_sym_Id] = ACTIONS(476),
    [anon_sym_Ptr] = ACTIONS(476),
    [sym_identifier] = ACTIONS(476),
  },
  [68] = {
    [aux_sym_complex_type_repeat1] = STATE(68),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_Bool] = ACTIONS(490),
    [anon_sym_Char] = ACTIONS(490),
    [anon_sym_Int] = ACTIONS(490),
    [anon_sym_Long] = ACTIONS(490),
    [anon_sym_Float] = ACTIONS(490),
    [anon_sym_Double] = ACTIONS(490),
    [anon_sym_Vector2] = ACTIONS(493),
    [anon_sym_Vector3] = ACTIONS(493),
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
  [69] = {
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
  [70] = {
    [sym__literals] = STATE(87),
    [sym_bool_literal] = STATE(87),
    [sym_str_literal] = STATE(87),
    [sym_char_literal] = STATE(87),
    [sym_pattern_literal] = STATE(87),
    [sym_array_expression] = STATE(87),
    [sym_map_expression] = STATE(87),
    [aux_sym_array_expression_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(496),
    [sym_integer_literal] = ACTIONS(498),
    [sym_float_literal] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(498),
  },
  [71] = {
    [sym__literals] = STATE(79),
    [sym_bool_literal] = STATE(79),
    [sym_str_literal] = STATE(79),
    [sym_char_literal] = STATE(79),
    [sym_pattern_literal] = STATE(79),
    [sym_array_expression] = STATE(79),
    [sym_map_expression] = STATE(79),
    [aux_sym_array_expression_repeat1] = STATE(79),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_integer_literal] = ACTIONS(504),
    [sym_float_literal] = ACTIONS(506),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(504),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
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
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [sym_identifier] = ACTIONS(430),
  },
  [73] = {
    [sym__literals] = STATE(90),
    [sym_bool_literal] = STATE(90),
    [sym_str_literal] = STATE(90),
    [sym_char_literal] = STATE(90),
    [sym_pattern_literal] = STATE(90),
    [sym_array_expression] = STATE(90),
    [sym_map_expression] = STATE(90),
    [aux_sym_array_expression_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym_integer_literal] = ACTIONS(510),
    [sym_float_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(510),
  },
  [74] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(514),
    [sym_float_literal] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(518),
    [sym_identifier] = ACTIONS(514),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(388),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [sym_integer_literal] = ACTIONS(390),
    [sym_float_literal] = ACTIONS(388),
    [anon_sym_true] = ACTIONS(390),
    [anon_sym_false] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [anon_sym_BSLASH] = ACTIONS(388),
    [anon_sym_POUND_DQUOTE] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(388),
    [sym_identifier] = ACTIONS(390),
  },
  [76] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(81),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(514),
    [sym_float_literal] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(520),
    [sym_identifier] = ACTIONS(514),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
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
    [anon_sym_COLON] = ACTIONS(420),
    [sym_identifier] = ACTIONS(422),
  },
  [78] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(514),
    [sym_float_literal] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(522),
    [sym_identifier] = ACTIONS(514),
  },
  [79] = {
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [aux_sym_array_expression_repeat1] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(524),
    [sym_integer_literal] = ACTIONS(526),
    [sym_float_literal] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(526),
  },
  [80] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(514),
    [sym_float_literal] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(530),
    [sym_identifier] = ACTIONS(514),
  },
  [81] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(514),
    [sym_float_literal] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(532),
    [sym_identifier] = ACTIONS(514),
  },
  [82] = {
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
  [83] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_integer_literal] = ACTIONS(537),
    [sym_float_literal] = ACTIONS(540),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(549),
    [anon_sym_POUND_DQUOTE] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(558),
    [sym_identifier] = ACTIONS(537),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
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
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(404),
    [sym_identifier] = ACTIONS(406),
  },
  [85] = {
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
  [86] = {
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [aux_sym_array_expression_repeat1] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(563),
    [sym_integer_literal] = ACTIONS(565),
    [sym_float_literal] = ACTIONS(568),
    [anon_sym_true] = ACTIONS(571),
    [anon_sym_false] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_BSLASH] = ACTIONS(577),
    [anon_sym_POUND_DQUOTE] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(583),
    [sym_identifier] = ACTIONS(565),
  },
  [87] = {
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [aux_sym_array_expression_repeat1] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(586),
    [sym_integer_literal] = ACTIONS(526),
    [sym_float_literal] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(526),
  },
  [88] = {
    [sym__literals] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [aux_sym_map_expression_repeat1] = STATE(78),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(514),
    [sym_float_literal] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(588),
    [sym_identifier] = ACTIONS(514),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
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
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(408),
    [sym_identifier] = ACTIONS(410),
  },
  [90] = {
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [aux_sym_array_expression_repeat1] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(590),
    [sym_integer_literal] = ACTIONS(526),
    [sym_float_literal] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(526),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
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
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [sym_identifier] = ACTIONS(434),
  },
  [92] = {
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
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(594),
    [anon_sym_AMP] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [sym_integer_literal] = ACTIONS(596),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(596),
    [anon_sym_false] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(592),
    [anon_sym_POUND_DQUOTE] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(592),
    [sym_identifier] = ACTIONS(596),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
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
    [anon_sym_COLON] = ACTIONS(396),
    [sym_identifier] = ACTIONS(398),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_AMP] = ACTIONS(598),
    [anon_sym_AT] = ACTIONS(598),
    [anon_sym_TILDE] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(598),
    [sym_integer_literal] = ACTIONS(600),
    [sym_float_literal] = ACTIONS(598),
    [anon_sym_true] = ACTIONS(600),
    [anon_sym_false] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(598),
    [anon_sym_BSLASH] = ACTIONS(598),
    [anon_sym_POUND_DQUOTE] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_COLON] = ACTIONS(598),
    [sym_identifier] = ACTIONS(600),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
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
    [anon_sym_COLON] = ACTIONS(444),
    [sym_identifier] = ACTIONS(446),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_TILDE] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [sym_integer_literal] = ACTIONS(604),
    [sym_float_literal] = ACTIONS(602),
    [anon_sym_true] = ACTIONS(604),
    [anon_sym_false] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(602),
    [anon_sym_POUND_DQUOTE] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [sym_identifier] = ACTIONS(604),
  },
  [99] = {
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
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_LBRACK] = ACTIONS(392),
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
    [anon_sym_COLON] = ACTIONS(392),
    [sym_identifier] = ACTIONS(394),
  },
  [101] = {
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
  [102] = {
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
  [103] = {
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
  [106] = {
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
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(622),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_AMP] = ACTIONS(622),
    [anon_sym_AT] = ACTIONS(622),
    [anon_sym_TILDE] = ACTIONS(622),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [sym_integer_literal] = ACTIONS(624),
    [sym_float_literal] = ACTIONS(622),
    [anon_sym_true] = ACTIONS(624),
    [anon_sym_false] = ACTIONS(624),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [anon_sym_BSLASH] = ACTIONS(622),
    [anon_sym_POUND_DQUOTE] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_COLON] = ACTIONS(622),
    [sym_identifier] = ACTIONS(624),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
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
    [anon_sym_COLON] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
  },
  [109] = {
    [sym__literals] = STATE(111),
    [sym_bool_literal] = STATE(111),
    [sym_str_literal] = STATE(111),
    [sym_char_literal] = STATE(111),
    [sym_pattern_literal] = STATE(111),
    [sym_array_expression] = STATE(111),
    [sym_map_expression] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(626),
    [sym_float_literal] = ACTIONS(628),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(626),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [sym_integer_literal] = ACTIONS(386),
    [sym_float_literal] = ACTIONS(384),
    [anon_sym_true] = ACTIONS(386),
    [anon_sym_false] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(384),
    [anon_sym_POUND_DQUOTE] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(384),
    [sym_identifier] = ACTIONS(386),
  },
  [111] = {
    [anon_sym_LBRACK] = ACTIONS(630),
    [sym_integer_literal] = ACTIONS(632),
    [sym_float_literal] = ACTIONS(630),
    [anon_sym_true] = ACTIONS(632),
    [anon_sym_false] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_BSLASH] = ACTIONS(630),
    [anon_sym_POUND_DQUOTE] = ACTIONS(630),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_RBRACE] = ACTIONS(630),
    [sym_identifier] = ACTIONS(632),
  },
  [112] = {
    [sym_line_comment] = STATE(112),
    [sym__s_expr] = STATE(112),
    [aux_sym_source_file_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(639),
  },
  [113] = {
    [sym_line_comment] = STATE(112),
    [sym__s_expr] = STATE(112),
    [aux_sym_source_file_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [114] = {
    [sym_symbol] = STATE(114),
    [aux_sym_parameters_repeat1] = STATE(114),
    [anon_sym_RBRACK] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(646),
    [sym_identifier] = ACTIONS(649),
  },
  [115] = {
    [sym_symbol] = STATE(116),
    [aux_sym_parameters_repeat1] = STATE(116),
    [anon_sym_RBRACK] = ACTIONS(652),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(654),
  },
  [116] = {
    [sym_symbol] = STATE(114),
    [aux_sym_parameters_repeat1] = STATE(114),
    [anon_sym_RBRACK] = ACTIONS(656),
    [anon_sym_COLON] = ACTIONS(276),
    [sym_identifier] = ACTIONS(658),
  },
  [117] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(660),
    [anon_sym_DQUOTE2] = ACTIONS(662),
    [sym_escape_sequence] = ACTIONS(664),
  },
  [118] = {
    [aux_sym_str_literal_repeat1] = STATE(117),
    [aux_sym_str_literal_token1] = ACTIONS(666),
    [anon_sym_DQUOTE2] = ACTIONS(668),
    [sym_escape_sequence] = ACTIONS(670),
  },
  [119] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(660),
    [anon_sym_DQUOTE2] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(664),
  },
  [120] = {
    [aux_sym_str_literal_repeat1] = STATE(122),
    [aux_sym_str_literal_token1] = ACTIONS(674),
    [anon_sym_DQUOTE2] = ACTIONS(676),
    [sym_escape_sequence] = ACTIONS(678),
  },
  [121] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(680),
    [anon_sym_DQUOTE2] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [122] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(660),
    [anon_sym_DQUOTE2] = ACTIONS(686),
    [sym_escape_sequence] = ACTIONS(664),
  },
  [123] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(660),
    [anon_sym_DQUOTE2] = ACTIONS(688),
    [sym_escape_sequence] = ACTIONS(664),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_LPAREN] = ACTIONS(690),
    [anon_sym_RPAREN] = ACTIONS(690),
  },
  [125] = {
    [aux_sym_str_literal_repeat1] = STATE(128),
    [aux_sym_str_literal_token1] = ACTIONS(692),
    [anon_sym_DQUOTE2] = ACTIONS(694),
    [sym_escape_sequence] = ACTIONS(696),
  },
  [126] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(698),
    [anon_sym_DQUOTE2] = ACTIONS(701),
    [sym_escape_sequence] = ACTIONS(703),
  },
  [127] = {
    [aux_sym_str_literal_repeat1] = STATE(129),
    [aux_sym_str_literal_token1] = ACTIONS(706),
    [anon_sym_DQUOTE2] = ACTIONS(708),
    [sym_escape_sequence] = ACTIONS(710),
  },
  [128] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(660),
    [anon_sym_DQUOTE2] = ACTIONS(712),
    [sym_escape_sequence] = ACTIONS(664),
  },
  [129] = {
    [aux_sym_str_literal_repeat1] = STATE(126),
    [aux_sym_str_literal_token1] = ACTIONS(660),
    [anon_sym_DQUOTE2] = ACTIONS(714),
    [sym_escape_sequence] = ACTIONS(664),
  },
  [130] = {
    [aux_sym_str_literal_repeat1] = STATE(123),
    [aux_sym_str_literal_token1] = ACTIONS(716),
    [anon_sym_DQUOTE2] = ACTIONS(718),
    [sym_escape_sequence] = ACTIONS(720),
  },
  [131] = {
    [aux_sym_let_pairs_repeat1] = STATE(131),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_identifier] = ACTIONS(724),
  },
  [132] = {
    [aux_sym_let_pairs_repeat1] = STATE(135),
    [anon_sym_RBRACK] = ACTIONS(727),
    [sym_identifier] = ACTIONS(729),
  },
  [133] = {
    [sym_interface_fn] = STATE(169),
    [anon_sym_Fn] = ACTIONS(731),
    [anon_sym_] = ACTIONS(731),
  },
  [134] = {
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_COLON] = ACTIONS(424),
    [sym_identifier] = ACTIONS(424),
  },
  [135] = {
    [aux_sym_let_pairs_repeat1] = STATE(131),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym_identifier] = ACTIONS(729),
  },
  [136] = {
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_identifier] = ACTIONS(388),
  },
  [137] = {
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_identifier] = ACTIONS(436),
  },
  [138] = {
    [anon_sym_RBRACK] = ACTIONS(416),
    [sym_identifier] = ACTIONS(416),
  },
  [139] = {
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_identifier] = ACTIONS(420),
  },
  [140] = {
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_identifier] = ACTIONS(412),
  },
  [141] = {
    [aux_sym_str_literal_token1] = ACTIONS(735),
    [sym_escape_sequence] = ACTIONS(737),
  },
  [142] = {
    [sym_parameters] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(739),
  },
  [143] = {
    [anon_sym_RBRACK] = ACTIONS(741),
    [sym_identifier] = ACTIONS(741),
  },
  [144] = {
    [anon_sym_RBRACK] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
  },
  [145] = {
    [sym_parameters] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(739),
  },
  [146] = {
    [sym_typed_parameters] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(743),
  },
  [147] = {
    [aux_sym_str_literal_token1] = ACTIONS(745),
    [sym_escape_sequence] = ACTIONS(747),
  },
  [148] = {
    [anon_sym_RBRACK] = ACTIONS(428),
    [sym_identifier] = ACTIONS(428),
  },
  [149] = {
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_identifier] = ACTIONS(432),
  },
  [150] = {
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_identifier] = ACTIONS(440),
  },
  [151] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(739),
  },
  [152] = {
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_identifier] = ACTIONS(444),
  },
  [153] = {
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_identifier] = ACTIONS(452),
  },
  [154] = {
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym_identifier] = ACTIONS(456),
  },
  [155] = {
    [anon_sym_RBRACK] = ACTIONS(384),
    [sym_identifier] = ACTIONS(384),
  },
  [156] = {
    [anon_sym_RBRACK] = ACTIONS(404),
    [sym_identifier] = ACTIONS(404),
  },
  [157] = {
    [aux_sym_str_literal_token1] = ACTIONS(749),
    [sym_escape_sequence] = ACTIONS(751),
  },
  [158] = {
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_identifier] = ACTIONS(448),
  },
  [159] = {
    [sym_let_pairs] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(753),
  },
  [160] = {
    [anon_sym_RPAREN] = ACTIONS(755),
  },
  [161] = {
    [sym_identifier] = ACTIONS(757),
  },
  [162] = {
    [sym_identifier] = ACTIONS(759),
  },
  [163] = {
    [sym_identifier] = ACTIONS(761),
  },
  [164] = {
    [sym_identifier] = ACTIONS(763),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(765),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(767),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(769),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(771),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(773),
  },
  [170] = {
    [sym_identifier] = ACTIONS(775),
  },
  [171] = {
    [sym_identifier] = ACTIONS(777),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(779),
  },
  [173] = {
    [sym_identifier] = ACTIONS(781),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(783),
  },
  [175] = {
    [sym_identifier] = ACTIONS(785),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(787),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(789),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(791),
  },
  [179] = {
    [aux_sym_line_comment_token1] = ACTIONS(793),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(795),
  },
  [181] = {
    [sym_identifier] = ACTIONS(797),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(799),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(801),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(803),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(805),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(807),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(809),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(811),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(179),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(161),
  [11] = {.count = 1, .reusable = false}, SHIFT(145),
  [13] = {.count = 1, .reusable = false}, SHIFT(173),
  [15] = {.count = 1, .reusable = false}, SHIFT(159),
  [17] = {.count = 1, .reusable = true}, SHIFT(73),
  [19] = {.count = 1, .reusable = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(39),
  [23] = {.count = 1, .reusable = false}, SHIFT(38),
  [25] = {.count = 1, .reusable = false}, SHIFT(34),
  [27] = {.count = 1, .reusable = false}, SHIFT(32),
  [29] = {.count = 1, .reusable = false}, SHIFT(163),
  [31] = {.count = 1, .reusable = false}, SHIFT(63),
  [33] = {.count = 1, .reusable = false}, SHIFT(175),
  [35] = {.count = 1, .reusable = false}, SHIFT(162),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = false}, SHIFT(182),
  [47] = {.count = 1, .reusable = true}, SHIFT(182),
  [49] = {.count = 1, .reusable = false}, SHIFT(69),
  [51] = {.count = 1, .reusable = true}, SHIFT(121),
  [53] = {.count = 1, .reusable = true}, SHIFT(147),
  [55] = {.count = 1, .reusable = true}, SHIFT(130),
  [57] = {.count = 1, .reusable = true}, SHIFT(80),
  [59] = {.count = 1, .reusable = true}, SHIFT(171),
  [61] = {.count = 1, .reusable = false}, SHIFT(94),
  [63] = {.count = 1, .reusable = false}, SHIFT(167),
  [65] = {.count = 1, .reusable = true}, SHIFT(167),
  [67] = {.count = 1, .reusable = false}, SHIFT(165),
  [69] = {.count = 1, .reusable = true}, SHIFT(165),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [73] = {.count = 1, .reusable = false}, SHIFT(9),
  [75] = {.count = 1, .reusable = true}, SHIFT(9),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(73),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(21),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(22),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(23),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(24),
  [97] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(96),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(96),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(69),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(121),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(147),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(130),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(80),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(171),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [123] = {.count = 1, .reusable = false}, SHIFT(5),
  [125] = {.count = 1, .reusable = true}, SHIFT(5),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [129] = {.count = 1, .reusable = false}, SHIFT(96),
  [131] = {.count = 1, .reusable = true}, SHIFT(96),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [136] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(73),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(21),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(23),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(24),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(9),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(9),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(69),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(121),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(147),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(130),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(80),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(171),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [179] = {.count = 1, .reusable = true}, SHIFT(66),
  [181] = {.count = 1, .reusable = true}, SHIFT(61),
  [183] = {.count = 1, .reusable = false}, SHIFT(44),
  [185] = {.count = 1, .reusable = true}, SHIFT(44),
  [187] = {.count = 1, .reusable = true}, SHIFT(33),
  [189] = {.count = 1, .reusable = true}, SHIFT(20),
  [191] = {.count = 1, .reusable = true}, SHIFT(40),
  [193] = {.count = 1, .reusable = true}, SHIFT(27),
  [195] = {.count = 1, .reusable = true}, SHIFT(62),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [199] = {.count = 1, .reusable = false}, SHIFT(185),
  [201] = {.count = 1, .reusable = true}, SHIFT(185),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [205] = {.count = 1, .reusable = false}, SHIFT(177),
  [207] = {.count = 1, .reusable = true}, SHIFT(177),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [211] = {.count = 1, .reusable = false}, SHIFT(186),
  [213] = {.count = 1, .reusable = true}, SHIFT(186),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 12),
  [217] = {.count = 1, .reusable = false}, SHIFT(168),
  [219] = {.count = 1, .reusable = true}, SHIFT(168),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [223] = {.count = 1, .reusable = false}, SHIFT(184),
  [225] = {.count = 1, .reusable = true}, SHIFT(184),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [230] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(33),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(40),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [250] = {.count = 1, .reusable = true}, SHIFT(4),
  [252] = {.count = 1, .reusable = true}, SHIFT(71),
  [254] = {.count = 1, .reusable = true}, SHIFT(25),
  [256] = {.count = 1, .reusable = true}, SHIFT(29),
  [258] = {.count = 1, .reusable = true}, SHIFT(26),
  [260] = {.count = 1, .reusable = true}, SHIFT(36),
  [262] = {.count = 1, .reusable = false}, SHIFT(143),
  [264] = {.count = 1, .reusable = true}, SHIFT(143),
  [266] = {.count = 1, .reusable = false}, SHIFT(137),
  [268] = {.count = 1, .reusable = true}, SHIFT(120),
  [270] = {.count = 1, .reusable = true}, SHIFT(157),
  [272] = {.count = 1, .reusable = true}, SHIFT(118),
  [274] = {.count = 1, .reusable = true}, SHIFT(76),
  [276] = {.count = 1, .reusable = true}, SHIFT(164),
  [278] = {.count = 1, .reusable = true}, SHIFT(2),
  [280] = {.count = 1, .reusable = true}, SHIFT(70),
  [282] = {.count = 1, .reusable = false}, SHIFT(60),
  [284] = {.count = 1, .reusable = true}, SHIFT(60),
  [286] = {.count = 1, .reusable = false}, SHIFT(55),
  [288] = {.count = 1, .reusable = true}, SHIFT(125),
  [290] = {.count = 1, .reusable = true}, SHIFT(141),
  [292] = {.count = 1, .reusable = true}, SHIFT(127),
  [294] = {.count = 1, .reusable = true}, SHIFT(88),
  [296] = {.count = 1, .reusable = true}, SHIFT(181),
  [298] = {.count = 1, .reusable = false}, SHIFT(110),
  [300] = {.count = 1, .reusable = true}, SHIFT(110),
  [302] = {.count = 1, .reusable = false}, SHIFT(106),
  [304] = {.count = 1, .reusable = true}, SHIFT(106),
  [306] = {.count = 1, .reusable = false}, SHIFT(104),
  [308] = {.count = 1, .reusable = true}, SHIFT(104),
  [310] = {.count = 1, .reusable = false}, SHIFT(97),
  [312] = {.count = 1, .reusable = true}, SHIFT(97),
  [314] = {.count = 1, .reusable = false}, SHIFT(155),
  [316] = {.count = 1, .reusable = true}, SHIFT(155),
  [318] = {.count = 1, .reusable = false}, SHIFT(153),
  [320] = {.count = 1, .reusable = true}, SHIFT(153),
  [322] = {.count = 1, .reusable = false}, SHIFT(57),
  [324] = {.count = 1, .reusable = true}, SHIFT(57),
  [326] = {.count = 1, .reusable = false}, SHIFT(172),
  [328] = {.count = 1, .reusable = true}, SHIFT(172),
  [330] = {.count = 1, .reusable = false}, SHIFT(154),
  [332] = {.count = 1, .reusable = true}, SHIFT(154),
  [334] = {.count = 1, .reusable = false}, SHIFT(187),
  [336] = {.count = 1, .reusable = true}, SHIFT(187),
  [338] = {.count = 1, .reusable = false}, SHIFT(180),
  [340] = {.count = 1, .reusable = true}, SHIFT(180),
  [342] = {.count = 1, .reusable = false}, SHIFT(176),
  [344] = {.count = 1, .reusable = true}, SHIFT(176),
  [346] = {.count = 1, .reusable = false}, SHIFT(42),
  [348] = {.count = 1, .reusable = true}, SHIFT(42),
  [350] = {.count = 1, .reusable = false}, SHIFT(174),
  [352] = {.count = 1, .reusable = true}, SHIFT(174),
  [354] = {.count = 1, .reusable = false}, SHIFT(28),
  [356] = {.count = 1, .reusable = true}, SHIFT(28),
  [358] = {.count = 1, .reusable = false}, SHIFT(152),
  [360] = {.count = 1, .reusable = true}, SHIFT(152),
  [362] = {.count = 1, .reusable = false}, SHIFT(183),
  [364] = {.count = 1, .reusable = true}, SHIFT(183),
  [366] = {.count = 1, .reusable = false}, SHIFT(17),
  [368] = {.count = 1, .reusable = true}, SHIFT(17),
  [370] = {.count = 1, .reusable = false}, SHIFT(35),
  [372] = {.count = 1, .reusable = true}, SHIFT(35),
  [374] = {.count = 1, .reusable = false}, SHIFT(59),
  [376] = {.count = 1, .reusable = true}, SHIFT(59),
  [378] = {.count = 1, .reusable = true}, SHIFT(64),
  [380] = {.count = 1, .reusable = false}, SHIFT(100),
  [382] = {.count = 1, .reusable = true}, SHIFT(100),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [468] = {.count = 1, .reusable = true}, SHIFT(95),
  [470] = {.count = 1, .reusable = false}, SHIFT(65),
  [472] = {.count = 1, .reusable = true}, SHIFT(65),
  [474] = {.count = 1, .reusable = true}, SHIFT(105),
  [476] = {.count = 1, .reusable = false}, SHIFT(68),
  [478] = {.count = 1, .reusable = true}, SHIFT(68),
  [480] = {.count = 1, .reusable = true}, SHIFT(45),
  [482] = {.count = 1, .reusable = false}, SHIFT(67),
  [484] = {.count = 1, .reusable = true}, SHIFT(67),
  [486] = {.count = 1, .reusable = true}, SHIFT(46),
  [488] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [490] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(68),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(68),
  [496] = {.count = 1, .reusable = true}, SHIFT(58),
  [498] = {.count = 1, .reusable = false}, SHIFT(87),
  [500] = {.count = 1, .reusable = true}, SHIFT(87),
  [502] = {.count = 1, .reusable = true}, SHIFT(158),
  [504] = {.count = 1, .reusable = false}, SHIFT(79),
  [506] = {.count = 1, .reusable = true}, SHIFT(79),
  [508] = {.count = 1, .reusable = true}, SHIFT(93),
  [510] = {.count = 1, .reusable = false}, SHIFT(90),
  [512] = {.count = 1, .reusable = true}, SHIFT(90),
  [514] = {.count = 1, .reusable = false}, SHIFT(109),
  [516] = {.count = 1, .reusable = true}, SHIFT(109),
  [518] = {.count = 1, .reusable = true}, SHIFT(84),
  [520] = {.count = 1, .reusable = true}, SHIFT(148),
  [522] = {.count = 1, .reusable = true}, SHIFT(47),
  [524] = {.count = 1, .reusable = true}, SHIFT(138),
  [526] = {.count = 1, .reusable = false}, SHIFT(86),
  [528] = {.count = 1, .reusable = true}, SHIFT(86),
  [530] = {.count = 1, .reusable = true}, SHIFT(72),
  [532] = {.count = 1, .reusable = true}, SHIFT(156),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(73),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(109),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(109),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(69),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(121),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(147),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(130),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(80),
  [558] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(73),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [565] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(86),
  [568] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(86),
  [571] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(69),
  [574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(121),
  [577] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(147),
  [580] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(130),
  [583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(80),
  [586] = {.count = 1, .reusable = true}, SHIFT(50),
  [588] = {.count = 1, .reusable = true}, SHIFT(53),
  [590] = {.count = 1, .reusable = true}, SHIFT(85),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [594] = {.count = 1, .reusable = true}, SHIFT(170),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [598] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [600] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 21),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 21),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [608] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [626] = {.count = 1, .reusable = false}, SHIFT(111),
  [628] = {.count = 1, .reusable = true}, SHIFT(111),
  [630] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [632] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [634] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [644] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(164),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(114),
  [652] = {.count = 1, .reusable = true}, SHIFT(107),
  [654] = {.count = 1, .reusable = true}, SHIFT(116),
  [656] = {.count = 1, .reusable = true}, SHIFT(99),
  [658] = {.count = 1, .reusable = true}, SHIFT(114),
  [660] = {.count = 1, .reusable = false}, SHIFT(126),
  [662] = {.count = 1, .reusable = true}, SHIFT(144),
  [664] = {.count = 1, .reusable = true}, SHIFT(126),
  [666] = {.count = 1, .reusable = false}, SHIFT(117),
  [668] = {.count = 1, .reusable = true}, SHIFT(149),
  [670] = {.count = 1, .reusable = true}, SHIFT(117),
  [672] = {.count = 1, .reusable = true}, SHIFT(92),
  [674] = {.count = 1, .reusable = false}, SHIFT(122),
  [676] = {.count = 1, .reusable = true}, SHIFT(150),
  [678] = {.count = 1, .reusable = true}, SHIFT(122),
  [680] = {.count = 1, .reusable = false}, SHIFT(119),
  [682] = {.count = 1, .reusable = true}, SHIFT(82),
  [684] = {.count = 1, .reusable = true}, SHIFT(119),
  [686] = {.count = 1, .reusable = true}, SHIFT(140),
  [688] = {.count = 1, .reusable = true}, SHIFT(89),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [692] = {.count = 1, .reusable = false}, SHIFT(128),
  [694] = {.count = 1, .reusable = true}, SHIFT(56),
  [696] = {.count = 1, .reusable = true}, SHIFT(128),
  [698] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(126),
  [701] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(126),
  [706] = {.count = 1, .reusable = false}, SHIFT(129),
  [708] = {.count = 1, .reusable = true}, SHIFT(54),
  [710] = {.count = 1, .reusable = true}, SHIFT(129),
  [712] = {.count = 1, .reusable = true}, SHIFT(49),
  [714] = {.count = 1, .reusable = true}, SHIFT(48),
  [716] = {.count = 1, .reusable = false}, SHIFT(123),
  [718] = {.count = 1, .reusable = true}, SHIFT(91),
  [720] = {.count = 1, .reusable = true}, SHIFT(123),
  [722] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25), SHIFT_REPEAT(19),
  [727] = {.count = 1, .reusable = true}, SHIFT(102),
  [729] = {.count = 1, .reusable = true}, SHIFT(19),
  [731] = {.count = 1, .reusable = true}, SHIFT(146),
  [733] = {.count = 1, .reusable = true}, SHIFT(103),
  [735] = {.count = 1, .reusable = false}, SHIFT(43),
  [737] = {.count = 1, .reusable = true}, SHIFT(43),
  [739] = {.count = 1, .reusable = true}, SHIFT(115),
  [741] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [743] = {.count = 1, .reusable = true}, SHIFT(12),
  [745] = {.count = 1, .reusable = false}, SHIFT(75),
  [747] = {.count = 1, .reusable = true}, SHIFT(75),
  [749] = {.count = 1, .reusable = false}, SHIFT(136),
  [751] = {.count = 1, .reusable = true}, SHIFT(136),
  [753] = {.count = 1, .reusable = true}, SHIFT(132),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 28),
  [757] = {.count = 1, .reusable = true}, SHIFT(30),
  [759] = {.count = 1, .reusable = true}, SHIFT(142),
  [761] = {.count = 1, .reusable = true}, SHIFT(37),
  [763] = {.count = 1, .reusable = true}, SHIFT(134),
  [765] = {.count = 1, .reusable = true}, SHIFT(139),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 27),
  [769] = {.count = 1, .reusable = true}, SHIFT(77),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 22),
  [773] = {.count = 1, .reusable = true}, SHIFT(166),
  [775] = {.count = 1, .reusable = true}, SHIFT(98),
  [777] = {.count = 1, .reusable = true}, SHIFT(108),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 26),
  [781] = {.count = 1, .reusable = true}, SHIFT(151),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [785] = {.count = 1, .reusable = true}, SHIFT(178),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 22),
  [791] = {.count = 1, .reusable = true}, SHIFT(133),
  [793] = {.count = 1, .reusable = true}, SHIFT(124),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 17),
  [797] = {.count = 1, .reusable = true}, SHIFT(52),
  [799] = {.count = 1, .reusable = true}, SHIFT(51),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 16),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [811] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
