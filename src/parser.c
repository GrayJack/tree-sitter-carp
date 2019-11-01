#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 127
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 4

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
  anon_sym_AMP = 36,
  anon_sym_AT = 37,
  anon_sym_TILDE = 38,
  sym_integer_literal = 39,
  sym_float_literal = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_str_literal_token1 = 44,
  anon_sym_DQUOTE2 = 45,
  anon_sym_BSLASH = 46,
  anon_sym_POUND_DQUOTE = 47,
  sym_escape_sequence = 48,
  anon_sym_LBRACE = 49,
  anon_sym_RBRACE = 50,
  sym_identifier = 51,
  sym_source_file = 52,
  sym_line_comment = 53,
  sym__s_expr = 54,
  sym__expr = 55,
  sym__anything = 56,
  sym__s_forms = 57,
  sym__literals = 58,
  sym__short_helper = 59,
  sym_def = 60,
  sym_fn = 61,
  sym_defn = 62,
  sym_let = 63,
  sym_let_pairs = 64,
  sym_do = 65,
  sym_if = 66,
  sym_while = 67,
  sym_ref = 68,
  sym_address = 69,
  sym_set = 70,
  sym_the = 71,
  sym_type = 72,
  sym__complex_type = 73,
  sym_call_expression = 74,
  sym_call_name = 75,
  sym_short_ref = 76,
  sym_short_copy = 77,
  sym_short_fn_ref = 78,
  sym_parameters = 79,
  sym_bool_literal = 80,
  sym_str_literal = 81,
  sym_char_literal = 82,
  sym_pattern_literal = 83,
  sym_array_expression = 84,
  sym_map_expression = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_let_pairs_repeat1 = 87,
  aux_sym_do_repeat1 = 88,
  aux_sym__complex_type_repeat1 = 89,
  aux_sym_call_expression_repeat1 = 90,
  aux_sym_parameters_repeat1 = 91,
  aux_sym_str_literal_repeat1 = 92,
  aux_sym_array_expression_repeat1 = 93,
  aux_sym_map_expression_repeat1 = 94,
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
  [sym__complex_type] = "_complex_type",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
  [sym_short_ref] = "short_ref",
  [sym_short_copy] = "short_copy",
  [sym_short_fn_ref] = "short_fn_ref",
  [sym_parameters] = "parameters",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_pairs_repeat1] = "let_pairs_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym__complex_type_repeat1] = "_complex_type_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
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
  [sym__complex_type] = {
    .visible = false,
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
  [aux_sym__complex_type_repeat1] = {
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
  field_key = 7,
  field_module = 8,
  field_name = 9,
  field_pairs = 10,
  field_parameters = 11,
  field_then = 12,
  field_type = 13,
  field_value = 14,
  field_var = 15,
  field_variable = 16,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_expr] = "expr",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_then] = "then",
  [field_type] = "type",
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
};

