#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 173
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
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
  anon_sym_Fn = 37,
  anon_sym_ = 38,
  anon_sym_AMP = 39,
  anon_sym_AT = 40,
  anon_sym_TILDE = 41,
  sym_integer_literal = 42,
  sym_float_literal = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  anon_sym_DQUOTE = 46,
  aux_sym_str_literal_token1 = 47,
  anon_sym_DQUOTE2 = 48,
  anon_sym_BSLASH = 49,
  anon_sym_POUND_DQUOTE = 50,
  sym_escape_sequence = 51,
  anon_sym_LBRACE = 52,
  anon_sym_RBRACE = 53,
  sym_identifier = 54,
  sym_source_file = 55,
  sym_line_comment = 56,
  sym__s_expr = 57,
  sym__expr = 58,
  sym__anything = 59,
  sym__s_forms = 60,
  sym__defs = 61,
  sym__literals = 62,
  sym__short_helper = 63,
  sym_def = 64,
  sym_fn = 65,
  sym_defn = 66,
  sym_let = 67,
  sym_let_pairs = 68,
  sym_do = 69,
  sym_if = 70,
  sym_while = 71,
  sym_ref = 72,
  sym_address = 73,
  sym_set = 74,
  sym_the = 75,
  sym_type = 76,
  sym_complex_type = 77,
  sym_call_expression = 78,
  sym_call_name = 79,
  sym_definterface = 80,
  sym_interface_fn = 81,
  sym_short_ref = 82,
  sym_short_copy = 83,
  sym_short_fn_ref = 84,
  sym_parameters = 85,
  sym_typed_parameters = 86,
  sym_bool_literal = 87,
  sym_str_literal = 88,
  sym_char_literal = 89,
  sym_pattern_literal = 90,
  sym_array_expression = 91,
  sym_map_expression = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_let_pairs_repeat1 = 94,
  aux_sym_do_repeat1 = 95,
  aux_sym_complex_type_repeat1 = 96,
  aux_sym_call_expression_repeat1 = 97,
  aux_sym_parameters_repeat1 = 98,
  aux_sym_typed_parameters_repeat1 = 99,
  aux_sym_str_literal_repeat1 = 100,
  aux_sym_array_expression_repeat1 = 101,
  aux_sym_map_expression_repeat1 = 102,
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
  [anon_sym_Fn] = "Fn",
  [anon_sym_] = "λ",
  [anon_sym_AMP] = "&",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
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
  [sym_interface_fn] = "interface_fn",
  [sym_short_ref] = "short_ref",
  [sym_short_copy] = "short_copy",
  [sym_short_fn_ref] = "short_fn_ref",
  [sym_parameters] = "parameters",
  [sym_typed_parameters] = "typed_parameters",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
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
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'M') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'V') ADVANCE(98);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == 955) ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'M') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'V') ADVANCE(98);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == 955) ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'M') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'V') ADVANCE(98);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 9:
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 955) ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(30);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
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
      if (lookahead == 'i') ADVANCE(134);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 58:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 60:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 69:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 81:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 89:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 99:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 101:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 103:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 104:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 105:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 113:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 114:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 115:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 117:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 118:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 124:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 125:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 132:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 142:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 143:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 145:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 148:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 149:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 150:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 152:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 156:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 157:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 159:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 160:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 163:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 169:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 171:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
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
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
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
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
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
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
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
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
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
    [anon_sym_Fn] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(172),
    [sym_line_comment] = STATE(104),
    [sym__s_expr] = STATE(104),
    [aux_sym_source_file_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
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
    [sym_call_name] = STATE(9),
    [sym_definterface] = STATE(166),
    [sym_short_ref] = STATE(166),
    [sym_short_copy] = STATE(166),
    [sym_short_fn_ref] = STATE(98),
    [sym_bool_literal] = STATE(166),
    [sym_str_literal] = STATE(166),
    [sym_char_literal] = STATE(166),
    [sym_pattern_literal] = STATE(166),
    [sym_array_expression] = STATE(166),
    [sym_map_expression] = STATE(166),
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
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(41),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [3] = {
    [sym_line_comment] = STATE(171),
    [sym__s_expr] = STATE(171),
    [sym__anything] = STATE(171),
    [sym__s_forms] = STATE(171),
    [sym__defs] = STATE(171),
    [sym__literals] = STATE(171),
    [sym__short_helper] = STATE(171),
    [sym_def] = STATE(171),
    [sym_fn] = STATE(171),
    [sym_defn] = STATE(171),
    [sym_let] = STATE(171),
    [sym_do] = STATE(171),
    [sym_if] = STATE(171),
    [sym_while] = STATE(171),
    [sym_ref] = STATE(171),
    [sym_address] = STATE(171),
    [sym_set] = STATE(171),
    [sym_the] = STATE(171),
    [sym_call_expression] = STATE(171),
    [sym_call_name] = STATE(9),
    [sym_definterface] = STATE(171),
    [sym_short_ref] = STATE(171),
    [sym_short_copy] = STATE(171),
    [sym_short_fn_ref] = STATE(98),
    [sym_bool_literal] = STATE(171),
    [sym_str_literal] = STATE(171),
    [sym_char_literal] = STATE(171),
    [sym_pattern_literal] = STATE(171),
    [sym_array_expression] = STATE(171),
    [sym_map_expression] = STATE(171),
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
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [4] = {
    [sym_line_comment] = STATE(151),
    [sym__s_expr] = STATE(151),
    [sym__anything] = STATE(151),
    [sym__s_forms] = STATE(151),
    [sym__defs] = STATE(151),
    [sym__literals] = STATE(151),
    [sym__short_helper] = STATE(151),
    [sym_def] = STATE(151),
    [sym_fn] = STATE(151),
    [sym_defn] = STATE(151),
    [sym_let] = STATE(151),
    [sym_do] = STATE(151),
    [sym_if] = STATE(151),
    [sym_while] = STATE(151),
    [sym_ref] = STATE(151),
    [sym_address] = STATE(151),
    [sym_set] = STATE(151),
    [sym_the] = STATE(151),
    [sym_call_expression] = STATE(151),
    [sym_call_name] = STATE(9),
    [sym_definterface] = STATE(151),
    [sym_short_ref] = STATE(151),
    [sym_short_copy] = STATE(151),
    [sym_short_fn_ref] = STATE(98),
    [sym_bool_literal] = STATE(151),
    [sym_str_literal] = STATE(151),
    [sym_char_literal] = STATE(151),
    [sym_pattern_literal] = STATE(151),
    [sym_array_expression] = STATE(151),
    [sym_map_expression] = STATE(151),
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
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(61),
    [sym_float_literal] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [5] = {
    [sym__short_helper] = STATE(7),
    [sym_type] = STATE(7),
    [sym_complex_type] = STATE(42),
    [sym_short_ref] = STATE(7),
    [sym_short_copy] = STATE(7),
    [sym_short_fn_ref] = STATE(7),
    [aux_sym_typed_parameters_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_Bool] = ACTIONS(69),
    [anon_sym_Char] = ACTIONS(69),
    [anon_sym_Int] = ACTIONS(69),
    [anon_sym_Long] = ACTIONS(69),
    [anon_sym_Float] = ACTIONS(69),
    [anon_sym_Double] = ACTIONS(69),
    [anon_sym_Vector2] = ACTIONS(71),
    [anon_sym_Vector3] = ACTIONS(71),
    [anon_sym_VectorN] = ACTIONS(69),
    [anon_sym_String] = ACTIONS(69),
    [anon_sym_Pattern] = ACTIONS(69),
    [anon_sym_Array] = ACTIONS(69),
    [anon_sym_Map] = ACTIONS(69),
    [anon_sym_Maybe] = ACTIONS(69),
    [anon_sym_Result] = ACTIONS(69),
    [anon_sym_Id] = ACTIONS(69),
    [anon_sym_Ptr] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(69),
  },
  [6] = {
    [sym__short_helper] = STATE(5),
    [sym_type] = STATE(5),
    [sym_complex_type] = STATE(42),
    [sym_short_ref] = STATE(5),
    [sym_short_copy] = STATE(5),
    [sym_short_fn_ref] = STATE(5),
    [aux_sym_typed_parameters_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_Bool] = ACTIONS(69),
    [anon_sym_Char] = ACTIONS(69),
    [anon_sym_Int] = ACTIONS(69),
    [anon_sym_Long] = ACTIONS(69),
    [anon_sym_Float] = ACTIONS(69),
    [anon_sym_Double] = ACTIONS(69),
    [anon_sym_Vector2] = ACTIONS(71),
    [anon_sym_Vector3] = ACTIONS(71),
    [anon_sym_VectorN] = ACTIONS(69),
    [anon_sym_String] = ACTIONS(69),
    [anon_sym_Pattern] = ACTIONS(69),
    [anon_sym_Array] = ACTIONS(69),
    [anon_sym_Map] = ACTIONS(69),
    [anon_sym_Maybe] = ACTIONS(69),
    [anon_sym_Result] = ACTIONS(69),
    [anon_sym_Id] = ACTIONS(69),
    [anon_sym_Ptr] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(69),
  },
  [7] = {
    [sym__short_helper] = STATE(7),
    [sym_type] = STATE(7),
    [sym_complex_type] = STATE(42),
    [sym_short_ref] = STATE(7),
    [sym_short_copy] = STATE(7),
    [sym_short_fn_ref] = STATE(7),
    [aux_sym_typed_parameters_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_Bool] = ACTIONS(86),
    [anon_sym_Char] = ACTIONS(86),
    [anon_sym_Int] = ACTIONS(86),
    [anon_sym_Long] = ACTIONS(86),
    [anon_sym_Float] = ACTIONS(86),
    [anon_sym_Double] = ACTIONS(86),
    [anon_sym_Vector2] = ACTIONS(89),
    [anon_sym_Vector3] = ACTIONS(89),
    [anon_sym_VectorN] = ACTIONS(86),
    [anon_sym_String] = ACTIONS(86),
    [anon_sym_Pattern] = ACTIONS(86),
    [anon_sym_Array] = ACTIONS(86),
    [anon_sym_Map] = ACTIONS(86),
    [anon_sym_Maybe] = ACTIONS(86),
    [anon_sym_Result] = ACTIONS(86),
    [anon_sym_Id] = ACTIONS(86),
    [anon_sym_Ptr] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(98),
    [sym_identifier] = ACTIONS(86),
  },
  [8] = {
    [sym__s_expr] = STATE(94),
    [sym__expr] = STATE(94),
    [sym__literals] = STATE(94),
    [sym__short_helper] = STATE(94),
    [sym_short_ref] = STATE(94),
    [sym_short_copy] = STATE(94),
    [sym_short_fn_ref] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(115),
    [sym_integer_literal] = ACTIONS(118),
    [sym_float_literal] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(130),
    [anon_sym_POUND_DQUOTE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(136),
    [sym_identifier] = ACTIONS(118),
  },
  [9] = {
    [sym__s_expr] = STATE(11),
    [sym__expr] = STATE(11),
    [sym__literals] = STATE(11),
    [sym__short_helper] = STATE(11),
    [sym_short_ref] = STATE(11),
    [sym_short_copy] = STATE(11),
    [sym_short_fn_ref] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_str_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_pattern_literal] = STATE(11),
    [sym_array_expression] = STATE(11),
    [sym_map_expression] = STATE(11),
    [aux_sym_call_expression_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(141),
  },
  [10] = {
    [sym__s_expr] = STATE(94),
    [sym__expr] = STATE(94),
    [sym__literals] = STATE(94),
    [sym__short_helper] = STATE(94),
    [sym_short_ref] = STATE(94),
    [sym_short_copy] = STATE(94),
    [sym_short_fn_ref] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(147),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(147),
  },
  [11] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [aux_sym_call_expression_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(153),
  },
  [12] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [aux_sym_call_expression_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(171),
    [sym_integer_literal] = ACTIONS(174),
    [sym_float_literal] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(186),
    [anon_sym_POUND_DQUOTE] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(192),
    [sym_identifier] = ACTIONS(174),
  },
  [13] = {
    [sym__s_expr] = STATE(94),
    [sym__expr] = STATE(94),
    [sym__literals] = STATE(94),
    [sym__short_helper] = STATE(94),
    [sym_short_ref] = STATE(94),
    [sym_short_copy] = STATE(94),
    [sym_short_fn_ref] = STATE(94),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
    [aux_sym_do_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(147),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(147),
  },
  [14] = {
    [sym__s_expr] = STATE(168),
    [sym__expr] = STATE(168),
    [sym__literals] = STATE(168),
    [sym__short_helper] = STATE(168),
    [sym_short_ref] = STATE(168),
    [sym_short_copy] = STATE(168),
    [sym_short_fn_ref] = STATE(168),
    [sym_bool_literal] = STATE(168),
    [sym_str_literal] = STATE(168),
    [sym_char_literal] = STATE(168),
    [sym_pattern_literal] = STATE(168),
    [sym_array_expression] = STATE(168),
    [sym_map_expression] = STATE(168),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(199),
    [sym_float_literal] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(199),
  },
  [15] = {
    [sym__short_helper] = STATE(170),
    [sym_type] = STATE(170),
    [sym_complex_type] = STATE(99),
    [sym_short_ref] = STATE(170),
    [sym_short_copy] = STATE(170),
    [sym_short_fn_ref] = STATE(170),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_Bool] = ACTIONS(205),
    [anon_sym_Char] = ACTIONS(205),
    [anon_sym_Int] = ACTIONS(205),
    [anon_sym_Long] = ACTIONS(205),
    [anon_sym_Float] = ACTIONS(205),
    [anon_sym_Double] = ACTIONS(205),
    [anon_sym_Vector2] = ACTIONS(207),
    [anon_sym_Vector3] = ACTIONS(207),
    [anon_sym_VectorN] = ACTIONS(205),
    [anon_sym_String] = ACTIONS(205),
    [anon_sym_Pattern] = ACTIONS(205),
    [anon_sym_Array] = ACTIONS(205),
    [anon_sym_Map] = ACTIONS(205),
    [anon_sym_Maybe] = ACTIONS(205),
    [anon_sym_Result] = ACTIONS(205),
    [anon_sym_Id] = ACTIONS(205),
    [anon_sym_Ptr] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(205),
  },
  [16] = {
    [sym__s_expr] = STATE(159),
    [sym__expr] = STATE(159),
    [sym__literals] = STATE(159),
    [sym__short_helper] = STATE(159),
    [sym_short_ref] = STATE(159),
    [sym_short_copy] = STATE(159),
    [sym_short_fn_ref] = STATE(159),
    [sym_bool_literal] = STATE(159),
    [sym_str_literal] = STATE(159),
    [sym_char_literal] = STATE(159),
    [sym_pattern_literal] = STATE(159),
    [sym_array_expression] = STATE(159),
    [sym_map_expression] = STATE(159),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(211),
  },
  [17] = {
    [sym__s_expr] = STATE(149),
    [sym__expr] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__short_helper] = STATE(149),
    [sym_short_ref] = STATE(149),
    [sym_short_copy] = STATE(149),
    [sym_short_fn_ref] = STATE(149),
    [sym_bool_literal] = STATE(149),
    [sym_str_literal] = STATE(149),
    [sym_char_literal] = STATE(149),
    [sym_pattern_literal] = STATE(149),
    [sym_array_expression] = STATE(149),
    [sym_map_expression] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(217),
    [sym_float_literal] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(217),
  },
  [18] = {
    [sym__s_expr] = STATE(162),
    [sym__expr] = STATE(162),
    [sym__literals] = STATE(162),
    [sym__short_helper] = STATE(162),
    [sym_short_ref] = STATE(162),
    [sym_short_copy] = STATE(162),
    [sym_short_fn_ref] = STATE(162),
    [sym_bool_literal] = STATE(162),
    [sym_str_literal] = STATE(162),
    [sym_char_literal] = STATE(162),
    [sym_pattern_literal] = STATE(162),
    [sym_array_expression] = STATE(162),
    [sym_map_expression] = STATE(162),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(223),
    [sym_float_literal] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(223),
  },
  [19] = {
    [sym__s_expr] = STATE(140),
    [sym__expr] = STATE(140),
    [sym__literals] = STATE(140),
    [sym__short_helper] = STATE(140),
    [sym_short_ref] = STATE(140),
    [sym_short_copy] = STATE(140),
    [sym_short_fn_ref] = STATE(140),
    [sym_bool_literal] = STATE(140),
    [sym_str_literal] = STATE(140),
    [sym_char_literal] = STATE(140),
    [sym_pattern_literal] = STATE(140),
    [sym_array_expression] = STATE(140),
    [sym_map_expression] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(237),
    [sym_float_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(249),
    [sym_identifier] = ACTIONS(237),
  },
  [20] = {
    [sym__s_expr] = STATE(100),
    [sym__expr] = STATE(100),
    [sym__literals] = STATE(100),
    [sym__short_helper] = STATE(100),
    [sym_short_ref] = STATE(100),
    [sym_short_copy] = STATE(100),
    [sym_short_fn_ref] = STATE(100),
    [sym_bool_literal] = STATE(100),
    [sym_str_literal] = STATE(100),
    [sym_char_literal] = STATE(100),
    [sym_pattern_literal] = STATE(100),
    [sym_array_expression] = STATE(100),
    [sym_map_expression] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(251),
    [sym_float_literal] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(251),
  },
  [21] = {
    [sym__s_expr] = STATE(102),
    [sym__expr] = STATE(102),
    [sym__literals] = STATE(102),
    [sym__short_helper] = STATE(102),
    [sym_short_ref] = STATE(102),
    [sym_short_copy] = STATE(102),
    [sym_short_fn_ref] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(255),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(255),
  },
  [22] = {
    [sym__s_expr] = STATE(93),
    [sym__expr] = STATE(93),
    [sym__literals] = STATE(93),
    [sym__short_helper] = STATE(93),
    [sym_short_ref] = STATE(93),
    [sym_short_copy] = STATE(93),
    [sym_short_fn_ref] = STATE(93),
    [sym_bool_literal] = STATE(93),
    [sym_str_literal] = STATE(93),
    [sym_char_literal] = STATE(93),
    [sym_pattern_literal] = STATE(93),
    [sym_array_expression] = STATE(93),
    [sym_map_expression] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(259),
    [sym_float_literal] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(259),
  },
  [23] = {
    [sym__s_expr] = STATE(49),
    [sym__expr] = STATE(49),
    [sym__literals] = STATE(49),
    [sym__short_helper] = STATE(49),
    [sym_short_ref] = STATE(49),
    [sym_short_copy] = STATE(49),
    [sym_short_fn_ref] = STATE(49),
    [sym_bool_literal] = STATE(49),
    [sym_str_literal] = STATE(49),
    [sym_char_literal] = STATE(49),
    [sym_pattern_literal] = STATE(49),
    [sym_array_expression] = STATE(49),
    [sym_map_expression] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_integer_literal] = ACTIONS(267),
    [sym_float_literal] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_POUND_DQUOTE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(267),
  },
  [24] = {
    [sym__s_expr] = STATE(138),
    [sym__expr] = STATE(138),
    [sym__literals] = STATE(138),
    [sym__short_helper] = STATE(138),
    [sym_short_ref] = STATE(138),
    [sym_short_copy] = STATE(138),
    [sym_short_fn_ref] = STATE(138),
    [sym_bool_literal] = STATE(138),
    [sym_str_literal] = STATE(138),
    [sym_char_literal] = STATE(138),
    [sym_pattern_literal] = STATE(138),
    [sym_array_expression] = STATE(138),
    [sym_map_expression] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(281),
    [sym_float_literal] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(249),
    [sym_identifier] = ACTIONS(281),
  },
  [25] = {
    [sym__s_expr] = STATE(29),
    [sym__expr] = STATE(29),
    [sym__literals] = STATE(29),
    [sym__short_helper] = STATE(29),
    [sym_short_ref] = STATE(29),
    [sym_short_copy] = STATE(29),
    [sym_short_fn_ref] = STATE(29),
    [sym_bool_literal] = STATE(29),
    [sym_str_literal] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_pattern_literal] = STATE(29),
    [sym_array_expression] = STATE(29),
    [sym_map_expression] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(285),
  },
  [26] = {
    [sym__s_expr] = STATE(165),
    [sym__expr] = STATE(165),
    [sym__literals] = STATE(165),
    [sym__short_helper] = STATE(165),
    [sym_short_ref] = STATE(165),
    [sym_short_copy] = STATE(165),
    [sym_short_fn_ref] = STATE(165),
    [sym_bool_literal] = STATE(165),
    [sym_str_literal] = STATE(165),
    [sym_char_literal] = STATE(165),
    [sym_pattern_literal] = STATE(165),
    [sym_array_expression] = STATE(165),
    [sym_map_expression] = STATE(165),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(289),
  },
  [27] = {
    [sym__s_expr] = STATE(17),
    [sym__expr] = STATE(17),
    [sym__literals] = STATE(17),
    [sym__short_helper] = STATE(17),
    [sym_short_ref] = STATE(17),
    [sym_short_copy] = STATE(17),
    [sym_short_fn_ref] = STATE(17),
    [sym_bool_literal] = STATE(17),
    [sym_str_literal] = STATE(17),
    [sym_char_literal] = STATE(17),
    [sym_pattern_literal] = STATE(17),
    [sym_array_expression] = STATE(17),
    [sym_map_expression] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(293),
    [sym_float_literal] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(293),
  },
  [28] = {
    [sym__s_expr] = STATE(142),
    [sym__expr] = STATE(142),
    [sym__literals] = STATE(142),
    [sym__short_helper] = STATE(142),
    [sym_short_ref] = STATE(142),
    [sym_short_copy] = STATE(142),
    [sym_short_fn_ref] = STATE(142),
    [sym_bool_literal] = STATE(142),
    [sym_str_literal] = STATE(142),
    [sym_char_literal] = STATE(142),
    [sym_pattern_literal] = STATE(142),
    [sym_array_expression] = STATE(142),
    [sym_map_expression] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(297),
    [sym_float_literal] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(249),
    [sym_identifier] = ACTIONS(297),
  },
  [29] = {
    [sym__s_expr] = STATE(32),
    [sym__expr] = STATE(32),
    [sym__literals] = STATE(32),
    [sym__short_helper] = STATE(32),
    [sym_short_ref] = STATE(32),
    [sym_short_copy] = STATE(32),
    [sym_short_fn_ref] = STATE(32),
    [sym_bool_literal] = STATE(32),
    [sym_str_literal] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_pattern_literal] = STATE(32),
    [sym_array_expression] = STATE(32),
    [sym_map_expression] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(301),
    [sym_float_literal] = ACTIONS(303),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(301),
  },
  [30] = {
    [sym__s_expr] = STATE(47),
    [sym__expr] = STATE(47),
    [sym__literals] = STATE(47),
    [sym__short_helper] = STATE(47),
    [sym_short_ref] = STATE(47),
    [sym_short_copy] = STATE(47),
    [sym_short_fn_ref] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_pattern_literal] = STATE(47),
    [sym_array_expression] = STATE(47),
    [sym_map_expression] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_integer_literal] = ACTIONS(305),
    [sym_float_literal] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_POUND_DQUOTE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(305),
  },
  [31] = {
    [sym__s_expr] = STATE(157),
    [sym__expr] = STATE(157),
    [sym__literals] = STATE(157),
    [sym__short_helper] = STATE(157),
    [sym_short_ref] = STATE(157),
    [sym_short_copy] = STATE(157),
    [sym_short_fn_ref] = STATE(157),
    [sym_bool_literal] = STATE(157),
    [sym_str_literal] = STATE(157),
    [sym_char_literal] = STATE(157),
    [sym_pattern_literal] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_map_expression] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(309),
    [sym_float_literal] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(309),
  },
  [32] = {
    [sym__s_expr] = STATE(152),
    [sym__expr] = STATE(152),
    [sym__literals] = STATE(152),
    [sym__short_helper] = STATE(152),
    [sym_short_ref] = STATE(152),
    [sym_short_copy] = STATE(152),
    [sym_short_fn_ref] = STATE(152),
    [sym_bool_literal] = STATE(152),
    [sym_str_literal] = STATE(152),
    [sym_char_literal] = STATE(152),
    [sym_pattern_literal] = STATE(152),
    [sym_array_expression] = STATE(152),
    [sym_map_expression] = STATE(152),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(313),
    [sym_float_literal] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(313),
  },
  [33] = {
    [sym__s_expr] = STATE(154),
    [sym__expr] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__short_helper] = STATE(154),
    [sym_short_ref] = STATE(154),
    [sym_short_copy] = STATE(154),
    [sym_short_fn_ref] = STATE(154),
    [sym_bool_literal] = STATE(154),
    [sym_str_literal] = STATE(154),
    [sym_char_literal] = STATE(154),
    [sym_pattern_literal] = STATE(154),
    [sym_array_expression] = STATE(154),
    [sym_map_expression] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(317),
    [sym_float_literal] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(317),
  },
  [34] = {
    [sym__s_expr] = STATE(134),
    [sym__expr] = STATE(134),
    [sym__literals] = STATE(134),
    [sym__short_helper] = STATE(134),
    [sym_short_ref] = STATE(134),
    [sym_short_copy] = STATE(134),
    [sym_short_fn_ref] = STATE(134),
    [sym_bool_literal] = STATE(134),
    [sym_str_literal] = STATE(134),
    [sym_char_literal] = STATE(134),
    [sym_pattern_literal] = STATE(134),
    [sym_array_expression] = STATE(134),
    [sym_map_expression] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(235),
    [sym_integer_literal] = ACTIONS(321),
    [sym_float_literal] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_POUND_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(249),
    [sym_identifier] = ACTIONS(321),
  },
  [35] = {
    [sym__s_expr] = STATE(158),
    [sym__expr] = STATE(158),
    [sym__literals] = STATE(158),
    [sym__short_helper] = STATE(158),
    [sym_short_ref] = STATE(158),
    [sym_short_copy] = STATE(158),
    [sym_short_fn_ref] = STATE(158),
    [sym_bool_literal] = STATE(158),
    [sym_str_literal] = STATE(158),
    [sym_char_literal] = STATE(158),
    [sym_pattern_literal] = STATE(158),
    [sym_array_expression] = STATE(158),
    [sym_map_expression] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(325),
    [sym_float_literal] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(325),
  },
  [36] = {
    [sym__s_expr] = STATE(163),
    [sym__expr] = STATE(163),
    [sym__literals] = STATE(163),
    [sym__short_helper] = STATE(163),
    [sym_short_ref] = STATE(163),
    [sym_short_copy] = STATE(163),
    [sym_short_fn_ref] = STATE(163),
    [sym_bool_literal] = STATE(163),
    [sym_str_literal] = STATE(163),
    [sym_char_literal] = STATE(163),
    [sym_pattern_literal] = STATE(163),
    [sym_array_expression] = STATE(163),
    [sym_map_expression] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(329),
    [sym_float_literal] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(329),
  },
  [37] = {
    [sym__s_expr] = STATE(48),
    [sym__expr] = STATE(48),
    [sym__literals] = STATE(48),
    [sym__short_helper] = STATE(48),
    [sym_short_ref] = STATE(48),
    [sym_short_copy] = STATE(48),
    [sym_short_fn_ref] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_char_literal] = STATE(48),
    [sym_pattern_literal] = STATE(48),
    [sym_array_expression] = STATE(48),
    [sym_map_expression] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_integer_literal] = ACTIONS(333),
    [sym_float_literal] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_POUND_DQUOTE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(333),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_Bool] = ACTIONS(339),
    [anon_sym_Char] = ACTIONS(339),
    [anon_sym_Int] = ACTIONS(339),
    [anon_sym_Long] = ACTIONS(339),
    [anon_sym_Float] = ACTIONS(339),
    [anon_sym_Double] = ACTIONS(339),
    [anon_sym_Vector2] = ACTIONS(337),
    [anon_sym_Vector3] = ACTIONS(337),
    [anon_sym_VectorN] = ACTIONS(339),
    [anon_sym_String] = ACTIONS(339),
    [anon_sym_Pattern] = ACTIONS(339),
    [anon_sym_Array] = ACTIONS(339),
    [anon_sym_Map] = ACTIONS(339),
    [anon_sym_Maybe] = ACTIONS(339),
    [anon_sym_Result] = ACTIONS(339),
    [anon_sym_Id] = ACTIONS(339),
    [anon_sym_Ptr] = ACTIONS(339),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [sym_identifier] = ACTIONS(339),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_Bool] = ACTIONS(343),
    [anon_sym_Char] = ACTIONS(343),
    [anon_sym_Int] = ACTIONS(343),
    [anon_sym_Long] = ACTIONS(343),
    [anon_sym_Float] = ACTIONS(343),
    [anon_sym_Double] = ACTIONS(343),
    [anon_sym_Vector2] = ACTIONS(341),
    [anon_sym_Vector3] = ACTIONS(341),
    [anon_sym_VectorN] = ACTIONS(343),
    [anon_sym_String] = ACTIONS(343),
    [anon_sym_Pattern] = ACTIONS(343),
    [anon_sym_Array] = ACTIONS(343),
    [anon_sym_Map] = ACTIONS(343),
    [anon_sym_Maybe] = ACTIONS(343),
    [anon_sym_Result] = ACTIONS(343),
    [anon_sym_Id] = ACTIONS(343),
    [anon_sym_Ptr] = ACTIONS(343),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [sym_identifier] = ACTIONS(343),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_Bool] = ACTIONS(347),
    [anon_sym_Char] = ACTIONS(347),
    [anon_sym_Int] = ACTIONS(347),
    [anon_sym_Long] = ACTIONS(347),
    [anon_sym_Float] = ACTIONS(347),
    [anon_sym_Double] = ACTIONS(347),
    [anon_sym_Vector2] = ACTIONS(345),
    [anon_sym_Vector3] = ACTIONS(345),
    [anon_sym_VectorN] = ACTIONS(347),
    [anon_sym_String] = ACTIONS(347),
    [anon_sym_Pattern] = ACTIONS(347),
    [anon_sym_Array] = ACTIONS(347),
    [anon_sym_Map] = ACTIONS(347),
    [anon_sym_Maybe] = ACTIONS(347),
    [anon_sym_Result] = ACTIONS(347),
    [anon_sym_Id] = ACTIONS(347),
    [anon_sym_Ptr] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [sym_identifier] = ACTIONS(347),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_Bool] = ACTIONS(351),
    [anon_sym_Char] = ACTIONS(351),
    [anon_sym_Int] = ACTIONS(351),
    [anon_sym_Long] = ACTIONS(351),
    [anon_sym_Float] = ACTIONS(351),
    [anon_sym_Double] = ACTIONS(351),
    [anon_sym_Vector2] = ACTIONS(349),
    [anon_sym_Vector3] = ACTIONS(349),
    [anon_sym_VectorN] = ACTIONS(351),
    [anon_sym_String] = ACTIONS(351),
    [anon_sym_Pattern] = ACTIONS(351),
    [anon_sym_Array] = ACTIONS(351),
    [anon_sym_Map] = ACTIONS(351),
    [anon_sym_Maybe] = ACTIONS(351),
    [anon_sym_Result] = ACTIONS(351),
    [anon_sym_Id] = ACTIONS(351),
    [anon_sym_Ptr] = ACTIONS(351),
    [anon_sym_AMP] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_Bool] = ACTIONS(355),
    [anon_sym_Char] = ACTIONS(355),
    [anon_sym_Int] = ACTIONS(355),
    [anon_sym_Long] = ACTIONS(355),
    [anon_sym_Float] = ACTIONS(355),
    [anon_sym_Double] = ACTIONS(355),
    [anon_sym_Vector2] = ACTIONS(353),
    [anon_sym_Vector3] = ACTIONS(353),
    [anon_sym_VectorN] = ACTIONS(355),
    [anon_sym_String] = ACTIONS(355),
    [anon_sym_Pattern] = ACTIONS(355),
    [anon_sym_Array] = ACTIONS(355),
    [anon_sym_Map] = ACTIONS(355),
    [anon_sym_Maybe] = ACTIONS(355),
    [anon_sym_Result] = ACTIONS(355),
    [anon_sym_Id] = ACTIONS(355),
    [anon_sym_Ptr] = ACTIONS(355),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [sym_identifier] = ACTIONS(355),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_Bool] = ACTIONS(359),
    [anon_sym_Char] = ACTIONS(359),
    [anon_sym_Int] = ACTIONS(359),
    [anon_sym_Long] = ACTIONS(359),
    [anon_sym_Float] = ACTIONS(359),
    [anon_sym_Double] = ACTIONS(359),
    [anon_sym_Vector2] = ACTIONS(357),
    [anon_sym_Vector3] = ACTIONS(357),
    [anon_sym_VectorN] = ACTIONS(359),
    [anon_sym_String] = ACTIONS(359),
    [anon_sym_Pattern] = ACTIONS(359),
    [anon_sym_Array] = ACTIONS(359),
    [anon_sym_Map] = ACTIONS(359),
    [anon_sym_Maybe] = ACTIONS(359),
    [anon_sym_Result] = ACTIONS(359),
    [anon_sym_Id] = ACTIONS(359),
    [anon_sym_Ptr] = ACTIONS(359),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_Bool] = ACTIONS(363),
    [anon_sym_Char] = ACTIONS(363),
    [anon_sym_Int] = ACTIONS(363),
    [anon_sym_Long] = ACTIONS(363),
    [anon_sym_Float] = ACTIONS(363),
    [anon_sym_Double] = ACTIONS(363),
    [anon_sym_Vector2] = ACTIONS(361),
    [anon_sym_Vector3] = ACTIONS(361),
    [anon_sym_VectorN] = ACTIONS(363),
    [anon_sym_String] = ACTIONS(363),
    [anon_sym_Pattern] = ACTIONS(363),
    [anon_sym_Array] = ACTIONS(363),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_Maybe] = ACTIONS(363),
    [anon_sym_Result] = ACTIONS(363),
    [anon_sym_Id] = ACTIONS(363),
    [anon_sym_Ptr] = ACTIONS(363),
    [anon_sym_AMP] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(361),
    [sym_identifier] = ACTIONS(363),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_Bool] = ACTIONS(367),
    [anon_sym_Char] = ACTIONS(367),
    [anon_sym_Int] = ACTIONS(367),
    [anon_sym_Long] = ACTIONS(367),
    [anon_sym_Float] = ACTIONS(367),
    [anon_sym_Double] = ACTIONS(367),
    [anon_sym_Vector2] = ACTIONS(365),
    [anon_sym_Vector3] = ACTIONS(365),
    [anon_sym_VectorN] = ACTIONS(367),
    [anon_sym_String] = ACTIONS(367),
    [anon_sym_Pattern] = ACTIONS(367),
    [anon_sym_Array] = ACTIONS(367),
    [anon_sym_Map] = ACTIONS(367),
    [anon_sym_Maybe] = ACTIONS(367),
    [anon_sym_Result] = ACTIONS(367),
    [anon_sym_Id] = ACTIONS(367),
    [anon_sym_Ptr] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(365),
    [sym_identifier] = ACTIONS(367),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_Bool] = ACTIONS(371),
    [anon_sym_Char] = ACTIONS(371),
    [anon_sym_Int] = ACTIONS(371),
    [anon_sym_Long] = ACTIONS(371),
    [anon_sym_Float] = ACTIONS(371),
    [anon_sym_Double] = ACTIONS(371),
    [anon_sym_Vector2] = ACTIONS(369),
    [anon_sym_Vector3] = ACTIONS(369),
    [anon_sym_VectorN] = ACTIONS(371),
    [anon_sym_String] = ACTIONS(371),
    [anon_sym_Pattern] = ACTIONS(371),
    [anon_sym_Array] = ACTIONS(371),
    [anon_sym_Map] = ACTIONS(371),
    [anon_sym_Maybe] = ACTIONS(371),
    [anon_sym_Result] = ACTIONS(371),
    [anon_sym_Id] = ACTIONS(371),
    [anon_sym_Ptr] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(369),
    [sym_identifier] = ACTIONS(371),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_Bool] = ACTIONS(375),
    [anon_sym_Char] = ACTIONS(375),
    [anon_sym_Int] = ACTIONS(375),
    [anon_sym_Long] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(375),
    [anon_sym_Double] = ACTIONS(375),
    [anon_sym_Vector2] = ACTIONS(373),
    [anon_sym_Vector3] = ACTIONS(373),
    [anon_sym_VectorN] = ACTIONS(375),
    [anon_sym_String] = ACTIONS(375),
    [anon_sym_Pattern] = ACTIONS(375),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Map] = ACTIONS(375),
    [anon_sym_Maybe] = ACTIONS(375),
    [anon_sym_Result] = ACTIONS(375),
    [anon_sym_Id] = ACTIONS(375),
    [anon_sym_Ptr] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
    [sym_identifier] = ACTIONS(375),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_Bool] = ACTIONS(379),
    [anon_sym_Char] = ACTIONS(379),
    [anon_sym_Int] = ACTIONS(379),
    [anon_sym_Long] = ACTIONS(379),
    [anon_sym_Float] = ACTIONS(379),
    [anon_sym_Double] = ACTIONS(379),
    [anon_sym_Vector2] = ACTIONS(377),
    [anon_sym_Vector3] = ACTIONS(377),
    [anon_sym_VectorN] = ACTIONS(379),
    [anon_sym_String] = ACTIONS(379),
    [anon_sym_Pattern] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(379),
    [anon_sym_Map] = ACTIONS(379),
    [anon_sym_Maybe] = ACTIONS(379),
    [anon_sym_Result] = ACTIONS(379),
    [anon_sym_Id] = ACTIONS(379),
    [anon_sym_Ptr] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_Bool] = ACTIONS(383),
    [anon_sym_Char] = ACTIONS(383),
    [anon_sym_Int] = ACTIONS(383),
    [anon_sym_Long] = ACTIONS(383),
    [anon_sym_Float] = ACTIONS(383),
    [anon_sym_Double] = ACTIONS(383),
    [anon_sym_Vector2] = ACTIONS(381),
    [anon_sym_Vector3] = ACTIONS(381),
    [anon_sym_VectorN] = ACTIONS(383),
    [anon_sym_String] = ACTIONS(383),
    [anon_sym_Pattern] = ACTIONS(383),
    [anon_sym_Array] = ACTIONS(383),
    [anon_sym_Map] = ACTIONS(383),
    [anon_sym_Maybe] = ACTIONS(383),
    [anon_sym_Result] = ACTIONS(383),
    [anon_sym_Id] = ACTIONS(383),
    [anon_sym_Ptr] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_Bool] = ACTIONS(387),
    [anon_sym_Char] = ACTIONS(387),
    [anon_sym_Int] = ACTIONS(387),
    [anon_sym_Long] = ACTIONS(387),
    [anon_sym_Float] = ACTIONS(387),
    [anon_sym_Double] = ACTIONS(387),
    [anon_sym_Vector2] = ACTIONS(385),
    [anon_sym_Vector3] = ACTIONS(385),
    [anon_sym_VectorN] = ACTIONS(387),
    [anon_sym_String] = ACTIONS(387),
    [anon_sym_Pattern] = ACTIONS(387),
    [anon_sym_Array] = ACTIONS(387),
    [anon_sym_Map] = ACTIONS(387),
    [anon_sym_Maybe] = ACTIONS(387),
    [anon_sym_Result] = ACTIONS(387),
    [anon_sym_Id] = ACTIONS(387),
    [anon_sym_Ptr] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_Bool] = ACTIONS(391),
    [anon_sym_Char] = ACTIONS(391),
    [anon_sym_Int] = ACTIONS(391),
    [anon_sym_Long] = ACTIONS(391),
    [anon_sym_Float] = ACTIONS(391),
    [anon_sym_Double] = ACTIONS(391),
    [anon_sym_Vector2] = ACTIONS(389),
    [anon_sym_Vector3] = ACTIONS(389),
    [anon_sym_VectorN] = ACTIONS(391),
    [anon_sym_String] = ACTIONS(391),
    [anon_sym_Pattern] = ACTIONS(391),
    [anon_sym_Array] = ACTIONS(391),
    [anon_sym_Map] = ACTIONS(391),
    [anon_sym_Maybe] = ACTIONS(391),
    [anon_sym_Result] = ACTIONS(391),
    [anon_sym_Id] = ACTIONS(391),
    [anon_sym_Ptr] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_Bool] = ACTIONS(395),
    [anon_sym_Char] = ACTIONS(395),
    [anon_sym_Int] = ACTIONS(395),
    [anon_sym_Long] = ACTIONS(395),
    [anon_sym_Float] = ACTIONS(395),
    [anon_sym_Double] = ACTIONS(395),
    [anon_sym_Vector2] = ACTIONS(393),
    [anon_sym_Vector3] = ACTIONS(393),
    [anon_sym_VectorN] = ACTIONS(395),
    [anon_sym_String] = ACTIONS(395),
    [anon_sym_Pattern] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(395),
    [anon_sym_Map] = ACTIONS(395),
    [anon_sym_Maybe] = ACTIONS(395),
    [anon_sym_Result] = ACTIONS(395),
    [anon_sym_Id] = ACTIONS(395),
    [anon_sym_Ptr] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_Bool] = ACTIONS(399),
    [anon_sym_Char] = ACTIONS(399),
    [anon_sym_Int] = ACTIONS(399),
    [anon_sym_Long] = ACTIONS(399),
    [anon_sym_Float] = ACTIONS(399),
    [anon_sym_Double] = ACTIONS(399),
    [anon_sym_Vector2] = ACTIONS(397),
    [anon_sym_Vector3] = ACTIONS(397),
    [anon_sym_VectorN] = ACTIONS(399),
    [anon_sym_String] = ACTIONS(399),
    [anon_sym_Pattern] = ACTIONS(399),
    [anon_sym_Array] = ACTIONS(399),
    [anon_sym_Map] = ACTIONS(399),
    [anon_sym_Maybe] = ACTIONS(399),
    [anon_sym_Result] = ACTIONS(399),
    [anon_sym_Id] = ACTIONS(399),
    [anon_sym_Ptr] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_Bool] = ACTIONS(403),
    [anon_sym_Char] = ACTIONS(403),
    [anon_sym_Int] = ACTIONS(403),
    [anon_sym_Long] = ACTIONS(403),
    [anon_sym_Float] = ACTIONS(403),
    [anon_sym_Double] = ACTIONS(403),
    [anon_sym_Vector2] = ACTIONS(401),
    [anon_sym_Vector3] = ACTIONS(401),
    [anon_sym_VectorN] = ACTIONS(403),
    [anon_sym_String] = ACTIONS(403),
    [anon_sym_Pattern] = ACTIONS(403),
    [anon_sym_Array] = ACTIONS(403),
    [anon_sym_Map] = ACTIONS(403),
    [anon_sym_Maybe] = ACTIONS(403),
    [anon_sym_Result] = ACTIONS(403),
    [anon_sym_Id] = ACTIONS(403),
    [anon_sym_Ptr] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
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
    [anon_sym_Vector2] = ACTIONS(405),
    [anon_sym_Vector3] = ACTIONS(405),
    [anon_sym_VectorN] = ACTIONS(407),
    [anon_sym_String] = ACTIONS(407),
    [anon_sym_Pattern] = ACTIONS(407),
    [anon_sym_Array] = ACTIONS(407),
    [anon_sym_Map] = ACTIONS(407),
    [anon_sym_Maybe] = ACTIONS(407),
    [anon_sym_Result] = ACTIONS(407),
    [anon_sym_Id] = ACTIONS(407),
    [anon_sym_Ptr] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
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
    [anon_sym_Vector2] = ACTIONS(409),
    [anon_sym_Vector3] = ACTIONS(409),
    [anon_sym_VectorN] = ACTIONS(411),
    [anon_sym_String] = ACTIONS(411),
    [anon_sym_Pattern] = ACTIONS(411),
    [anon_sym_Array] = ACTIONS(411),
    [anon_sym_Map] = ACTIONS(411),
    [anon_sym_Maybe] = ACTIONS(411),
    [anon_sym_Result] = ACTIONS(411),
    [anon_sym_Id] = ACTIONS(411),
    [anon_sym_Ptr] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [57] = {
    [sym_type] = STATE(26),
    [sym_complex_type] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_Bool] = ACTIONS(205),
    [anon_sym_Char] = ACTIONS(205),
    [anon_sym_Int] = ACTIONS(205),
    [anon_sym_Long] = ACTIONS(205),
    [anon_sym_Float] = ACTIONS(205),
    [anon_sym_Double] = ACTIONS(205),
    [anon_sym_Vector2] = ACTIONS(207),
    [anon_sym_Vector3] = ACTIONS(207),
    [anon_sym_VectorN] = ACTIONS(205),
    [anon_sym_String] = ACTIONS(205),
    [anon_sym_Pattern] = ACTIONS(205),
    [anon_sym_Array] = ACTIONS(205),
    [anon_sym_Map] = ACTIONS(205),
    [anon_sym_Maybe] = ACTIONS(205),
    [anon_sym_Result] = ACTIONS(205),
    [anon_sym_Id] = ACTIONS(205),
    [anon_sym_Ptr] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
  },
  [58] = {
    [aux_sym_complex_type_repeat1] = STATE(62),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_Bool] = ACTIONS(415),
    [anon_sym_Char] = ACTIONS(415),
    [anon_sym_Int] = ACTIONS(415),
    [anon_sym_Long] = ACTIONS(415),
    [anon_sym_Float] = ACTIONS(415),
    [anon_sym_Double] = ACTIONS(415),
    [anon_sym_Vector2] = ACTIONS(417),
    [anon_sym_Vector3] = ACTIONS(417),
    [anon_sym_VectorN] = ACTIONS(415),
    [anon_sym_String] = ACTIONS(415),
    [anon_sym_Pattern] = ACTIONS(415),
    [anon_sym_Array] = ACTIONS(415),
    [anon_sym_Map] = ACTIONS(415),
    [anon_sym_Maybe] = ACTIONS(415),
    [anon_sym_Result] = ACTIONS(415),
    [anon_sym_Id] = ACTIONS(415),
    [anon_sym_Ptr] = ACTIONS(415),
    [sym_identifier] = ACTIONS(415),
  },
  [59] = {
    [aux_sym_complex_type_repeat1] = STATE(61),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_Bool] = ACTIONS(421),
    [anon_sym_Char] = ACTIONS(421),
    [anon_sym_Int] = ACTIONS(421),
    [anon_sym_Long] = ACTIONS(421),
    [anon_sym_Float] = ACTIONS(421),
    [anon_sym_Double] = ACTIONS(421),
    [anon_sym_Vector2] = ACTIONS(423),
    [anon_sym_Vector3] = ACTIONS(423),
    [anon_sym_VectorN] = ACTIONS(421),
    [anon_sym_String] = ACTIONS(421),
    [anon_sym_Pattern] = ACTIONS(421),
    [anon_sym_Array] = ACTIONS(421),
    [anon_sym_Map] = ACTIONS(421),
    [anon_sym_Maybe] = ACTIONS(421),
    [anon_sym_Result] = ACTIONS(421),
    [anon_sym_Id] = ACTIONS(421),
    [anon_sym_Ptr] = ACTIONS(421),
    [sym_identifier] = ACTIONS(421),
  },
  [60] = {
    [aux_sym_complex_type_repeat1] = STATE(58),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_Bool] = ACTIONS(427),
    [anon_sym_Char] = ACTIONS(427),
    [anon_sym_Int] = ACTIONS(427),
    [anon_sym_Long] = ACTIONS(427),
    [anon_sym_Float] = ACTIONS(427),
    [anon_sym_Double] = ACTIONS(427),
    [anon_sym_Vector2] = ACTIONS(429),
    [anon_sym_Vector3] = ACTIONS(429),
    [anon_sym_VectorN] = ACTIONS(427),
    [anon_sym_String] = ACTIONS(427),
    [anon_sym_Pattern] = ACTIONS(427),
    [anon_sym_Array] = ACTIONS(427),
    [anon_sym_Map] = ACTIONS(427),
    [anon_sym_Maybe] = ACTIONS(427),
    [anon_sym_Result] = ACTIONS(427),
    [anon_sym_Id] = ACTIONS(427),
    [anon_sym_Ptr] = ACTIONS(427),
    [sym_identifier] = ACTIONS(427),
  },
  [61] = {
    [aux_sym_complex_type_repeat1] = STATE(62),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_Bool] = ACTIONS(415),
    [anon_sym_Char] = ACTIONS(415),
    [anon_sym_Int] = ACTIONS(415),
    [anon_sym_Long] = ACTIONS(415),
    [anon_sym_Float] = ACTIONS(415),
    [anon_sym_Double] = ACTIONS(415),
    [anon_sym_Vector2] = ACTIONS(417),
    [anon_sym_Vector3] = ACTIONS(417),
    [anon_sym_VectorN] = ACTIONS(415),
    [anon_sym_String] = ACTIONS(415),
    [anon_sym_Pattern] = ACTIONS(415),
    [anon_sym_Array] = ACTIONS(415),
    [anon_sym_Map] = ACTIONS(415),
    [anon_sym_Maybe] = ACTIONS(415),
    [anon_sym_Result] = ACTIONS(415),
    [anon_sym_Id] = ACTIONS(415),
    [anon_sym_Ptr] = ACTIONS(415),
    [sym_identifier] = ACTIONS(415),
  },
  [62] = {
    [aux_sym_complex_type_repeat1] = STATE(62),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_Bool] = ACTIONS(435),
    [anon_sym_Char] = ACTIONS(435),
    [anon_sym_Int] = ACTIONS(435),
    [anon_sym_Long] = ACTIONS(435),
    [anon_sym_Float] = ACTIONS(435),
    [anon_sym_Double] = ACTIONS(435),
    [anon_sym_Vector2] = ACTIONS(438),
    [anon_sym_Vector3] = ACTIONS(438),
    [anon_sym_VectorN] = ACTIONS(435),
    [anon_sym_String] = ACTIONS(435),
    [anon_sym_Pattern] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(435),
    [anon_sym_Map] = ACTIONS(435),
    [anon_sym_Maybe] = ACTIONS(435),
    [anon_sym_Result] = ACTIONS(435),
    [anon_sym_Id] = ACTIONS(435),
    [anon_sym_Ptr] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
  },
  [63] = {
    [sym__literals] = STATE(75),
    [sym_bool_literal] = STATE(75),
    [sym_str_literal] = STATE(75),
    [sym_char_literal] = STATE(75),
    [sym_pattern_literal] = STATE(75),
    [sym_array_expression] = STATE(75),
    [sym_map_expression] = STATE(75),
    [aux_sym_array_expression_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_integer_literal] = ACTIONS(443),
    [sym_float_literal] = ACTIONS(445),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(443),
  },
  [64] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(451),
    [sym_identifier] = ACTIONS(447),
  },
  [65] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(453),
    [sym_identifier] = ACTIONS(447),
  },
  [66] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(455),
    [sym_identifier] = ACTIONS(447),
  },
  [67] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(457),
    [sym_identifier] = ACTIONS(447),
  },
  [68] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(459),
    [sym_identifier] = ACTIONS(447),
  },
  [69] = {
    [sym__literals] = STATE(73),
    [sym_bool_literal] = STATE(73),
    [sym_str_literal] = STATE(73),
    [sym_char_literal] = STATE(73),
    [sym_pattern_literal] = STATE(73),
    [sym_array_expression] = STATE(73),
    [sym_map_expression] = STATE(73),
    [aux_sym_array_expression_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_integer_literal] = ACTIONS(463),
    [sym_float_literal] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(463),
  },
  [70] = {
    [sym__literals] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(467),
    [sym_integer_literal] = ACTIONS(469),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(469),
  },
  [71] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(67),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(473),
    [sym_identifier] = ACTIONS(447),
  },
  [72] = {
    [sym__literals] = STATE(70),
    [sym_bool_literal] = STATE(70),
    [sym_str_literal] = STATE(70),
    [sym_char_literal] = STATE(70),
    [sym_pattern_literal] = STATE(70),
    [sym_array_expression] = STATE(70),
    [sym_map_expression] = STATE(70),
    [aux_sym_array_expression_repeat1] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(475),
    [sym_integer_literal] = ACTIONS(477),
    [sym_float_literal] = ACTIONS(479),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(477),
  },
  [73] = {
    [sym__literals] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(481),
    [sym_integer_literal] = ACTIONS(469),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(469),
  },
  [74] = {
    [sym__literals] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [aux_sym_map_expression_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_integer_literal] = ACTIONS(486),
    [sym_float_literal] = ACTIONS(489),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_false] = ACTIONS(492),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_BSLASH] = ACTIONS(498),
    [anon_sym_POUND_DQUOTE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym_identifier] = ACTIONS(486),
  },
  [75] = {
    [sym__literals] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_integer_literal] = ACTIONS(469),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(469),
  },
  [76] = {
    [sym__literals] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [aux_sym_array_expression_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(514),
    [sym_integer_literal] = ACTIONS(516),
    [sym_float_literal] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(522),
    [anon_sym_false] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [anon_sym_BSLASH] = ACTIONS(528),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_identifier] = ACTIONS(516),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(369),
    [sym_integer_literal] = ACTIONS(371),
    [sym_float_literal] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_POUND_DQUOTE] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(369),
    [sym_identifier] = ACTIONS(371),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [sym_integer_literal] = ACTIONS(403),
    [sym_float_literal] = ACTIONS(401),
    [anon_sym_true] = ACTIONS(403),
    [anon_sym_false] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_POUND_DQUOTE] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [sym_integer_literal] = ACTIONS(391),
    [sym_float_literal] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_POUND_DQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [sym_identifier] = ACTIONS(391),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [sym_integer_literal] = ACTIONS(339),
    [sym_float_literal] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(339),
    [anon_sym_false] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [sym_identifier] = ACTIONS(339),
  },
  [81] = {
    [sym__literals] = STATE(103),
    [sym_bool_literal] = STATE(103),
    [sym_str_literal] = STATE(103),
    [sym_char_literal] = STATE(103),
    [sym_pattern_literal] = STATE(103),
    [sym_array_expression] = STATE(103),
    [sym_map_expression] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(537),
    [sym_float_literal] = ACTIONS(539),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(537),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [sym_integer_literal] = ACTIONS(395),
    [sym_float_literal] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_POUND_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_POUND_DQUOTE] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [sym_identifier] = ACTIONS(343),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [sym_integer_literal] = ACTIONS(359),
    [sym_float_literal] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(359),
    [anon_sym_false] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_BSLASH] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [sym_integer_literal] = ACTIONS(399),
    [sym_float_literal] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_POUND_DQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [sym_integer_literal] = ACTIONS(351),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_POUND_DQUOTE] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [sym_integer_literal] = ACTIONS(387),
    [sym_float_literal] = ACTIONS(385),
    [anon_sym_true] = ACTIONS(387),
    [anon_sym_false] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_BSLASH] = ACTIONS(385),
    [anon_sym_POUND_DQUOTE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [sym_integer_literal] = ACTIONS(347),
    [sym_float_literal] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_POUND_DQUOTE] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [sym_identifier] = ACTIONS(347),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_AMP] = ACTIONS(541),
    [anon_sym_AT] = ACTIONS(541),
    [anon_sym_TILDE] = ACTIONS(541),
    [sym_integer_literal] = ACTIONS(545),
    [sym_float_literal] = ACTIONS(541),
    [anon_sym_true] = ACTIONS(545),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [anon_sym_BSLASH] = ACTIONS(541),
    [anon_sym_POUND_DQUOTE] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(541),
    [sym_identifier] = ACTIONS(545),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_AMP] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(547),
    [anon_sym_TILDE] = ACTIONS(547),
    [sym_integer_literal] = ACTIONS(549),
    [sym_float_literal] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_POUND_DQUOTE] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [sym_identifier] = ACTIONS(549),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_TILDE] = ACTIONS(551),
    [sym_integer_literal] = ACTIONS(553),
    [sym_float_literal] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(553),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [anon_sym_BSLASH] = ACTIONS(551),
    [anon_sym_POUND_DQUOTE] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(551),
    [sym_identifier] = ACTIONS(553),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_AMP] = ACTIONS(555),
    [anon_sym_AT] = ACTIONS(555),
    [anon_sym_TILDE] = ACTIONS(555),
    [sym_integer_literal] = ACTIONS(557),
    [sym_float_literal] = ACTIONS(555),
    [anon_sym_true] = ACTIONS(557),
    [anon_sym_false] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [anon_sym_BSLASH] = ACTIONS(555),
    [anon_sym_POUND_DQUOTE] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(555),
    [sym_identifier] = ACTIONS(557),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [sym_integer_literal] = ACTIONS(383),
    [sym_float_literal] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_POUND_DQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_AMP] = ACTIONS(559),
    [anon_sym_AT] = ACTIONS(559),
    [anon_sym_TILDE] = ACTIONS(559),
    [sym_integer_literal] = ACTIONS(561),
    [sym_float_literal] = ACTIONS(559),
    [anon_sym_true] = ACTIONS(561),
    [anon_sym_false] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(559),
    [anon_sym_BSLASH] = ACTIONS(559),
    [anon_sym_POUND_DQUOTE] = ACTIONS(559),
    [anon_sym_LBRACE] = ACTIONS(559),
    [sym_identifier] = ACTIONS(561),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
    [anon_sym_AT] = ACTIONS(563),
    [anon_sym_TILDE] = ACTIONS(563),
    [sym_integer_literal] = ACTIONS(565),
    [sym_float_literal] = ACTIONS(563),
    [anon_sym_true] = ACTIONS(565),
    [anon_sym_false] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_BSLASH] = ACTIONS(563),
    [anon_sym_POUND_DQUOTE] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [sym_identifier] = ACTIONS(565),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(567),
    [anon_sym_TILDE] = ACTIONS(567),
    [sym_integer_literal] = ACTIONS(569),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(569),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [anon_sym_BSLASH] = ACTIONS(567),
    [anon_sym_POUND_DQUOTE] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [sym_identifier] = ACTIONS(569),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(365),
    [sym_integer_literal] = ACTIONS(367),
    [sym_float_literal] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_false] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_POUND_DQUOTE] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_identifier] = ACTIONS(367),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(571),
    [anon_sym_TILDE] = ACTIONS(571),
    [sym_integer_literal] = ACTIONS(573),
    [sym_float_literal] = ACTIONS(571),
    [anon_sym_true] = ACTIONS(573),
    [anon_sym_false] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_BSLASH] = ACTIONS(571),
    [anon_sym_POUND_DQUOTE] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [sym_identifier] = ACTIONS(573),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [sym_integer_literal] = ACTIONS(355),
    [sym_float_literal] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(355),
    [anon_sym_false] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_POUND_DQUOTE] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [sym_identifier] = ACTIONS(355),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
    [sym_integer_literal] = ACTIONS(375),
    [sym_float_literal] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(375),
    [anon_sym_false] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_POUND_DQUOTE] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_identifier] = ACTIONS(375),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_AMP] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(361),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(363),
    [anon_sym_false] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_POUND_DQUOTE] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [sym_identifier] = ACTIONS(363),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [sym_integer_literal] = ACTIONS(379),
    [sym_float_literal] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(379),
    [anon_sym_false] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_POUND_DQUOTE] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(575),
    [sym_integer_literal] = ACTIONS(577),
    [sym_float_literal] = ACTIONS(575),
    [anon_sym_true] = ACTIONS(577),
    [anon_sym_false] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [anon_sym_BSLASH] = ACTIONS(575),
    [anon_sym_POUND_DQUOTE] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [sym_identifier] = ACTIONS(577),
  },
  [104] = {
    [sym_line_comment] = STATE(105),
    [sym__s_expr] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [105] = {
    [sym_line_comment] = STATE(105),
    [sym__s_expr] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(586),
  },
  [106] = {
    [aux_sym_str_literal_repeat1] = STATE(115),
    [aux_sym_str_literal_token1] = ACTIONS(589),
    [anon_sym_DQUOTE2] = ACTIONS(591),
    [sym_escape_sequence] = ACTIONS(593),
  },
  [107] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(595),
    [anon_sym_DQUOTE2] = ACTIONS(597),
    [sym_escape_sequence] = ACTIONS(599),
  },
  [108] = {
    [aux_sym_str_literal_repeat1] = STATE(116),
    [aux_sym_str_literal_token1] = ACTIONS(601),
    [anon_sym_DQUOTE2] = ACTIONS(603),
    [sym_escape_sequence] = ACTIONS(605),
  },
  [109] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(595),
    [anon_sym_DQUOTE2] = ACTIONS(607),
    [sym_escape_sequence] = ACTIONS(599),
  },
  [110] = {
    [aux_sym_str_literal_repeat1] = STATE(107),
    [aux_sym_str_literal_token1] = ACTIONS(609),
    [anon_sym_DQUOTE2] = ACTIONS(611),
    [sym_escape_sequence] = ACTIONS(613),
  },
  [111] = {
    [aux_sym_str_literal_repeat1] = STATE(109),
    [aux_sym_str_literal_token1] = ACTIONS(615),
    [anon_sym_DQUOTE2] = ACTIONS(617),
    [sym_escape_sequence] = ACTIONS(619),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [anon_sym_SEMI] = ACTIONS(621),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(621),
  },
  [113] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(595),
    [anon_sym_DQUOTE2] = ACTIONS(623),
    [sym_escape_sequence] = ACTIONS(599),
  },
  [114] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(595),
    [anon_sym_DQUOTE2] = ACTIONS(625),
    [sym_escape_sequence] = ACTIONS(599),
  },
  [115] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(595),
    [anon_sym_DQUOTE2] = ACTIONS(627),
    [sym_escape_sequence] = ACTIONS(599),
  },
  [116] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(595),
    [anon_sym_DQUOTE2] = ACTIONS(629),
    [sym_escape_sequence] = ACTIONS(599),
  },
  [117] = {
    [aux_sym_str_literal_repeat1] = STATE(113),
    [aux_sym_str_literal_token1] = ACTIONS(631),
    [anon_sym_DQUOTE2] = ACTIONS(633),
    [sym_escape_sequence] = ACTIONS(635),
  },
  [118] = {
    [aux_sym_str_literal_repeat1] = STATE(114),
    [aux_sym_str_literal_token1] = ACTIONS(637),
    [anon_sym_DQUOTE2] = ACTIONS(639),
    [sym_escape_sequence] = ACTIONS(641),
  },
  [119] = {
    [aux_sym_str_literal_repeat1] = STATE(119),
    [aux_sym_str_literal_token1] = ACTIONS(643),
    [anon_sym_DQUOTE2] = ACTIONS(646),
    [sym_escape_sequence] = ACTIONS(648),
  },
  [120] = {
    [sym_interface_fn] = STATE(164),
    [anon_sym_Fn] = ACTIONS(651),
    [anon_sym_] = ACTIONS(651),
  },
  [121] = {
    [aux_sym_parameters_repeat1] = STATE(123),
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym_identifier] = ACTIONS(655),
  },
  [122] = {
    [aux_sym_let_pairs_repeat1] = STATE(124),
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym_identifier] = ACTIONS(659),
  },
  [123] = {
    [aux_sym_parameters_repeat1] = STATE(125),
    [anon_sym_RBRACK] = ACTIONS(661),
    [sym_identifier] = ACTIONS(663),
  },
  [124] = {
    [aux_sym_let_pairs_repeat1] = STATE(126),
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym_identifier] = ACTIONS(659),
  },
  [125] = {
    [aux_sym_parameters_repeat1] = STATE(125),
    [anon_sym_RBRACK] = ACTIONS(667),
    [sym_identifier] = ACTIONS(669),
  },
  [126] = {
    [aux_sym_let_pairs_repeat1] = STATE(126),
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_identifier] = ACTIONS(674),
  },
  [127] = {
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_identifier] = ACTIONS(389),
  },
  [128] = {
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
  },
  [129] = {
    [anon_sym_RBRACK] = ACTIONS(357),
    [sym_identifier] = ACTIONS(357),
  },
  [130] = {
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
  },
  [131] = {
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
  },
  [132] = {
    [aux_sym_str_literal_token1] = ACTIONS(677),
    [sym_escape_sequence] = ACTIONS(679),
  },
  [133] = {
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
  },
  [134] = {
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_identifier] = ACTIONS(681),
  },
  [135] = {
    [sym_parameters] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(683),
  },
  [136] = {
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_identifier] = ACTIONS(369),
  },
  [137] = {
    [aux_sym_str_literal_token1] = ACTIONS(685),
    [sym_escape_sequence] = ACTIONS(687),
  },
  [138] = {
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_identifier] = ACTIONS(373),
  },
  [139] = {
    [sym_typed_parameters] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(689),
  },
  [140] = {
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_identifier] = ACTIONS(377),
  },
  [141] = {
    [sym_parameters] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(683),
  },
  [142] = {
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_identifier] = ACTIONS(381),
  },
  [143] = {
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym_identifier] = ACTIONS(385),
  },
  [144] = {
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
  },
  [145] = {
    [sym_let_pairs] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(691),
  },
  [146] = {
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_identifier] = ACTIONS(397),
  },
  [147] = {
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_identifier] = ACTIONS(393),
  },
  [148] = {
    [aux_sym_str_literal_token1] = ACTIONS(693),
    [sym_escape_sequence] = ACTIONS(695),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(697),
  },
  [150] = {
    [sym_identifier] = ACTIONS(699),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(701),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(703),
  },
  [153] = {
    [sym_identifier] = ACTIONS(705),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(707),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(709),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(711),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(713),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(715),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(717),
  },
  [160] = {
    [sym_identifier] = ACTIONS(719),
  },
  [161] = {
    [sym_identifier] = ACTIONS(721),
  },
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(723),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(725),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(727),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(729),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(731),
  },
  [167] = {
    [aux_sym_line_comment_token1] = ACTIONS(733),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(735),
  },
  [169] = {
    [sym_identifier] = ACTIONS(737),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(739),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(741),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(743),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(167),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(150),
  [11] = {.count = 1, .reusable = false}, SHIFT(141),
  [13] = {.count = 1, .reusable = false}, SHIFT(153),
  [15] = {.count = 1, .reusable = false}, SHIFT(145),
  [17] = {.count = 1, .reusable = true}, SHIFT(69),
  [19] = {.count = 1, .reusable = false}, SHIFT(13),
  [21] = {.count = 1, .reusable = false}, SHIFT(25),
  [23] = {.count = 1, .reusable = false}, SHIFT(27),
  [25] = {.count = 1, .reusable = false}, SHIFT(35),
  [27] = {.count = 1, .reusable = false}, SHIFT(31),
  [29] = {.count = 1, .reusable = false}, SHIFT(169),
  [31] = {.count = 1, .reusable = false}, SHIFT(57),
  [33] = {.count = 1, .reusable = false}, SHIFT(161),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = false}, SHIFT(166),
  [43] = {.count = 1, .reusable = true}, SHIFT(166),
  [45] = {.count = 1, .reusable = false}, SHIFT(80),
  [47] = {.count = 1, .reusable = true}, SHIFT(106),
  [49] = {.count = 1, .reusable = true}, SHIFT(132),
  [51] = {.count = 1, .reusable = true}, SHIFT(108),
  [53] = {.count = 1, .reusable = true}, SHIFT(66),
  [55] = {.count = 1, .reusable = false}, SHIFT(89),
  [57] = {.count = 1, .reusable = false}, SHIFT(171),
  [59] = {.count = 1, .reusable = true}, SHIFT(171),
  [61] = {.count = 1, .reusable = false}, SHIFT(151),
  [63] = {.count = 1, .reusable = true}, SHIFT(151),
  [65] = {.count = 1, .reusable = true}, SHIFT(59),
  [67] = {.count = 1, .reusable = true}, SHIFT(56),
  [69] = {.count = 1, .reusable = false}, SHIFT(42),
  [71] = {.count = 1, .reusable = true}, SHIFT(42),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(37),
  [77] = {.count = 1, .reusable = true}, SHIFT(23),
  [79] = {.count = 1, .reusable = true}, SHIFT(55),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(59),
  [84] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(42),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(42),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(30),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(37),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(23),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(69),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(20),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(21),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(22),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(94),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(94),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(80),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(106),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(132),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(108),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(66),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(11),
  [143] = {.count = 1, .reusable = true}, SHIFT(11),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [147] = {.count = 1, .reusable = false}, SHIFT(94),
  [149] = {.count = 1, .reusable = true}, SHIFT(94),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [153] = {.count = 1, .reusable = false}, SHIFT(12),
  [155] = {.count = 1, .reusable = true}, SHIFT(12),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(69),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(20),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(21),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(12),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(12),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(80),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(106),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(132),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(108),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(66),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [199] = {.count = 1, .reusable = false}, SHIFT(168),
  [201] = {.count = 1, .reusable = true}, SHIFT(168),
  [203] = {.count = 1, .reusable = true}, SHIFT(60),
  [205] = {.count = 1, .reusable = false}, SHIFT(99),
  [207] = {.count = 1, .reusable = true}, SHIFT(99),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [211] = {.count = 1, .reusable = false}, SHIFT(159),
  [213] = {.count = 1, .reusable = true}, SHIFT(159),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [217] = {.count = 1, .reusable = false}, SHIFT(149),
  [219] = {.count = 1, .reusable = true}, SHIFT(149),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [223] = {.count = 1, .reusable = false}, SHIFT(162),
  [225] = {.count = 1, .reusable = true}, SHIFT(162),
  [227] = {.count = 1, .reusable = true}, SHIFT(4),
  [229] = {.count = 1, .reusable = true}, SHIFT(63),
  [231] = {.count = 1, .reusable = true}, SHIFT(24),
  [233] = {.count = 1, .reusable = true}, SHIFT(19),
  [235] = {.count = 1, .reusable = true}, SHIFT(28),
  [237] = {.count = 1, .reusable = false}, SHIFT(140),
  [239] = {.count = 1, .reusable = true}, SHIFT(140),
  [241] = {.count = 1, .reusable = false}, SHIFT(133),
  [243] = {.count = 1, .reusable = true}, SHIFT(118),
  [245] = {.count = 1, .reusable = true}, SHIFT(148),
  [247] = {.count = 1, .reusable = true}, SHIFT(117),
  [249] = {.count = 1, .reusable = true}, SHIFT(65),
  [251] = {.count = 1, .reusable = false}, SHIFT(100),
  [253] = {.count = 1, .reusable = true}, SHIFT(100),
  [255] = {.count = 1, .reusable = false}, SHIFT(102),
  [257] = {.count = 1, .reusable = true}, SHIFT(102),
  [259] = {.count = 1, .reusable = false}, SHIFT(93),
  [261] = {.count = 1, .reusable = true}, SHIFT(93),
  [263] = {.count = 1, .reusable = true}, SHIFT(2),
  [265] = {.count = 1, .reusable = true}, SHIFT(72),
  [267] = {.count = 1, .reusable = false}, SHIFT(49),
  [269] = {.count = 1, .reusable = true}, SHIFT(49),
  [271] = {.count = 1, .reusable = false}, SHIFT(38),
  [273] = {.count = 1, .reusable = true}, SHIFT(111),
  [275] = {.count = 1, .reusable = true}, SHIFT(137),
  [277] = {.count = 1, .reusable = true}, SHIFT(110),
  [279] = {.count = 1, .reusable = true}, SHIFT(71),
  [281] = {.count = 1, .reusable = false}, SHIFT(138),
  [283] = {.count = 1, .reusable = true}, SHIFT(138),
  [285] = {.count = 1, .reusable = false}, SHIFT(29),
  [287] = {.count = 1, .reusable = true}, SHIFT(29),
  [289] = {.count = 1, .reusable = false}, SHIFT(165),
  [291] = {.count = 1, .reusable = true}, SHIFT(165),
  [293] = {.count = 1, .reusable = false}, SHIFT(17),
  [295] = {.count = 1, .reusable = true}, SHIFT(17),
  [297] = {.count = 1, .reusable = false}, SHIFT(142),
  [299] = {.count = 1, .reusable = true}, SHIFT(142),
  [301] = {.count = 1, .reusable = false}, SHIFT(32),
  [303] = {.count = 1, .reusable = true}, SHIFT(32),
  [305] = {.count = 1, .reusable = false}, SHIFT(47),
  [307] = {.count = 1, .reusable = true}, SHIFT(47),
  [309] = {.count = 1, .reusable = false}, SHIFT(157),
  [311] = {.count = 1, .reusable = true}, SHIFT(157),
  [313] = {.count = 1, .reusable = false}, SHIFT(152),
  [315] = {.count = 1, .reusable = true}, SHIFT(152),
  [317] = {.count = 1, .reusable = false}, SHIFT(154),
  [319] = {.count = 1, .reusable = true}, SHIFT(154),
  [321] = {.count = 1, .reusable = false}, SHIFT(134),
  [323] = {.count = 1, .reusable = true}, SHIFT(134),
  [325] = {.count = 1, .reusable = false}, SHIFT(158),
  [327] = {.count = 1, .reusable = true}, SHIFT(158),
  [329] = {.count = 1, .reusable = false}, SHIFT(163),
  [331] = {.count = 1, .reusable = true}, SHIFT(163),
  [333] = {.count = 1, .reusable = false}, SHIFT(48),
  [335] = {.count = 1, .reusable = true}, SHIFT(48),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [413] = {.count = 1, .reusable = true}, SHIFT(97),
  [415] = {.count = 1, .reusable = false}, SHIFT(62),
  [417] = {.count = 1, .reusable = true}, SHIFT(62),
  [419] = {.count = 1, .reusable = true}, SHIFT(44),
  [421] = {.count = 1, .reusable = false}, SHIFT(61),
  [423] = {.count = 1, .reusable = true}, SHIFT(61),
  [425] = {.count = 1, .reusable = true}, SHIFT(101),
  [427] = {.count = 1, .reusable = false}, SHIFT(58),
  [429] = {.count = 1, .reusable = true}, SHIFT(58),
  [431] = {.count = 1, .reusable = true}, SHIFT(45),
  [433] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [435] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(62),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(62),
  [441] = {.count = 1, .reusable = true}, SHIFT(136),
  [443] = {.count = 1, .reusable = false}, SHIFT(75),
  [445] = {.count = 1, .reusable = true}, SHIFT(75),
  [447] = {.count = 1, .reusable = false}, SHIFT(81),
  [449] = {.count = 1, .reusable = true}, SHIFT(81),
  [451] = {.count = 1, .reusable = true}, SHIFT(131),
  [453] = {.count = 1, .reusable = true}, SHIFT(128),
  [455] = {.count = 1, .reusable = true}, SHIFT(78),
  [457] = {.count = 1, .reusable = true}, SHIFT(40),
  [459] = {.count = 1, .reusable = true}, SHIFT(88),
  [461] = {.count = 1, .reusable = true}, SHIFT(77),
  [463] = {.count = 1, .reusable = false}, SHIFT(73),
  [465] = {.count = 1, .reusable = true}, SHIFT(73),
  [467] = {.count = 1, .reusable = true}, SHIFT(51),
  [469] = {.count = 1, .reusable = false}, SHIFT(76),
  [471] = {.count = 1, .reusable = true}, SHIFT(76),
  [473] = {.count = 1, .reusable = true}, SHIFT(54),
  [475] = {.count = 1, .reusable = true}, SHIFT(46),
  [477] = {.count = 1, .reusable = false}, SHIFT(70),
  [479] = {.count = 1, .reusable = true}, SHIFT(70),
  [481] = {.count = 1, .reusable = true}, SHIFT(79),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(69),
  [486] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(81),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(81),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(80),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(106),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(132),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(108),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(66),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20),
  [509] = {.count = 1, .reusable = true}, SHIFT(127),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(69),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(76),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(76),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(80),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(106),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(132),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(108),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(66),
  [537] = {.count = 1, .reusable = false}, SHIFT(103),
  [539] = {.count = 1, .reusable = true}, SHIFT(103),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [543] = {.count = 1, .reusable = true}, SHIFT(160),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 21),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 21),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [559] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [561] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [575] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [577] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [581] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [589] = {.count = 1, .reusable = false}, SHIFT(115),
  [591] = {.count = 1, .reusable = true}, SHIFT(87),
  [593] = {.count = 1, .reusable = true}, SHIFT(115),
  [595] = {.count = 1, .reusable = false}, SHIFT(119),
  [597] = {.count = 1, .reusable = true}, SHIFT(41),
  [599] = {.count = 1, .reusable = true}, SHIFT(119),
  [601] = {.count = 1, .reusable = false}, SHIFT(116),
  [603] = {.count = 1, .reusable = true}, SHIFT(85),
  [605] = {.count = 1, .reusable = true}, SHIFT(116),
  [607] = {.count = 1, .reusable = true}, SHIFT(43),
  [609] = {.count = 1, .reusable = false}, SHIFT(107),
  [611] = {.count = 1, .reusable = true}, SHIFT(53),
  [613] = {.count = 1, .reusable = true}, SHIFT(107),
  [615] = {.count = 1, .reusable = false}, SHIFT(109),
  [617] = {.count = 1, .reusable = true}, SHIFT(50),
  [619] = {.count = 1, .reusable = true}, SHIFT(109),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [623] = {.count = 1, .reusable = true}, SHIFT(130),
  [625] = {.count = 1, .reusable = true}, SHIFT(129),
  [627] = {.count = 1, .reusable = true}, SHIFT(84),
  [629] = {.count = 1, .reusable = true}, SHIFT(86),
  [631] = {.count = 1, .reusable = false}, SHIFT(113),
  [633] = {.count = 1, .reusable = true}, SHIFT(146),
  [635] = {.count = 1, .reusable = true}, SHIFT(113),
  [637] = {.count = 1, .reusable = false}, SHIFT(114),
  [639] = {.count = 1, .reusable = true}, SHIFT(143),
  [641] = {.count = 1, .reusable = true}, SHIFT(114),
  [643] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(119),
  [646] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(119),
  [651] = {.count = 1, .reusable = true}, SHIFT(139),
  [653] = {.count = 1, .reusable = true}, SHIFT(96),
  [655] = {.count = 1, .reusable = true}, SHIFT(123),
  [657] = {.count = 1, .reusable = true}, SHIFT(90),
  [659] = {.count = 1, .reusable = true}, SHIFT(34),
  [661] = {.count = 1, .reusable = true}, SHIFT(92),
  [663] = {.count = 1, .reusable = true}, SHIFT(125),
  [665] = {.count = 1, .reusable = true}, SHIFT(95),
  [667] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(125),
  [672] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25), SHIFT_REPEAT(34),
  [677] = {.count = 1, .reusable = false}, SHIFT(83),
  [679] = {.count = 1, .reusable = true}, SHIFT(83),
  [681] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [683] = {.count = 1, .reusable = true}, SHIFT(121),
  [685] = {.count = 1, .reusable = false}, SHIFT(39),
  [687] = {.count = 1, .reusable = true}, SHIFT(39),
  [689] = {.count = 1, .reusable = true}, SHIFT(6),
  [691] = {.count = 1, .reusable = true}, SHIFT(122),
  [693] = {.count = 1, .reusable = false}, SHIFT(144),
  [695] = {.count = 1, .reusable = true}, SHIFT(144),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [699] = {.count = 1, .reusable = true}, SHIFT(33),
  [701] = {.count = 1, .reusable = true}, SHIFT(147),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 26),
  [705] = {.count = 1, .reusable = true}, SHIFT(135),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 27),
  [711] = {.count = 1, .reusable = true}, SHIFT(120),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [719] = {.count = 1, .reusable = true}, SHIFT(91),
  [721] = {.count = 1, .reusable = true}, SHIFT(156),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 16),
  [727] = {.count = 1, .reusable = true}, SHIFT(155),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 17),
  [731] = {.count = 1, .reusable = true}, SHIFT(52),
  [733] = {.count = 1, .reusable = true}, SHIFT(112),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 22),
  [737] = {.count = 1, .reusable = true}, SHIFT(36),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 28),
  [741] = {.count = 1, .reusable = true}, SHIFT(82),
  [743] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
