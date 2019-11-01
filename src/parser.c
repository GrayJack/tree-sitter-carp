#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 100
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
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
  anon_sym_DOT = 15,
  sym_integer_literal = 16,
  sym_float_literal = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_str_literal_token1 = 21,
  anon_sym_DQUOTE2 = 22,
  anon_sym_BSLASH = 23,
  anon_sym_POUND_DQUOTE = 24,
  sym_escape_sequence = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_identifier = 28,
  sym_source_file = 29,
  sym_line_comment = 30,
  sym__s_expr = 31,
  sym__expr = 32,
  sym__anything = 33,
  sym__s_forms = 34,
  sym__literals = 35,
  sym_def = 36,
  sym_fn = 37,
  sym_defn = 38,
  sym_let = 39,
  sym_let_pairs = 40,
  sym_do = 41,
  sym_if = 42,
  sym_while = 43,
  sym_ref = 44,
  sym_call_expression = 45,
  sym_call_name = 46,
  sym_parameters = 47,
  sym_bool_literal = 48,
  sym_str_literal = 49,
  sym_char_literal = 50,
  sym_pattern_literal = 51,
  sym_array_expression = 52,
  sym_map_expression = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_let_pairs_repeat1 = 55,
  aux_sym_do_repeat1 = 56,
  aux_sym_call_expression_repeat1 = 57,
  aux_sym_parameters_repeat1 = 58,
  aux_sym_str_literal_repeat1 = 59,
  aux_sym_array_expression_repeat1 = 60,
  aux_sym_map_expression_repeat1 = 61,
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
  [anon_sym_DOT] = ".",
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
  [sym_def] = "def",
  [sym_fn] = "fn",
  [sym_defn] = "defn",
  [sym_let] = "let",
  [sym_let_pairs] = "let_pairs",
  [sym_do] = "do",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_ref] = "ref",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
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
  [anon_sym_DOT] = {
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
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_name] = {
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
  field_value = 13,
  field_var = 14,
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
  [field_value] = "value",
  [field_var] = "var",
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
  [18] = {.index = 26, .length = 4},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 3},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 4},
  [24] = {.index = 43, .length = 3},
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
    {field_key, 0},
    {field_value, 1},
  [24] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [26] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [30] =
    {field_module, 0},
    {field_name, 2},
  [32] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [35] =
    {field_expr, 1},
    {field_var, 0},
  [37] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [39] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [43] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
};