static TSSymbol ts_alias_sequences[27][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(17);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(17);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(17);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'V') ADVANCE(89);
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
          ('<' <= lookahead && lookahead <= '?') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(28);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_def);
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
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 24:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 25:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 26:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 30:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 31:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 32:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 33:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 34:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 35:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 36:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 37:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 38:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 39:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 40:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 41:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 44:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 45:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 46:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 47:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 48:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 49:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 50:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 51:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 52:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 62:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(34);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 76:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 81:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 104:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(90);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 115:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 121:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 129:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 131:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 132:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 133:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 144:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 152:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
      END_STATE();
    case 155:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(155);
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
  [4] = {.lex_state = 2},
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
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
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
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
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
    [sym_source_file] = STATE(126),
    [sym_line_comment] = STATE(72),
    [sym__s_expr] = STATE(72),
    [aux_sym_source_file_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(121),
    [sym__s_expr] = STATE(121),
    [sym__anything] = STATE(121),
    [sym__s_forms] = STATE(121),
    [sym__literals] = STATE(121),
    [sym__short_helper] = STATE(121),
    [sym_def] = STATE(121),
    [sym_fn] = STATE(121),
    [sym_defn] = STATE(121),
    [sym_let] = STATE(121),
    [sym_do] = STATE(121),
    [sym_if] = STATE(121),
    [sym_while] = STATE(121),
    [sym_ref] = STATE(121),
    [sym_address] = STATE(121),
    [sym_set] = STATE(121),
    [sym_the] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_call_name] = STATE(9),
    [sym_short_ref] = STATE(121),
    [sym_short_copy] = STATE(121),
    [sym_short_fn_ref] = STATE(57),
    [sym_bool_literal] = STATE(121),
    [sym_str_literal] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_pattern_literal] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_map_expression] = STATE(121),
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
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [3] = {
    [sym_line_comment] = STATE(118),
    [sym__s_expr] = STATE(118),
    [sym__anything] = STATE(118),
    [sym__s_forms] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_def] = STATE(118),
    [sym_fn] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_let] = STATE(118),
    [sym_do] = STATE(118),
    [sym_if] = STATE(118),
    [sym_while] = STATE(118),
    [sym_ref] = STATE(118),
    [sym_address] = STATE(118),
    [sym_set] = STATE(118),
    [sym_the] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_call_name] = STATE(9),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(57),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
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
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(55),
    [sym_float_literal] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
  },
  [4] = {
    [sym__s_expr] = STATE(4),
    [sym__expr] = STATE(4),
    [sym__literals] = STATE(4),
    [sym__short_helper] = STATE(4),
    [sym_short_ref] = STATE(4),
    [sym_short_copy] = STATE(4),
    [sym_short_fn_ref] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_pattern_literal] = STATE(4),
    [sym_array_expression] = STATE(4),
    [sym_map_expression] = STATE(4),
    [aux_sym_call_expression_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(73),
    [sym_integer_literal] = ACTIONS(76),
    [sym_float_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(88),
    [anon_sym_POUND_DQUOTE] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(76),
  },
  [5] = {
    [sym__s_expr] = STATE(4),
    [sym__expr] = STATE(4),
    [sym__literals] = STATE(4),
    [sym__short_helper] = STATE(4),
    [sym_short_ref] = STATE(4),
    [sym_short_copy] = STATE(4),
    [sym_short_fn_ref] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_pattern_literal] = STATE(4),
    [sym_array_expression] = STATE(4),
    [sym_map_expression] = STATE(4),
    [aux_sym_call_expression_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(99),
    [sym_float_literal] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(99),
  },
  [6] = {
    [sym__s_expr] = STATE(66),
    [sym__expr] = STATE(66),
    [sym__literals] = STATE(66),
    [sym__short_helper] = STATE(66),
    [sym_short_ref] = STATE(66),
    [sym_short_copy] = STATE(66),
    [sym_short_fn_ref] = STATE(66),
    [sym_bool_literal] = STATE(66),
    [sym_str_literal] = STATE(66),
    [sym_char_literal] = STATE(66),
    [sym_pattern_literal] = STATE(66),
    [sym_array_expression] = STATE(66),
    [sym_map_expression] = STATE(66),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(105),
    [sym_float_literal] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(105),
  },
  [7] = {
    [sym__s_expr] = STATE(66),
    [sym__expr] = STATE(66),
    [sym__literals] = STATE(66),
    [sym__short_helper] = STATE(66),
    [sym_short_ref] = STATE(66),
    [sym_short_copy] = STATE(66),
    [sym_short_fn_ref] = STATE(66),
    [sym_bool_literal] = STATE(66),
    [sym_str_literal] = STATE(66),
    [sym_char_literal] = STATE(66),
    [sym_pattern_literal] = STATE(66),
    [sym_array_expression] = STATE(66),
    [sym_map_expression] = STATE(66),
    [aux_sym_do_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(123),
    [sym_integer_literal] = ACTIONS(126),
    [sym_float_literal] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_BSLASH] = ACTIONS(138),
    [anon_sym_POUND_DQUOTE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(144),
    [sym_identifier] = ACTIONS(126),
  },
  [8] = {
    [sym__s_expr] = STATE(66),
    [sym__expr] = STATE(66),
    [sym__literals] = STATE(66),
    [sym__short_helper] = STATE(66),
    [sym_short_ref] = STATE(66),
    [sym_short_copy] = STATE(66),
    [sym_short_fn_ref] = STATE(66),
    [sym_bool_literal] = STATE(66),
    [sym_str_literal] = STATE(66),
    [sym_char_literal] = STATE(66),
    [sym_pattern_literal] = STATE(66),
    [sym_array_expression] = STATE(66),
    [sym_map_expression] = STATE(66),
    [aux_sym_do_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(105),
    [sym_float_literal] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(105),
  },
  [9] = {
    [sym__s_expr] = STATE(5),
    [sym__expr] = STATE(5),
    [sym__literals] = STATE(5),
    [sym__short_helper] = STATE(5),
    [sym_short_ref] = STATE(5),
    [sym_short_copy] = STATE(5),
    [sym_short_fn_ref] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_call_expression_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(151),
    [sym_float_literal] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(151),
  },
  [10] = {
    [sym__s_expr] = STATE(116),
    [sym__expr] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__short_helper] = STATE(116),
    [sym_short_ref] = STATE(116),
    [sym_short_copy] = STATE(116),
    [sym_short_fn_ref] = STATE(116),
    [sym_bool_literal] = STATE(116),
    [sym_str_literal] = STATE(116),
    [sym_char_literal] = STATE(116),
    [sym_pattern_literal] = STATE(116),
    [sym_array_expression] = STATE(116),
    [sym_map_expression] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(157),
    [sym_float_literal] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(157),
  },
  [11] = {
    [sym__s_expr] = STATE(110),
    [sym__expr] = STATE(110),
    [sym__literals] = STATE(110),
    [sym__short_helper] = STATE(110),
    [sym_short_ref] = STATE(110),
    [sym_short_copy] = STATE(110),
    [sym_short_fn_ref] = STATE(110),
    [sym_bool_literal] = STATE(110),
    [sym_str_literal] = STATE(110),
    [sym_char_literal] = STATE(110),
    [sym_pattern_literal] = STATE(110),
    [sym_array_expression] = STATE(110),
    [sym_map_expression] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(163),
    [sym_float_literal] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(163),
  },
  [12] = {
    [sym__s_expr] = STATE(122),
    [sym__expr] = STATE(122),
    [sym__literals] = STATE(122),
    [sym__short_helper] = STATE(122),
    [sym_short_ref] = STATE(122),
    [sym_short_copy] = STATE(122),
    [sym_short_fn_ref] = STATE(122),
    [sym_bool_literal] = STATE(122),
    [sym_str_literal] = STATE(122),
    [sym_char_literal] = STATE(122),
    [sym_pattern_literal] = STATE(122),
    [sym_array_expression] = STATE(122),
    [sym_map_expression] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(169),
    [sym_float_literal] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(169),
  },
  [13] = {
    [sym__s_expr] = STATE(124),
    [sym__expr] = STATE(124),
    [sym__literals] = STATE(124),
    [sym__short_helper] = STATE(124),
    [sym_short_ref] = STATE(124),
    [sym_short_copy] = STATE(124),
    [sym_short_fn_ref] = STATE(124),
    [sym_bool_literal] = STATE(124),
    [sym_str_literal] = STATE(124),
    [sym_char_literal] = STATE(124),
    [sym_pattern_literal] = STATE(124),
    [sym_array_expression] = STATE(124),
    [sym_map_expression] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(175),
    [sym_float_literal] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(175),
  },
  [14] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(179),
    [sym_float_literal] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(179),
  },
  [15] = {
    [sym__s_expr] = STATE(89),
    [sym__expr] = STATE(89),
    [sym__literals] = STATE(89),
    [sym__short_helper] = STATE(89),
    [sym_short_ref] = STATE(89),
    [sym_short_copy] = STATE(89),
    [sym_short_fn_ref] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(193),
    [sym_float_literal] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(193),
  },
  [16] = {
    [sym__s_expr] = STATE(117),
    [sym__expr] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__short_helper] = STATE(117),
    [sym_short_ref] = STATE(117),
    [sym_short_copy] = STATE(117),
    [sym_short_fn_ref] = STATE(117),
    [sym_bool_literal] = STATE(117),
    [sym_str_literal] = STATE(117),
    [sym_char_literal] = STATE(117),
    [sym_pattern_literal] = STATE(117),
    [sym_array_expression] = STATE(117),
    [sym_map_expression] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(207),
    [sym_float_literal] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(207),
  },
  [17] = {
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_short_ref] = STATE(119),
    [sym_short_copy] = STATE(119),
    [sym_short_fn_ref] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(211),
  },
  [18] = {
    [sym__s_expr] = STATE(109),
    [sym__expr] = STATE(109),
    [sym__literals] = STATE(109),
    [sym__short_helper] = STATE(109),
    [sym_short_ref] = STATE(109),
    [sym_short_copy] = STATE(109),
    [sym_short_fn_ref] = STATE(109),
    [sym_bool_literal] = STATE(109),
    [sym_str_literal] = STATE(109),
    [sym_char_literal] = STATE(109),
    [sym_pattern_literal] = STATE(109),
    [sym_array_expression] = STATE(109),
    [sym_map_expression] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(215),
    [sym_float_literal] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(215),
  },
  [19] = {
    [sym__s_expr] = STATE(111),
    [sym__expr] = STATE(111),
    [sym__literals] = STATE(111),
    [sym__short_helper] = STATE(111),
    [sym_short_ref] = STATE(111),
    [sym_short_copy] = STATE(111),
    [sym_short_fn_ref] = STATE(111),
    [sym_bool_literal] = STATE(111),
    [sym_str_literal] = STATE(111),
    [sym_char_literal] = STATE(111),
    [sym_pattern_literal] = STATE(111),
    [sym_array_expression] = STATE(111),
    [sym_map_expression] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(219),
    [sym_float_literal] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(219),
  },
  [20] = {
    [sym__s_expr] = STATE(64),
    [sym__expr] = STATE(64),
    [sym__literals] = STATE(64),
    [sym__short_helper] = STATE(64),
    [sym_short_ref] = STATE(64),
    [sym_short_copy] = STATE(64),
    [sym_short_fn_ref] = STATE(64),
    [sym_bool_literal] = STATE(64),
    [sym_str_literal] = STATE(64),
    [sym_char_literal] = STATE(64),
    [sym_pattern_literal] = STATE(64),
    [sym_array_expression] = STATE(64),
    [sym_map_expression] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(223),
    [sym_float_literal] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(223),
  },
  [21] = {
    [sym__s_expr] = STATE(59),
    [sym__expr] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__short_helper] = STATE(59),
    [sym_short_ref] = STATE(59),
    [sym_short_copy] = STATE(59),
    [sym_short_fn_ref] = STATE(59),
    [sym_bool_literal] = STATE(59),
    [sym_str_literal] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_pattern_literal] = STATE(59),
    [sym_array_expression] = STATE(59),
    [sym_map_expression] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(227),
    [sym_float_literal] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(227),
  },
  [22] = {
    [sym__s_expr] = STATE(60),
    [sym__expr] = STATE(60),
    [sym__literals] = STATE(60),
    [sym__short_helper] = STATE(60),
    [sym_short_ref] = STATE(60),
    [sym_short_copy] = STATE(60),
    [sym_short_fn_ref] = STATE(60),
    [sym_bool_literal] = STATE(60),
    [sym_str_literal] = STATE(60),
    [sym_char_literal] = STATE(60),
    [sym_pattern_literal] = STATE(60),
    [sym_array_expression] = STATE(60),
    [sym_map_expression] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(231),
    [sym_float_literal] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(231),
  },
  [23] = {
    [sym__s_expr] = STATE(103),
    [sym__expr] = STATE(103),
    [sym__literals] = STATE(103),
    [sym__short_helper] = STATE(103),
    [sym_short_ref] = STATE(103),
    [sym_short_copy] = STATE(103),
    [sym_short_fn_ref] = STATE(103),
    [sym_bool_literal] = STATE(103),
    [sym_str_literal] = STATE(103),
    [sym_char_literal] = STATE(103),
    [sym_pattern_literal] = STATE(103),
    [sym_array_expression] = STATE(103),
    [sym_map_expression] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(235),
    [sym_float_literal] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(235),
  },
  [24] = {
    [sym__s_expr] = STATE(27),
    [sym__expr] = STATE(27),
    [sym__literals] = STATE(27),
    [sym__short_helper] = STATE(27),
    [sym_short_ref] = STATE(27),
    [sym_short_copy] = STATE(27),
    [sym_short_fn_ref] = STATE(27),
    [sym_bool_literal] = STATE(27),
    [sym_str_literal] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_pattern_literal] = STATE(27),
    [sym_array_expression] = STATE(27),
    [sym_map_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(239),
    [sym_float_literal] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(239),
  },
  [25] = {
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
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(243),
  },
  [26] = {
    [sym__s_expr] = STATE(101),
    [sym__expr] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__short_helper] = STATE(101),
    [sym_short_ref] = STATE(101),
    [sym_short_copy] = STATE(101),
    [sym_short_fn_ref] = STATE(101),
    [sym_bool_literal] = STATE(101),
    [sym_str_literal] = STATE(101),
    [sym_char_literal] = STATE(101),
    [sym_pattern_literal] = STATE(101),
    [sym_array_expression] = STATE(101),
    [sym_map_expression] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(247),
    [sym_float_literal] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(247),
  },
  [27] = {
    [sym__s_expr] = STATE(112),
    [sym__expr] = STATE(112),
    [sym__literals] = STATE(112),
    [sym__short_helper] = STATE(112),
    [sym_short_ref] = STATE(112),
    [sym_short_copy] = STATE(112),
    [sym_short_fn_ref] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(251),
    [sym_float_literal] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(251),
  },
  [28] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(255),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(255),
  },
  [29] = {
    [sym__s_expr] = STATE(24),
    [sym__expr] = STATE(24),
    [sym__literals] = STATE(24),
    [sym__short_helper] = STATE(24),
    [sym_short_ref] = STATE(24),
    [sym_short_copy] = STATE(24),
    [sym_short_fn_ref] = STATE(24),
    [sym_bool_literal] = STATE(24),
    [sym_str_literal] = STATE(24),
    [sym_char_literal] = STATE(24),
    [sym_pattern_literal] = STATE(24),
    [sym_array_expression] = STATE(24),
    [sym_map_expression] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(259),
    [sym_float_literal] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(259),
  },
  [30] = {
    [sym_type] = STATE(18),
    [sym__complex_type] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_Bool] = ACTIONS(265),
    [anon_sym_Char] = ACTIONS(265),
    [anon_sym_Int] = ACTIONS(265),
    [anon_sym_Long] = ACTIONS(265),
    [anon_sym_Float] = ACTIONS(265),
    [anon_sym_Double] = ACTIONS(265),
    [anon_sym_Vector2] = ACTIONS(267),
    [anon_sym_Vector3] = ACTIONS(267),
    [anon_sym_VectorN] = ACTIONS(265),
    [anon_sym_String] = ACTIONS(265),
    [anon_sym_Pattern] = ACTIONS(265),
    [anon_sym_Array] = ACTIONS(265),
    [anon_sym_Map] = ACTIONS(265),
    [anon_sym_Maybe] = ACTIONS(265),
    [anon_sym_Result] = ACTIONS(265),
    [anon_sym_Id] = ACTIONS(265),
    [anon_sym_Ptr] = ACTIONS(265),
    [sym_identifier] = ACTIONS(265),
  },
  [31] = {
    [aux_sym__complex_type_repeat1] = STATE(31),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_Bool] = ACTIONS(271),
    [anon_sym_Char] = ACTIONS(271),
    [anon_sym_Int] = ACTIONS(271),
    [anon_sym_Long] = ACTIONS(271),
    [anon_sym_Float] = ACTIONS(271),
    [anon_sym_Double] = ACTIONS(271),
    [anon_sym_Vector2] = ACTIONS(274),
    [anon_sym_Vector3] = ACTIONS(274),
    [anon_sym_VectorN] = ACTIONS(271),
    [anon_sym_String] = ACTIONS(271),
    [anon_sym_Pattern] = ACTIONS(271),
    [anon_sym_Array] = ACTIONS(271),
    [anon_sym_Map] = ACTIONS(271),
    [anon_sym_Maybe] = ACTIONS(271),
    [anon_sym_Result] = ACTIONS(271),
    [anon_sym_Id] = ACTIONS(271),
    [anon_sym_Ptr] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
  },
  [32] = {
    [aux_sym__complex_type_repeat1] = STATE(33),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_Bool] = ACTIONS(279),
    [anon_sym_Char] = ACTIONS(279),
    [anon_sym_Int] = ACTIONS(279),
    [anon_sym_Long] = ACTIONS(279),
    [anon_sym_Float] = ACTIONS(279),
    [anon_sym_Double] = ACTIONS(279),
    [anon_sym_Vector2] = ACTIONS(281),
    [anon_sym_Vector3] = ACTIONS(281),
    [anon_sym_VectorN] = ACTIONS(279),
    [anon_sym_String] = ACTIONS(279),
    [anon_sym_Pattern] = ACTIONS(279),
    [anon_sym_Array] = ACTIONS(279),
    [anon_sym_Map] = ACTIONS(279),
    [anon_sym_Maybe] = ACTIONS(279),
    [anon_sym_Result] = ACTIONS(279),
    [anon_sym_Id] = ACTIONS(279),
    [anon_sym_Ptr] = ACTIONS(279),
    [sym_identifier] = ACTIONS(279),
  },
  [33] = {
    [aux_sym__complex_type_repeat1] = STATE(31),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_Bool] = ACTIONS(285),
    [anon_sym_Char] = ACTIONS(285),
    [anon_sym_Int] = ACTIONS(285),
    [anon_sym_Long] = ACTIONS(285),
    [anon_sym_Float] = ACTIONS(285),
    [anon_sym_Double] = ACTIONS(285),
    [anon_sym_Vector2] = ACTIONS(287),
    [anon_sym_Vector3] = ACTIONS(287),
    [anon_sym_VectorN] = ACTIONS(285),
    [anon_sym_String] = ACTIONS(285),
    [anon_sym_Pattern] = ACTIONS(285),
    [anon_sym_Array] = ACTIONS(285),
    [anon_sym_Map] = ACTIONS(285),
    [anon_sym_Maybe] = ACTIONS(285),
    [anon_sym_Result] = ACTIONS(285),
    [anon_sym_Id] = ACTIONS(285),
    [anon_sym_Ptr] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
  },
  [34] = {
    [sym__literals] = STATE(50),
    [sym_bool_literal] = STATE(50),
    [sym_str_literal] = STATE(50),
    [sym_char_literal] = STATE(50),
    [sym_pattern_literal] = STATE(50),
    [sym_array_expression] = STATE(50),
    [sym_map_expression] = STATE(50),
    [aux_sym_map_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_integer_literal] = ACTIONS(292),
    [sym_float_literal] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(298),
    [anon_sym_false] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(313),
    [sym_identifier] = ACTIONS(292),
  },
  [35] = {
    [sym__literals] = STATE(39),
    [sym_bool_literal] = STATE(39),
    [sym_str_literal] = STATE(39),
    [sym_char_literal] = STATE(39),
    [sym_pattern_literal] = STATE(39),
    [sym_array_expression] = STATE(39),
    [sym_map_expression] = STATE(39),
    [aux_sym_array_expression_repeat1] = STATE(39),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_integer_literal] = ACTIONS(317),
    [sym_float_literal] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(317),
  },
  [36] = {
    [sym__literals] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_pattern_literal] = STATE(38),
    [sym_array_expression] = STATE(38),
    [sym_map_expression] = STATE(38),
    [aux_sym_array_expression_repeat1] = STATE(38),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_integer_literal] = ACTIONS(323),
    [sym_float_literal] = ACTIONS(325),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(323),
  },
  [37] = {
    [sym__literals] = STATE(50),
    [sym_bool_literal] = STATE(50),
    [sym_str_literal] = STATE(50),
    [sym_char_literal] = STATE(50),
    [sym_pattern_literal] = STATE(50),
    [sym_array_expression] = STATE(50),
    [sym_map_expression] = STATE(50),
    [aux_sym_map_expression_repeat1] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(331),
    [sym_identifier] = ACTIONS(327),
  },
  [38] = {
    [sym__literals] = STATE(40),
    [sym_bool_literal] = STATE(40),
    [sym_str_literal] = STATE(40),
    [sym_char_literal] = STATE(40),
    [sym_pattern_literal] = STATE(40),
    [sym_array_expression] = STATE(40),
    [sym_map_expression] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_integer_literal] = ACTIONS(335),
    [sym_float_literal] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(335),
  },
  [39] = {
    [sym__literals] = STATE(40),
    [sym_bool_literal] = STATE(40),
    [sym_str_literal] = STATE(40),
    [sym_char_literal] = STATE(40),
    [sym_pattern_literal] = STATE(40),
    [sym_array_expression] = STATE(40),
    [sym_map_expression] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_integer_literal] = ACTIONS(335),
    [sym_float_literal] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(335),
  },
  [40] = {
    [sym__literals] = STATE(40),
    [sym_bool_literal] = STATE(40),
    [sym_str_literal] = STATE(40),
    [sym_char_literal] = STATE(40),
    [sym_pattern_literal] = STATE(40),
    [sym_array_expression] = STATE(40),
    [sym_map_expression] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym_integer_literal] = ACTIONS(346),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(352),
    [anon_sym_false] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [anon_sym_BSLASH] = ACTIONS(358),
    [anon_sym_POUND_DQUOTE] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(364),
    [sym_identifier] = ACTIONS(346),
  },
  [41] = {
    [sym__literals] = STATE(50),
    [sym_bool_literal] = STATE(50),
    [sym_str_literal] = STATE(50),
    [sym_char_literal] = STATE(50),
    [sym_pattern_literal] = STATE(50),
    [sym_array_expression] = STATE(50),
    [sym_map_expression] = STATE(50),
    [aux_sym_map_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(367),
    [sym_identifier] = ACTIONS(327),
  },
  [42] = {
    [sym__literals] = STATE(50),
    [sym_bool_literal] = STATE(50),
    [sym_str_literal] = STATE(50),
    [sym_char_literal] = STATE(50),
    [sym_pattern_literal] = STATE(50),
    [sym_array_expression] = STATE(50),
    [sym_map_expression] = STATE(50),
    [aux_sym_map_expression_repeat1] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(369),
    [sym_identifier] = ACTIONS(327),
  },
  [43] = {
    [sym__literals] = STATE(50),
    [sym_bool_literal] = STATE(50),
    [sym_str_literal] = STATE(50),
    [sym_char_literal] = STATE(50),
    [sym_pattern_literal] = STATE(50),
    [sym_array_expression] = STATE(50),
    [sym_map_expression] = STATE(50),
    [aux_sym_map_expression_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(371),
    [sym_identifier] = ACTIONS(327),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
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
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
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
    [anon_sym_RBRACE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
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
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym_identifier] = ACTIONS(383),
  },
  [47] = {
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
  [48] = {
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
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
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
    [anon_sym_RBRACE] = ACTIONS(393),
    [sym_identifier] = ACTIONS(395),
  },
  [50] = {
    [sym__literals] = STATE(70),
    [sym_bool_literal] = STATE(70),
    [sym_str_literal] = STATE(70),
    [sym_char_literal] = STATE(70),
    [sym_pattern_literal] = STATE(70),
    [sym_array_expression] = STATE(70),
    [sym_map_expression] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(397),
    [sym_float_literal] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(397),
  },
  [51] = {
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
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [sym_integer_literal] = ACTIONS(407),
    [sym_float_literal] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [sym_identifier] = ACTIONS(407),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [sym_integer_literal] = ACTIONS(411),
    [sym_float_literal] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_BSLASH] = ACTIONS(409),
    [anon_sym_POUND_DQUOTE] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [sym_integer_literal] = ACTIONS(415),
    [sym_float_literal] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_BSLASH] = ACTIONS(413),
    [anon_sym_POUND_DQUOTE] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [sym_integer_literal] = ACTIONS(419),
    [sym_float_literal] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_POUND_DQUOTE] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [sym_integer_literal] = ACTIONS(425),
    [sym_float_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_BSLASH] = ACTIONS(421),
    [anon_sym_POUND_DQUOTE] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [sym_identifier] = ACTIONS(425),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_integer_literal] = ACTIONS(429),
    [sym_float_literal] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_BSLASH] = ACTIONS(427),
    [anon_sym_POUND_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [sym_identifier] = ACTIONS(429),
  },
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [sym_integer_literal] = ACTIONS(433),
    [sym_float_literal] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_BSLASH] = ACTIONS(431),
    [anon_sym_POUND_DQUOTE] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [sym_identifier] = ACTIONS(433),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(435),
    [sym_integer_literal] = ACTIONS(437),
    [sym_float_literal] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_false] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_BSLASH] = ACTIONS(435),
    [anon_sym_POUND_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [sym_identifier] = ACTIONS(437),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(439),
    [sym_integer_literal] = ACTIONS(441),
    [sym_float_literal] = ACTIONS(439),
    [anon_sym_true] = ACTIONS(441),
    [anon_sym_false] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_BSLASH] = ACTIONS(439),
    [anon_sym_POUND_DQUOTE] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(443),
    [sym_integer_literal] = ACTIONS(445),
    [sym_float_literal] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_BSLASH] = ACTIONS(443),
    [anon_sym_POUND_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [sym_identifier] = ACTIONS(445),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(447),
    [sym_integer_literal] = ACTIONS(449),
    [sym_float_literal] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [sym_identifier] = ACTIONS(449),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(451),
    [anon_sym_TILDE] = ACTIONS(451),
    [sym_integer_literal] = ACTIONS(453),
    [sym_float_literal] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(453),
    [anon_sym_false] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [anon_sym_BSLASH] = ACTIONS(451),
    [anon_sym_POUND_DQUOTE] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [sym_identifier] = ACTIONS(453),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(455),
    [sym_integer_literal] = ACTIONS(457),
    [sym_float_literal] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(457),
    [anon_sym_false] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [anon_sym_BSLASH] = ACTIONS(455),
    [anon_sym_POUND_DQUOTE] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [sym_identifier] = ACTIONS(457),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(459),
    [sym_integer_literal] = ACTIONS(461),
    [sym_float_literal] = ACTIONS(459),
    [anon_sym_true] = ACTIONS(461),
    [anon_sym_false] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [anon_sym_BSLASH] = ACTIONS(459),
    [anon_sym_POUND_DQUOTE] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [sym_identifier] = ACTIONS(461),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_AMP] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_TILDE] = ACTIONS(463),
    [sym_integer_literal] = ACTIONS(465),
    [sym_float_literal] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(465),
    [anon_sym_false] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [anon_sym_BSLASH] = ACTIONS(463),
    [anon_sym_POUND_DQUOTE] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [sym_identifier] = ACTIONS(465),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_AMP] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(467),
    [sym_integer_literal] = ACTIONS(469),
    [sym_float_literal] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(469),
    [anon_sym_false] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_BSLASH] = ACTIONS(467),
    [anon_sym_POUND_DQUOTE] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [sym_identifier] = ACTIONS(469),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_AMP] = ACTIONS(471),
    [anon_sym_AT] = ACTIONS(471),
    [anon_sym_TILDE] = ACTIONS(471),
    [sym_integer_literal] = ACTIONS(473),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(473),
    [anon_sym_false] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_BSLASH] = ACTIONS(471),
    [anon_sym_POUND_DQUOTE] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [sym_identifier] = ACTIONS(473),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [sym_integer_literal] = ACTIONS(477),
    [sym_float_literal] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(477),
    [anon_sym_false] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [anon_sym_BSLASH] = ACTIONS(475),
    [anon_sym_POUND_DQUOTE] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_identifier] = ACTIONS(477),
  },
  [70] = {
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_integer_literal] = ACTIONS(481),
    [sym_float_literal] = ACTIONS(479),
    [anon_sym_true] = ACTIONS(481),
    [anon_sym_false] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [anon_sym_BSLASH] = ACTIONS(479),
    [anon_sym_POUND_DQUOTE] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(479),
    [sym_identifier] = ACTIONS(481),
  },
  [71] = {
    [sym_line_comment] = STATE(71),
    [sym__s_expr] = STATE(71),
    [aux_sym_source_file_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(488),
  },
  [72] = {
    [sym_line_comment] = STATE(71),
    [sym__s_expr] = STATE(71),
    [aux_sym_source_file_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [73] = {
    [aux_sym_str_literal_repeat1] = STATE(73),
    [aux_sym_str_literal_token1] = ACTIONS(493),
    [anon_sym_DQUOTE2] = ACTIONS(496),
    [sym_escape_sequence] = ACTIONS(498),
  },
  [74] = {
    [aux_sym_str_literal_repeat1] = STATE(75),
    [aux_sym_str_literal_token1] = ACTIONS(501),
    [anon_sym_DQUOTE2] = ACTIONS(503),
    [sym_escape_sequence] = ACTIONS(505),
  },
  [75] = {
    [aux_sym_str_literal_repeat1] = STATE(73),
    [aux_sym_str_literal_token1] = ACTIONS(507),
    [anon_sym_DQUOTE2] = ACTIONS(509),
    [sym_escape_sequence] = ACTIONS(511),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
  },
  [77] = {
    [aux_sym_str_literal_repeat1] = STATE(73),
    [aux_sym_str_literal_token1] = ACTIONS(507),
    [anon_sym_DQUOTE2] = ACTIONS(515),
    [sym_escape_sequence] = ACTIONS(511),
  },
  [78] = {
    [aux_sym_str_literal_repeat1] = STATE(79),
    [aux_sym_str_literal_token1] = ACTIONS(517),
    [anon_sym_DQUOTE2] = ACTIONS(519),
    [sym_escape_sequence] = ACTIONS(521),
  },
  [79] = {
    [aux_sym_str_literal_repeat1] = STATE(73),
    [aux_sym_str_literal_token1] = ACTIONS(507),
    [anon_sym_DQUOTE2] = ACTIONS(523),
    [sym_escape_sequence] = ACTIONS(511),
  },
  [80] = {
    [aux_sym_str_literal_repeat1] = STATE(77),
    [aux_sym_str_literal_token1] = ACTIONS(525),
    [anon_sym_DQUOTE2] = ACTIONS(527),
    [sym_escape_sequence] = ACTIONS(529),
  },
  [81] = {
    [aux_sym_str_literal_repeat1] = STATE(82),
    [aux_sym_str_literal_token1] = ACTIONS(531),
    [anon_sym_DQUOTE2] = ACTIONS(533),
    [sym_escape_sequence] = ACTIONS(535),
  },
  [82] = {
    [aux_sym_str_literal_repeat1] = STATE(73),
    [aux_sym_str_literal_token1] = ACTIONS(507),
    [anon_sym_DQUOTE2] = ACTIONS(537),
    [sym_escape_sequence] = ACTIONS(511),
  },
  [83] = {
    [aux_sym_let_pairs_repeat1] = STATE(87),
    [anon_sym_RBRACK] = ACTIONS(539),
    [sym_identifier] = ACTIONS(541),
  },
  [84] = {
    [aux_sym_let_pairs_repeat1] = STATE(84),
    [anon_sym_RBRACK] = ACTIONS(543),
    [sym_identifier] = ACTIONS(545),
  },
  [85] = {
    [aux_sym_parameters_repeat1] = STATE(88),
    [anon_sym_RBRACK] = ACTIONS(548),
    [sym_identifier] = ACTIONS(550),
  },
  [86] = {
    [aux_sym_parameters_repeat1] = STATE(85),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym_identifier] = ACTIONS(554),
  },
  [87] = {
    [aux_sym_let_pairs_repeat1] = STATE(84),
    [anon_sym_RBRACK] = ACTIONS(556),
    [sym_identifier] = ACTIONS(541),
  },
  [88] = {
    [aux_sym_parameters_repeat1] = STATE(88),
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym_identifier] = ACTIONS(560),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(563),
    [sym_identifier] = ACTIONS(563),
  },
  [90] = {
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_identifier] = ACTIONS(373),
  },
  [91] = {
    [aux_sym_str_literal_token1] = ACTIONS(565),
    [sym_escape_sequence] = ACTIONS(567),
  },
  [92] = {
    [aux_sym_str_literal_token1] = ACTIONS(569),
    [sym_escape_sequence] = ACTIONS(571),
  },
  [93] = {
    [sym_parameters] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(573),
  },
  [94] = {
    [sym_let_pairs] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(575),
  },
  [95] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(573),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(409),
    [sym_identifier] = ACTIONS(409),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_identifier] = ACTIONS(389),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_identifier] = ACTIONS(377),
  },
  [99] = {
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
  },
  [100] = {
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_identifier] = ACTIONS(381),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_identifier] = ACTIONS(455),
  },
  [102] = {
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
  },
  [103] = {
    [anon_sym_RBRACK] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
  },
  [104] = {
    [anon_sym_RBRACK] = ACTIONS(405),
    [sym_identifier] = ACTIONS(405),
  },
  [105] = {
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_identifier] = ACTIONS(413),
  },
  [106] = {
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_identifier] = ACTIONS(417),
  },
  [107] = {
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_identifier] = ACTIONS(393),
  },
  [108] = {
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym_identifier] = ACTIONS(385),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(577),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(579),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(581),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(583),
  },
  [113] = {
    [sym_identifier] = ACTIONS(585),
  },
  [114] = {
    [sym_identifier] = ACTIONS(587),
  },
  [115] = {
    [sym_identifier] = ACTIONS(589),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(591),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(593),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(595),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(597),
  },
  [120] = {
    [sym_identifier] = ACTIONS(599),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(601),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(603),
  },
  [123] = {
    [aux_sym_line_comment_token1] = ACTIONS(605),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(607),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(609),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(611),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(123),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(120),
  [11] = {.count = 1, .reusable = false}, SHIFT(93),
  [13] = {.count = 1, .reusable = false}, SHIFT(115),
  [15] = {.count = 1, .reusable = false}, SHIFT(94),
  [17] = {.count = 1, .reusable = true}, SHIFT(35),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(29),
  [23] = {.count = 1, .reusable = false}, SHIFT(14),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = false}, SHIFT(113),
  [31] = {.count = 1, .reusable = false}, SHIFT(30),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(121),
  [41] = {.count = 1, .reusable = true}, SHIFT(121),
  [43] = {.count = 1, .reusable = false}, SHIFT(51),
  [45] = {.count = 1, .reusable = true}, SHIFT(74),
  [47] = {.count = 1, .reusable = true}, SHIFT(92),
  [49] = {.count = 1, .reusable = true}, SHIFT(81),
  [51] = {.count = 1, .reusable = true}, SHIFT(37),
  [53] = {.count = 1, .reusable = false}, SHIFT(56),
  [55] = {.count = 1, .reusable = false}, SHIFT(118),
  [57] = {.count = 1, .reusable = true}, SHIFT(118),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(35),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(20),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(22),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [82] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(51),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(74),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(92),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(81),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(37),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [99] = {.count = 1, .reusable = false}, SHIFT(4),
  [101] = {.count = 1, .reusable = true}, SHIFT(4),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [105] = {.count = 1, .reusable = false}, SHIFT(66),
  [107] = {.count = 1, .reusable = true}, SHIFT(66),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(35),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(20),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(21),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(22),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(66),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(66),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(51),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(74),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(92),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(81),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(37),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [151] = {.count = 1, .reusable = false}, SHIFT(5),
  [153] = {.count = 1, .reusable = true}, SHIFT(5),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [157] = {.count = 1, .reusable = false}, SHIFT(116),
  [159] = {.count = 1, .reusable = true}, SHIFT(116),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [163] = {.count = 1, .reusable = false}, SHIFT(110),
  [165] = {.count = 1, .reusable = true}, SHIFT(110),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [169] = {.count = 1, .reusable = false}, SHIFT(122),
  [171] = {.count = 1, .reusable = true}, SHIFT(122),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [175] = {.count = 1, .reusable = false}, SHIFT(124),
  [177] = {.count = 1, .reusable = true}, SHIFT(124),
  [179] = {.count = 1, .reusable = false}, SHIFT(11),
  [181] = {.count = 1, .reusable = true}, SHIFT(11),
  [183] = {.count = 1, .reusable = true}, SHIFT(2),
  [185] = {.count = 1, .reusable = true}, SHIFT(36),
  [187] = {.count = 1, .reusable = true}, SHIFT(26),
  [189] = {.count = 1, .reusable = true}, SHIFT(25),
  [191] = {.count = 1, .reusable = true}, SHIFT(23),
  [193] = {.count = 1, .reusable = false}, SHIFT(89),
  [195] = {.count = 1, .reusable = true}, SHIFT(89),
  [197] = {.count = 1, .reusable = false}, SHIFT(99),
  [199] = {.count = 1, .reusable = true}, SHIFT(78),
  [201] = {.count = 1, .reusable = true}, SHIFT(91),
  [203] = {.count = 1, .reusable = true}, SHIFT(80),
  [205] = {.count = 1, .reusable = true}, SHIFT(43),
  [207] = {.count = 1, .reusable = false}, SHIFT(117),
  [209] = {.count = 1, .reusable = true}, SHIFT(117),
  [211] = {.count = 1, .reusable = false}, SHIFT(119),
  [213] = {.count = 1, .reusable = true}, SHIFT(119),
  [215] = {.count = 1, .reusable = false}, SHIFT(109),
  [217] = {.count = 1, .reusable = true}, SHIFT(109),
  [219] = {.count = 1, .reusable = false}, SHIFT(111),
  [221] = {.count = 1, .reusable = true}, SHIFT(111),
  [223] = {.count = 1, .reusable = false}, SHIFT(64),
  [225] = {.count = 1, .reusable = true}, SHIFT(64),
  [227] = {.count = 1, .reusable = false}, SHIFT(59),
  [229] = {.count = 1, .reusable = true}, SHIFT(59),
  [231] = {.count = 1, .reusable = false}, SHIFT(60),
  [233] = {.count = 1, .reusable = true}, SHIFT(60),
  [235] = {.count = 1, .reusable = false}, SHIFT(103),
  [237] = {.count = 1, .reusable = true}, SHIFT(103),
  [239] = {.count = 1, .reusable = false}, SHIFT(27),
  [241] = {.count = 1, .reusable = true}, SHIFT(27),
  [243] = {.count = 1, .reusable = false}, SHIFT(102),
  [245] = {.count = 1, .reusable = true}, SHIFT(102),
  [247] = {.count = 1, .reusable = false}, SHIFT(101),
  [249] = {.count = 1, .reusable = true}, SHIFT(101),
  [251] = {.count = 1, .reusable = false}, SHIFT(112),
  [253] = {.count = 1, .reusable = true}, SHIFT(112),
  [255] = {.count = 1, .reusable = false}, SHIFT(125),
  [257] = {.count = 1, .reusable = true}, SHIFT(125),
  [259] = {.count = 1, .reusable = false}, SHIFT(24),
  [261] = {.count = 1, .reusable = true}, SHIFT(24),
  [263] = {.count = 1, .reusable = true}, SHIFT(32),
  [265] = {.count = 1, .reusable = false}, SHIFT(69),
  [267] = {.count = 1, .reusable = true}, SHIFT(69),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_type_repeat1, 2),
  [271] = {.count = 2, .reusable = false}, REDUCE(aux_sym__complex_type_repeat1, 2), SHIFT_REPEAT(31),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_type_repeat1, 2), SHIFT_REPEAT(31),
  [277] = {.count = 1, .reusable = true}, SHIFT(67),
  [279] = {.count = 1, .reusable = false}, SHIFT(33),
  [281] = {.count = 1, .reusable = true}, SHIFT(33),
  [283] = {.count = 1, .reusable = true}, SHIFT(68),
  [285] = {.count = 1, .reusable = false}, SHIFT(31),
  [287] = {.count = 1, .reusable = true}, SHIFT(31),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(35),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(50),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(50),
  [298] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(51),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(74),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(92),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(81),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(37),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 20),
  [315] = {.count = 1, .reusable = true}, SHIFT(46),
  [317] = {.count = 1, .reusable = false}, SHIFT(39),
  [319] = {.count = 1, .reusable = true}, SHIFT(39),
  [321] = {.count = 1, .reusable = true}, SHIFT(100),
  [323] = {.count = 1, .reusable = false}, SHIFT(38),
  [325] = {.count = 1, .reusable = true}, SHIFT(38),
  [327] = {.count = 1, .reusable = false}, SHIFT(50),
  [329] = {.count = 1, .reusable = true}, SHIFT(50),
  [331] = {.count = 1, .reusable = true}, SHIFT(49),
  [333] = {.count = 1, .reusable = true}, SHIFT(108),
  [335] = {.count = 1, .reusable = false}, SHIFT(40),
  [337] = {.count = 1, .reusable = true}, SHIFT(40),
  [339] = {.count = 1, .reusable = true}, SHIFT(47),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(35),
  [344] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(40),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(40),
  [352] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(51),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(74),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(92),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(81),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(37),
  [367] = {.count = 1, .reusable = true}, SHIFT(53),
  [369] = {.count = 1, .reusable = true}, SHIFT(96),
  [371] = {.count = 1, .reusable = true}, SHIFT(107),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [397] = {.count = 1, .reusable = false}, SHIFT(70),
  [399] = {.count = 1, .reusable = true}, SHIFT(70),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 19),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [423] = {.count = 1, .reusable = true}, SHIFT(114),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 21),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 21),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 24),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [465] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym__complex_type, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym__complex_type, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym__complex_type, 3),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym__complex_type, 3),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [479] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [481] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [483] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(73),
  [496] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(73),
  [501] = {.count = 1, .reusable = false}, SHIFT(75),
  [503] = {.count = 1, .reusable = true}, SHIFT(52),
  [505] = {.count = 1, .reusable = true}, SHIFT(75),
  [507] = {.count = 1, .reusable = false}, SHIFT(73),
  [509] = {.count = 1, .reusable = true}, SHIFT(45),
  [511] = {.count = 1, .reusable = true}, SHIFT(73),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [515] = {.count = 1, .reusable = true}, SHIFT(97),
  [517] = {.count = 1, .reusable = false}, SHIFT(79),
  [519] = {.count = 1, .reusable = true}, SHIFT(104),
  [521] = {.count = 1, .reusable = true}, SHIFT(79),
  [523] = {.count = 1, .reusable = true}, SHIFT(98),
  [525] = {.count = 1, .reusable = false}, SHIFT(77),
  [527] = {.count = 1, .reusable = true}, SHIFT(106),
  [529] = {.count = 1, .reusable = true}, SHIFT(77),
  [531] = {.count = 1, .reusable = false}, SHIFT(82),
  [533] = {.count = 1, .reusable = true}, SHIFT(55),
  [535] = {.count = 1, .reusable = true}, SHIFT(82),
  [537] = {.count = 1, .reusable = true}, SHIFT(48),
  [539] = {.count = 1, .reusable = true}, SHIFT(58),
  [541] = {.count = 1, .reusable = true}, SHIFT(15),
  [543] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 25), SHIFT_REPEAT(15),
  [548] = {.count = 1, .reusable = true}, SHIFT(62),
  [550] = {.count = 1, .reusable = true}, SHIFT(88),
  [552] = {.count = 1, .reusable = true}, SHIFT(65),
  [554] = {.count = 1, .reusable = true}, SHIFT(85),
  [556] = {.count = 1, .reusable = true}, SHIFT(63),
  [558] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(88),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [565] = {.count = 1, .reusable = false}, SHIFT(105),
  [567] = {.count = 1, .reusable = true}, SHIFT(105),
  [569] = {.count = 1, .reusable = false}, SHIFT(54),
  [571] = {.count = 1, .reusable = true}, SHIFT(54),
  [573] = {.count = 1, .reusable = true}, SHIFT(86),
  [575] = {.count = 1, .reusable = true}, SHIFT(83),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 17),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 16),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 26),
  [585] = {.count = 1, .reusable = true}, SHIFT(19),
  [587] = {.count = 1, .reusable = true}, SHIFT(61),
  [589] = {.count = 1, .reusable = true}, SHIFT(95),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 22),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [595] = {.count = 1, .reusable = true}, SHIFT(44),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 8),
  [599] = {.count = 1, .reusable = true}, SHIFT(28),
  [601] = {.count = 1, .reusable = true}, SHIFT(90),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [605] = {.count = 1, .reusable = true}, SHIFT(76),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [611] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
