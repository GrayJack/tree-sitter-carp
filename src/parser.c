#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 86
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
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
  anon_sym_AMP = 11,
  anon_sym_AT = 12,
  anon_sym_TILDE = 13,
  anon_sym_DOT = 14,
  sym_integer_literal = 15,
  sym_float_literal = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_str_literal_token1 = 20,
  anon_sym_DQUOTE2 = 21,
  anon_sym_BSLASH = 22,
  anon_sym_POUND_DQUOTE = 23,
  sym_escape_sequence = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  sym_identifier = 27,
  sym_source_file = 28,
  sym_line_comment = 29,
  sym__s_expr = 30,
  sym__expr = 31,
  sym__anything = 32,
  sym__s_forms = 33,
  sym__literals = 34,
  sym__functions = 35,
  sym_def = 36,
  sym_fn = 37,
  sym_defn = 38,
  sym_let = 39,
  sym_let_pairs = 40,
  sym_call_expression = 41,
  sym_call_name = 42,
  sym_parameters = 43,
  sym_bool_literal = 44,
  sym_str_literal = 45,
  sym_char_literal = 46,
  sym_pattern_literal = 47,
  sym_array_expression = 48,
  sym_map_expression = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_let_pairs_repeat1 = 51,
  aux_sym_call_expression_repeat1 = 52,
  aux_sym_parameters_repeat1 = 53,
  aux_sym_str_literal_repeat1 = 54,
  aux_sym_array_expression_repeat1 = 55,
  aux_sym_map_expression_repeat1 = 56,
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
  [anon_sym_AMP] = "&",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
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
  [sym__functions] = "_functions",
  [sym_def] = "def",
  [sym_fn] = "fn",
  [sym_defn] = "defn",
  [sym_let] = "let",
  [sym_let_pairs] = "let_pairs",
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
  [sym__functions] = {
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
  field_expr = 4,
  field_key = 5,
  field_module = 6,
  field_name = 7,
  field_pairs = 8,
  field_parameters = 9,
  field_value = 10,
  field_var = 11,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_expr] = "expr",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 4},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 4},
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
    {field_argument, 1},
    {field_call_name, 0},
  [6] =
    {field_name, 1},
    {field_value, 2},
  [8] =
    {field_body, 2},
    {field_parameters, 1},
  [10] =
    {field_name, 1},
    {field_parameters, 2},
  [12] =
    {field_body, 2},
    {field_pairs, 1},
  [14] =
    {field_key, 0},
    {field_value, 1},
  [16] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [18] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [22] =
    {field_module, 0},
    {field_name, 2},
  [24] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [27] =
    {field_expr, 1},
    {field_var, 0},
  [29] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [31] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[18][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
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
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
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
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_source_file] = STATE(85),
    [sym_line_comment] = STATE(43),
    [sym__s_expr] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym_line_comment] = STATE(78),
    [sym__s_expr] = STATE(78),
    [sym__anything] = STATE(78),
    [sym__s_forms] = STATE(78),
    [sym__literals] = STATE(78),
    [sym__functions] = STATE(78),
    [sym_def] = STATE(78),
    [sym_fn] = STATE(78),
    [sym_defn] = STATE(78),
    [sym_let] = STATE(78),
    [sym_call_expression] = STATE(78),
    [sym_call_name] = STATE(4),
    [sym_bool_literal] = STATE(78),
    [sym_str_literal] = STATE(78),
    [sym_char_literal] = STATE(78),
    [sym_pattern_literal] = STATE(78),
    [sym_array_expression] = STATE(78),
    [sym_map_expression] = STATE(78),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(19),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [3] = {
    [sym__literals] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_call_expression_repeat1] = STATE(5),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(39),
  },
  [4] = {
    [sym__literals] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_str_literal] = STATE(3),
    [sym_char_literal] = STATE(3),
    [sym_pattern_literal] = STATE(3),
    [sym_array_expression] = STATE(3),
    [sym_map_expression] = STATE(3),
    [aux_sym_call_expression_repeat1] = STATE(3),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(45),
    [sym_float_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(45),
  },
  [5] = {
    [sym__literals] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_pattern_literal] = STATE(5),
    [sym_array_expression] = STATE(5),
    [sym_map_expression] = STATE(5),
    [aux_sym_call_expression_repeat1] = STATE(5),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(54),
    [sym_integer_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(60),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_BSLASH] = ACTIONS(69),
    [anon_sym_POUND_DQUOTE] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(57),
  },
  [6] = {
    [sym__s_expr] = STATE(79),
    [sym__expr] = STATE(79),
    [sym__literals] = STATE(79),
    [sym_bool_literal] = STATE(79),
    [sym_str_literal] = STATE(79),
    [sym_char_literal] = STATE(79),
    [sym_pattern_literal] = STATE(79),
    [sym_array_expression] = STATE(79),
    [sym_map_expression] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(80),
    [sym_float_literal] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(80),
  },
  [7] = {
    [sym__s_expr] = STATE(80),
    [sym__expr] = STATE(80),
    [sym__literals] = STATE(80),
    [sym_bool_literal] = STATE(80),
    [sym_str_literal] = STATE(80),
    [sym_char_literal] = STATE(80),
    [sym_pattern_literal] = STATE(80),
    [sym_array_expression] = STATE(80),
    [sym_map_expression] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(86),
    [sym_float_literal] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(86),
  },
  [8] = {
    [sym__s_expr] = STATE(77),
    [sym__expr] = STATE(77),
    [sym__literals] = STATE(77),
    [sym_bool_literal] = STATE(77),
    [sym_str_literal] = STATE(77),
    [sym_char_literal] = STATE(77),
    [sym_pattern_literal] = STATE(77),
    [sym_array_expression] = STATE(77),
    [sym_map_expression] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(92),
    [sym_float_literal] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(92),
  },
  [9] = {
    [sym__s_expr] = STATE(65),
    [sym__expr] = STATE(65),
    [sym__literals] = STATE(65),
    [sym_bool_literal] = STATE(65),
    [sym_str_literal] = STATE(65),
    [sym_char_literal] = STATE(65),
    [sym_pattern_literal] = STATE(65),
    [sym_array_expression] = STATE(65),
    [sym_map_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(96),
    [sym_integer_literal] = ACTIONS(98),
    [sym_float_literal] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(106),
    [anon_sym_POUND_DQUOTE] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_identifier] = ACTIONS(98),
  },
  [10] = {
    [sym__s_expr] = STATE(83),
    [sym__expr] = STATE(83),
    [sym__literals] = STATE(83),
    [sym_bool_literal] = STATE(83),
    [sym_str_literal] = STATE(83),
    [sym_char_literal] = STATE(83),
    [sym_pattern_literal] = STATE(83),
    [sym_array_expression] = STATE(83),
    [sym_map_expression] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(112),
    [sym_float_literal] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(112),
  },
  [11] = {
    [sym__literals] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_pattern_literal] = STATE(20),
    [sym_array_expression] = STATE(20),
    [sym_map_expression] = STATE(20),
    [aux_sym_array_expression_repeat1] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_integer_literal] = ACTIONS(118),
    [sym_float_literal] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(118),
  },
  [12] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_map_expression_repeat1] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(122),
    [sym_float_literal] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_identifier] = ACTIONS(122),
  },
  [13] = {
    [sym__literals] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_pattern_literal] = STATE(16),
    [sym_array_expression] = STATE(16),
    [sym_map_expression] = STATE(16),
    [aux_sym_array_expression_repeat1] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_integer_literal] = ACTIONS(130),
    [sym_float_literal] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(130),
  },
  [14] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_map_expression_repeat1] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(134),
    [sym_integer_literal] = ACTIONS(137),
    [sym_float_literal] = ACTIONS(140),
    [anon_sym_true] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(149),
    [anon_sym_POUND_DQUOTE] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(158),
    [sym_identifier] = ACTIONS(137),
  },
  [15] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_map_expression_repeat1] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(122),
    [sym_float_literal] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym_identifier] = ACTIONS(122),
  },
  [16] = {
    [sym__literals] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_pattern_literal] = STATE(20),
    [sym_array_expression] = STATE(20),
    [sym_map_expression] = STATE(20),
    [aux_sym_array_expression_repeat1] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(162),
    [sym_integer_literal] = ACTIONS(118),
    [sym_float_literal] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(118),
  },
  [17] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_map_expression_repeat1] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(122),
    [sym_float_literal] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(164),
    [sym_identifier] = ACTIONS(122),
  },
  [18] = {
    [sym__literals] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_pattern_literal] = STATE(22),
    [sym_array_expression] = STATE(22),
    [sym_map_expression] = STATE(22),
    [aux_sym_map_expression_repeat1] = STATE(14),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(122),
    [sym_float_literal] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(166),
    [sym_identifier] = ACTIONS(122),
  },
  [19] = {
    [sym__literals] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_str_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_pattern_literal] = STATE(11),
    [sym_array_expression] = STATE(11),
    [sym_map_expression] = STATE(11),
    [aux_sym_array_expression_repeat1] = STATE(11),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(168),
    [sym_integer_literal] = ACTIONS(170),
    [sym_float_literal] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(170),
  },
  [20] = {
    [sym__literals] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_pattern_literal] = STATE(20),
    [sym_array_expression] = STATE(20),
    [sym_map_expression] = STATE(20),
    [aux_sym_array_expression_repeat1] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(177),
    [sym_integer_literal] = ACTIONS(179),
    [sym_float_literal] = ACTIONS(182),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [anon_sym_BSLASH] = ACTIONS(191),
    [anon_sym_POUND_DQUOTE] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(179),
  },
  [21] = {
    [sym__literals] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_pattern_literal] = STATE(34),
    [sym_array_expression] = STATE(34),
    [sym_map_expression] = STATE(34),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(200),
    [sym_float_literal] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(200),
  },
  [22] = {
    [sym__literals] = STATE(40),
    [sym_bool_literal] = STATE(40),
    [sym_str_literal] = STATE(40),
    [sym_char_literal] = STATE(40),
    [sym_pattern_literal] = STATE(40),
    [sym_array_expression] = STATE(40),
    [sym_map_expression] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(204),
    [sym_float_literal] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(204),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [sym_integer_literal] = ACTIONS(210),
    [sym_float_literal] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(210),
    [anon_sym_false] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_POUND_DQUOTE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [sym_identifier] = ACTIONS(210),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [sym_integer_literal] = ACTIONS(214),
    [sym_float_literal] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(214),
    [anon_sym_false] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [sym_identifier] = ACTIONS(214),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_AMP] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [sym_integer_literal] = ACTIONS(218),
    [sym_float_literal] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(218),
    [anon_sym_false] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(216),
    [anon_sym_POUND_DQUOTE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym_identifier] = ACTIONS(218),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_AT] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [sym_integer_literal] = ACTIONS(222),
    [sym_float_literal] = ACTIONS(220),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_POUND_DQUOTE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [sym_identifier] = ACTIONS(222),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
    [anon_sym_AMP] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_integer_literal] = ACTIONS(226),
    [sym_float_literal] = ACTIONS(224),
    [anon_sym_true] = ACTIONS(226),
    [anon_sym_false] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_BSLASH] = ACTIONS(224),
    [anon_sym_POUND_DQUOTE] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [sym_identifier] = ACTIONS(226),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(228),
    [sym_integer_literal] = ACTIONS(230),
    [sym_float_literal] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(230),
    [anon_sym_false] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(228),
    [anon_sym_POUND_DQUOTE] = ACTIONS(228),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [sym_identifier] = ACTIONS(230),
  },
  [29] = {
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [sym_integer_literal] = ACTIONS(234),
    [sym_float_literal] = ACTIONS(232),
    [anon_sym_true] = ACTIONS(234),
    [anon_sym_false] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(232),
    [anon_sym_POUND_DQUOTE] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [sym_identifier] = ACTIONS(234),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(236),
    [sym_integer_literal] = ACTIONS(238),
    [sym_float_literal] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(238),
    [anon_sym_false] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(236),
    [anon_sym_POUND_DQUOTE] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [sym_integer_literal] = ACTIONS(242),
    [sym_float_literal] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(240),
    [anon_sym_POUND_DQUOTE] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_identifier] = ACTIONS(242),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [sym_integer_literal] = ACTIONS(246),
    [sym_float_literal] = ACTIONS(244),
    [anon_sym_true] = ACTIONS(246),
    [anon_sym_false] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(244),
    [anon_sym_POUND_DQUOTE] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(252),
    [sym_float_literal] = ACTIONS(248),
    [anon_sym_true] = ACTIONS(252),
    [anon_sym_false] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_BSLASH] = ACTIONS(248),
    [anon_sym_POUND_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [sym_identifier] = ACTIONS(252),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(254),
    [sym_float_literal] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(254),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(256),
    [sym_integer_literal] = ACTIONS(258),
    [sym_float_literal] = ACTIONS(256),
    [anon_sym_true] = ACTIONS(258),
    [anon_sym_false] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(256),
    [anon_sym_POUND_DQUOTE] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym_identifier] = ACTIONS(258),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_integer_literal] = ACTIONS(262),
    [sym_float_literal] = ACTIONS(260),
    [anon_sym_true] = ACTIONS(262),
    [anon_sym_false] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_BSLASH] = ACTIONS(260),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(260),
    [sym_identifier] = ACTIONS(262),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_integer_literal] = ACTIONS(266),
    [sym_float_literal] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_BSLASH] = ACTIONS(264),
    [anon_sym_POUND_DQUOTE] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(264),
    [sym_identifier] = ACTIONS(266),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(268),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(268),
    [anon_sym_true] = ACTIONS(270),
    [anon_sym_false] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(268),
    [anon_sym_POUND_DQUOTE] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [sym_identifier] = ACTIONS(270),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_integer_literal] = ACTIONS(274),
    [sym_float_literal] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(272),
    [anon_sym_POUND_DQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [sym_identifier] = ACTIONS(274),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(276),
    [sym_integer_literal] = ACTIONS(278),
    [sym_float_literal] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(278),
    [anon_sym_false] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(276),
    [anon_sym_POUND_DQUOTE] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [sym_identifier] = ACTIONS(278),
  },
  [41] = {
    [sym_line_comment] = STATE(41),
    [sym__s_expr] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(285),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
  },
  [43] = {
    [sym_line_comment] = STATE(41),
    [sym__s_expr] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [44] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(292),
    [anon_sym_DQUOTE2] = ACTIONS(294),
    [sym_escape_sequence] = ACTIONS(296),
  },
  [45] = {
    [aux_sym_str_literal_repeat1] = STATE(48),
    [aux_sym_str_literal_token1] = ACTIONS(298),
    [anon_sym_DQUOTE2] = ACTIONS(300),
    [sym_escape_sequence] = ACTIONS(302),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
  },
  [47] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(292),
    [anon_sym_DQUOTE2] = ACTIONS(306),
    [sym_escape_sequence] = ACTIONS(296),
  },
  [48] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(292),
    [anon_sym_DQUOTE2] = ACTIONS(308),
    [sym_escape_sequence] = ACTIONS(296),
  },
  [49] = {
    [aux_sym_str_literal_repeat1] = STATE(44),
    [aux_sym_str_literal_token1] = ACTIONS(310),
    [anon_sym_DQUOTE2] = ACTIONS(312),
    [sym_escape_sequence] = ACTIONS(314),
  },
  [50] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(316),
    [anon_sym_DQUOTE2] = ACTIONS(319),
    [sym_escape_sequence] = ACTIONS(321),
  },
  [51] = {
    [aux_sym_str_literal_repeat1] = STATE(47),
    [aux_sym_str_literal_token1] = ACTIONS(324),
    [anon_sym_DQUOTE2] = ACTIONS(326),
    [sym_escape_sequence] = ACTIONS(328),
  },
  [52] = {
    [aux_sym_str_literal_repeat1] = STATE(50),
    [aux_sym_str_literal_token1] = ACTIONS(292),
    [anon_sym_DQUOTE2] = ACTIONS(330),
    [sym_escape_sequence] = ACTIONS(296),
  },
  [53] = {
    [aux_sym_str_literal_repeat1] = STATE(52),
    [aux_sym_str_literal_token1] = ACTIONS(332),
    [anon_sym_DQUOTE2] = ACTIONS(334),
    [sym_escape_sequence] = ACTIONS(336),
  },
  [54] = {
    [aux_sym_parameters_repeat1] = STATE(59),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_identifier] = ACTIONS(340),
  },
  [55] = {
    [aux_sym_let_pairs_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_identifier] = ACTIONS(344),
  },
  [56] = {
    [aux_sym_parameters_repeat1] = STATE(54),
    [anon_sym_RBRACK] = ACTIONS(347),
    [sym_identifier] = ACTIONS(349),
  },
  [57] = {
    [aux_sym_let_pairs_repeat1] = STATE(55),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
  },
  [58] = {
    [aux_sym_let_pairs_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_identifier] = ACTIONS(353),
  },
  [59] = {
    [aux_sym_parameters_repeat1] = STATE(59),
    [anon_sym_RBRACK] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
  },
  [60] = {
    [anon_sym_RBRACK] = ACTIONS(220),
    [sym_identifier] = ACTIONS(220),
  },
  [61] = {
    [anon_sym_RBRACK] = ACTIONS(228),
    [sym_identifier] = ACTIONS(228),
  },
  [62] = {
    [sym_parameters] = STATE(8),
    [anon_sym_LBRACK] = ACTIONS(362),
  },
  [63] = {
    [sym_let_pairs] = STATE(6),
    [anon_sym_LBRACK] = ACTIONS(364),
  },
  [64] = {
    [aux_sym_str_literal_token1] = ACTIONS(366),
    [sym_escape_sequence] = ACTIONS(368),
  },
  [65] = {
    [anon_sym_RBRACK] = ACTIONS(370),
    [sym_identifier] = ACTIONS(370),
  },
  [66] = {
    [sym_parameters] = STATE(7),
    [anon_sym_LBRACK] = ACTIONS(362),
  },
  [67] = {
    [anon_sym_RBRACK] = ACTIONS(244),
    [sym_identifier] = ACTIONS(244),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(216),
    [sym_identifier] = ACTIONS(216),
  },
  [69] = {
    [aux_sym_str_literal_token1] = ACTIONS(372),
    [sym_escape_sequence] = ACTIONS(374),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(224),
    [sym_identifier] = ACTIONS(224),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(208),
    [sym_identifier] = ACTIONS(208),
  },
  [72] = {
    [anon_sym_RBRACK] = ACTIONS(236),
    [sym_identifier] = ACTIONS(236),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(212),
    [sym_identifier] = ACTIONS(212),
  },
  [74] = {
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_identifier] = ACTIONS(240),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(232),
    [sym_identifier] = ACTIONS(232),
  },
  [76] = {
    [aux_sym_line_comment_token1] = ACTIONS(376),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(378),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(380),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(382),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(384),
  },
  [81] = {
    [sym_identifier] = ACTIONS(386),
  },
  [82] = {
    [sym_identifier] = ACTIONS(388),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(390),
  },
  [84] = {
    [sym_identifier] = ACTIONS(392),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(394),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(76),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(84),
  [11] = {.count = 1, .reusable = false}, SHIFT(62),
  [13] = {.count = 1, .reusable = false}, SHIFT(82),
  [15] = {.count = 1, .reusable = false}, SHIFT(63),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = false}, SHIFT(78),
  [21] = {.count = 1, .reusable = true}, SHIFT(78),
  [23] = {.count = 1, .reusable = false}, SHIFT(32),
  [25] = {.count = 1, .reusable = true}, SHIFT(49),
  [27] = {.count = 1, .reusable = true}, SHIFT(64),
  [29] = {.count = 1, .reusable = true}, SHIFT(53),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = false}, SHIFT(33),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 5),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = false}, SHIFT(5),
  [41] = {.count = 1, .reusable = true}, SHIFT(5),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [45] = {.count = 1, .reusable = false}, SHIFT(3),
  [47] = {.count = 1, .reusable = true}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(13),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(21),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(32),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(49),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(64),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(53),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(17),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 4),
  [80] = {.count = 1, .reusable = false}, SHIFT(79),
  [82] = {.count = 1, .reusable = true}, SHIFT(79),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 8),
  [86] = {.count = 1, .reusable = false}, SHIFT(80),
  [88] = {.count = 1, .reusable = true}, SHIFT(80),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 3),
  [92] = {.count = 1, .reusable = false}, SHIFT(77),
  [94] = {.count = 1, .reusable = true}, SHIFT(77),
  [96] = {.count = 1, .reusable = true}, SHIFT(19),
  [98] = {.count = 1, .reusable = false}, SHIFT(65),
  [100] = {.count = 1, .reusable = true}, SHIFT(65),
  [102] = {.count = 1, .reusable = false}, SHIFT(67),
  [104] = {.count = 1, .reusable = true}, SHIFT(51),
  [106] = {.count = 1, .reusable = true}, SHIFT(69),
  [108] = {.count = 1, .reusable = true}, SHIFT(45),
  [110] = {.count = 1, .reusable = true}, SHIFT(12),
  [112] = {.count = 1, .reusable = false}, SHIFT(83),
  [114] = {.count = 1, .reusable = true}, SHIFT(83),
  [116] = {.count = 1, .reusable = true}, SHIFT(61),
  [118] = {.count = 1, .reusable = false}, SHIFT(20),
  [120] = {.count = 1, .reusable = true}, SHIFT(20),
  [122] = {.count = 1, .reusable = false}, SHIFT(22),
  [124] = {.count = 1, .reusable = true}, SHIFT(22),
  [126] = {.count = 1, .reusable = true}, SHIFT(72),
  [128] = {.count = 1, .reusable = true}, SHIFT(25),
  [130] = {.count = 1, .reusable = false}, SHIFT(16),
  [132] = {.count = 1, .reusable = true}, SHIFT(16),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(13),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(22),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(22),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(32),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(49),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(64),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(53),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12), SHIFT_REPEAT(17),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 12),
  [160] = {.count = 1, .reusable = true}, SHIFT(24),
  [162] = {.count = 1, .reusable = true}, SHIFT(28),
  [164] = {.count = 1, .reusable = true}, SHIFT(30),
  [166] = {.count = 1, .reusable = true}, SHIFT(73),
  [168] = {.count = 1, .reusable = true}, SHIFT(68),
  [170] = {.count = 1, .reusable = false}, SHIFT(11),
  [172] = {.count = 1, .reusable = true}, SHIFT(11),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(13),
  [177] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(20),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(20),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(32),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(49),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(64),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(53),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(17),
  [200] = {.count = 1, .reusable = false}, SHIFT(34),
  [202] = {.count = 1, .reusable = true}, SHIFT(34),
  [204] = {.count = 1, .reusable = false}, SHIFT(40),
  [206] = {.count = 1, .reusable = true}, SHIFT(40),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 11),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 11),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(81),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 13),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 13),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 16),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 16),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [276] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 10),
  [278] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 10),
  [280] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [292] = {.count = 1, .reusable = false}, SHIFT(50),
  [294] = {.count = 1, .reusable = true}, SHIFT(31),
  [296] = {.count = 1, .reusable = true}, SHIFT(50),
  [298] = {.count = 1, .reusable = false}, SHIFT(48),
  [300] = {.count = 1, .reusable = true}, SHIFT(71),
  [302] = {.count = 1, .reusable = true}, SHIFT(48),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(74),
  [308] = {.count = 1, .reusable = true}, SHIFT(75),
  [310] = {.count = 1, .reusable = false}, SHIFT(44),
  [312] = {.count = 1, .reusable = true}, SHIFT(26),
  [314] = {.count = 1, .reusable = true}, SHIFT(44),
  [316] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(50),
  [319] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(50),
  [324] = {.count = 1, .reusable = false}, SHIFT(47),
  [326] = {.count = 1, .reusable = true}, SHIFT(60),
  [328] = {.count = 1, .reusable = true}, SHIFT(47),
  [330] = {.count = 1, .reusable = true}, SHIFT(29),
  [332] = {.count = 1, .reusable = false}, SHIFT(52),
  [334] = {.count = 1, .reusable = true}, SHIFT(23),
  [336] = {.count = 1, .reusable = true}, SHIFT(52),
  [338] = {.count = 1, .reusable = true}, SHIFT(37),
  [340] = {.count = 1, .reusable = true}, SHIFT(59),
  [342] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 17),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 17), SHIFT_REPEAT(9),
  [347] = {.count = 1, .reusable = true}, SHIFT(38),
  [349] = {.count = 1, .reusable = true}, SHIFT(54),
  [351] = {.count = 1, .reusable = true}, SHIFT(36),
  [353] = {.count = 1, .reusable = true}, SHIFT(9),
  [355] = {.count = 1, .reusable = true}, SHIFT(39),
  [357] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(59),
  [362] = {.count = 1, .reusable = true}, SHIFT(56),
  [364] = {.count = 1, .reusable = true}, SHIFT(58),
  [366] = {.count = 1, .reusable = false}, SHIFT(27),
  [368] = {.count = 1, .reusable = true}, SHIFT(27),
  [370] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 15),
  [372] = {.count = 1, .reusable = false}, SHIFT(70),
  [374] = {.count = 1, .reusable = true}, SHIFT(70),
  [376] = {.count = 1, .reusable = true}, SHIFT(46),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 7),
  [380] = {.count = 1, .reusable = true}, SHIFT(42),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 9),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 14),
  [386] = {.count = 1, .reusable = true}, SHIFT(35),
  [388] = {.count = 1, .reusable = true}, SHIFT(66),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 6),
  [392] = {.count = 1, .reusable = true}, SHIFT(10),
  [394] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