static TSSymbol ts_alias_sequences[25][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(27);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_def);
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
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 23:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 24:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 25:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 29:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 30:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 31:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 38:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 52:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 56:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 59:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
      END_STATE();
    case 69:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(69);
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
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_source_file] = STATE(99),
    [sym_line_comment] = STATE(51),
    [sym__s_expr] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(94),
    [sym__s_expr] = STATE(94),
    [sym__anything] = STATE(94),
    [sym__s_forms] = STATE(94),
    [sym__literals] = STATE(94),
    [sym_def] = STATE(94),
    [sym_fn] = STATE(94),
    [sym_defn] = STATE(94),
    [sym_let] = STATE(94),
    [sym_do] = STATE(94),
    [sym_if] = STATE(94),
    [sym_while] = STATE(94),
    [sym_ref] = STATE(94),
    [sym_call_expression] = STATE(94),
    [sym_call_name] = STATE(6),
    [sym_bool_literal] = STATE(94),
    [sym_str_literal] = STATE(94),
    [sym_char_literal] = STATE(94),
    [sym_pattern_literal] = STATE(94),
    [sym_array_expression] = STATE(94),
    [sym_map_expression] = STATE(94),
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
    [sym_integer_literal] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
  },
  [3] = {
    [sym_line_comment] = STATE(92),
    [sym__s_expr] = STATE(92),
    [sym__anything] = STATE(92),
    [sym__s_forms] = STATE(92),
    [sym__literals] = STATE(92),
    [sym_def] = STATE(92),
    [sym_fn] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_let] = STATE(92),
    [sym_do] = STATE(92),
    [sym_if] = STATE(92),
    [sym_while] = STATE(92),
    [sym_ref] = STATE(92),
    [sym_call_expression] = STATE(92),
    [sym_call_name] = STATE(6),
    [sym_bool_literal] = STATE(92),
    [sym_str_literal] = STATE(92),
    [sym_char_literal] = STATE(92),
    [sym_pattern_literal] = STATE(92),
    [sym_array_expression] = STATE(92),
    [sym_map_expression] = STATE(92),
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
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
  },
  [4] = {
    [sym__s_expr] = STATE(46),
    [sym__expr] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_do_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [sym_integer_literal] = ACTIONS(55),
    [sym_float_literal] = ACTIONS(58),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_POUND_DQUOTE] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(55),
  },
  [5] = {
    [sym__s_expr] = STATE(46),
    [sym__expr] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_do_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(78),
    [sym_float_literal] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(78),
  },
  [6] = {
    [sym__s_expr] = STATE(8),
    [sym__expr] = STATE(8),
    [sym__literals] = STATE(8),
    [sym_bool_literal] = STATE(8),
    [sym_str_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_pattern_literal] = STATE(8),
    [sym_array_expression] = STATE(8),
    [sym_map_expression] = STATE(8),
    [aux_sym_call_expression_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(84),
    [sym_float_literal] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(84),
  },
  [7] = {
    [sym__s_expr] = STATE(7),
    [sym__expr] = STATE(7),
    [sym__literals] = STATE(7),
    [sym_bool_literal] = STATE(7),
    [sym_str_literal] = STATE(7),
    [sym_char_literal] = STATE(7),
    [sym_pattern_literal] = STATE(7),
    [sym_array_expression] = STATE(7),
    [sym_map_expression] = STATE(7),
    [aux_sym_call_expression_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym_integer_literal] = ACTIONS(96),
    [sym_float_literal] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_POUND_DQUOTE] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(114),
    [sym_identifier] = ACTIONS(96),
  },
  [8] = {
    [sym__s_expr] = STATE(7),
    [sym__expr] = STATE(7),
    [sym__literals] = STATE(7),
    [sym_bool_literal] = STATE(7),
    [sym_str_literal] = STATE(7),
    [sym_char_literal] = STATE(7),
    [sym_pattern_literal] = STATE(7),
    [sym_array_expression] = STATE(7),
    [sym_map_expression] = STATE(7),
    [aux_sym_call_expression_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(119),
    [sym_float_literal] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(119),
  },
  [9] = {
    [sym__s_expr] = STATE(46),
    [sym__expr] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_pattern_literal] = STATE(46),
    [sym_array_expression] = STATE(46),
    [sym_map_expression] = STATE(46),
    [aux_sym_do_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(78),
    [sym_float_literal] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(78),
  },
  [10] = {
    [sym__s_expr] = STATE(89),
    [sym__expr] = STATE(89),
    [sym__literals] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(127),
    [sym_float_literal] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(127),
  },
  [11] = {
    [sym__s_expr] = STATE(91),
    [sym__expr] = STATE(91),
    [sym__literals] = STATE(91),
    [sym_bool_literal] = STATE(91),
    [sym_str_literal] = STATE(91),
    [sym_char_literal] = STATE(91),
    [sym_pattern_literal] = STATE(91),
    [sym_array_expression] = STATE(91),
    [sym_map_expression] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(133),
    [sym_float_literal] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(133),
  },
  [12] = {
    [sym__s_expr] = STATE(88),
    [sym__expr] = STATE(88),
    [sym__literals] = STATE(88),
    [sym_bool_literal] = STATE(88),
    [sym_str_literal] = STATE(88),
    [sym_char_literal] = STATE(88),
    [sym_pattern_literal] = STATE(88),
    [sym_array_expression] = STATE(88),
    [sym_map_expression] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(139),
    [sym_float_literal] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(139),
  },
  [13] = {
    [sym__s_expr] = STATE(90),
    [sym__expr] = STATE(90),
    [sym__literals] = STATE(90),
    [sym_bool_literal] = STATE(90),
    [sym_str_literal] = STATE(90),
    [sym_char_literal] = STATE(90),
    [sym_pattern_literal] = STATE(90),
    [sym_array_expression] = STATE(90),
    [sym_map_expression] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(145),
    [sym_float_literal] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(145),
  },
  [14] = {
    [sym__s_expr] = STATE(86),
    [sym__expr] = STATE(86),
    [sym__literals] = STATE(86),
    [sym_bool_literal] = STATE(86),
    [sym_str_literal] = STATE(86),
    [sym_char_literal] = STATE(86),
    [sym_pattern_literal] = STATE(86),
    [sym_array_expression] = STATE(86),
    [sym_map_expression] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(149),
    [sym_float_literal] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(149),
  },
  [15] = {
    [sym__s_expr] = STATE(93),
    [sym__expr] = STATE(93),
    [sym__literals] = STATE(93),
    [sym_bool_literal] = STATE(93),
    [sym_str_literal] = STATE(93),
    [sym_char_literal] = STATE(93),
    [sym_pattern_literal] = STATE(93),
    [sym_array_expression] = STATE(93),
    [sym_map_expression] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(153),
  },
  [16] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(157),
    [sym_float_literal] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(157),
  },
  [17] = {
    [sym__s_expr] = STATE(76),
    [sym__expr] = STATE(76),
    [sym__literals] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_integer_literal] = ACTIONS(165),
    [sym_float_literal] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_POUND_DQUOTE] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(177),
    [sym_identifier] = ACTIONS(165),
  },
  [18] = {
    [sym__s_expr] = STATE(20),
    [sym__expr] = STATE(20),
    [sym__literals] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_pattern_literal] = STATE(20),
    [sym_array_expression] = STATE(20),
    [sym_map_expression] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(179),
    [sym_float_literal] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(179),
  },
  [19] = {
    [sym__s_expr] = STATE(97),
    [sym__expr] = STATE(97),
    [sym__literals] = STATE(97),
    [sym_bool_literal] = STATE(97),
    [sym_str_literal] = STATE(97),
    [sym_char_literal] = STATE(97),
    [sym_pattern_literal] = STATE(97),
    [sym_array_expression] = STATE(97),
    [sym_map_expression] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(183),
    [sym_float_literal] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(183),
  },
  [20] = {
    [sym__s_expr] = STATE(14),
    [sym__expr] = STATE(14),
    [sym__literals] = STATE(14),
    [sym_bool_literal] = STATE(14),
    [sym_str_literal] = STATE(14),
    [sym_char_literal] = STATE(14),
    [sym_pattern_literal] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_map_expression] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(187),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(187),
  },
  [21] = {
    [sym__literals] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [aux_sym_array_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym_integer_literal] = ACTIONS(196),
    [sym_float_literal] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_POUND_DQUOTE] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(214),
    [sym_identifier] = ACTIONS(196),
  },
  [22] = {
    [sym__literals] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_char_literal] = STATE(31),
    [sym_pattern_literal] = STATE(31),
    [sym_array_expression] = STATE(31),
    [sym_map_expression] = STATE(31),
    [aux_sym_map_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_integer_literal] = ACTIONS(220),
    [sym_float_literal] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(226),
    [anon_sym_false] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(232),
    [anon_sym_POUND_DQUOTE] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(220),
  },
  [23] = {
    [sym__literals] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_char_literal] = STATE(31),
    [sym_pattern_literal] = STATE(31),
    [sym_array_expression] = STATE(31),
    [sym_map_expression] = STATE(31),
    [aux_sym_map_expression_repeat1] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(247),
    [sym_identifier] = ACTIONS(243),
  },
  [24] = {
    [sym__literals] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_char_literal] = STATE(31),
    [sym_pattern_literal] = STATE(31),
    [sym_array_expression] = STATE(31),
    [sym_map_expression] = STATE(31),
    [aux_sym_map_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(249),
    [sym_identifier] = ACTIONS(243),
  },
  [25] = {
    [sym__literals] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_char_literal] = STATE(31),
    [sym_pattern_literal] = STATE(31),
    [sym_array_expression] = STATE(31),
    [sym_map_expression] = STATE(31),
    [aux_sym_map_expression_repeat1] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(243),
  },
  [26] = {
    [sym__literals] = STATE(29),
    [sym_bool_literal] = STATE(29),
    [sym_str_literal] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_pattern_literal] = STATE(29),
    [sym_array_expression] = STATE(29),
    [sym_map_expression] = STATE(29),
    [aux_sym_array_expression_repeat1] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_integer_literal] = ACTIONS(255),
    [sym_float_literal] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(255),
  },
  [27] = {
    [sym__literals] = STATE(30),
    [sym_bool_literal] = STATE(30),
    [sym_str_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_pattern_literal] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_map_expression] = STATE(30),
    [aux_sym_array_expression_repeat1] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_integer_literal] = ACTIONS(261),
    [sym_float_literal] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(261),
  },
  [28] = {
    [sym__literals] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_char_literal] = STATE(31),
    [sym_pattern_literal] = STATE(31),
    [sym_array_expression] = STATE(31),
    [sym_map_expression] = STATE(31),
    [aux_sym_map_expression_repeat1] = STATE(25),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(243),
    [sym_float_literal] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym_identifier] = ACTIONS(243),
  },
  [29] = {
    [sym__literals] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [aux_sym_array_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_integer_literal] = ACTIONS(269),
    [sym_float_literal] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(269),
  },
  [30] = {
    [sym__literals] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_pattern_literal] = STATE(21),
    [sym_array_expression] = STATE(21),
    [sym_map_expression] = STATE(21),
    [aux_sym_array_expression_repeat1] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_integer_literal] = ACTIONS(269),
    [sym_float_literal] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(269),
  },
  [31] = {
    [sym__literals] = STATE(50),
    [sym_bool_literal] = STATE(50),
    [sym_str_literal] = STATE(50),
    [sym_char_literal] = STATE(50),
    [sym_pattern_literal] = STATE(50),
    [sym_array_expression] = STATE(50),
    [sym_map_expression] = STATE(50),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(275),
    [sym_float_literal] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND_DQUOTE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(275),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_integer_literal] = ACTIONS(281),
    [sym_float_literal] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(281),
    [anon_sym_false] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [anon_sym_BSLASH] = ACTIONS(279),
    [anon_sym_POUND_DQUOTE] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [sym_identifier] = ACTIONS(281),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_integer_literal] = ACTIONS(285),
    [sym_float_literal] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(285),
    [anon_sym_false] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(283),
    [anon_sym_POUND_DQUOTE] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_integer_literal] = ACTIONS(289),
    [sym_float_literal] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_false] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_POUND_DQUOTE] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_identifier] = ACTIONS(289),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym_integer_literal] = ACTIONS(293),
    [sym_float_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(293),
    [anon_sym_false] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(291),
    [anon_sym_POUND_DQUOTE] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [sym_identifier] = ACTIONS(293),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_integer_literal] = ACTIONS(297),
    [sym_float_literal] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(295),
    [anon_sym_POUND_DQUOTE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [sym_identifier] = ACTIONS(297),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [sym_integer_literal] = ACTIONS(301),
    [sym_float_literal] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_BSLASH] = ACTIONS(299),
    [anon_sym_POUND_DQUOTE] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [sym_identifier] = ACTIONS(301),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_integer_literal] = ACTIONS(305),
    [sym_float_literal] = ACTIONS(303),
    [anon_sym_true] = ACTIONS(305),
    [anon_sym_false] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_POUND_DQUOTE] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [sym_identifier] = ACTIONS(305),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_integer_literal] = ACTIONS(309),
    [sym_float_literal] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [anon_sym_BSLASH] = ACTIONS(307),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym_identifier] = ACTIONS(309),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym_integer_literal] = ACTIONS(313),
    [sym_float_literal] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_false] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [anon_sym_POUND_DQUOTE] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym_integer_literal] = ACTIONS(317),
    [sym_float_literal] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(315),
    [anon_sym_POUND_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [sym_identifier] = ACTIONS(317),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [sym_integer_literal] = ACTIONS(321),
    [sym_float_literal] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_false] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(319),
    [anon_sym_POUND_DQUOTE] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [sym_identifier] = ACTIONS(321),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(325),
    [sym_integer_literal] = ACTIONS(327),
    [sym_float_literal] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_BSLASH] = ACTIONS(323),
    [anon_sym_POUND_DQUOTE] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_identifier] = ACTIONS(327),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [sym_integer_literal] = ACTIONS(331),
    [sym_float_literal] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(329),
    [anon_sym_POUND_DQUOTE] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [sym_identifier] = ACTIONS(331),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [sym_integer_literal] = ACTIONS(335),
    [sym_float_literal] = ACTIONS(333),
    [anon_sym_true] = ACTIONS(335),
    [anon_sym_false] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_POUND_DQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_integer_literal] = ACTIONS(339),
    [sym_float_literal] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(339),
    [anon_sym_false] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [sym_identifier] = ACTIONS(339),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_POUND_DQUOTE] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [sym_identifier] = ACTIONS(343),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [sym_integer_literal] = ACTIONS(347),
    [sym_float_literal] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_POUND_DQUOTE] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_identifier] = ACTIONS(347),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym_integer_literal] = ACTIONS(351),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_POUND_DQUOTE] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
  },
  [50] = {
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_integer_literal] = ACTIONS(355),
    [sym_float_literal] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(355),
    [anon_sym_false] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_POUND_DQUOTE] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [sym_identifier] = ACTIONS(355),
  },
  [51] = {
    [sym_line_comment] = STATE(52),
    [sym__s_expr] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [52] = {
    [sym_line_comment] = STATE(52),
    [sym__s_expr] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(364),
  },
  [53] = {
    [aux_sym_str_literal_repeat1] = STATE(59),
    [aux_sym_str_literal_token1] = ACTIONS(367),
    [anon_sym_DQUOTE2] = ACTIONS(369),
    [sym_escape_sequence] = ACTIONS(371),
  },
  [54] = {
    [aux_sym_str_literal_repeat1] = STATE(62),
    [aux_sym_str_literal_token1] = ACTIONS(373),
    [anon_sym_DQUOTE2] = ACTIONS(375),
    [sym_escape_sequence] = ACTIONS(377),
  },
  [55] = {
    [aux_sym_str_literal_repeat1] = STATE(54),
    [aux_sym_str_literal_token1] = ACTIONS(379),
    [anon_sym_DQUOTE2] = ACTIONS(381),
    [sym_escape_sequence] = ACTIONS(383),
  },
  [56] = {
    [aux_sym_str_literal_repeat1] = STATE(60),
    [aux_sym_str_literal_token1] = ACTIONS(385),
    [anon_sym_DQUOTE2] = ACTIONS(387),
    [sym_escape_sequence] = ACTIONS(389),
  },
  [57] = {
    [aux_sym_str_literal_repeat1] = STATE(58),
    [aux_sym_str_literal_token1] = ACTIONS(391),
    [anon_sym_DQUOTE2] = ACTIONS(393),
    [sym_escape_sequence] = ACTIONS(395),
  },
  [58] = {
    [aux_sym_str_literal_repeat1] = STATE(62),
    [aux_sym_str_literal_token1] = ACTIONS(373),
    [anon_sym_DQUOTE2] = ACTIONS(397),
    [sym_escape_sequence] = ACTIONS(377),
  },
  [59] = {
    [aux_sym_str_literal_repeat1] = STATE(62),
    [aux_sym_str_literal_token1] = ACTIONS(373),
    [anon_sym_DQUOTE2] = ACTIONS(399),
    [sym_escape_sequence] = ACTIONS(377),
  },
  [60] = {
    [aux_sym_str_literal_repeat1] = STATE(62),
    [aux_sym_str_literal_token1] = ACTIONS(373),
    [anon_sym_DQUOTE2] = ACTIONS(401),
    [sym_escape_sequence] = ACTIONS(377),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
  },
  [62] = {
    [aux_sym_str_literal_repeat1] = STATE(62),
    [aux_sym_str_literal_token1] = ACTIONS(405),
    [anon_sym_DQUOTE2] = ACTIONS(408),
    [sym_escape_sequence] = ACTIONS(410),
  },
  [63] = {
    [aux_sym_parameters_repeat1] = STATE(64),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_identifier] = ACTIONS(415),
  },
  [64] = {
    [aux_sym_parameters_repeat1] = STATE(64),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_identifier] = ACTIONS(419),
  },
  [65] = {
    [aux_sym_parameters_repeat1] = STATE(63),
    [anon_sym_RBRACK] = ACTIONS(422),
    [sym_identifier] = ACTIONS(424),
  },
  [66] = {
    [aux_sym_let_pairs_repeat1] = STATE(67),
    [anon_sym_RBRACK] = ACTIONS(426),
    [sym_identifier] = ACTIONS(428),
  },
  [67] = {
    [aux_sym_let_pairs_repeat1] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym_identifier] = ACTIONS(428),
  },
  [68] = {
    [aux_sym_let_pairs_repeat1] = STATE(68),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_identifier] = ACTIONS(434),
  },
  [69] = {
    [aux_sym_str_literal_token1] = ACTIONS(437),
    [sym_escape_sequence] = ACTIONS(439),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym_identifier] = ACTIONS(291),
  },
  [71] = {
    [sym_parameters] = STATE(13),
    [anon_sym_LBRACK] = ACTIONS(441),
  },
  [72] = {
    [sym_let_pairs] = STATE(11),
    [anon_sym_LBRACK] = ACTIONS(443),
  },
  [73] = {
    [aux_sym_str_literal_token1] = ACTIONS(445),
    [sym_escape_sequence] = ACTIONS(447),
  },
  [74] = {
    [sym_parameters] = STATE(10),
    [anon_sym_LBRACK] = ACTIONS(441),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_identifier] = ACTIONS(279),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_identifier] = ACTIONS(449),
  },
  [77] = {
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_identifier] = ACTIONS(283),
  },
  [78] = {
    [anon_sym_RBRACK] = ACTIONS(299),
    [sym_identifier] = ACTIONS(299),
  },
  [79] = {
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_identifier] = ACTIONS(287),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_identifier] = ACTIONS(303),
  },
  [81] = {
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_identifier] = ACTIONS(307),
  },
  [82] = {
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym_identifier] = ACTIONS(311),
  },
  [83] = {
    [anon_sym_RBRACK] = ACTIONS(319),
    [sym_identifier] = ACTIONS(319),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_identifier] = ACTIONS(315),
  },
  [85] = {
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_identifier] = ACTIONS(295),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(451),
  },
  [87] = {
    [aux_sym_line_comment_token1] = ACTIONS(453),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(455),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(457),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(459),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(461),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(463),
  },
  [93] = {
    [anon_sym_RPAREN] = ACTIONS(465),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(467),
  },
  [95] = {
    [sym_identifier] = ACTIONS(469),
  },
  [96] = {
    [sym_identifier] = ACTIONS(471),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(473),
  },
  [98] = {
    [sym_identifier] = ACTIONS(475),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(477),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(87),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(98),
  [11] = {.count = 1, .reusable = false}, SHIFT(71),
  [13] = {.count = 1, .reusable = false}, SHIFT(96),
  [15] = {.count = 1, .reusable = false}, SHIFT(72),
  [17] = {.count = 1, .reusable = true}, SHIFT(27),
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(18),
  [23] = {.count = 1, .reusable = false}, SHIFT(16),
  [25] = {.count = 1, .reusable = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = false}, SHIFT(94),
  [29] = {.count = 1, .reusable = true}, SHIFT(94),
  [31] = {.count = 1, .reusable = false}, SHIFT(37),
  [33] = {.count = 1, .reusable = true}, SHIFT(57),
  [35] = {.count = 1, .reusable = true}, SHIFT(73),
  [37] = {.count = 1, .reusable = true}, SHIFT(55),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = false}, SHIFT(43),
  [43] = {.count = 1, .reusable = false}, SHIFT(92),
  [45] = {.count = 1, .reusable = true}, SHIFT(92),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [50] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(27),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(46),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(46),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(37),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(57),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(73),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(55),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 14), SHIFT_REPEAT(23),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 6),
  [78] = {.count = 1, .reusable = false}, SHIFT(46),
  [80] = {.count = 1, .reusable = true}, SHIFT(46),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [84] = {.count = 1, .reusable = false}, SHIFT(8),
  [86] = {.count = 1, .reusable = true}, SHIFT(8),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(3),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(27),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(7),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(7),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(37),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(57),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(73),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(55),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(23),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [119] = {.count = 1, .reusable = false}, SHIFT(7),
  [121] = {.count = 1, .reusable = true}, SHIFT(7),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 12),
  [127] = {.count = 1, .reusable = false}, SHIFT(89),
  [129] = {.count = 1, .reusable = true}, SHIFT(89),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [133] = {.count = 1, .reusable = false}, SHIFT(91),
  [135] = {.count = 1, .reusable = true}, SHIFT(91),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 7),
  [139] = {.count = 1, .reusable = false}, SHIFT(88),
  [141] = {.count = 1, .reusable = true}, SHIFT(88),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [145] = {.count = 1, .reusable = false}, SHIFT(90),
  [147] = {.count = 1, .reusable = true}, SHIFT(90),
  [149] = {.count = 1, .reusable = false}, SHIFT(86),
  [151] = {.count = 1, .reusable = true}, SHIFT(86),
  [153] = {.count = 1, .reusable = false}, SHIFT(93),
  [155] = {.count = 1, .reusable = true}, SHIFT(93),
  [157] = {.count = 1, .reusable = false}, SHIFT(12),
  [159] = {.count = 1, .reusable = true}, SHIFT(12),
  [161] = {.count = 1, .reusable = true}, SHIFT(2),
  [163] = {.count = 1, .reusable = true}, SHIFT(26),
  [165] = {.count = 1, .reusable = false}, SHIFT(76),
  [167] = {.count = 1, .reusable = true}, SHIFT(76),
  [169] = {.count = 1, .reusable = false}, SHIFT(78),
  [171] = {.count = 1, .reusable = true}, SHIFT(53),
  [173] = {.count = 1, .reusable = true}, SHIFT(69),
  [175] = {.count = 1, .reusable = true}, SHIFT(56),
  [177] = {.count = 1, .reusable = true}, SHIFT(28),
  [179] = {.count = 1, .reusable = false}, SHIFT(20),
  [181] = {.count = 1, .reusable = true}, SHIFT(20),
  [183] = {.count = 1, .reusable = false}, SHIFT(97),
  [185] = {.count = 1, .reusable = true}, SHIFT(97),
  [187] = {.count = 1, .reusable = false}, SHIFT(14),
  [189] = {.count = 1, .reusable = true}, SHIFT(14),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(27),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(21),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(21),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(37),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(57),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(73),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(55),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(23),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(27),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(31),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(31),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(37),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(57),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(73),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(55),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(23),
  [241] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 18),
  [243] = {.count = 1, .reusable = false}, SHIFT(31),
  [245] = {.count = 1, .reusable = true}, SHIFT(31),
  [247] = {.count = 1, .reusable = true}, SHIFT(42),
  [249] = {.count = 1, .reusable = true}, SHIFT(32),
  [251] = {.count = 1, .reusable = true}, SHIFT(75),
  [253] = {.count = 1, .reusable = true}, SHIFT(79),
  [255] = {.count = 1, .reusable = false}, SHIFT(29),
  [257] = {.count = 1, .reusable = true}, SHIFT(29),
  [259] = {.count = 1, .reusable = true}, SHIFT(34),
  [261] = {.count = 1, .reusable = false}, SHIFT(30),
  [263] = {.count = 1, .reusable = true}, SHIFT(30),
  [265] = {.count = 1, .reusable = true}, SHIFT(83),
  [267] = {.count = 1, .reusable = true}, SHIFT(85),
  [269] = {.count = 1, .reusable = false}, SHIFT(21),
  [271] = {.count = 1, .reusable = true}, SHIFT(21),
  [273] = {.count = 1, .reusable = true}, SHIFT(36),
  [275] = {.count = 1, .reusable = false}, SHIFT(50),
  [277] = {.count = 1, .reusable = true}, SHIFT(50),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 17),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 17),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [325] = {.count = 1, .reusable = true}, SHIFT(95),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 19),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 19),
  [337] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [339] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 5),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 22),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 22),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 16),
  [355] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 16),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [359] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [367] = {.count = 1, .reusable = false}, SHIFT(59),
  [369] = {.count = 1, .reusable = true}, SHIFT(80),
  [371] = {.count = 1, .reusable = true}, SHIFT(59),
  [373] = {.count = 1, .reusable = false}, SHIFT(62),
  [375] = {.count = 1, .reusable = true}, SHIFT(33),
  [377] = {.count = 1, .reusable = true}, SHIFT(62),
  [379] = {.count = 1, .reusable = false}, SHIFT(54),
  [381] = {.count = 1, .reusable = true}, SHIFT(40),
  [383] = {.count = 1, .reusable = true}, SHIFT(54),
  [385] = {.count = 1, .reusable = false}, SHIFT(60),
  [387] = {.count = 1, .reusable = true}, SHIFT(82),
  [389] = {.count = 1, .reusable = true}, SHIFT(60),
  [391] = {.count = 1, .reusable = false}, SHIFT(58),
  [393] = {.count = 1, .reusable = true}, SHIFT(38),
  [395] = {.count = 1, .reusable = true}, SHIFT(58),
  [397] = {.count = 1, .reusable = true}, SHIFT(35),
  [399] = {.count = 1, .reusable = true}, SHIFT(70),
  [401] = {.count = 1, .reusable = true}, SHIFT(77),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(62),
  [408] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(62),
  [413] = {.count = 1, .reusable = true}, SHIFT(49),
  [415] = {.count = 1, .reusable = true}, SHIFT(64),
  [417] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(64),
  [422] = {.count = 1, .reusable = true}, SHIFT(47),
  [424] = {.count = 1, .reusable = true}, SHIFT(63),
  [426] = {.count = 1, .reusable = true}, SHIFT(44),
  [428] = {.count = 1, .reusable = true}, SHIFT(17),
  [430] = {.count = 1, .reusable = true}, SHIFT(48),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 23), SHIFT_REPEAT(17),
  [437] = {.count = 1, .reusable = false}, SHIFT(81),
  [439] = {.count = 1, .reusable = true}, SHIFT(81),
  [441] = {.count = 1, .reusable = true}, SHIFT(65),
  [443] = {.count = 1, .reusable = true}, SHIFT(66),
  [445] = {.count = 1, .reusable = false}, SHIFT(39),
  [447] = {.count = 1, .reusable = true}, SHIFT(39),
  [449] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 21),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 24),
  [453] = {.count = 1, .reusable = true}, SHIFT(61),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 15),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 20),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 11),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 13),
  [463] = {.count = 1, .reusable = true}, SHIFT(41),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 8),
  [467] = {.count = 1, .reusable = true}, SHIFT(84),
  [469] = {.count = 1, .reusable = true}, SHIFT(45),
  [471] = {.count = 1, .reusable = true}, SHIFT(74),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 10),
  [475] = {.count = 1, .reusable = true}, SHIFT(19),
  [477] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
