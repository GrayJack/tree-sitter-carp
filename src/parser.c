#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 309
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_use = 5,
  anon_sym_doc = 6,
  anon_sym_def = 7,
  anon_sym_fn = 8,
  anon_sym_defn = 9,
  anon_sym_let = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_do = 13,
  anon_sym_if = 14,
  anon_sym_while = 15,
  anon_sym_ref = 16,
  anon_sym_address = 17,
  anon_sym_set_BANG = 18,
  anon_sym_the = 19,
  anon_sym_register = 20,
  anon_sym_Bool = 21,
  anon_sym_Char = 22,
  anon_sym_Int = 23,
  anon_sym_Long = 24,
  anon_sym_Float = 25,
  anon_sym_Double = 26,
  anon_sym_Vector2 = 27,
  anon_sym_Vector3 = 28,
  anon_sym_VectorN = 29,
  anon_sym_String = 30,
  anon_sym_Pattern = 31,
  anon_sym_Array = 32,
  anon_sym_Map = 33,
  anon_sym_Maybe = 34,
  anon_sym_Result = 35,
  anon_sym_Id = 36,
  anon_sym_Ptr = 37,
  anon_sym_DOT = 38,
  anon_sym_definterface = 39,
  anon_sym_defmacro = 40,
  anon_sym_defndynamic = 41,
  anon_sym_defmodule = 42,
  anon_sym_deftype = 43,
  anon_sym_RPAREN2 = 44,
  anon_sym_COMMA = 45,
  anon_sym_RBRACK2 = 46,
  anon_sym_Fn = 47,
  anon_sym_ = 48,
  anon_sym_AMP = 49,
  anon_sym_AT = 50,
  anon_sym_TILDE = 51,
  anon_sym_SQUOTE = 52,
  sym_integer_literal = 53,
  sym_float_literal = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_str_literal_token1 = 58,
  anon_sym_DQUOTE2 = 59,
  anon_sym_BSLASH = 60,
  anon_sym_POUND_DQUOTE = 61,
  sym_escape_sequence = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_COLON = 65,
  sym_hidden = 66,
  anon_sym_let_DASHdo = 67,
  anon_sym_while_DASHdo = 68,
  anon_sym_defn_DASHdo = 69,
  anon_sym_break = 70,
  anon_sym_for = 71,
  anon_sym_when = 72,
  anon_sym_cond = 73,
  anon_sym_unless = 74,
  anon_sym_case = 75,
  anon_sym_foreach = 76,
  anon_sym_defdynamic = 77,
  anon_sym_load = 78,
  anon_sym_match = 79,
  anon_sym_PLUS = 80,
  anon_sym_DASH = 81,
  anon_sym_SLASH = 82,
  anon_sym_STAR = 83,
  anon_sym_PERCENT = 84,
  anon_sym_LT = 85,
  anon_sym_GT = 86,
  anon_sym_EQ = 87,
  anon_sym_LT_EQ = 88,
  anon_sym_GT_EQ = 89,
  anon_sym_SLASH_EQ = 90,
  anon_sym_and = 91,
  anon_sym_or = 92,
  anon_sym_not = 93,
  anon_sym_and_STAR = 94,
  anon_sym_or_STAR = 95,
  sym_upper_identifier = 96,
  sym_identifier = 97,
  sym_source_file = 98,
  sym_line_comment = 99,
  sym__s_expr = 100,
  sym__expr = 101,
  sym__anything = 102,
  sym__s_forms = 103,
  sym__defs = 104,
  sym__literals = 105,
  sym__short_helper = 106,
  sym_use = 107,
  sym_doc = 108,
  sym_def = 109,
  sym_fn = 110,
  sym_defn = 111,
  sym_let = 112,
  sym_let_pairs = 113,
  sym_do = 114,
  sym_if = 115,
  sym_while = 116,
  sym_ref = 117,
  sym_address = 118,
  sym_set = 119,
  sym_the = 120,
  sym_register = 121,
  sym_type = 122,
  sym_complex_type = 123,
  sym_call_expression = 124,
  sym__call_name = 125,
  sym_call_no_module = 126,
  sym_call_with_module = 127,
  sym_definterface = 128,
  sym_defmacro = 129,
  sym_defndynamic = 130,
  sym_defmodule = 131,
  sym_deftype = 132,
  sym__deftype1 = 133,
  sym__deftype2 = 134,
  sym__name_deftypes = 135,
  sym_fields = 136,
  sym_interface_fn = 137,
  sym_short_ref = 138,
  sym_short_copy = 139,
  sym_short_fn_ref = 140,
  sym_short_quote = 141,
  sym_parameters = 142,
  sym_typed_parameters = 143,
  sym_bool_literal = 144,
  sym_str_literal = 145,
  sym_char_literal = 146,
  sym_pattern_literal = 147,
  sym_array_expression = 148,
  sym_map_expression = 149,
  sym_symbol = 150,
  sym_other_str = 151,
  sym_operators = 152,
  aux_sym_source_file_repeat1 = 153,
  aux_sym_let_pairs_repeat1 = 154,
  aux_sym_do_repeat1 = 155,
  aux_sym_complex_type_repeat1 = 156,
  aux_sym_call_expression_repeat1 = 157,
  aux_sym_defmodule_repeat1 = 158,
  aux_sym__deftype2_repeat1 = 159,
  aux_sym__name_deftypes_repeat1 = 160,
  aux_sym_fields_repeat1 = 161,
  aux_sym_parameters_repeat1 = 162,
  aux_sym_typed_parameters_repeat1 = 163,
  aux_sym_str_literal_repeat1 = 164,
  aux_sym_array_expression_repeat1 = 165,
  aux_sym_map_expression_repeat1 = 166,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_use] = "use",
  [anon_sym_doc] = "doc",
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
  [sym_hidden] = "hidden",
  [anon_sym_let_DASHdo] = "let-do",
  [anon_sym_while_DASHdo] = "while-do",
  [anon_sym_defn_DASHdo] = "defn-do",
  [anon_sym_break] = "break",
  [anon_sym_for] = "for",
  [anon_sym_when] = "when",
  [anon_sym_cond] = "cond",
  [anon_sym_unless] = "unless",
  [anon_sym_case] = "case",
  [anon_sym_foreach] = "foreach",
  [anon_sym_defdynamic] = "defdynamic",
  [anon_sym_load] = "load",
  [anon_sym_match] = "match",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_and_STAR] = "and*",
  [anon_sym_or_STAR] = "or*",
  [sym_upper_identifier] = "upper_identifier",
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
  [sym_use] = "use",
  [sym_doc] = "doc",
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
  [sym__call_name] = "_call_name",
  [sym_call_no_module] = "call_no_module",
  [sym_call_with_module] = "call_with_module",
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
  [sym_other_str] = "other_str",
  [sym_operators] = "operators",
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doc] = {
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
  [sym_hidden] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defdynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_upper_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_doc] = {
    .visible = true,
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
  [sym__call_name] = {
    .visible = false,
    .named = true,
  },
  [sym_call_no_module] = {
    .visible = true,
    .named = true,
  },
  [sym_call_with_module] = {
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
  [sym_other_str] = {
    .visible = true,
    .named = true,
  },
  [sym_operators] = {
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
  field_doc_str = 6,
  field_else = 7,
  field_expr = 8,
  field_fields = 9,
  field_fn = 10,
  field_generic_type = 11,
  field_key = 12,
  field_module = 13,
  field_name = 14,
  field_pairs = 15,
  field_parameters = 16,
  field_return_type = 17,
  field_then = 18,
  field_type = 19,
  field_typed_params = 20,
  field_value = 21,
  field_value_name = 22,
  field_var = 23,
  field_variable = 24,
  field_variant = 25,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
  [field_definition] = "definition",
  [field_doc_str] = "doc_str",
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
  [9] = {.index = 8, .length = 1},
  [11] = {.index = 9, .length = 1},
  [12] = {.index = 10, .length = 3},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
  [28] = {.index = 43, .length = 4},
  [29] = {.index = 47, .length = 2},
  [30] = {.index = 49, .length = 2},
  [31] = {.index = 51, .length = 4},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 3},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 4},
  [37] = {.index = 68, .length = 3},
  [38] = {.index = 71, .length = 3},
  [39] = {.index = 74, .length = 1},
  [40] = {.index = 75, .length = 2},
  [42] = {.index = 77, .length = 4},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 2},
  [45] = {.index = 85, .length = 2},
  [46] = {.index = 87, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_call_name, 0},
  [2] =
    {field_module, 1},
  [3] =
    {field_parameters, 1},
  [4] =
    {field_pairs, 1},
  [5] =
    {field_expr, 0},
  [6] =
    {field_expr, 1, .inherited = true},
  [7] =
    {field_condition, 1},
  [8] =
    {field_expr, 1},
  [9] =
    {field_name, 1},
  [10] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [13] =
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [15] =
    {field_argument, 1},
    {field_call_name, 0},
  [17] =
    {field_doc_str, 2},
    {field_fn, 1},
  [19] =
    {field_name, 1},
    {field_value, 2},
  [21] =
    {field_body, 2},
    {field_parameters, 1},
  [23] =
    {field_name, 1},
    {field_parameters, 2},
  [25] =
    {field_body, 2},
    {field_pairs, 1},
  [27] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [29] =
    {field_body, 2},
    {field_condition, 1},
  [31] =
    {field_expr, 2},
    {field_variable, 1},
  [33] =
    {field_expr, 2},
    {field_type, 1},
  [35] =
    {field_name, 1},
    {field_type, 2},
  [37] =
    {field_definition, 0},
  [38] =
    {field_definition, 2, .inherited = true},
    {field_name, 1},
  [40] =
    {field_fields, 1},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [43] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [47] =
    {field_key, 0},
    {field_value, 1},
  [49] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [51] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [55] =
    {field_module, 0},
    {field_name, 2},
  [57] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [60] =
    {field_expr, 1},
    {field_var, 0},
  [62] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [64] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [68] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [71] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [74] =
    {field_definition, 1},
  [75] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [77] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [81] =
    {field_fn, 3},
    {field_name, 1},
  [83] =
    {field_generic_type, 2},
    {field_name, 1},
  [85] =
    {field_return_type, 2},
    {field_typed_params, 1},
  [87] =
    {field_fields, 2},
    {field_variant, 1},
};

static TSSymbol ts_alias_sequences[47][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [0] = sym_identifier,
  },
  [41] = {
    [0] = sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(198);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '>') ADVANCE(333);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(176);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == 955) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(198);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '>') ADVANCE(333);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(176);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == 955) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(198);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '>') ADVANCE(333);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(343);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(228);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(307);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == 'w') ADVANCE(393);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(343);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(343);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(343);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == 'w') ADVANCE(393);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'D') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'L') ADVANCE(416);
      if (lookahead == 'M') ADVANCE(350);
      if (lookahead == 'P') ADVANCE(353);
      if (lookahead == 'R') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(449);
      if (lookahead == 'V') ADVANCE(385);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'D') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'L') ADVANCE(416);
      if (lookahead == 'M') ADVANCE(350);
      if (lookahead == 'P') ADVANCE(353);
      if (lookahead == 'R') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(449);
      if (lookahead == 'V') ADVANCE(385);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'D') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'L') ADVANCE(416);
      if (lookahead == 'M') ADVANCE(350);
      if (lookahead == 'P') ADVANCE(353);
      if (lookahead == 'R') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(449);
      if (lookahead == 'V') ADVANCE(385);
      if (lookahead == 955) ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(246);
      if (lookahead == '3') ADVANCE(248);
      if (lookahead == 'N') ADVANCE(250);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(316);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 187:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 190:
      if (lookahead == '{') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 191:
      if (lookahead == '}') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_use);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_doc);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 't') ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 211:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(459);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 215:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(207);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 221:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 223:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 225:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 227:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      END_STATE();
    case 229:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 231:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 233:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 235:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 237:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 239:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 241:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 243:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 245:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 247:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 249:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_VectorN);
      END_STATE();
    case 251:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 253:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Pattern);
      END_STATE();
    case 255:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 257:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 259:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Maybe);
      END_STATE();
    case 261:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 263:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 265:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Ptr);
      END_STATE();
    case 267:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_definterface);
      END_STATE();
    case 270:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_defmacro);
      END_STATE();
    case 272:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      END_STATE();
    case 274:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 276:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_deftype);
      END_STATE();
    case 278:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 283:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 285:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 293:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 298:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 300:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_hidden);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_let_DASHdo);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_while_DASHdo);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_defn_DASHdo);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_cond);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_defdynamic);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '*') ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '*') ADVANCE(342);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_and_STAR);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_or_STAR);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_upper_identifier);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(229);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(247);
      if (lookahead == '3') ADVANCE(249);
      if (lookahead == 'N') ADVANCE(251);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(211);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(407);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(366);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(408);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(422);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(458);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 't') ADVANCE(427);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(445);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(428);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(377);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(406);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(207);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(274);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(425);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(447);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(376);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(433);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(444);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(363);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(456);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(442);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(389);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(231);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(219);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(443);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(438);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(430);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(426);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(439);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(432);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(221);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(208);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(396);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(351);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(241);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(253);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(397);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(454);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(355);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(441);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(359);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(235);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(283);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(420);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(373);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(446);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(375);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(378);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(440);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(398);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(349);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(391);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(392);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(448);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(272);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(453);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(410);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(400);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(417);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(354);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(429);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(356);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(374);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(454);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(414);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(233);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(267);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(345);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(390);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(399);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(411);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(381);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(352);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(434);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(227);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(370);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(436);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(455);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(372);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(450);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(344);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(243);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(382);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(386);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(451);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(357);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(371);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(404);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(405);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(423);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(257);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(409);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    case 461:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(461);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 23},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 23},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 192},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 23},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 23},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 192},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 23},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 200},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 16},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 16},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 16},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 16},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 16},
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 16},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_doc] = ACTIONS(1),
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
    [sym_hidden] = ACTIONS(1),
    [anon_sym_let_DASHdo] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and_STAR] = ACTIONS(1),
    [anon_sym_or_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(308),
    [sym_line_comment] = STATE(8),
    [sym__s_expr] = STATE(8),
    [sym_other_str] = STATE(8),
    [sym_operators] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_let_DASHdo] = ACTIONS(9),
    [anon_sym_while_DASHdo] = ACTIONS(9),
    [anon_sym_defn_DASHdo] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(9),
    [anon_sym_cond] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(9),
    [anon_sym_defdynamic] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_match] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_and_STAR] = ACTIONS(13),
    [anon_sym_or_STAR] = ACTIONS(13),
  },
  [2] = {
    [sym_line_comment] = STATE(269),
    [sym__s_expr] = STATE(269),
    [sym__anything] = STATE(269),
    [sym__s_forms] = STATE(269),
    [sym__defs] = STATE(269),
    [sym__literals] = STATE(269),
    [sym__short_helper] = STATE(269),
    [sym_use] = STATE(269),
    [sym_doc] = STATE(269),
    [sym_def] = STATE(269),
    [sym_fn] = STATE(269),
    [sym_defn] = STATE(269),
    [sym_let] = STATE(269),
    [sym_do] = STATE(269),
    [sym_if] = STATE(269),
    [sym_while] = STATE(269),
    [sym_ref] = STATE(269),
    [sym_address] = STATE(269),
    [sym_set] = STATE(269),
    [sym_the] = STATE(269),
    [sym_register] = STATE(269),
    [sym_call_expression] = STATE(269),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(269),
    [sym_defmacro] = STATE(269),
    [sym_defndynamic] = STATE(269),
    [sym_defmodule] = STATE(269),
    [sym_deftype] = STATE(269),
    [sym_short_ref] = STATE(269),
    [sym_short_copy] = STATE(269),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(269),
    [sym_bool_literal] = STATE(269),
    [sym_str_literal] = STATE(269),
    [sym_char_literal] = STATE(269),
    [sym_pattern_literal] = STATE(269),
    [sym_array_expression] = STATE(269),
    [sym_map_expression] = STATE(269),
    [sym_symbol] = STATE(269),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [3] = {
    [sym_line_comment] = STATE(299),
    [sym__s_expr] = STATE(299),
    [sym__anything] = STATE(299),
    [sym__s_forms] = STATE(299),
    [sym__defs] = STATE(299),
    [sym__literals] = STATE(299),
    [sym__short_helper] = STATE(299),
    [sym_use] = STATE(299),
    [sym_doc] = STATE(299),
    [sym_def] = STATE(299),
    [sym_fn] = STATE(299),
    [sym_defn] = STATE(299),
    [sym_let] = STATE(299),
    [sym_do] = STATE(299),
    [sym_if] = STATE(299),
    [sym_while] = STATE(299),
    [sym_ref] = STATE(299),
    [sym_address] = STATE(299),
    [sym_set] = STATE(299),
    [sym_the] = STATE(299),
    [sym_register] = STATE(299),
    [sym_call_expression] = STATE(299),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(299),
    [sym_defmacro] = STATE(299),
    [sym_defndynamic] = STATE(299),
    [sym_defmodule] = STATE(299),
    [sym_deftype] = STATE(299),
    [sym_short_ref] = STATE(299),
    [sym_short_copy] = STATE(299),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(299),
    [sym_bool_literal] = STATE(299),
    [sym_str_literal] = STATE(299),
    [sym_char_literal] = STATE(299),
    [sym_pattern_literal] = STATE(299),
    [sym_array_expression] = STATE(299),
    [sym_map_expression] = STATE(299),
    [sym_symbol] = STATE(299),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(83),
    [sym_float_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [4] = {
    [sym_line_comment] = STATE(293),
    [sym__s_expr] = STATE(293),
    [sym__anything] = STATE(293),
    [sym__s_forms] = STATE(293),
    [sym__defs] = STATE(293),
    [sym__literals] = STATE(293),
    [sym__short_helper] = STATE(293),
    [sym_use] = STATE(293),
    [sym_doc] = STATE(293),
    [sym_def] = STATE(293),
    [sym_fn] = STATE(293),
    [sym_defn] = STATE(293),
    [sym_let] = STATE(293),
    [sym_do] = STATE(293),
    [sym_if] = STATE(293),
    [sym_while] = STATE(293),
    [sym_ref] = STATE(293),
    [sym_address] = STATE(293),
    [sym_set] = STATE(293),
    [sym_the] = STATE(293),
    [sym_register] = STATE(293),
    [sym_call_expression] = STATE(293),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(293),
    [sym_defmacro] = STATE(293),
    [sym_defndynamic] = STATE(293),
    [sym_defmodule] = STATE(293),
    [sym_deftype] = STATE(293),
    [sym_short_ref] = STATE(293),
    [sym_short_copy] = STATE(293),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(293),
    [sym_bool_literal] = STATE(293),
    [sym_str_literal] = STATE(293),
    [sym_char_literal] = STATE(293),
    [sym_pattern_literal] = STATE(293),
    [sym_array_expression] = STATE(293),
    [sym_map_expression] = STATE(293),
    [sym_symbol] = STATE(293),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(85),
    [sym_float_literal] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [5] = {
    [sym_line_comment] = STATE(271),
    [sym__s_expr] = STATE(271),
    [sym__anything] = STATE(271),
    [sym__s_forms] = STATE(271),
    [sym__defs] = STATE(271),
    [sym__literals] = STATE(271),
    [sym__short_helper] = STATE(271),
    [sym_use] = STATE(271),
    [sym_doc] = STATE(271),
    [sym_def] = STATE(271),
    [sym_fn] = STATE(271),
    [sym_defn] = STATE(271),
    [sym_let] = STATE(271),
    [sym_do] = STATE(271),
    [sym_if] = STATE(271),
    [sym_while] = STATE(271),
    [sym_ref] = STATE(271),
    [sym_address] = STATE(271),
    [sym_set] = STATE(271),
    [sym_the] = STATE(271),
    [sym_register] = STATE(271),
    [sym_call_expression] = STATE(271),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(271),
    [sym_defmacro] = STATE(271),
    [sym_defndynamic] = STATE(271),
    [sym_defmodule] = STATE(271),
    [sym_deftype] = STATE(271),
    [sym_short_ref] = STATE(271),
    [sym_short_copy] = STATE(271),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(271),
    [sym_bool_literal] = STATE(271),
    [sym_str_literal] = STATE(271),
    [sym_char_literal] = STATE(271),
    [sym_pattern_literal] = STATE(271),
    [sym_array_expression] = STATE(271),
    [sym_map_expression] = STATE(271),
    [sym_symbol] = STATE(271),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(87),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [6] = {
    [sym_line_comment] = STATE(273),
    [sym__s_expr] = STATE(273),
    [sym__anything] = STATE(273),
    [sym__s_forms] = STATE(273),
    [sym__defs] = STATE(273),
    [sym__literals] = STATE(273),
    [sym__short_helper] = STATE(273),
    [sym_use] = STATE(273),
    [sym_doc] = STATE(273),
    [sym_def] = STATE(273),
    [sym_fn] = STATE(273),
    [sym_defn] = STATE(273),
    [sym_let] = STATE(273),
    [sym_do] = STATE(273),
    [sym_if] = STATE(273),
    [sym_while] = STATE(273),
    [sym_ref] = STATE(273),
    [sym_address] = STATE(273),
    [sym_set] = STATE(273),
    [sym_the] = STATE(273),
    [sym_register] = STATE(273),
    [sym_call_expression] = STATE(273),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(273),
    [sym_defmacro] = STATE(273),
    [sym_defndynamic] = STATE(273),
    [sym_defmodule] = STATE(273),
    [sym_deftype] = STATE(273),
    [sym_short_ref] = STATE(273),
    [sym_short_copy] = STATE(273),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(273),
    [sym_bool_literal] = STATE(273),
    [sym_str_literal] = STATE(273),
    [sym_char_literal] = STATE(273),
    [sym_pattern_literal] = STATE(273),
    [sym_array_expression] = STATE(273),
    [sym_map_expression] = STATE(273),
    [sym_symbol] = STATE(273),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(89),
    [sym_float_literal] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [7] = {
    [sym_line_comment] = STATE(7),
    [sym__s_expr] = STATE(7),
    [sym_other_str] = STATE(7),
    [sym_operators] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_let_DASHdo] = ACTIONS(99),
    [anon_sym_while_DASHdo] = ACTIONS(99),
    [anon_sym_defn_DASHdo] = ACTIONS(99),
    [anon_sym_break] = ACTIONS(99),
    [anon_sym_for] = ACTIONS(102),
    [anon_sym_when] = ACTIONS(99),
    [anon_sym_cond] = ACTIONS(99),
    [anon_sym_unless] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_foreach] = ACTIONS(99),
    [anon_sym_defdynamic] = ACTIONS(99),
    [anon_sym_load] = ACTIONS(99),
    [anon_sym_match] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_SLASH_EQ] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(108),
    [anon_sym_or] = ACTIONS(108),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_and_STAR] = ACTIONS(105),
    [anon_sym_or_STAR] = ACTIONS(105),
  },
  [8] = {
    [sym_line_comment] = STATE(7),
    [sym__s_expr] = STATE(7),
    [sym_other_str] = STATE(7),
    [sym_operators] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_let_DASHdo] = ACTIONS(9),
    [anon_sym_while_DASHdo] = ACTIONS(9),
    [anon_sym_defn_DASHdo] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(9),
    [anon_sym_cond] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(9),
    [anon_sym_defdynamic] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_match] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_and_STAR] = ACTIONS(13),
    [anon_sym_or_STAR] = ACTIONS(13),
  },
  [9] = {
    [sym__s_expr] = STATE(118),
    [sym__expr] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_doc] = STATE(42),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(118),
    [sym_short_quote] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [sym_symbol] = STATE(118),
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_doc] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_integer_literal] = ACTIONS(136),
    [sym_float_literal] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [anon_sym_BSLASH] = ACTIONS(145),
    [anon_sym_POUND_DQUOTE] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(154),
    [sym_upper_identifier] = ACTIONS(157),
    [sym_identifier] = ACTIONS(136),
  },
  [10] = {
    [sym__s_expr] = STATE(118),
    [sym__expr] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_doc] = STATE(42),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(118),
    [sym_short_quote] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [sym_symbol] = STATE(118),
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_doc] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(176),
    [sym_float_literal] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(190),
    [sym_identifier] = ACTIONS(176),
  },
  [11] = {
    [sym__s_expr] = STATE(118),
    [sym__expr] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__short_helper] = STATE(118),
    [sym_doc] = STATE(42),
    [sym_short_ref] = STATE(118),
    [sym_short_copy] = STATE(118),
    [sym_short_fn_ref] = STATE(118),
    [sym_short_quote] = STATE(118),
    [sym_bool_literal] = STATE(118),
    [sym_str_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_pattern_literal] = STATE(118),
    [sym_array_expression] = STATE(118),
    [sym_map_expression] = STATE(118),
    [sym_symbol] = STATE(118),
    [aux_sym_defmodule_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_doc] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(176),
    [sym_float_literal] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(190),
    [sym_identifier] = ACTIONS(176),
  },
  [12] = {
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
    [aux_sym_do_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(206),
    [sym_float_literal] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(218),
    [sym_identifier] = ACTIONS(206),
  },
  [13] = {
    [sym__s_expr] = STATE(13),
    [sym__expr] = STATE(13),
    [sym__literals] = STATE(13),
    [sym__short_helper] = STATE(13),
    [sym_short_ref] = STATE(13),
    [sym_short_copy] = STATE(13),
    [sym_short_fn_ref] = STATE(13),
    [sym_short_quote] = STATE(13),
    [sym_bool_literal] = STATE(13),
    [sym_str_literal] = STATE(13),
    [sym_char_literal] = STATE(13),
    [sym_pattern_literal] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_map_expression] = STATE(13),
    [sym_symbol] = STATE(13),
    [aux_sym_call_expression_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_integer_literal] = ACTIONS(240),
    [sym_float_literal] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(249),
    [anon_sym_POUND_DQUOTE] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(258),
    [sym_upper_identifier] = ACTIONS(261),
    [sym_identifier] = ACTIONS(240),
  },
  [14] = {
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
    [aux_sym_do_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_AMP] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [sym_integer_literal] = ACTIONS(284),
    [sym_float_literal] = ACTIONS(284),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_POUND_DQUOTE] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(302),
    [sym_upper_identifier] = ACTIONS(305),
    [sym_identifier] = ACTIONS(284),
  },
  [15] = {
    [sym__s_expr] = STATE(13),
    [sym__expr] = STATE(13),
    [sym__literals] = STATE(13),
    [sym__short_helper] = STATE(13),
    [sym_short_ref] = STATE(13),
    [sym_short_copy] = STATE(13),
    [sym_short_fn_ref] = STATE(13),
    [sym_short_quote] = STATE(13),
    [sym_bool_literal] = STATE(13),
    [sym_str_literal] = STATE(13),
    [sym_char_literal] = STATE(13),
    [sym_pattern_literal] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_map_expression] = STATE(13),
    [sym_symbol] = STATE(13),
    [aux_sym_call_expression_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(310),
    [sym_float_literal] = ACTIONS(310),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(312),
    [sym_identifier] = ACTIONS(310),
  },
  [16] = {
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
    [aux_sym_do_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(206),
    [sym_float_literal] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(218),
    [sym_identifier] = ACTIONS(206),
  },
  [17] = {
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
    [aux_sym_call_expression_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(318),
    [sym_float_literal] = ACTIONS(318),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(320),
    [sym_identifier] = ACTIONS(318),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_let_DASHdo] = ACTIONS(322),
    [anon_sym_while_DASHdo] = ACTIONS(322),
    [anon_sym_defn_DASHdo] = ACTIONS(322),
    [anon_sym_break] = ACTIONS(322),
    [anon_sym_for] = ACTIONS(324),
    [anon_sym_when] = ACTIONS(322),
    [anon_sym_cond] = ACTIONS(322),
    [anon_sym_unless] = ACTIONS(322),
    [anon_sym_case] = ACTIONS(322),
    [anon_sym_foreach] = ACTIONS(322),
    [anon_sym_defdynamic] = ACTIONS(322),
    [anon_sym_load] = ACTIONS(322),
    [anon_sym_match] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(322),
    [anon_sym_and] = ACTIONS(324),
    [anon_sym_or] = ACTIONS(324),
    [anon_sym_not] = ACTIONS(322),
    [anon_sym_and_STAR] = ACTIONS(322),
    [anon_sym_or_STAR] = ACTIONS(322),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_let_DASHdo] = ACTIONS(326),
    [anon_sym_while_DASHdo] = ACTIONS(326),
    [anon_sym_defn_DASHdo] = ACTIONS(326),
    [anon_sym_break] = ACTIONS(326),
    [anon_sym_for] = ACTIONS(328),
    [anon_sym_when] = ACTIONS(326),
    [anon_sym_cond] = ACTIONS(326),
    [anon_sym_unless] = ACTIONS(326),
    [anon_sym_case] = ACTIONS(326),
    [anon_sym_foreach] = ACTIONS(326),
    [anon_sym_defdynamic] = ACTIONS(326),
    [anon_sym_load] = ACTIONS(326),
    [anon_sym_match] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [anon_sym_and] = ACTIONS(328),
    [anon_sym_or] = ACTIONS(328),
    [anon_sym_not] = ACTIONS(326),
    [anon_sym_and_STAR] = ACTIONS(326),
    [anon_sym_or_STAR] = ACTIONS(326),
  },
  [20] = {
    [sym__s_expr] = STATE(259),
    [sym__expr] = STATE(259),
    [sym__literals] = STATE(259),
    [sym__short_helper] = STATE(259),
    [sym_short_ref] = STATE(259),
    [sym_short_copy] = STATE(259),
    [sym_short_fn_ref] = STATE(259),
    [sym_short_quote] = STATE(259),
    [sym_bool_literal] = STATE(259),
    [sym_str_literal] = STATE(259),
    [sym_char_literal] = STATE(259),
    [sym_pattern_literal] = STATE(259),
    [sym_array_expression] = STATE(259),
    [sym_map_expression] = STATE(259),
    [sym_symbol] = STATE(259),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(334),
    [sym_float_literal] = ACTIONS(334),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(336),
    [sym_identifier] = ACTIONS(334),
  },
  [21] = {
    [sym__s_expr] = STATE(290),
    [sym__expr] = STATE(290),
    [sym__literals] = STATE(290),
    [sym__short_helper] = STATE(290),
    [sym_short_ref] = STATE(290),
    [sym_short_copy] = STATE(290),
    [sym_short_fn_ref] = STATE(290),
    [sym_short_quote] = STATE(290),
    [sym_bool_literal] = STATE(290),
    [sym_str_literal] = STATE(290),
    [sym_char_literal] = STATE(290),
    [sym_pattern_literal] = STATE(290),
    [sym_array_expression] = STATE(290),
    [sym_map_expression] = STATE(290),
    [sym_symbol] = STATE(290),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(340),
    [sym_float_literal] = ACTIONS(340),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(342),
    [sym_identifier] = ACTIONS(340),
  },
  [22] = {
    [sym__s_expr] = STATE(264),
    [sym__expr] = STATE(264),
    [sym__literals] = STATE(264),
    [sym__short_helper] = STATE(264),
    [sym_short_ref] = STATE(264),
    [sym_short_copy] = STATE(264),
    [sym_short_fn_ref] = STATE(264),
    [sym_short_quote] = STATE(264),
    [sym_bool_literal] = STATE(264),
    [sym_str_literal] = STATE(264),
    [sym_char_literal] = STATE(264),
    [sym_pattern_literal] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_map_expression] = STATE(264),
    [sym_symbol] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(346),
    [sym_float_literal] = ACTIONS(346),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(348),
    [sym_identifier] = ACTIONS(346),
  },
  [23] = {
    [sym__s_expr] = STATE(280),
    [sym__expr] = STATE(280),
    [sym__literals] = STATE(280),
    [sym__short_helper] = STATE(280),
    [sym_short_ref] = STATE(280),
    [sym_short_copy] = STATE(280),
    [sym_short_fn_ref] = STATE(280),
    [sym_short_quote] = STATE(280),
    [sym_bool_literal] = STATE(280),
    [sym_str_literal] = STATE(280),
    [sym_char_literal] = STATE(280),
    [sym_pattern_literal] = STATE(280),
    [sym_array_expression] = STATE(280),
    [sym_map_expression] = STATE(280),
    [sym_symbol] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(352),
    [sym_float_literal] = ACTIONS(352),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(354),
    [sym_identifier] = ACTIONS(352),
  },
  [24] = {
    [sym__s_expr] = STATE(288),
    [sym__expr] = STATE(288),
    [sym__literals] = STATE(288),
    [sym__short_helper] = STATE(288),
    [sym_short_ref] = STATE(288),
    [sym_short_copy] = STATE(288),
    [sym_short_fn_ref] = STATE(288),
    [sym_short_quote] = STATE(288),
    [sym_bool_literal] = STATE(288),
    [sym_str_literal] = STATE(288),
    [sym_char_literal] = STATE(288),
    [sym_pattern_literal] = STATE(288),
    [sym_array_expression] = STATE(288),
    [sym_map_expression] = STATE(288),
    [sym_symbol] = STATE(288),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(358),
    [sym_float_literal] = ACTIONS(358),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(360),
    [sym_identifier] = ACTIONS(358),
  },
  [25] = {
    [sym__s_expr] = STATE(289),
    [sym__expr] = STATE(289),
    [sym__literals] = STATE(289),
    [sym__short_helper] = STATE(289),
    [sym_short_ref] = STATE(289),
    [sym_short_copy] = STATE(289),
    [sym_short_fn_ref] = STATE(289),
    [sym_short_quote] = STATE(289),
    [sym_bool_literal] = STATE(289),
    [sym_str_literal] = STATE(289),
    [sym_char_literal] = STATE(289),
    [sym_pattern_literal] = STATE(289),
    [sym_array_expression] = STATE(289),
    [sym_map_expression] = STATE(289),
    [sym_symbol] = STATE(289),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(364),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(366),
    [sym_identifier] = ACTIONS(364),
  },
  [26] = {
    [sym__s_expr] = STATE(297),
    [sym__expr] = STATE(297),
    [sym__literals] = STATE(297),
    [sym__short_helper] = STATE(297),
    [sym_short_ref] = STATE(297),
    [sym_short_copy] = STATE(297),
    [sym_short_fn_ref] = STATE(297),
    [sym_short_quote] = STATE(297),
    [sym_bool_literal] = STATE(297),
    [sym_str_literal] = STATE(297),
    [sym_char_literal] = STATE(297),
    [sym_pattern_literal] = STATE(297),
    [sym_array_expression] = STATE(297),
    [sym_map_expression] = STATE(297),
    [sym_symbol] = STATE(297),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(370),
    [sym_float_literal] = ACTIONS(370),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(372),
    [sym_identifier] = ACTIONS(370),
  },
  [27] = {
    [sym__short_helper] = STATE(27),
    [sym_type] = STATE(27),
    [sym_complex_type] = STATE(71),
    [sym_short_ref] = STATE(27),
    [sym_short_copy] = STATE(27),
    [sym_short_fn_ref] = STATE(27),
    [sym_short_quote] = STATE(27),
    [aux_sym_typed_parameters_repeat1] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_Bool] = ACTIONS(377),
    [anon_sym_Char] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(377),
    [anon_sym_Long] = ACTIONS(377),
    [anon_sym_Float] = ACTIONS(377),
    [anon_sym_Double] = ACTIONS(377),
    [anon_sym_Vector2] = ACTIONS(377),
    [anon_sym_Vector3] = ACTIONS(377),
    [anon_sym_VectorN] = ACTIONS(377),
    [anon_sym_String] = ACTIONS(377),
    [anon_sym_Pattern] = ACTIONS(377),
    [anon_sym_Array] = ACTIONS(377),
    [anon_sym_Map] = ACTIONS(377),
    [anon_sym_Maybe] = ACTIONS(377),
    [anon_sym_Result] = ACTIONS(377),
    [anon_sym_Id] = ACTIONS(377),
    [anon_sym_Ptr] = ACTIONS(377),
    [anon_sym_RBRACK2] = ACTIONS(380),
    [anon_sym_AMP] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [sym_identifier] = ACTIONS(394),
  },
  [28] = {
    [sym__s_expr] = STATE(300),
    [sym__expr] = STATE(300),
    [sym__literals] = STATE(300),
    [sym__short_helper] = STATE(300),
    [sym_short_ref] = STATE(300),
    [sym_short_copy] = STATE(300),
    [sym_short_fn_ref] = STATE(300),
    [sym_short_quote] = STATE(300),
    [sym_bool_literal] = STATE(300),
    [sym_str_literal] = STATE(300),
    [sym_char_literal] = STATE(300),
    [sym_pattern_literal] = STATE(300),
    [sym_array_expression] = STATE(300),
    [sym_map_expression] = STATE(300),
    [sym_symbol] = STATE(300),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(397),
    [sym_float_literal] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(399),
    [sym_identifier] = ACTIONS(397),
  },
  [29] = {
    [sym__s_expr] = STATE(122),
    [sym__expr] = STATE(122),
    [sym__literals] = STATE(122),
    [sym__short_helper] = STATE(122),
    [sym_short_ref] = STATE(122),
    [sym_short_copy] = STATE(122),
    [sym_short_fn_ref] = STATE(122),
    [sym_short_quote] = STATE(122),
    [sym_bool_literal] = STATE(122),
    [sym_str_literal] = STATE(122),
    [sym_char_literal] = STATE(122),
    [sym_pattern_literal] = STATE(122),
    [sym_array_expression] = STATE(122),
    [sym_map_expression] = STATE(122),
    [sym_symbol] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(401),
    [sym_float_literal] = ACTIONS(401),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(403),
    [sym_identifier] = ACTIONS(401),
  },
  [30] = {
    [sym__s_expr] = STATE(266),
    [sym__expr] = STATE(266),
    [sym__literals] = STATE(266),
    [sym__short_helper] = STATE(266),
    [sym_short_ref] = STATE(266),
    [sym_short_copy] = STATE(266),
    [sym_short_fn_ref] = STATE(266),
    [sym_short_quote] = STATE(266),
    [sym_bool_literal] = STATE(266),
    [sym_str_literal] = STATE(266),
    [sym_char_literal] = STATE(266),
    [sym_pattern_literal] = STATE(266),
    [sym_array_expression] = STATE(266),
    [sym_map_expression] = STATE(266),
    [sym_symbol] = STATE(266),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(405),
    [sym_float_literal] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(407),
    [sym_identifier] = ACTIONS(405),
  },
  [31] = {
    [sym__s_expr] = STATE(145),
    [sym__expr] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__short_helper] = STATE(145),
    [sym_short_ref] = STATE(145),
    [sym_short_copy] = STATE(145),
    [sym_short_fn_ref] = STATE(145),
    [sym_short_quote] = STATE(145),
    [sym_bool_literal] = STATE(145),
    [sym_str_literal] = STATE(145),
    [sym_char_literal] = STATE(145),
    [sym_pattern_literal] = STATE(145),
    [sym_array_expression] = STATE(145),
    [sym_map_expression] = STATE(145),
    [sym_symbol] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(409),
    [sym_float_literal] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(411),
    [sym_identifier] = ACTIONS(409),
  },
  [32] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(413),
    [sym_float_literal] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(415),
    [sym_identifier] = ACTIONS(413),
  },
  [33] = {
    [sym__s_expr] = STATE(157),
    [sym__expr] = STATE(157),
    [sym__literals] = STATE(157),
    [sym__short_helper] = STATE(157),
    [sym_short_ref] = STATE(157),
    [sym_short_copy] = STATE(157),
    [sym_short_fn_ref] = STATE(157),
    [sym_short_quote] = STATE(157),
    [sym_bool_literal] = STATE(157),
    [sym_str_literal] = STATE(157),
    [sym_char_literal] = STATE(157),
    [sym_pattern_literal] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_map_expression] = STATE(157),
    [sym_symbol] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(417),
    [sym_float_literal] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(419),
    [sym_identifier] = ACTIONS(417),
  },
  [34] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(421),
    [sym_float_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(423),
    [sym_identifier] = ACTIONS(421),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_let_DASHdo] = ACTIONS(425),
    [anon_sym_while_DASHdo] = ACTIONS(425),
    [anon_sym_defn_DASHdo] = ACTIONS(425),
    [anon_sym_break] = ACTIONS(425),
    [anon_sym_for] = ACTIONS(427),
    [anon_sym_when] = ACTIONS(425),
    [anon_sym_cond] = ACTIONS(425),
    [anon_sym_unless] = ACTIONS(425),
    [anon_sym_case] = ACTIONS(425),
    [anon_sym_foreach] = ACTIONS(425),
    [anon_sym_defdynamic] = ACTIONS(425),
    [anon_sym_load] = ACTIONS(425),
    [anon_sym_match] = ACTIONS(425),
    [anon_sym_PLUS] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(425),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [anon_sym_EQ] = ACTIONS(425),
    [anon_sym_LT_EQ] = ACTIONS(425),
    [anon_sym_GT_EQ] = ACTIONS(425),
    [anon_sym_SLASH_EQ] = ACTIONS(425),
    [anon_sym_and] = ACTIONS(427),
    [anon_sym_or] = ACTIONS(427),
    [anon_sym_not] = ACTIONS(425),
    [anon_sym_and_STAR] = ACTIONS(425),
    [anon_sym_or_STAR] = ACTIONS(425),
  },
  [36] = {
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
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(421),
    [sym_float_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(423),
    [sym_identifier] = ACTIONS(421),
  },
  [37] = {
    [sym__s_expr] = STATE(157),
    [sym__expr] = STATE(157),
    [sym__literals] = STATE(157),
    [sym__short_helper] = STATE(157),
    [sym_short_ref] = STATE(157),
    [sym_short_copy] = STATE(157),
    [sym_short_fn_ref] = STATE(157),
    [sym_short_quote] = STATE(157),
    [sym_bool_literal] = STATE(157),
    [sym_str_literal] = STATE(157),
    [sym_char_literal] = STATE(157),
    [sym_pattern_literal] = STATE(157),
    [sym_array_expression] = STATE(157),
    [sym_map_expression] = STATE(157),
    [sym_symbol] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(417),
    [sym_float_literal] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(419),
    [sym_identifier] = ACTIONS(417),
  },
  [38] = {
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
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(413),
    [sym_float_literal] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(415),
    [sym_identifier] = ACTIONS(413),
  },
  [39] = {
    [sym__s_expr] = STATE(145),
    [sym__expr] = STATE(145),
    [sym__literals] = STATE(145),
    [sym__short_helper] = STATE(145),
    [sym_short_ref] = STATE(145),
    [sym_short_copy] = STATE(145),
    [sym_short_fn_ref] = STATE(145),
    [sym_short_quote] = STATE(145),
    [sym_bool_literal] = STATE(145),
    [sym_str_literal] = STATE(145),
    [sym_char_literal] = STATE(145),
    [sym_pattern_literal] = STATE(145),
    [sym_array_expression] = STATE(145),
    [sym_map_expression] = STATE(145),
    [sym_symbol] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(409),
    [sym_float_literal] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(411),
    [sym_identifier] = ACTIONS(409),
  },
  [40] = {
    [sym__s_expr] = STATE(75),
    [sym__expr] = STATE(75),
    [sym__literals] = STATE(75),
    [sym__short_helper] = STATE(75),
    [sym_short_ref] = STATE(75),
    [sym_short_copy] = STATE(75),
    [sym_short_fn_ref] = STATE(75),
    [sym_short_quote] = STATE(75),
    [sym_bool_literal] = STATE(75),
    [sym_str_literal] = STATE(75),
    [sym_char_literal] = STATE(75),
    [sym_pattern_literal] = STATE(75),
    [sym_array_expression] = STATE(75),
    [sym_map_expression] = STATE(75),
    [sym_symbol] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_integer_literal] = ACTIONS(441),
    [sym_float_literal] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_upper_identifier] = ACTIONS(455),
    [sym_identifier] = ACTIONS(441),
  },
  [41] = {
    [sym__s_expr] = STATE(74),
    [sym__expr] = STATE(74),
    [sym__literals] = STATE(74),
    [sym__short_helper] = STATE(74),
    [sym_short_ref] = STATE(74),
    [sym_short_copy] = STATE(74),
    [sym_short_fn_ref] = STATE(74),
    [sym_short_quote] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_str_literal] = STATE(74),
    [sym_char_literal] = STATE(74),
    [sym_pattern_literal] = STATE(74),
    [sym_array_expression] = STATE(74),
    [sym_map_expression] = STATE(74),
    [sym_symbol] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_integer_literal] = ACTIONS(457),
    [sym_float_literal] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_upper_identifier] = ACTIONS(459),
    [sym_identifier] = ACTIONS(457),
  },
  [42] = {
    [sym__s_expr] = STATE(129),
    [sym__expr] = STATE(129),
    [sym__literals] = STATE(129),
    [sym__short_helper] = STATE(129),
    [sym_short_ref] = STATE(129),
    [sym_short_copy] = STATE(129),
    [sym_short_fn_ref] = STATE(129),
    [sym_short_quote] = STATE(129),
    [sym_bool_literal] = STATE(129),
    [sym_str_literal] = STATE(129),
    [sym_char_literal] = STATE(129),
    [sym_pattern_literal] = STATE(129),
    [sym_array_expression] = STATE(129),
    [sym_map_expression] = STATE(129),
    [sym_symbol] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(461),
    [sym_float_literal] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(463),
    [sym_identifier] = ACTIONS(461),
  },
  [43] = {
    [sym__s_expr] = STATE(69),
    [sym__expr] = STATE(69),
    [sym__literals] = STATE(69),
    [sym__short_helper] = STATE(69),
    [sym_short_ref] = STATE(69),
    [sym_short_copy] = STATE(69),
    [sym_short_fn_ref] = STATE(69),
    [sym_short_quote] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [sym_str_literal] = STATE(69),
    [sym_char_literal] = STATE(69),
    [sym_pattern_literal] = STATE(69),
    [sym_array_expression] = STATE(69),
    [sym_map_expression] = STATE(69),
    [sym_symbol] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_integer_literal] = ACTIONS(465),
    [sym_float_literal] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_upper_identifier] = ACTIONS(467),
    [sym_identifier] = ACTIONS(465),
  },
  [44] = {
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
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(469),
    [sym_float_literal] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(471),
    [sym_identifier] = ACTIONS(469),
  },
  [45] = {
    [sym__s_expr] = STATE(256),
    [sym__expr] = STATE(256),
    [sym__literals] = STATE(256),
    [sym__short_helper] = STATE(256),
    [sym_short_ref] = STATE(256),
    [sym_short_copy] = STATE(256),
    [sym_short_fn_ref] = STATE(256),
    [sym_short_quote] = STATE(256),
    [sym_bool_literal] = STATE(256),
    [sym_str_literal] = STATE(256),
    [sym_char_literal] = STATE(256),
    [sym_pattern_literal] = STATE(256),
    [sym_array_expression] = STATE(256),
    [sym_map_expression] = STATE(256),
    [sym_symbol] = STATE(256),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [sym_integer_literal] = ACTIONS(485),
    [sym_float_literal] = ACTIONS(485),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_upper_identifier] = ACTIONS(499),
    [sym_identifier] = ACTIONS(485),
  },
  [46] = {
    [sym__short_helper] = STATE(27),
    [sym_type] = STATE(27),
    [sym_complex_type] = STATE(71),
    [sym_short_ref] = STATE(27),
    [sym_short_copy] = STATE(27),
    [sym_short_fn_ref] = STATE(27),
    [sym_short_quote] = STATE(27),
    [aux_sym_typed_parameters_repeat1] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(503),
    [anon_sym_Char] = ACTIONS(503),
    [anon_sym_Int] = ACTIONS(503),
    [anon_sym_Long] = ACTIONS(503),
    [anon_sym_Float] = ACTIONS(503),
    [anon_sym_Double] = ACTIONS(503),
    [anon_sym_Vector2] = ACTIONS(503),
    [anon_sym_Vector3] = ACTIONS(503),
    [anon_sym_VectorN] = ACTIONS(503),
    [anon_sym_String] = ACTIONS(503),
    [anon_sym_Pattern] = ACTIONS(503),
    [anon_sym_Array] = ACTIONS(503),
    [anon_sym_Map] = ACTIONS(503),
    [anon_sym_Maybe] = ACTIONS(503),
    [anon_sym_Result] = ACTIONS(503),
    [anon_sym_Id] = ACTIONS(503),
    [anon_sym_Ptr] = ACTIONS(503),
    [anon_sym_RBRACK2] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_identifier] = ACTIONS(507),
  },
  [47] = {
    [sym__s_expr] = STATE(70),
    [sym__expr] = STATE(70),
    [sym__literals] = STATE(70),
    [sym__short_helper] = STATE(70),
    [sym_short_ref] = STATE(70),
    [sym_short_copy] = STATE(70),
    [sym_short_fn_ref] = STATE(70),
    [sym_short_quote] = STATE(70),
    [sym_bool_literal] = STATE(70),
    [sym_str_literal] = STATE(70),
    [sym_char_literal] = STATE(70),
    [sym_pattern_literal] = STATE(70),
    [sym_array_expression] = STATE(70),
    [sym_map_expression] = STATE(70),
    [sym_symbol] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_integer_literal] = ACTIONS(509),
    [sym_float_literal] = ACTIONS(509),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(447),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_upper_identifier] = ACTIONS(511),
    [sym_identifier] = ACTIONS(509),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_let_DASHdo] = ACTIONS(513),
    [anon_sym_while_DASHdo] = ACTIONS(513),
    [anon_sym_defn_DASHdo] = ACTIONS(513),
    [anon_sym_break] = ACTIONS(513),
    [anon_sym_for] = ACTIONS(515),
    [anon_sym_when] = ACTIONS(513),
    [anon_sym_cond] = ACTIONS(513),
    [anon_sym_unless] = ACTIONS(513),
    [anon_sym_case] = ACTIONS(513),
    [anon_sym_foreach] = ACTIONS(513),
    [anon_sym_defdynamic] = ACTIONS(513),
    [anon_sym_load] = ACTIONS(513),
    [anon_sym_match] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(513),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(513),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_or] = ACTIONS(515),
    [anon_sym_not] = ACTIONS(513),
    [anon_sym_and_STAR] = ACTIONS(513),
    [anon_sym_or_STAR] = ACTIONS(513),
  },
  [49] = {
    [sym__s_expr] = STATE(244),
    [sym__expr] = STATE(244),
    [sym__literals] = STATE(244),
    [sym__short_helper] = STATE(244),
    [sym_short_ref] = STATE(244),
    [sym_short_copy] = STATE(244),
    [sym_short_fn_ref] = STATE(244),
    [sym_short_quote] = STATE(244),
    [sym_bool_literal] = STATE(244),
    [sym_str_literal] = STATE(244),
    [sym_char_literal] = STATE(244),
    [sym_pattern_literal] = STATE(244),
    [sym_array_expression] = STATE(244),
    [sym_map_expression] = STATE(244),
    [sym_symbol] = STATE(244),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [sym_integer_literal] = ACTIONS(517),
    [sym_float_literal] = ACTIONS(517),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_upper_identifier] = ACTIONS(519),
    [sym_identifier] = ACTIONS(517),
  },
  [50] = {
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
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(521),
    [sym_float_literal] = ACTIONS(521),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(523),
    [sym_identifier] = ACTIONS(521),
  },
  [51] = {
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
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(525),
    [sym_float_literal] = ACTIONS(525),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(527),
    [sym_identifier] = ACTIONS(525),
  },
  [52] = {
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
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(529),
    [sym_float_literal] = ACTIONS(529),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(531),
    [sym_identifier] = ACTIONS(529),
  },
  [53] = {
    [sym__s_expr] = STATE(303),
    [sym__expr] = STATE(303),
    [sym__literals] = STATE(303),
    [sym__short_helper] = STATE(303),
    [sym_short_ref] = STATE(303),
    [sym_short_copy] = STATE(303),
    [sym_short_fn_ref] = STATE(303),
    [sym_short_quote] = STATE(303),
    [sym_bool_literal] = STATE(303),
    [sym_str_literal] = STATE(303),
    [sym_char_literal] = STATE(303),
    [sym_pattern_literal] = STATE(303),
    [sym_array_expression] = STATE(303),
    [sym_map_expression] = STATE(303),
    [sym_symbol] = STATE(303),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(533),
    [sym_float_literal] = ACTIONS(533),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(535),
    [sym_identifier] = ACTIONS(533),
  },
  [54] = {
    [sym__s_expr] = STATE(283),
    [sym__expr] = STATE(283),
    [sym__literals] = STATE(283),
    [sym__short_helper] = STATE(283),
    [sym_short_ref] = STATE(283),
    [sym_short_copy] = STATE(283),
    [sym_short_fn_ref] = STATE(283),
    [sym_short_quote] = STATE(283),
    [sym_bool_literal] = STATE(283),
    [sym_str_literal] = STATE(283),
    [sym_char_literal] = STATE(283),
    [sym_pattern_literal] = STATE(283),
    [sym_array_expression] = STATE(283),
    [sym_map_expression] = STATE(283),
    [sym_symbol] = STATE(283),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(537),
    [sym_float_literal] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(539),
    [sym_identifier] = ACTIONS(537),
  },
  [55] = {
    [sym__s_expr] = STATE(108),
    [sym__expr] = STATE(108),
    [sym__literals] = STATE(108),
    [sym__short_helper] = STATE(108),
    [sym_short_ref] = STATE(108),
    [sym_short_copy] = STATE(108),
    [sym_short_fn_ref] = STATE(108),
    [sym_short_quote] = STATE(108),
    [sym_bool_literal] = STATE(108),
    [sym_str_literal] = STATE(108),
    [sym_char_literal] = STATE(108),
    [sym_pattern_literal] = STATE(108),
    [sym_array_expression] = STATE(108),
    [sym_map_expression] = STATE(108),
    [sym_symbol] = STATE(108),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_integer_literal] = ACTIONS(541),
    [sym_float_literal] = ACTIONS(541),
    [anon_sym_true] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(188),
    [sym_upper_identifier] = ACTIONS(543),
    [sym_identifier] = ACTIONS(541),
  },
  [56] = {
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
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_integer_literal] = ACTIONS(545),
    [sym_float_literal] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_POUND_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(547),
    [sym_identifier] = ACTIONS(545),
  },
  [57] = {
    [sym__s_expr] = STATE(239),
    [sym__expr] = STATE(239),
    [sym__literals] = STATE(239),
    [sym__short_helper] = STATE(239),
    [sym_short_ref] = STATE(239),
    [sym_short_copy] = STATE(239),
    [sym_short_fn_ref] = STATE(239),
    [sym_short_quote] = STATE(239),
    [sym_bool_literal] = STATE(239),
    [sym_str_literal] = STATE(239),
    [sym_char_literal] = STATE(239),
    [sym_pattern_literal] = STATE(239),
    [sym_array_expression] = STATE(239),
    [sym_map_expression] = STATE(239),
    [sym_symbol] = STATE(239),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [sym_integer_literal] = ACTIONS(549),
    [sym_float_literal] = ACTIONS(549),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_upper_identifier] = ACTIONS(551),
    [sym_identifier] = ACTIONS(549),
  },
  [58] = {
    [sym__short_helper] = STATE(46),
    [sym_type] = STATE(46),
    [sym_complex_type] = STATE(71),
    [sym_short_ref] = STATE(46),
    [sym_short_copy] = STATE(46),
    [sym_short_fn_ref] = STATE(46),
    [sym_short_quote] = STATE(46),
    [aux_sym_typed_parameters_repeat1] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(503),
    [anon_sym_Char] = ACTIONS(503),
    [anon_sym_Int] = ACTIONS(503),
    [anon_sym_Long] = ACTIONS(503),
    [anon_sym_Float] = ACTIONS(503),
    [anon_sym_Double] = ACTIONS(503),
    [anon_sym_Vector2] = ACTIONS(503),
    [anon_sym_Vector3] = ACTIONS(503),
    [anon_sym_VectorN] = ACTIONS(503),
    [anon_sym_String] = ACTIONS(503),
    [anon_sym_Pattern] = ACTIONS(503),
    [anon_sym_Array] = ACTIONS(503),
    [anon_sym_Map] = ACTIONS(503),
    [anon_sym_Maybe] = ACTIONS(503),
    [anon_sym_Result] = ACTIONS(503),
    [anon_sym_Id] = ACTIONS(503),
    [anon_sym_Ptr] = ACTIONS(503),
    [anon_sym_RBRACK2] = ACTIONS(553),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_identifier] = ACTIONS(507),
  },
  [59] = {
    [sym__s_expr] = STATE(243),
    [sym__expr] = STATE(243),
    [sym__literals] = STATE(243),
    [sym__short_helper] = STATE(243),
    [sym_short_ref] = STATE(243),
    [sym_short_copy] = STATE(243),
    [sym_short_fn_ref] = STATE(243),
    [sym_short_quote] = STATE(243),
    [sym_bool_literal] = STATE(243),
    [sym_str_literal] = STATE(243),
    [sym_char_literal] = STATE(243),
    [sym_pattern_literal] = STATE(243),
    [sym_array_expression] = STATE(243),
    [sym_map_expression] = STATE(243),
    [sym_symbol] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [sym_integer_literal] = ACTIONS(555),
    [sym_float_literal] = ACTIONS(555),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_upper_identifier] = ACTIONS(557),
    [sym_identifier] = ACTIONS(555),
  },
  [60] = {
    [sym__s_expr] = STATE(285),
    [sym__expr] = STATE(285),
    [sym__literals] = STATE(285),
    [sym__short_helper] = STATE(285),
    [sym_short_ref] = STATE(285),
    [sym_short_copy] = STATE(285),
    [sym_short_fn_ref] = STATE(285),
    [sym_short_quote] = STATE(285),
    [sym_bool_literal] = STATE(285),
    [sym_str_literal] = STATE(285),
    [sym_char_literal] = STATE(285),
    [sym_pattern_literal] = STATE(285),
    [sym_array_expression] = STATE(285),
    [sym_map_expression] = STATE(285),
    [sym_symbol] = STATE(285),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(559),
    [sym_float_literal] = ACTIONS(559),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(561),
    [sym_identifier] = ACTIONS(559),
  },
  [61] = {
    [sym__s_expr] = STATE(242),
    [sym__expr] = STATE(242),
    [sym__literals] = STATE(242),
    [sym__short_helper] = STATE(242),
    [sym_short_ref] = STATE(242),
    [sym_short_copy] = STATE(242),
    [sym_short_fn_ref] = STATE(242),
    [sym_short_quote] = STATE(242),
    [sym_bool_literal] = STATE(242),
    [sym_str_literal] = STATE(242),
    [sym_char_literal] = STATE(242),
    [sym_pattern_literal] = STATE(242),
    [sym_array_expression] = STATE(242),
    [sym_map_expression] = STATE(242),
    [sym_symbol] = STATE(242),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [sym_integer_literal] = ACTIONS(563),
    [sym_float_literal] = ACTIONS(563),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_upper_identifier] = ACTIONS(565),
    [sym_identifier] = ACTIONS(563),
  },
  [62] = {
    [sym__s_expr] = STATE(258),
    [sym__expr] = STATE(258),
    [sym__literals] = STATE(258),
    [sym__short_helper] = STATE(258),
    [sym_short_ref] = STATE(258),
    [sym_short_copy] = STATE(258),
    [sym_short_fn_ref] = STATE(258),
    [sym_short_quote] = STATE(258),
    [sym_bool_literal] = STATE(258),
    [sym_str_literal] = STATE(258),
    [sym_char_literal] = STATE(258),
    [sym_pattern_literal] = STATE(258),
    [sym_array_expression] = STATE(258),
    [sym_map_expression] = STATE(258),
    [sym_symbol] = STATE(258),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(567),
    [sym_float_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(569),
    [sym_identifier] = ACTIONS(567),
  },
  [63] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(158),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_Bool] = ACTIONS(573),
    [anon_sym_Char] = ACTIONS(573),
    [anon_sym_Int] = ACTIONS(573),
    [anon_sym_Long] = ACTIONS(573),
    [anon_sym_Float] = ACTIONS(573),
    [anon_sym_Double] = ACTIONS(573),
    [anon_sym_Vector2] = ACTIONS(573),
    [anon_sym_Vector3] = ACTIONS(573),
    [anon_sym_VectorN] = ACTIONS(573),
    [anon_sym_String] = ACTIONS(573),
    [anon_sym_Pattern] = ACTIONS(573),
    [anon_sym_Array] = ACTIONS(573),
    [anon_sym_Map] = ACTIONS(573),
    [anon_sym_Maybe] = ACTIONS(573),
    [anon_sym_Result] = ACTIONS(573),
    [anon_sym_Id] = ACTIONS(573),
    [anon_sym_Ptr] = ACTIONS(573),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_identifier] = ACTIONS(575),
  },
  [64] = {
    [sym__short_helper] = STATE(274),
    [sym_type] = STATE(274),
    [sym_complex_type] = STATE(158),
    [sym_short_ref] = STATE(274),
    [sym_short_copy] = STATE(274),
    [sym_short_fn_ref] = STATE(274),
    [sym_short_quote] = STATE(274),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_Bool] = ACTIONS(573),
    [anon_sym_Char] = ACTIONS(573),
    [anon_sym_Int] = ACTIONS(573),
    [anon_sym_Long] = ACTIONS(573),
    [anon_sym_Float] = ACTIONS(573),
    [anon_sym_Double] = ACTIONS(573),
    [anon_sym_Vector2] = ACTIONS(573),
    [anon_sym_Vector3] = ACTIONS(573),
    [anon_sym_VectorN] = ACTIONS(573),
    [anon_sym_String] = ACTIONS(573),
    [anon_sym_Pattern] = ACTIONS(573),
    [anon_sym_Array] = ACTIONS(573),
    [anon_sym_Map] = ACTIONS(573),
    [anon_sym_Maybe] = ACTIONS(573),
    [anon_sym_Result] = ACTIONS(573),
    [anon_sym_Id] = ACTIONS(573),
    [anon_sym_Ptr] = ACTIONS(573),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(575),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_Bool] = ACTIONS(581),
    [anon_sym_Char] = ACTIONS(581),
    [anon_sym_Int] = ACTIONS(581),
    [anon_sym_Long] = ACTIONS(581),
    [anon_sym_Float] = ACTIONS(581),
    [anon_sym_Double] = ACTIONS(581),
    [anon_sym_Vector2] = ACTIONS(581),
    [anon_sym_Vector3] = ACTIONS(581),
    [anon_sym_VectorN] = ACTIONS(581),
    [anon_sym_String] = ACTIONS(581),
    [anon_sym_Pattern] = ACTIONS(581),
    [anon_sym_Array] = ACTIONS(581),
    [anon_sym_Map] = ACTIONS(581),
    [anon_sym_Maybe] = ACTIONS(581),
    [anon_sym_Result] = ACTIONS(581),
    [anon_sym_Id] = ACTIONS(581),
    [anon_sym_Ptr] = ACTIONS(581),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_RBRACK2] = ACTIONS(579),
    [anon_sym_AMP] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [sym_identifier] = ACTIONS(581),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_Bool] = ACTIONS(585),
    [anon_sym_Char] = ACTIONS(585),
    [anon_sym_Int] = ACTIONS(585),
    [anon_sym_Long] = ACTIONS(585),
    [anon_sym_Float] = ACTIONS(585),
    [anon_sym_Double] = ACTIONS(585),
    [anon_sym_Vector2] = ACTIONS(585),
    [anon_sym_Vector3] = ACTIONS(585),
    [anon_sym_VectorN] = ACTIONS(585),
    [anon_sym_String] = ACTIONS(585),
    [anon_sym_Pattern] = ACTIONS(585),
    [anon_sym_Array] = ACTIONS(585),
    [anon_sym_Map] = ACTIONS(585),
    [anon_sym_Maybe] = ACTIONS(585),
    [anon_sym_Result] = ACTIONS(585),
    [anon_sym_Id] = ACTIONS(585),
    [anon_sym_Ptr] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_RBRACK2] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
    [anon_sym_AT] = ACTIONS(583),
    [anon_sym_TILDE] = ACTIONS(583),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [sym_identifier] = ACTIONS(585),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_Bool] = ACTIONS(328),
    [anon_sym_Char] = ACTIONS(328),
    [anon_sym_Int] = ACTIONS(328),
    [anon_sym_Long] = ACTIONS(328),
    [anon_sym_Float] = ACTIONS(328),
    [anon_sym_Double] = ACTIONS(328),
    [anon_sym_Vector2] = ACTIONS(328),
    [anon_sym_Vector3] = ACTIONS(328),
    [anon_sym_VectorN] = ACTIONS(328),
    [anon_sym_String] = ACTIONS(328),
    [anon_sym_Pattern] = ACTIONS(328),
    [anon_sym_Array] = ACTIONS(328),
    [anon_sym_Map] = ACTIONS(328),
    [anon_sym_Maybe] = ACTIONS(328),
    [anon_sym_Result] = ACTIONS(328),
    [anon_sym_Id] = ACTIONS(328),
    [anon_sym_Ptr] = ACTIONS(328),
    [anon_sym_RBRACK2] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_Bool] = ACTIONS(589),
    [anon_sym_Char] = ACTIONS(589),
    [anon_sym_Int] = ACTIONS(589),
    [anon_sym_Long] = ACTIONS(589),
    [anon_sym_Float] = ACTIONS(589),
    [anon_sym_Double] = ACTIONS(589),
    [anon_sym_Vector2] = ACTIONS(589),
    [anon_sym_Vector3] = ACTIONS(589),
    [anon_sym_VectorN] = ACTIONS(589),
    [anon_sym_String] = ACTIONS(589),
    [anon_sym_Pattern] = ACTIONS(589),
    [anon_sym_Array] = ACTIONS(589),
    [anon_sym_Map] = ACTIONS(589),
    [anon_sym_Maybe] = ACTIONS(589),
    [anon_sym_Result] = ACTIONS(589),
    [anon_sym_Id] = ACTIONS(589),
    [anon_sym_Ptr] = ACTIONS(589),
    [anon_sym_RBRACK2] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_TILDE] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [sym_identifier] = ACTIONS(589),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_Bool] = ACTIONS(593),
    [anon_sym_Char] = ACTIONS(593),
    [anon_sym_Int] = ACTIONS(593),
    [anon_sym_Long] = ACTIONS(593),
    [anon_sym_Float] = ACTIONS(593),
    [anon_sym_Double] = ACTIONS(593),
    [anon_sym_Vector2] = ACTIONS(593),
    [anon_sym_Vector3] = ACTIONS(593),
    [anon_sym_VectorN] = ACTIONS(593),
    [anon_sym_String] = ACTIONS(593),
    [anon_sym_Pattern] = ACTIONS(593),
    [anon_sym_Array] = ACTIONS(593),
    [anon_sym_Map] = ACTIONS(593),
    [anon_sym_Maybe] = ACTIONS(593),
    [anon_sym_Result] = ACTIONS(593),
    [anon_sym_Id] = ACTIONS(593),
    [anon_sym_Ptr] = ACTIONS(593),
    [anon_sym_RBRACK2] = ACTIONS(591),
    [anon_sym_AMP] = ACTIONS(591),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_TILDE] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_Bool] = ACTIONS(597),
    [anon_sym_Char] = ACTIONS(597),
    [anon_sym_Int] = ACTIONS(597),
    [anon_sym_Long] = ACTIONS(597),
    [anon_sym_Float] = ACTIONS(597),
    [anon_sym_Double] = ACTIONS(597),
    [anon_sym_Vector2] = ACTIONS(597),
    [anon_sym_Vector3] = ACTIONS(597),
    [anon_sym_VectorN] = ACTIONS(597),
    [anon_sym_String] = ACTIONS(597),
    [anon_sym_Pattern] = ACTIONS(597),
    [anon_sym_Array] = ACTIONS(597),
    [anon_sym_Map] = ACTIONS(597),
    [anon_sym_Maybe] = ACTIONS(597),
    [anon_sym_Result] = ACTIONS(597),
    [anon_sym_Id] = ACTIONS(597),
    [anon_sym_Ptr] = ACTIONS(597),
    [anon_sym_RBRACK2] = ACTIONS(595),
    [anon_sym_AMP] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_TILDE] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [sym_identifier] = ACTIONS(597),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_Bool] = ACTIONS(601),
    [anon_sym_Char] = ACTIONS(601),
    [anon_sym_Int] = ACTIONS(601),
    [anon_sym_Long] = ACTIONS(601),
    [anon_sym_Float] = ACTIONS(601),
    [anon_sym_Double] = ACTIONS(601),
    [anon_sym_Vector2] = ACTIONS(601),
    [anon_sym_Vector3] = ACTIONS(601),
    [anon_sym_VectorN] = ACTIONS(601),
    [anon_sym_String] = ACTIONS(601),
    [anon_sym_Pattern] = ACTIONS(601),
    [anon_sym_Array] = ACTIONS(601),
    [anon_sym_Map] = ACTIONS(601),
    [anon_sym_Maybe] = ACTIONS(601),
    [anon_sym_Result] = ACTIONS(601),
    [anon_sym_Id] = ACTIONS(601),
    [anon_sym_Ptr] = ACTIONS(601),
    [anon_sym_RBRACK2] = ACTIONS(599),
    [anon_sym_AMP] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(599),
    [anon_sym_TILDE] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_Bool] = ACTIONS(605),
    [anon_sym_Char] = ACTIONS(605),
    [anon_sym_Int] = ACTIONS(605),
    [anon_sym_Long] = ACTIONS(605),
    [anon_sym_Float] = ACTIONS(605),
    [anon_sym_Double] = ACTIONS(605),
    [anon_sym_Vector2] = ACTIONS(605),
    [anon_sym_Vector3] = ACTIONS(605),
    [anon_sym_VectorN] = ACTIONS(605),
    [anon_sym_String] = ACTIONS(605),
    [anon_sym_Pattern] = ACTIONS(605),
    [anon_sym_Array] = ACTIONS(605),
    [anon_sym_Map] = ACTIONS(605),
    [anon_sym_Maybe] = ACTIONS(605),
    [anon_sym_Result] = ACTIONS(605),
    [anon_sym_Id] = ACTIONS(605),
    [anon_sym_Ptr] = ACTIONS(605),
    [anon_sym_RBRACK2] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
    [anon_sym_AT] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [sym_identifier] = ACTIONS(605),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_Bool] = ACTIONS(609),
    [anon_sym_Char] = ACTIONS(609),
    [anon_sym_Int] = ACTIONS(609),
    [anon_sym_Long] = ACTIONS(609),
    [anon_sym_Float] = ACTIONS(609),
    [anon_sym_Double] = ACTIONS(609),
    [anon_sym_Vector2] = ACTIONS(609),
    [anon_sym_Vector3] = ACTIONS(609),
    [anon_sym_VectorN] = ACTIONS(609),
    [anon_sym_String] = ACTIONS(609),
    [anon_sym_Pattern] = ACTIONS(609),
    [anon_sym_Array] = ACTIONS(609),
    [anon_sym_Map] = ACTIONS(609),
    [anon_sym_Maybe] = ACTIONS(609),
    [anon_sym_Result] = ACTIONS(609),
    [anon_sym_Id] = ACTIONS(609),
    [anon_sym_Ptr] = ACTIONS(609),
    [anon_sym_RBRACK2] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_AT] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [sym_identifier] = ACTIONS(609),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(611),
    [anon_sym_Bool] = ACTIONS(613),
    [anon_sym_Char] = ACTIONS(613),
    [anon_sym_Int] = ACTIONS(613),
    [anon_sym_Long] = ACTIONS(613),
    [anon_sym_Float] = ACTIONS(613),
    [anon_sym_Double] = ACTIONS(613),
    [anon_sym_Vector2] = ACTIONS(613),
    [anon_sym_Vector3] = ACTIONS(613),
    [anon_sym_VectorN] = ACTIONS(613),
    [anon_sym_String] = ACTIONS(613),
    [anon_sym_Pattern] = ACTIONS(613),
    [anon_sym_Array] = ACTIONS(613),
    [anon_sym_Map] = ACTIONS(613),
    [anon_sym_Maybe] = ACTIONS(613),
    [anon_sym_Result] = ACTIONS(613),
    [anon_sym_Id] = ACTIONS(613),
    [anon_sym_Ptr] = ACTIONS(613),
    [anon_sym_RBRACK2] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_TILDE] = ACTIONS(611),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [sym_identifier] = ACTIONS(613),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_Bool] = ACTIONS(617),
    [anon_sym_Char] = ACTIONS(617),
    [anon_sym_Int] = ACTIONS(617),
    [anon_sym_Long] = ACTIONS(617),
    [anon_sym_Float] = ACTIONS(617),
    [anon_sym_Double] = ACTIONS(617),
    [anon_sym_Vector2] = ACTIONS(617),
    [anon_sym_Vector3] = ACTIONS(617),
    [anon_sym_VectorN] = ACTIONS(617),
    [anon_sym_String] = ACTIONS(617),
    [anon_sym_Pattern] = ACTIONS(617),
    [anon_sym_Array] = ACTIONS(617),
    [anon_sym_Map] = ACTIONS(617),
    [anon_sym_Maybe] = ACTIONS(617),
    [anon_sym_Result] = ACTIONS(617),
    [anon_sym_Id] = ACTIONS(617),
    [anon_sym_Ptr] = ACTIONS(617),
    [anon_sym_RBRACK2] = ACTIONS(615),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_TILDE] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(615),
    [sym_identifier] = ACTIONS(617),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_Bool] = ACTIONS(621),
    [anon_sym_Char] = ACTIONS(621),
    [anon_sym_Int] = ACTIONS(621),
    [anon_sym_Long] = ACTIONS(621),
    [anon_sym_Float] = ACTIONS(621),
    [anon_sym_Double] = ACTIONS(621),
    [anon_sym_Vector2] = ACTIONS(621),
    [anon_sym_Vector3] = ACTIONS(621),
    [anon_sym_VectorN] = ACTIONS(621),
    [anon_sym_String] = ACTIONS(621),
    [anon_sym_Pattern] = ACTIONS(621),
    [anon_sym_Array] = ACTIONS(621),
    [anon_sym_Map] = ACTIONS(621),
    [anon_sym_Maybe] = ACTIONS(621),
    [anon_sym_Result] = ACTIONS(621),
    [anon_sym_Id] = ACTIONS(621),
    [anon_sym_Ptr] = ACTIONS(621),
    [anon_sym_RBRACK2] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym_TILDE] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(623),
    [anon_sym_Bool] = ACTIONS(625),
    [anon_sym_Char] = ACTIONS(625),
    [anon_sym_Int] = ACTIONS(625),
    [anon_sym_Long] = ACTIONS(625),
    [anon_sym_Float] = ACTIONS(625),
    [anon_sym_Double] = ACTIONS(625),
    [anon_sym_Vector2] = ACTIONS(625),
    [anon_sym_Vector3] = ACTIONS(625),
    [anon_sym_VectorN] = ACTIONS(625),
    [anon_sym_String] = ACTIONS(625),
    [anon_sym_Pattern] = ACTIONS(625),
    [anon_sym_Array] = ACTIONS(625),
    [anon_sym_Map] = ACTIONS(625),
    [anon_sym_Maybe] = ACTIONS(625),
    [anon_sym_Result] = ACTIONS(625),
    [anon_sym_Id] = ACTIONS(625),
    [anon_sym_Ptr] = ACTIONS(625),
    [anon_sym_RBRACK2] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(623),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [sym_identifier] = ACTIONS(625),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_Bool] = ACTIONS(629),
    [anon_sym_Char] = ACTIONS(629),
    [anon_sym_Int] = ACTIONS(629),
    [anon_sym_Long] = ACTIONS(629),
    [anon_sym_Float] = ACTIONS(629),
    [anon_sym_Double] = ACTIONS(629),
    [anon_sym_Vector2] = ACTIONS(629),
    [anon_sym_Vector3] = ACTIONS(629),
    [anon_sym_VectorN] = ACTIONS(629),
    [anon_sym_String] = ACTIONS(629),
    [anon_sym_Pattern] = ACTIONS(629),
    [anon_sym_Array] = ACTIONS(629),
    [anon_sym_Map] = ACTIONS(629),
    [anon_sym_Maybe] = ACTIONS(629),
    [anon_sym_Result] = ACTIONS(629),
    [anon_sym_Id] = ACTIONS(629),
    [anon_sym_Ptr] = ACTIONS(629),
    [anon_sym_RBRACK2] = ACTIONS(627),
    [anon_sym_AMP] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(627),
    [anon_sym_TILDE] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [sym_identifier] = ACTIONS(629),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_Bool] = ACTIONS(633),
    [anon_sym_Char] = ACTIONS(633),
    [anon_sym_Int] = ACTIONS(633),
    [anon_sym_Long] = ACTIONS(633),
    [anon_sym_Float] = ACTIONS(633),
    [anon_sym_Double] = ACTIONS(633),
    [anon_sym_Vector2] = ACTIONS(633),
    [anon_sym_Vector3] = ACTIONS(633),
    [anon_sym_VectorN] = ACTIONS(633),
    [anon_sym_String] = ACTIONS(633),
    [anon_sym_Pattern] = ACTIONS(633),
    [anon_sym_Array] = ACTIONS(633),
    [anon_sym_Map] = ACTIONS(633),
    [anon_sym_Maybe] = ACTIONS(633),
    [anon_sym_Result] = ACTIONS(633),
    [anon_sym_Id] = ACTIONS(633),
    [anon_sym_Ptr] = ACTIONS(633),
    [anon_sym_RBRACK2] = ACTIONS(631),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_TILDE] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [sym_identifier] = ACTIONS(633),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(635),
    [anon_sym_Bool] = ACTIONS(637),
    [anon_sym_Char] = ACTIONS(637),
    [anon_sym_Int] = ACTIONS(637),
    [anon_sym_Long] = ACTIONS(637),
    [anon_sym_Float] = ACTIONS(637),
    [anon_sym_Double] = ACTIONS(637),
    [anon_sym_Vector2] = ACTIONS(637),
    [anon_sym_Vector3] = ACTIONS(637),
    [anon_sym_VectorN] = ACTIONS(637),
    [anon_sym_String] = ACTIONS(637),
    [anon_sym_Pattern] = ACTIONS(637),
    [anon_sym_Array] = ACTIONS(637),
    [anon_sym_Map] = ACTIONS(637),
    [anon_sym_Maybe] = ACTIONS(637),
    [anon_sym_Result] = ACTIONS(637),
    [anon_sym_Id] = ACTIONS(637),
    [anon_sym_Ptr] = ACTIONS(637),
    [anon_sym_RBRACK2] = ACTIONS(635),
    [anon_sym_AMP] = ACTIONS(635),
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_TILDE] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [sym_identifier] = ACTIONS(637),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_Bool] = ACTIONS(641),
    [anon_sym_Char] = ACTIONS(641),
    [anon_sym_Int] = ACTIONS(641),
    [anon_sym_Long] = ACTIONS(641),
    [anon_sym_Float] = ACTIONS(641),
    [anon_sym_Double] = ACTIONS(641),
    [anon_sym_Vector2] = ACTIONS(641),
    [anon_sym_Vector3] = ACTIONS(641),
    [anon_sym_VectorN] = ACTIONS(641),
    [anon_sym_String] = ACTIONS(641),
    [anon_sym_Pattern] = ACTIONS(641),
    [anon_sym_Array] = ACTIONS(641),
    [anon_sym_Map] = ACTIONS(641),
    [anon_sym_Maybe] = ACTIONS(641),
    [anon_sym_Result] = ACTIONS(641),
    [anon_sym_Id] = ACTIONS(641),
    [anon_sym_Ptr] = ACTIONS(641),
    [anon_sym_RBRACK2] = ACTIONS(639),
    [anon_sym_AMP] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(639),
    [anon_sym_TILDE] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [sym_identifier] = ACTIONS(641),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_Bool] = ACTIONS(645),
    [anon_sym_Char] = ACTIONS(645),
    [anon_sym_Int] = ACTIONS(645),
    [anon_sym_Long] = ACTIONS(645),
    [anon_sym_Float] = ACTIONS(645),
    [anon_sym_Double] = ACTIONS(645),
    [anon_sym_Vector2] = ACTIONS(645),
    [anon_sym_Vector3] = ACTIONS(645),
    [anon_sym_VectorN] = ACTIONS(645),
    [anon_sym_String] = ACTIONS(645),
    [anon_sym_Pattern] = ACTIONS(645),
    [anon_sym_Array] = ACTIONS(645),
    [anon_sym_Map] = ACTIONS(645),
    [anon_sym_Maybe] = ACTIONS(645),
    [anon_sym_Result] = ACTIONS(645),
    [anon_sym_Id] = ACTIONS(645),
    [anon_sym_Ptr] = ACTIONS(645),
    [anon_sym_RBRACK2] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AT] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [sym_identifier] = ACTIONS(645),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_Bool] = ACTIONS(649),
    [anon_sym_Char] = ACTIONS(649),
    [anon_sym_Int] = ACTIONS(649),
    [anon_sym_Long] = ACTIONS(649),
    [anon_sym_Float] = ACTIONS(649),
    [anon_sym_Double] = ACTIONS(649),
    [anon_sym_Vector2] = ACTIONS(649),
    [anon_sym_Vector3] = ACTIONS(649),
    [anon_sym_VectorN] = ACTIONS(649),
    [anon_sym_String] = ACTIONS(649),
    [anon_sym_Pattern] = ACTIONS(649),
    [anon_sym_Array] = ACTIONS(649),
    [anon_sym_Map] = ACTIONS(649),
    [anon_sym_Maybe] = ACTIONS(649),
    [anon_sym_Result] = ACTIONS(649),
    [anon_sym_Id] = ACTIONS(649),
    [anon_sym_Ptr] = ACTIONS(649),
    [anon_sym_RBRACK2] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(647),
    [anon_sym_AT] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [sym_identifier] = ACTIONS(649),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_Bool] = ACTIONS(653),
    [anon_sym_Char] = ACTIONS(653),
    [anon_sym_Int] = ACTIONS(653),
    [anon_sym_Long] = ACTIONS(653),
    [anon_sym_Float] = ACTIONS(653),
    [anon_sym_Double] = ACTIONS(653),
    [anon_sym_Vector2] = ACTIONS(653),
    [anon_sym_Vector3] = ACTIONS(653),
    [anon_sym_VectorN] = ACTIONS(653),
    [anon_sym_String] = ACTIONS(653),
    [anon_sym_Pattern] = ACTIONS(653),
    [anon_sym_Array] = ACTIONS(653),
    [anon_sym_Map] = ACTIONS(653),
    [anon_sym_Maybe] = ACTIONS(653),
    [anon_sym_Result] = ACTIONS(653),
    [anon_sym_Id] = ACTIONS(653),
    [anon_sym_Ptr] = ACTIONS(653),
    [anon_sym_RBRACK2] = ACTIONS(651),
    [anon_sym_AMP] = ACTIONS(651),
    [anon_sym_AT] = ACTIONS(651),
    [anon_sym_TILDE] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [sym_identifier] = ACTIONS(653),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(655),
    [anon_sym_Bool] = ACTIONS(657),
    [anon_sym_Char] = ACTIONS(657),
    [anon_sym_Int] = ACTIONS(657),
    [anon_sym_Long] = ACTIONS(657),
    [anon_sym_Float] = ACTIONS(657),
    [anon_sym_Double] = ACTIONS(657),
    [anon_sym_Vector2] = ACTIONS(657),
    [anon_sym_Vector3] = ACTIONS(657),
    [anon_sym_VectorN] = ACTIONS(657),
    [anon_sym_String] = ACTIONS(657),
    [anon_sym_Pattern] = ACTIONS(657),
    [anon_sym_Array] = ACTIONS(657),
    [anon_sym_Map] = ACTIONS(657),
    [anon_sym_Maybe] = ACTIONS(657),
    [anon_sym_Result] = ACTIONS(657),
    [anon_sym_Id] = ACTIONS(657),
    [anon_sym_Ptr] = ACTIONS(657),
    [anon_sym_AMP] = ACTIONS(655),
    [anon_sym_AT] = ACTIONS(655),
    [anon_sym_TILDE] = ACTIONS(655),
    [anon_sym_SQUOTE] = ACTIONS(655),
    [sym_identifier] = ACTIONS(657),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(659),
    [anon_sym_Bool] = ACTIONS(661),
    [anon_sym_Char] = ACTIONS(661),
    [anon_sym_Int] = ACTIONS(661),
    [anon_sym_Long] = ACTIONS(661),
    [anon_sym_Float] = ACTIONS(661),
    [anon_sym_Double] = ACTIONS(661),
    [anon_sym_Vector2] = ACTIONS(661),
    [anon_sym_Vector3] = ACTIONS(661),
    [anon_sym_VectorN] = ACTIONS(661),
    [anon_sym_String] = ACTIONS(661),
    [anon_sym_Pattern] = ACTIONS(661),
    [anon_sym_Array] = ACTIONS(661),
    [anon_sym_Map] = ACTIONS(661),
    [anon_sym_Maybe] = ACTIONS(661),
    [anon_sym_Result] = ACTIONS(661),
    [anon_sym_Id] = ACTIONS(661),
    [anon_sym_Ptr] = ACTIONS(661),
    [anon_sym_AMP] = ACTIONS(659),
    [anon_sym_AT] = ACTIONS(659),
    [anon_sym_TILDE] = ACTIONS(659),
    [anon_sym_SQUOTE] = ACTIONS(659),
    [sym_identifier] = ACTIONS(661),
  },
  [87] = {
    [sym_interface_fn] = STATE(267),
    [aux_sym_complex_type_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_Bool] = ACTIONS(665),
    [anon_sym_Char] = ACTIONS(665),
    [anon_sym_Int] = ACTIONS(665),
    [anon_sym_Long] = ACTIONS(665),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_Double] = ACTIONS(665),
    [anon_sym_Vector2] = ACTIONS(665),
    [anon_sym_Vector3] = ACTIONS(665),
    [anon_sym_VectorN] = ACTIONS(665),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_Pattern] = ACTIONS(665),
    [anon_sym_Array] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(665),
    [anon_sym_Maybe] = ACTIONS(665),
    [anon_sym_Result] = ACTIONS(665),
    [anon_sym_Id] = ACTIONS(665),
    [anon_sym_Ptr] = ACTIONS(665),
    [anon_sym_Fn] = ACTIONS(667),
    [anon_sym_] = ACTIONS(667),
    [sym_identifier] = ACTIONS(669),
  },
  [88] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_Bool] = ACTIONS(674),
    [anon_sym_Char] = ACTIONS(674),
    [anon_sym_Int] = ACTIONS(674),
    [anon_sym_Long] = ACTIONS(674),
    [anon_sym_Float] = ACTIONS(674),
    [anon_sym_Double] = ACTIONS(674),
    [anon_sym_Vector2] = ACTIONS(674),
    [anon_sym_Vector3] = ACTIONS(674),
    [anon_sym_VectorN] = ACTIONS(674),
    [anon_sym_String] = ACTIONS(674),
    [anon_sym_Pattern] = ACTIONS(674),
    [anon_sym_Array] = ACTIONS(674),
    [anon_sym_Map] = ACTIONS(674),
    [anon_sym_Maybe] = ACTIONS(674),
    [anon_sym_Result] = ACTIONS(674),
    [anon_sym_Id] = ACTIONS(674),
    [anon_sym_Ptr] = ACTIONS(674),
    [anon_sym_RBRACK2] = ACTIONS(677),
    [sym_identifier] = ACTIONS(679),
  },
  [89] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(682),
    [anon_sym_Char] = ACTIONS(682),
    [anon_sym_Int] = ACTIONS(682),
    [anon_sym_Long] = ACTIONS(682),
    [anon_sym_Float] = ACTIONS(682),
    [anon_sym_Double] = ACTIONS(682),
    [anon_sym_Vector2] = ACTIONS(682),
    [anon_sym_Vector3] = ACTIONS(682),
    [anon_sym_VectorN] = ACTIONS(682),
    [anon_sym_String] = ACTIONS(682),
    [anon_sym_Pattern] = ACTIONS(682),
    [anon_sym_Array] = ACTIONS(682),
    [anon_sym_Map] = ACTIONS(682),
    [anon_sym_Maybe] = ACTIONS(682),
    [anon_sym_Result] = ACTIONS(682),
    [anon_sym_Id] = ACTIONS(682),
    [anon_sym_Ptr] = ACTIONS(682),
    [anon_sym_RBRACK2] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [90] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(682),
    [anon_sym_Char] = ACTIONS(682),
    [anon_sym_Int] = ACTIONS(682),
    [anon_sym_Long] = ACTIONS(682),
    [anon_sym_Float] = ACTIONS(682),
    [anon_sym_Double] = ACTIONS(682),
    [anon_sym_Vector2] = ACTIONS(682),
    [anon_sym_Vector3] = ACTIONS(682),
    [anon_sym_VectorN] = ACTIONS(682),
    [anon_sym_String] = ACTIONS(682),
    [anon_sym_Pattern] = ACTIONS(682),
    [anon_sym_Array] = ACTIONS(682),
    [anon_sym_Map] = ACTIONS(682),
    [anon_sym_Maybe] = ACTIONS(682),
    [anon_sym_Result] = ACTIONS(682),
    [anon_sym_Id] = ACTIONS(682),
    [anon_sym_Ptr] = ACTIONS(682),
    [anon_sym_RBRACK2] = ACTIONS(688),
    [sym_identifier] = ACTIONS(686),
  },
  [91] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(682),
    [anon_sym_Char] = ACTIONS(682),
    [anon_sym_Int] = ACTIONS(682),
    [anon_sym_Long] = ACTIONS(682),
    [anon_sym_Float] = ACTIONS(682),
    [anon_sym_Double] = ACTIONS(682),
    [anon_sym_Vector2] = ACTIONS(682),
    [anon_sym_Vector3] = ACTIONS(682),
    [anon_sym_VectorN] = ACTIONS(682),
    [anon_sym_String] = ACTIONS(682),
    [anon_sym_Pattern] = ACTIONS(682),
    [anon_sym_Array] = ACTIONS(682),
    [anon_sym_Map] = ACTIONS(682),
    [anon_sym_Maybe] = ACTIONS(682),
    [anon_sym_Result] = ACTIONS(682),
    [anon_sym_Id] = ACTIONS(682),
    [anon_sym_Ptr] = ACTIONS(682),
    [anon_sym_RBRACK2] = ACTIONS(690),
    [sym_identifier] = ACTIONS(686),
  },
  [92] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(682),
    [anon_sym_Char] = ACTIONS(682),
    [anon_sym_Int] = ACTIONS(682),
    [anon_sym_Long] = ACTIONS(682),
    [anon_sym_Float] = ACTIONS(682),
    [anon_sym_Double] = ACTIONS(682),
    [anon_sym_Vector2] = ACTIONS(682),
    [anon_sym_Vector3] = ACTIONS(682),
    [anon_sym_VectorN] = ACTIONS(682),
    [anon_sym_String] = ACTIONS(682),
    [anon_sym_Pattern] = ACTIONS(682),
    [anon_sym_Array] = ACTIONS(682),
    [anon_sym_Map] = ACTIONS(682),
    [anon_sym_Maybe] = ACTIONS(682),
    [anon_sym_Result] = ACTIONS(682),
    [anon_sym_Id] = ACTIONS(682),
    [anon_sym_Ptr] = ACTIONS(682),
    [anon_sym_RBRACK2] = ACTIONS(692),
    [sym_identifier] = ACTIONS(686),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(694),
    [anon_sym_Bool] = ACTIONS(696),
    [anon_sym_Char] = ACTIONS(696),
    [anon_sym_Int] = ACTIONS(696),
    [anon_sym_Long] = ACTIONS(696),
    [anon_sym_Float] = ACTIONS(696),
    [anon_sym_Double] = ACTIONS(696),
    [anon_sym_Vector2] = ACTIONS(696),
    [anon_sym_Vector3] = ACTIONS(696),
    [anon_sym_VectorN] = ACTIONS(696),
    [anon_sym_String] = ACTIONS(696),
    [anon_sym_Pattern] = ACTIONS(696),
    [anon_sym_Array] = ACTIONS(696),
    [anon_sym_Map] = ACTIONS(696),
    [anon_sym_Maybe] = ACTIONS(696),
    [anon_sym_Result] = ACTIONS(696),
    [anon_sym_Id] = ACTIONS(696),
    [anon_sym_Ptr] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RBRACK2] = ACTIONS(694),
    [sym_identifier] = ACTIONS(696),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_Bool] = ACTIONS(702),
    [anon_sym_Char] = ACTIONS(702),
    [anon_sym_Int] = ACTIONS(702),
    [anon_sym_Long] = ACTIONS(702),
    [anon_sym_Float] = ACTIONS(702),
    [anon_sym_Double] = ACTIONS(702),
    [anon_sym_Vector2] = ACTIONS(702),
    [anon_sym_Vector3] = ACTIONS(702),
    [anon_sym_VectorN] = ACTIONS(702),
    [anon_sym_String] = ACTIONS(702),
    [anon_sym_Pattern] = ACTIONS(702),
    [anon_sym_Array] = ACTIONS(702),
    [anon_sym_Map] = ACTIONS(702),
    [anon_sym_Maybe] = ACTIONS(702),
    [anon_sym_Result] = ACTIONS(702),
    [anon_sym_Id] = ACTIONS(702),
    [anon_sym_Ptr] = ACTIONS(702),
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RBRACK2] = ACTIONS(700),
    [sym_identifier] = ACTIONS(702),
  },
  [95] = {
    [sym_type] = STATE(62),
    [sym_complex_type] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_Bool] = ACTIONS(573),
    [anon_sym_Char] = ACTIONS(573),
    [anon_sym_Int] = ACTIONS(573),
    [anon_sym_Long] = ACTIONS(573),
    [anon_sym_Float] = ACTIONS(573),
    [anon_sym_Double] = ACTIONS(573),
    [anon_sym_Vector2] = ACTIONS(573),
    [anon_sym_Vector3] = ACTIONS(573),
    [anon_sym_VectorN] = ACTIONS(573),
    [anon_sym_String] = ACTIONS(573),
    [anon_sym_Pattern] = ACTIONS(573),
    [anon_sym_Array] = ACTIONS(573),
    [anon_sym_Map] = ACTIONS(573),
    [anon_sym_Maybe] = ACTIONS(573),
    [anon_sym_Result] = ACTIONS(573),
    [anon_sym_Id] = ACTIONS(573),
    [anon_sym_Ptr] = ACTIONS(573),
    [sym_identifier] = ACTIONS(575),
  },
  [96] = {
    [aux_sym_complex_type_repeat1] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(706),
    [anon_sym_Bool] = ACTIONS(665),
    [anon_sym_Char] = ACTIONS(665),
    [anon_sym_Int] = ACTIONS(665),
    [anon_sym_Long] = ACTIONS(665),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_Double] = ACTIONS(665),
    [anon_sym_Vector2] = ACTIONS(665),
    [anon_sym_Vector3] = ACTIONS(665),
    [anon_sym_VectorN] = ACTIONS(665),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_Pattern] = ACTIONS(665),
    [anon_sym_Array] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(665),
    [anon_sym_Maybe] = ACTIONS(665),
    [anon_sym_Result] = ACTIONS(665),
    [anon_sym_Id] = ACTIONS(665),
    [anon_sym_Ptr] = ACTIONS(665),
    [sym_identifier] = ACTIONS(708),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_Bool] = ACTIONS(710),
    [anon_sym_Char] = ACTIONS(710),
    [anon_sym_Int] = ACTIONS(710),
    [anon_sym_Long] = ACTIONS(710),
    [anon_sym_Float] = ACTIONS(710),
    [anon_sym_Double] = ACTIONS(710),
    [anon_sym_Vector2] = ACTIONS(710),
    [anon_sym_Vector3] = ACTIONS(710),
    [anon_sym_VectorN] = ACTIONS(710),
    [anon_sym_String] = ACTIONS(710),
    [anon_sym_Pattern] = ACTIONS(710),
    [anon_sym_Array] = ACTIONS(710),
    [anon_sym_Map] = ACTIONS(710),
    [anon_sym_Maybe] = ACTIONS(710),
    [anon_sym_Result] = ACTIONS(710),
    [anon_sym_Id] = ACTIONS(710),
    [anon_sym_Ptr] = ACTIONS(710),
    [anon_sym_RBRACK2] = ACTIONS(677),
    [sym_identifier] = ACTIONS(710),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_Bool] = ACTIONS(714),
    [anon_sym_Char] = ACTIONS(714),
    [anon_sym_Int] = ACTIONS(714),
    [anon_sym_Long] = ACTIONS(714),
    [anon_sym_Float] = ACTIONS(714),
    [anon_sym_Double] = ACTIONS(714),
    [anon_sym_Vector2] = ACTIONS(714),
    [anon_sym_Vector3] = ACTIONS(714),
    [anon_sym_VectorN] = ACTIONS(714),
    [anon_sym_String] = ACTIONS(714),
    [anon_sym_Pattern] = ACTIONS(714),
    [anon_sym_Array] = ACTIONS(714),
    [anon_sym_Map] = ACTIONS(714),
    [anon_sym_Maybe] = ACTIONS(714),
    [anon_sym_Result] = ACTIONS(714),
    [anon_sym_Id] = ACTIONS(714),
    [anon_sym_Ptr] = ACTIONS(714),
    [anon_sym_RBRACK2] = ACTIONS(712),
    [sym_identifier] = ACTIONS(714),
  },
  [99] = {
    [aux_sym_complex_type_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_Bool] = ACTIONS(665),
    [anon_sym_Char] = ACTIONS(665),
    [anon_sym_Int] = ACTIONS(665),
    [anon_sym_Long] = ACTIONS(665),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_Double] = ACTIONS(665),
    [anon_sym_Vector2] = ACTIONS(665),
    [anon_sym_Vector3] = ACTIONS(665),
    [anon_sym_VectorN] = ACTIONS(665),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_Pattern] = ACTIONS(665),
    [anon_sym_Array] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(665),
    [anon_sym_Maybe] = ACTIONS(665),
    [anon_sym_Result] = ACTIONS(665),
    [anon_sym_Id] = ACTIONS(665),
    [anon_sym_Ptr] = ACTIONS(665),
    [sym_identifier] = ACTIONS(669),
  },
  [100] = {
    [aux_sym_complex_type_repeat1] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(716),
    [anon_sym_Bool] = ACTIONS(718),
    [anon_sym_Char] = ACTIONS(718),
    [anon_sym_Int] = ACTIONS(718),
    [anon_sym_Long] = ACTIONS(718),
    [anon_sym_Float] = ACTIONS(718),
    [anon_sym_Double] = ACTIONS(718),
    [anon_sym_Vector2] = ACTIONS(718),
    [anon_sym_Vector3] = ACTIONS(718),
    [anon_sym_VectorN] = ACTIONS(718),
    [anon_sym_String] = ACTIONS(718),
    [anon_sym_Pattern] = ACTIONS(718),
    [anon_sym_Array] = ACTIONS(718),
    [anon_sym_Map] = ACTIONS(718),
    [anon_sym_Maybe] = ACTIONS(718),
    [anon_sym_Result] = ACTIONS(718),
    [anon_sym_Id] = ACTIONS(718),
    [anon_sym_Ptr] = ACTIONS(718),
    [sym_identifier] = ACTIONS(721),
  },
  [101] = {
    [aux_sym_complex_type_repeat1] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_Bool] = ACTIONS(665),
    [anon_sym_Char] = ACTIONS(665),
    [anon_sym_Int] = ACTIONS(665),
    [anon_sym_Long] = ACTIONS(665),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_Double] = ACTIONS(665),
    [anon_sym_Vector2] = ACTIONS(665),
    [anon_sym_Vector3] = ACTIONS(665),
    [anon_sym_VectorN] = ACTIONS(665),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_Pattern] = ACTIONS(665),
    [anon_sym_Array] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(665),
    [anon_sym_Maybe] = ACTIONS(665),
    [anon_sym_Result] = ACTIONS(665),
    [anon_sym_Id] = ACTIONS(665),
    [anon_sym_Ptr] = ACTIONS(665),
    [sym_identifier] = ACTIONS(726),
  },
  [102] = {
    [aux_sym_complex_type_repeat1] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_Bool] = ACTIONS(665),
    [anon_sym_Char] = ACTIONS(665),
    [anon_sym_Int] = ACTIONS(665),
    [anon_sym_Long] = ACTIONS(665),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_Double] = ACTIONS(665),
    [anon_sym_Vector2] = ACTIONS(665),
    [anon_sym_Vector3] = ACTIONS(665),
    [anon_sym_VectorN] = ACTIONS(665),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_Pattern] = ACTIONS(665),
    [anon_sym_Array] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(665),
    [anon_sym_Maybe] = ACTIONS(665),
    [anon_sym_Result] = ACTIONS(665),
    [anon_sym_Id] = ACTIONS(665),
    [anon_sym_Ptr] = ACTIONS(665),
    [sym_identifier] = ACTIONS(708),
  },
  [103] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(133),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(732),
    [sym_identifier] = ACTIONS(730),
  },
  [104] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [aux_sym_array_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(734),
    [sym_integer_literal] = ACTIONS(736),
    [sym_float_literal] = ACTIONS(736),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(736),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_doc] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym_TILDE] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [sym_integer_literal] = ACTIONS(621),
    [sym_float_literal] = ACTIONS(621),
    [anon_sym_true] = ACTIONS(621),
    [anon_sym_false] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_BSLASH] = ACTIONS(619),
    [anon_sym_POUND_DQUOTE] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [sym_upper_identifier] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_doc] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(623),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [sym_integer_literal] = ACTIONS(625),
    [sym_float_literal] = ACTIONS(625),
    [anon_sym_true] = ACTIONS(625),
    [anon_sym_false] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [anon_sym_BSLASH] = ACTIONS(623),
    [anon_sym_POUND_DQUOTE] = ACTIONS(623),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(623),
    [sym_upper_identifier] = ACTIONS(623),
    [sym_identifier] = ACTIONS(625),
  },
  [107] = {
    [sym__literals] = STATE(104),
    [sym_bool_literal] = STATE(104),
    [sym_str_literal] = STATE(104),
    [sym_char_literal] = STATE(104),
    [sym_pattern_literal] = STATE(104),
    [sym_array_expression] = STATE(104),
    [sym_map_expression] = STATE(104),
    [aux_sym_array_expression_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(738),
    [sym_integer_literal] = ACTIONS(740),
    [sym_float_literal] = ACTIONS(740),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(740),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_doc] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_TILDE] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(615),
    [sym_integer_literal] = ACTIONS(617),
    [sym_float_literal] = ACTIONS(617),
    [anon_sym_true] = ACTIONS(617),
    [anon_sym_false] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(615),
    [anon_sym_BSLASH] = ACTIONS(615),
    [anon_sym_POUND_DQUOTE] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(615),
    [sym_upper_identifier] = ACTIONS(615),
    [sym_identifier] = ACTIONS(617),
  },
  [109] = {
    [sym__literals] = STATE(132),
    [sym_bool_literal] = STATE(132),
    [sym_str_literal] = STATE(132),
    [sym_char_literal] = STATE(132),
    [sym_pattern_literal] = STATE(132),
    [sym_array_expression] = STATE(132),
    [sym_map_expression] = STATE(132),
    [aux_sym_array_expression_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(742),
    [sym_integer_literal] = ACTIONS(744),
    [sym_float_literal] = ACTIONS(744),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(744),
  },
  [110] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(746),
    [sym_identifier] = ACTIONS(730),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_doc] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_TILDE] = ACTIONS(611),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [sym_integer_literal] = ACTIONS(613),
    [sym_float_literal] = ACTIONS(613),
    [anon_sym_true] = ACTIONS(613),
    [anon_sym_false] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [anon_sym_BSLASH] = ACTIONS(611),
    [anon_sym_POUND_DQUOTE] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [sym_upper_identifier] = ACTIONS(611),
    [sym_identifier] = ACTIONS(613),
  },
  [112] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [aux_sym_array_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_RBRACK2] = ACTIONS(751),
    [sym_integer_literal] = ACTIONS(753),
    [sym_float_literal] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(756),
    [anon_sym_false] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [anon_sym_BSLASH] = ACTIONS(762),
    [anon_sym_POUND_DQUOTE] = ACTIONS(765),
    [anon_sym_LBRACE] = ACTIONS(768),
    [sym_identifier] = ACTIONS(753),
  },
  [113] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [aux_sym_array_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(771),
    [sym_integer_literal] = ACTIONS(736),
    [sym_float_literal] = ACTIONS(736),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(736),
  },
  [114] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(773),
    [sym_identifier] = ACTIONS(730),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_doc] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_AMP] = ACTIONS(591),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_TILDE] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [sym_integer_literal] = ACTIONS(593),
    [sym_float_literal] = ACTIONS(593),
    [anon_sym_true] = ACTIONS(593),
    [anon_sym_false] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_BSLASH] = ACTIONS(591),
    [anon_sym_POUND_DQUOTE] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [sym_upper_identifier] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(775),
    [anon_sym_Bool] = ACTIONS(777),
    [anon_sym_Char] = ACTIONS(777),
    [anon_sym_Int] = ACTIONS(777),
    [anon_sym_Long] = ACTIONS(777),
    [anon_sym_Float] = ACTIONS(777),
    [anon_sym_Double] = ACTIONS(777),
    [anon_sym_Vector2] = ACTIONS(777),
    [anon_sym_Vector3] = ACTIONS(777),
    [anon_sym_VectorN] = ACTIONS(777),
    [anon_sym_String] = ACTIONS(777),
    [anon_sym_Pattern] = ACTIONS(777),
    [anon_sym_Array] = ACTIONS(777),
    [anon_sym_Map] = ACTIONS(777),
    [anon_sym_Maybe] = ACTIONS(777),
    [anon_sym_Result] = ACTIONS(777),
    [anon_sym_Id] = ACTIONS(777),
    [anon_sym_Ptr] = ACTIONS(777),
    [sym_identifier] = ACTIONS(777),
  },
  [117] = {
    [sym__literals] = STATE(113),
    [sym_bool_literal] = STATE(113),
    [sym_str_literal] = STATE(113),
    [sym_char_literal] = STATE(113),
    [sym_pattern_literal] = STATE(113),
    [sym_array_expression] = STATE(113),
    [sym_map_expression] = STATE(113),
    [aux_sym_array_expression_repeat1] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(779),
    [sym_integer_literal] = ACTIONS(781),
    [sym_float_literal] = ACTIONS(781),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(781),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(783),
    [anon_sym_RPAREN] = ACTIONS(783),
    [anon_sym_doc] = ACTIONS(785),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_AMP] = ACTIONS(783),
    [anon_sym_AT] = ACTIONS(783),
    [anon_sym_TILDE] = ACTIONS(783),
    [anon_sym_SQUOTE] = ACTIONS(783),
    [sym_integer_literal] = ACTIONS(785),
    [sym_float_literal] = ACTIONS(785),
    [anon_sym_true] = ACTIONS(785),
    [anon_sym_false] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [anon_sym_BSLASH] = ACTIONS(783),
    [anon_sym_POUND_DQUOTE] = ACTIONS(783),
    [anon_sym_LBRACE] = ACTIONS(783),
    [anon_sym_COLON] = ACTIONS(783),
    [sym_upper_identifier] = ACTIONS(783),
    [sym_identifier] = ACTIONS(785),
  },
  [119] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(787),
    [sym_identifier] = ACTIONS(730),
  },
  [120] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [aux_sym_array_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(789),
    [sym_integer_literal] = ACTIONS(736),
    [sym_float_literal] = ACTIONS(736),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(736),
  },
  [121] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(119),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(791),
    [sym_identifier] = ACTIONS(730),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_doc] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_AMP] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_TILDE] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [sym_integer_literal] = ACTIONS(597),
    [sym_float_literal] = ACTIONS(597),
    [anon_sym_true] = ACTIONS(597),
    [anon_sym_false] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [anon_sym_BSLASH] = ACTIONS(595),
    [anon_sym_POUND_DQUOTE] = ACTIONS(595),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_COLON] = ACTIONS(595),
    [sym_upper_identifier] = ACTIONS(595),
    [sym_identifier] = ACTIONS(597),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_doc] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_AMP] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(627),
    [anon_sym_TILDE] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [sym_integer_literal] = ACTIONS(629),
    [sym_float_literal] = ACTIONS(629),
    [anon_sym_true] = ACTIONS(629),
    [anon_sym_false] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_BSLASH] = ACTIONS(627),
    [anon_sym_POUND_DQUOTE] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [sym_upper_identifier] = ACTIONS(627),
    [sym_identifier] = ACTIONS(629),
  },
  [124] = {
    [sym__literals] = STATE(120),
    [sym_bool_literal] = STATE(120),
    [sym_str_literal] = STATE(120),
    [sym_char_literal] = STATE(120),
    [sym_pattern_literal] = STATE(120),
    [sym_array_expression] = STATE(120),
    [sym_map_expression] = STATE(120),
    [aux_sym_array_expression_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(793),
    [sym_integer_literal] = ACTIONS(795),
    [sym_float_literal] = ACTIONS(795),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(795),
  },
  [125] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_doc] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_TILDE] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [sym_integer_literal] = ACTIONS(633),
    [sym_float_literal] = ACTIONS(633),
    [anon_sym_true] = ACTIONS(633),
    [anon_sym_false] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [anon_sym_BSLASH] = ACTIONS(631),
    [anon_sym_POUND_DQUOTE] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [sym_upper_identifier] = ACTIONS(631),
    [sym_identifier] = ACTIONS(633),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_doc] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_AMP] = ACTIONS(635),
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_TILDE] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [sym_integer_literal] = ACTIONS(637),
    [sym_float_literal] = ACTIONS(637),
    [anon_sym_true] = ACTIONS(637),
    [anon_sym_false] = ACTIONS(637),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [anon_sym_BSLASH] = ACTIONS(635),
    [anon_sym_POUND_DQUOTE] = ACTIONS(635),
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(635),
    [sym_upper_identifier] = ACTIONS(635),
    [sym_identifier] = ACTIONS(637),
  },
  [127] = {
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_doc] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_AMP] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(639),
    [anon_sym_TILDE] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [sym_integer_literal] = ACTIONS(641),
    [sym_float_literal] = ACTIONS(641),
    [anon_sym_true] = ACTIONS(641),
    [anon_sym_false] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_BSLASH] = ACTIONS(639),
    [anon_sym_POUND_DQUOTE] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(639),
    [sym_upper_identifier] = ACTIONS(639),
    [sym_identifier] = ACTIONS(641),
  },
  [128] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(797),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(803),
    [anon_sym_false] = ACTIONS(803),
    [anon_sym_DQUOTE] = ACTIONS(806),
    [anon_sym_BSLASH] = ACTIONS(809),
    [anon_sym_POUND_DQUOTE] = ACTIONS(812),
    [anon_sym_LBRACE] = ACTIONS(815),
    [anon_sym_RBRACE] = ACTIONS(818),
    [sym_identifier] = ACTIONS(800),
  },
  [129] = {
    [anon_sym_LPAREN] = ACTIONS(820),
    [anon_sym_RPAREN] = ACTIONS(820),
    [anon_sym_doc] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_AMP] = ACTIONS(820),
    [anon_sym_AT] = ACTIONS(820),
    [anon_sym_TILDE] = ACTIONS(820),
    [anon_sym_SQUOTE] = ACTIONS(820),
    [sym_integer_literal] = ACTIONS(822),
    [sym_float_literal] = ACTIONS(822),
    [anon_sym_true] = ACTIONS(822),
    [anon_sym_false] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_BSLASH] = ACTIONS(820),
    [anon_sym_POUND_DQUOTE] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [sym_upper_identifier] = ACTIONS(820),
    [sym_identifier] = ACTIONS(822),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_doc] = ACTIONS(645),
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AT] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [sym_integer_literal] = ACTIONS(645),
    [sym_float_literal] = ACTIONS(645),
    [anon_sym_true] = ACTIONS(645),
    [anon_sym_false] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [anon_sym_BSLASH] = ACTIONS(643),
    [anon_sym_POUND_DQUOTE] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [sym_upper_identifier] = ACTIONS(643),
    [sym_identifier] = ACTIONS(645),
  },
  [131] = {
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_doc] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [sym_integer_literal] = ACTIONS(328),
    [sym_float_literal] = ACTIONS(328),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [sym_upper_identifier] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
  },
  [132] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [aux_sym_array_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(824),
    [sym_integer_literal] = ACTIONS(736),
    [sym_float_literal] = ACTIONS(736),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(736),
  },
  [133] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(826),
    [sym_identifier] = ACTIONS(730),
  },
  [134] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(828),
    [sym_identifier] = ACTIONS(730),
  },
  [135] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(830),
    [sym_identifier] = ACTIONS(730),
  },
  [136] = {
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_doc] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(647),
    [anon_sym_AT] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [sym_integer_literal] = ACTIONS(649),
    [sym_float_literal] = ACTIONS(649),
    [anon_sym_true] = ACTIONS(649),
    [anon_sym_false] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [anon_sym_BSLASH] = ACTIONS(647),
    [anon_sym_POUND_DQUOTE] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(647),
    [sym_upper_identifier] = ACTIONS(647),
    [sym_identifier] = ACTIONS(649),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_doc] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_AMP] = ACTIONS(651),
    [anon_sym_AT] = ACTIONS(651),
    [anon_sym_TILDE] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [sym_integer_literal] = ACTIONS(653),
    [sym_float_literal] = ACTIONS(653),
    [anon_sym_true] = ACTIONS(653),
    [anon_sym_false] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [anon_sym_BSLASH] = ACTIONS(651),
    [anon_sym_POUND_DQUOTE] = ACTIONS(651),
    [anon_sym_LBRACE] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [sym_upper_identifier] = ACTIONS(651),
    [sym_identifier] = ACTIONS(653),
  },
  [138] = {
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_doc] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_TILDE] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [sym_integer_literal] = ACTIONS(589),
    [sym_float_literal] = ACTIONS(589),
    [anon_sym_true] = ACTIONS(589),
    [anon_sym_false] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_BSLASH] = ACTIONS(587),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_upper_identifier] = ACTIONS(587),
    [sym_identifier] = ACTIONS(589),
  },
  [139] = {
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_doc] = ACTIONS(609),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_AT] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [sym_integer_literal] = ACTIONS(609),
    [sym_float_literal] = ACTIONS(609),
    [anon_sym_true] = ACTIONS(609),
    [anon_sym_false] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_BSLASH] = ACTIONS(607),
    [anon_sym_POUND_DQUOTE] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(607),
    [sym_upper_identifier] = ACTIONS(607),
    [sym_identifier] = ACTIONS(609),
  },
  [140] = {
    [sym__literals] = STATE(112),
    [sym_bool_literal] = STATE(112),
    [sym_str_literal] = STATE(112),
    [sym_char_literal] = STATE(112),
    [sym_pattern_literal] = STATE(112),
    [sym_array_expression] = STATE(112),
    [sym_map_expression] = STATE(112),
    [aux_sym_array_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(832),
    [sym_integer_literal] = ACTIONS(736),
    [sym_float_literal] = ACTIONS(736),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(736),
  },
  [141] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(834),
    [sym_identifier] = ACTIONS(730),
  },
  [142] = {
    [sym__literals] = STATE(173),
    [sym_bool_literal] = STATE(173),
    [sym_str_literal] = STATE(173),
    [sym_char_literal] = STATE(173),
    [sym_pattern_literal] = STATE(173),
    [sym_array_expression] = STATE(173),
    [sym_map_expression] = STATE(173),
    [aux_sym_map_expression_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(730),
    [sym_float_literal] = ACTIONS(730),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(836),
    [sym_identifier] = ACTIONS(730),
  },
  [143] = {
    [sym__literals] = STATE(140),
    [sym_bool_literal] = STATE(140),
    [sym_str_literal] = STATE(140),
    [sym_char_literal] = STATE(140),
    [sym_pattern_literal] = STATE(140),
    [sym_array_expression] = STATE(140),
    [sym_map_expression] = STATE(140),
    [aux_sym_array_expression_repeat1] = STATE(140),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(838),
    [sym_integer_literal] = ACTIONS(840),
    [sym_float_literal] = ACTIONS(840),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(840),
  },
  [144] = {
    [anon_sym_LPAREN] = ACTIONS(842),
    [anon_sym_RPAREN] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_DOT] = ACTIONS(844),
    [anon_sym_AMP] = ACTIONS(842),
    [anon_sym_AT] = ACTIONS(842),
    [anon_sym_TILDE] = ACTIONS(842),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [sym_integer_literal] = ACTIONS(846),
    [sym_float_literal] = ACTIONS(846),
    [anon_sym_true] = ACTIONS(846),
    [anon_sym_false] = ACTIONS(846),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [anon_sym_BSLASH] = ACTIONS(842),
    [anon_sym_POUND_DQUOTE] = ACTIONS(842),
    [anon_sym_LBRACE] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(842),
    [sym_upper_identifier] = ACTIONS(842),
    [sym_identifier] = ACTIONS(846),
  },
  [145] = {
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_AMP] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_TILDE] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [sym_integer_literal] = ACTIONS(597),
    [sym_float_literal] = ACTIONS(597),
    [anon_sym_true] = ACTIONS(597),
    [anon_sym_false] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [anon_sym_BSLASH] = ACTIONS(595),
    [anon_sym_POUND_DQUOTE] = ACTIONS(595),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_COLON] = ACTIONS(595),
    [sym_upper_identifier] = ACTIONS(595),
    [sym_identifier] = ACTIONS(597),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_AMP] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [sym_integer_literal] = ACTIONS(581),
    [sym_float_literal] = ACTIONS(581),
    [anon_sym_true] = ACTIONS(581),
    [anon_sym_false] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(579),
    [anon_sym_POUND_DQUOTE] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
    [sym_upper_identifier] = ACTIONS(579),
    [sym_identifier] = ACTIONS(581),
  },
  [147] = {
    [anon_sym_LPAREN] = ACTIONS(848),
    [anon_sym_RPAREN] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(848),
    [anon_sym_AMP] = ACTIONS(848),
    [anon_sym_AT] = ACTIONS(848),
    [anon_sym_TILDE] = ACTIONS(848),
    [anon_sym_SQUOTE] = ACTIONS(848),
    [sym_integer_literal] = ACTIONS(850),
    [sym_float_literal] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(850),
    [anon_sym_false] = ACTIONS(850),
    [anon_sym_DQUOTE] = ACTIONS(848),
    [anon_sym_BSLASH] = ACTIONS(848),
    [anon_sym_POUND_DQUOTE] = ACTIONS(848),
    [anon_sym_LBRACE] = ACTIONS(848),
    [anon_sym_COLON] = ACTIONS(848),
    [sym_upper_identifier] = ACTIONS(848),
    [sym_identifier] = ACTIONS(850),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_AMP] = ACTIONS(651),
    [anon_sym_AT] = ACTIONS(651),
    [anon_sym_TILDE] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [sym_integer_literal] = ACTIONS(653),
    [sym_float_literal] = ACTIONS(653),
    [anon_sym_true] = ACTIONS(653),
    [anon_sym_false] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [anon_sym_BSLASH] = ACTIONS(651),
    [anon_sym_POUND_DQUOTE] = ACTIONS(651),
    [anon_sym_LBRACE] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [sym_upper_identifier] = ACTIONS(651),
    [sym_identifier] = ACTIONS(653),
  },
  [149] = {
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(647),
    [anon_sym_AT] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [sym_integer_literal] = ACTIONS(649),
    [sym_float_literal] = ACTIONS(649),
    [anon_sym_true] = ACTIONS(649),
    [anon_sym_false] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [anon_sym_BSLASH] = ACTIONS(647),
    [anon_sym_POUND_DQUOTE] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_COLON] = ACTIONS(647),
    [sym_upper_identifier] = ACTIONS(647),
    [sym_identifier] = ACTIONS(649),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [sym_integer_literal] = ACTIONS(328),
    [sym_float_literal] = ACTIONS(328),
    [anon_sym_true] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_POUND_DQUOTE] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [sym_upper_identifier] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AT] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [sym_integer_literal] = ACTIONS(645),
    [sym_float_literal] = ACTIONS(645),
    [anon_sym_true] = ACTIONS(645),
    [anon_sym_false] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [anon_sym_BSLASH] = ACTIONS(643),
    [anon_sym_POUND_DQUOTE] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [sym_upper_identifier] = ACTIONS(643),
    [sym_identifier] = ACTIONS(645),
  },
  [152] = {
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_AMP] = ACTIONS(852),
    [anon_sym_AT] = ACTIONS(852),
    [anon_sym_TILDE] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [sym_integer_literal] = ACTIONS(854),
    [sym_float_literal] = ACTIONS(854),
    [anon_sym_true] = ACTIONS(854),
    [anon_sym_false] = ACTIONS(854),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [anon_sym_POUND_DQUOTE] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [sym_upper_identifier] = ACTIONS(852),
    [sym_identifier] = ACTIONS(854),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_TILDE] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [sym_integer_literal] = ACTIONS(589),
    [sym_float_literal] = ACTIONS(589),
    [anon_sym_true] = ACTIONS(589),
    [anon_sym_false] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_BSLASH] = ACTIONS(587),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_upper_identifier] = ACTIONS(587),
    [sym_identifier] = ACTIONS(589),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_AMP] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(639),
    [anon_sym_TILDE] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [sym_integer_literal] = ACTIONS(641),
    [sym_float_literal] = ACTIONS(641),
    [anon_sym_true] = ACTIONS(641),
    [anon_sym_false] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_BSLASH] = ACTIONS(639),
    [anon_sym_POUND_DQUOTE] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(639),
    [sym_upper_identifier] = ACTIONS(639),
    [sym_identifier] = ACTIONS(641),
  },
  [155] = {
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
    [anon_sym_AT] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [sym_integer_literal] = ACTIONS(605),
    [sym_float_literal] = ACTIONS(605),
    [anon_sym_true] = ACTIONS(605),
    [anon_sym_false] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [anon_sym_BSLASH] = ACTIONS(603),
    [anon_sym_POUND_DQUOTE] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(603),
    [sym_upper_identifier] = ACTIONS(603),
    [sym_identifier] = ACTIONS(605),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_TILDE] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(615),
    [sym_integer_literal] = ACTIONS(617),
    [sym_float_literal] = ACTIONS(617),
    [anon_sym_true] = ACTIONS(617),
    [anon_sym_false] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(615),
    [anon_sym_BSLASH] = ACTIONS(615),
    [anon_sym_POUND_DQUOTE] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(615),
    [sym_upper_identifier] = ACTIONS(615),
    [sym_identifier] = ACTIONS(617),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_TILDE] = ACTIONS(611),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [sym_integer_literal] = ACTIONS(613),
    [sym_float_literal] = ACTIONS(613),
    [anon_sym_true] = ACTIONS(613),
    [anon_sym_false] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [anon_sym_BSLASH] = ACTIONS(611),
    [anon_sym_POUND_DQUOTE] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [sym_upper_identifier] = ACTIONS(611),
    [sym_identifier] = ACTIONS(613),
  },
  [158] = {
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_AMP] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(599),
    [anon_sym_TILDE] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_integer_literal] = ACTIONS(601),
    [sym_float_literal] = ACTIONS(601),
    [anon_sym_true] = ACTIONS(601),
    [anon_sym_false] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [anon_sym_BSLASH] = ACTIONS(599),
    [anon_sym_POUND_DQUOTE] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
    [sym_upper_identifier] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
  },
  [159] = {
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_AMP] = ACTIONS(856),
    [anon_sym_AT] = ACTIONS(856),
    [anon_sym_TILDE] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [sym_integer_literal] = ACTIONS(858),
    [sym_float_literal] = ACTIONS(858),
    [anon_sym_true] = ACTIONS(858),
    [anon_sym_false] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [anon_sym_POUND_DQUOTE] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [sym_upper_identifier] = ACTIONS(856),
    [sym_identifier] = ACTIONS(858),
  },
  [160] = {
    [anon_sym_LPAREN] = ACTIONS(860),
    [anon_sym_RPAREN] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_AMP] = ACTIONS(860),
    [anon_sym_AT] = ACTIONS(860),
    [anon_sym_TILDE] = ACTIONS(860),
    [anon_sym_SQUOTE] = ACTIONS(860),
    [sym_integer_literal] = ACTIONS(862),
    [sym_float_literal] = ACTIONS(862),
    [anon_sym_true] = ACTIONS(862),
    [anon_sym_false] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(860),
    [anon_sym_BSLASH] = ACTIONS(860),
    [anon_sym_POUND_DQUOTE] = ACTIONS(860),
    [anon_sym_LBRACE] = ACTIONS(860),
    [anon_sym_COLON] = ACTIONS(860),
    [sym_upper_identifier] = ACTIONS(860),
    [sym_identifier] = ACTIONS(862),
  },
  [161] = {
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
    [anon_sym_AT] = ACTIONS(583),
    [anon_sym_TILDE] = ACTIONS(583),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [sym_integer_literal] = ACTIONS(585),
    [sym_float_literal] = ACTIONS(585),
    [anon_sym_true] = ACTIONS(585),
    [anon_sym_false] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(583),
    [anon_sym_POUND_DQUOTE] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(583),
    [sym_upper_identifier] = ACTIONS(583),
    [sym_identifier] = ACTIONS(585),
  },
  [162] = {
    [anon_sym_LPAREN] = ACTIONS(864),
    [anon_sym_RPAREN] = ACTIONS(864),
    [anon_sym_LBRACK] = ACTIONS(864),
    [anon_sym_AMP] = ACTIONS(864),
    [anon_sym_AT] = ACTIONS(864),
    [anon_sym_TILDE] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(864),
    [sym_integer_literal] = ACTIONS(866),
    [sym_float_literal] = ACTIONS(866),
    [anon_sym_true] = ACTIONS(866),
    [anon_sym_false] = ACTIONS(866),
    [anon_sym_DQUOTE] = ACTIONS(864),
    [anon_sym_BSLASH] = ACTIONS(864),
    [anon_sym_POUND_DQUOTE] = ACTIONS(864),
    [anon_sym_LBRACE] = ACTIONS(864),
    [anon_sym_COLON] = ACTIONS(864),
    [sym_upper_identifier] = ACTIONS(864),
    [sym_identifier] = ACTIONS(866),
  },
  [163] = {
    [anon_sym_LPAREN] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_AMP] = ACTIONS(635),
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_TILDE] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [sym_integer_literal] = ACTIONS(637),
    [sym_float_literal] = ACTIONS(637),
    [anon_sym_true] = ACTIONS(637),
    [anon_sym_false] = ACTIONS(637),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [anon_sym_BSLASH] = ACTIONS(635),
    [anon_sym_POUND_DQUOTE] = ACTIONS(635),
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(635),
    [sym_upper_identifier] = ACTIONS(635),
    [sym_identifier] = ACTIONS(637),
  },
  [164] = {
    [anon_sym_LPAREN] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(868),
    [anon_sym_AT] = ACTIONS(868),
    [anon_sym_TILDE] = ACTIONS(868),
    [anon_sym_SQUOTE] = ACTIONS(868),
    [sym_integer_literal] = ACTIONS(870),
    [sym_float_literal] = ACTIONS(870),
    [anon_sym_true] = ACTIONS(870),
    [anon_sym_false] = ACTIONS(870),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [anon_sym_BSLASH] = ACTIONS(868),
    [anon_sym_POUND_DQUOTE] = ACTIONS(868),
    [anon_sym_LBRACE] = ACTIONS(868),
    [anon_sym_COLON] = ACTIONS(868),
    [sym_upper_identifier] = ACTIONS(868),
    [sym_identifier] = ACTIONS(870),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_TILDE] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [sym_integer_literal] = ACTIONS(633),
    [sym_float_literal] = ACTIONS(633),
    [anon_sym_true] = ACTIONS(633),
    [anon_sym_false] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [anon_sym_BSLASH] = ACTIONS(631),
    [anon_sym_POUND_DQUOTE] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [sym_upper_identifier] = ACTIONS(631),
    [sym_identifier] = ACTIONS(633),
  },
  [166] = {
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_AMP] = ACTIONS(591),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_TILDE] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [sym_integer_literal] = ACTIONS(593),
    [sym_float_literal] = ACTIONS(593),
    [anon_sym_true] = ACTIONS(593),
    [anon_sym_false] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_BSLASH] = ACTIONS(591),
    [anon_sym_POUND_DQUOTE] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [sym_upper_identifier] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
  },
  [167] = {
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_AMP] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(627),
    [anon_sym_TILDE] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [sym_integer_literal] = ACTIONS(629),
    [sym_float_literal] = ACTIONS(629),
    [anon_sym_true] = ACTIONS(629),
    [anon_sym_false] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_BSLASH] = ACTIONS(627),
    [anon_sym_POUND_DQUOTE] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [sym_upper_identifier] = ACTIONS(627),
    [sym_identifier] = ACTIONS(629),
  },
  [168] = {
    [anon_sym_LPAREN] = ACTIONS(842),
    [anon_sym_RPAREN] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_AMP] = ACTIONS(842),
    [anon_sym_AT] = ACTIONS(842),
    [anon_sym_TILDE] = ACTIONS(842),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [sym_integer_literal] = ACTIONS(846),
    [sym_float_literal] = ACTIONS(846),
    [anon_sym_true] = ACTIONS(846),
    [anon_sym_false] = ACTIONS(846),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [anon_sym_BSLASH] = ACTIONS(842),
    [anon_sym_POUND_DQUOTE] = ACTIONS(842),
    [anon_sym_LBRACE] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(842),
    [sym_upper_identifier] = ACTIONS(842),
    [sym_identifier] = ACTIONS(846),
  },
  [169] = {
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_AMP] = ACTIONS(872),
    [anon_sym_AT] = ACTIONS(872),
    [anon_sym_TILDE] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(872),
    [sym_integer_literal] = ACTIONS(874),
    [sym_float_literal] = ACTIONS(874),
    [anon_sym_true] = ACTIONS(874),
    [anon_sym_false] = ACTIONS(874),
    [anon_sym_DQUOTE] = ACTIONS(872),
    [anon_sym_BSLASH] = ACTIONS(872),
    [anon_sym_POUND_DQUOTE] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_COLON] = ACTIONS(872),
    [sym_upper_identifier] = ACTIONS(872),
    [sym_identifier] = ACTIONS(874),
  },
  [170] = {
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_AT] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [sym_integer_literal] = ACTIONS(609),
    [sym_float_literal] = ACTIONS(609),
    [anon_sym_true] = ACTIONS(609),
    [anon_sym_false] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_BSLASH] = ACTIONS(607),
    [anon_sym_POUND_DQUOTE] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(607),
    [sym_upper_identifier] = ACTIONS(607),
    [sym_identifier] = ACTIONS(609),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(623),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [sym_integer_literal] = ACTIONS(625),
    [sym_float_literal] = ACTIONS(625),
    [anon_sym_true] = ACTIONS(625),
    [anon_sym_false] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [anon_sym_BSLASH] = ACTIONS(623),
    [anon_sym_POUND_DQUOTE] = ACTIONS(623),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(623),
    [sym_upper_identifier] = ACTIONS(623),
    [sym_identifier] = ACTIONS(625),
  },
  [172] = {
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym_TILDE] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [sym_integer_literal] = ACTIONS(621),
    [sym_float_literal] = ACTIONS(621),
    [anon_sym_true] = ACTIONS(621),
    [anon_sym_false] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_BSLASH] = ACTIONS(619),
    [anon_sym_POUND_DQUOTE] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [sym_upper_identifier] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
  },
  [173] = {
    [sym__literals] = STATE(184),
    [sym_bool_literal] = STATE(184),
    [sym_str_literal] = STATE(184),
    [sym_char_literal] = STATE(184),
    [sym_pattern_literal] = STATE(184),
    [sym_array_expression] = STATE(184),
    [sym_map_expression] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(876),
    [sym_float_literal] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(876),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_RBRACK2] = ACTIONS(607),
    [sym_integer_literal] = ACTIONS(609),
    [sym_float_literal] = ACTIONS(609),
    [anon_sym_true] = ACTIONS(609),
    [anon_sym_false] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_BSLASH] = ACTIONS(607),
    [anon_sym_POUND_DQUOTE] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [sym_identifier] = ACTIONS(609),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_RBRACK2] = ACTIONS(587),
    [sym_integer_literal] = ACTIONS(589),
    [sym_float_literal] = ACTIONS(589),
    [anon_sym_true] = ACTIONS(589),
    [anon_sym_false] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_BSLASH] = ACTIONS(587),
    [anon_sym_POUND_DQUOTE] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [sym_identifier] = ACTIONS(589),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK2] = ACTIONS(619),
    [sym_integer_literal] = ACTIONS(621),
    [sym_float_literal] = ACTIONS(621),
    [anon_sym_true] = ACTIONS(621),
    [anon_sym_false] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_BSLASH] = ACTIONS(619),
    [anon_sym_POUND_DQUOTE] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK2] = ACTIONS(651),
    [sym_integer_literal] = ACTIONS(653),
    [sym_float_literal] = ACTIONS(653),
    [anon_sym_true] = ACTIONS(653),
    [anon_sym_false] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [anon_sym_BSLASH] = ACTIONS(651),
    [anon_sym_POUND_DQUOTE] = ACTIONS(651),
    [anon_sym_LBRACE] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(651),
    [sym_identifier] = ACTIONS(653),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_RBRACK2] = ACTIONS(647),
    [sym_integer_literal] = ACTIONS(649),
    [sym_float_literal] = ACTIONS(649),
    [anon_sym_true] = ACTIONS(649),
    [anon_sym_false] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [anon_sym_BSLASH] = ACTIONS(647),
    [anon_sym_POUND_DQUOTE] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(647),
    [sym_identifier] = ACTIONS(649),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_RBRACK2] = ACTIONS(635),
    [sym_integer_literal] = ACTIONS(637),
    [sym_float_literal] = ACTIONS(637),
    [anon_sym_true] = ACTIONS(637),
    [anon_sym_false] = ACTIONS(637),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [anon_sym_BSLASH] = ACTIONS(635),
    [anon_sym_POUND_DQUOTE] = ACTIONS(635),
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_identifier] = ACTIONS(637),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_RBRACK2] = ACTIONS(627),
    [sym_integer_literal] = ACTIONS(629),
    [sym_float_literal] = ACTIONS(629),
    [anon_sym_true] = ACTIONS(629),
    [anon_sym_false] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_BSLASH] = ACTIONS(627),
    [anon_sym_POUND_DQUOTE] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_identifier] = ACTIONS(629),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_RBRACK2] = ACTIONS(631),
    [sym_integer_literal] = ACTIONS(633),
    [sym_float_literal] = ACTIONS(633),
    [anon_sym_true] = ACTIONS(633),
    [anon_sym_false] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [anon_sym_BSLASH] = ACTIONS(631),
    [anon_sym_POUND_DQUOTE] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_identifier] = ACTIONS(633),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK2] = ACTIONS(639),
    [sym_integer_literal] = ACTIONS(641),
    [sym_float_literal] = ACTIONS(641),
    [anon_sym_true] = ACTIONS(641),
    [anon_sym_false] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_BSLASH] = ACTIONS(639),
    [anon_sym_POUND_DQUOTE] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [sym_identifier] = ACTIONS(641),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(623),
    [anon_sym_RBRACK2] = ACTIONS(623),
    [sym_integer_literal] = ACTIONS(625),
    [sym_float_literal] = ACTIONS(625),
    [anon_sym_true] = ACTIONS(625),
    [anon_sym_false] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [anon_sym_BSLASH] = ACTIONS(623),
    [anon_sym_POUND_DQUOTE] = ACTIONS(623),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_RBRACE] = ACTIONS(623),
    [sym_identifier] = ACTIONS(625),
  },
  [184] = {
    [anon_sym_LBRACK] = ACTIONS(878),
    [sym_integer_literal] = ACTIONS(880),
    [sym_float_literal] = ACTIONS(880),
    [anon_sym_true] = ACTIONS(880),
    [anon_sym_false] = ACTIONS(880),
    [anon_sym_DQUOTE] = ACTIONS(878),
    [anon_sym_BSLASH] = ACTIONS(878),
    [anon_sym_POUND_DQUOTE] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_RBRACE] = ACTIONS(878),
    [sym_identifier] = ACTIONS(880),
  },
  [185] = {
    [sym__deftype1] = STATE(279),
    [sym__deftype2] = STATE(279),
    [sym__name_deftypes] = STATE(186),
    [anon_sym_LPAREN] = ACTIONS(882),
    [sym_identifier] = ACTIONS(884),
  },
  [186] = {
    [sym_fields] = STATE(270),
    [aux_sym__deftype2_repeat1] = STATE(213),
    [anon_sym_LPAREN] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(890),
  },
  [187] = {
    [sym_symbol] = STATE(187),
    [aux_sym_parameters_repeat1] = STATE(187),
    [anon_sym_RBRACK2] = ACTIONS(892),
    [anon_sym_COLON] = ACTIONS(894),
    [sym_identifier] = ACTIONS(897),
  },
  [188] = {
    [sym_symbol] = STATE(187),
    [aux_sym_parameters_repeat1] = STATE(187),
    [anon_sym_RBRACK2] = ACTIONS(900),
    [anon_sym_COLON] = ACTIONS(902),
    [sym_identifier] = ACTIONS(904),
  },
  [189] = {
    [sym_symbol] = STATE(188),
    [aux_sym_parameters_repeat1] = STATE(188),
    [anon_sym_RBRACK2] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(902),
    [sym_identifier] = ACTIONS(908),
  },
  [190] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(912),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [191] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(916),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [192] = {
    [aux_sym_str_literal_repeat1] = STATE(205),
    [aux_sym_str_literal_token1] = ACTIONS(918),
    [anon_sym_DQUOTE2] = ACTIONS(920),
    [sym_escape_sequence] = ACTIONS(922),
  },
  [193] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(924),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [194] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(926),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [195] = {
    [aux_sym_str_literal_repeat1] = STATE(193),
    [aux_sym_str_literal_token1] = ACTIONS(928),
    [anon_sym_DQUOTE2] = ACTIONS(930),
    [sym_escape_sequence] = ACTIONS(932),
  },
  [196] = {
    [aux_sym_str_literal_repeat1] = STATE(194),
    [aux_sym_str_literal_token1] = ACTIONS(934),
    [anon_sym_DQUOTE2] = ACTIONS(936),
    [sym_escape_sequence] = ACTIONS(938),
  },
  [197] = {
    [aux_sym_str_literal_repeat1] = STATE(201),
    [aux_sym_str_literal_token1] = ACTIONS(940),
    [anon_sym_DQUOTE2] = ACTIONS(942),
    [sym_escape_sequence] = ACTIONS(944),
  },
  [198] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(946),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [199] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(948),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [200] = {
    [aux_sym_str_literal_repeat1] = STATE(198),
    [aux_sym_str_literal_token1] = ACTIONS(950),
    [anon_sym_DQUOTE2] = ACTIONS(952),
    [sym_escape_sequence] = ACTIONS(954),
  },
  [201] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(956),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [202] = {
    [aux_sym_str_literal_repeat1] = STATE(199),
    [aux_sym_str_literal_token1] = ACTIONS(958),
    [anon_sym_DQUOTE2] = ACTIONS(960),
    [sym_escape_sequence] = ACTIONS(962),
  },
  [203] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(964),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [204] = {
    [aux_sym_str_literal_repeat1] = STATE(190),
    [aux_sym_str_literal_token1] = ACTIONS(966),
    [anon_sym_DQUOTE2] = ACTIONS(968),
    [sym_escape_sequence] = ACTIONS(970),
  },
  [205] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(972),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [206] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [anon_sym_DQUOTE2] = ACTIONS(974),
    [sym_escape_sequence] = ACTIONS(914),
  },
  [207] = {
    [aux_sym_str_literal_repeat1] = STATE(203),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [anon_sym_DQUOTE2] = ACTIONS(978),
    [sym_escape_sequence] = ACTIONS(980),
  },
  [208] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [aux_sym_str_literal_token1] = ACTIONS(982),
    [anon_sym_DQUOTE2] = ACTIONS(985),
    [sym_escape_sequence] = ACTIONS(987),
  },
  [209] = {
    [aux_sym_str_literal_repeat1] = STATE(191),
    [aux_sym_str_literal_token1] = ACTIONS(990),
    [anon_sym_DQUOTE2] = ACTIONS(992),
    [sym_escape_sequence] = ACTIONS(994),
  },
  [210] = {
    [aux_sym_str_literal_repeat1] = STATE(206),
    [aux_sym_str_literal_token1] = ACTIONS(996),
    [anon_sym_DQUOTE2] = ACTIONS(998),
    [sym_escape_sequence] = ACTIONS(1000),
  },
  [211] = {
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1002),
    [anon_sym_LBRACK] = ACTIONS(1002),
  },
  [212] = {
    [aux_sym__name_deftypes_repeat1] = STATE(212),
    [anon_sym_RPAREN2] = ACTIONS(1004),
    [sym_identifier] = ACTIONS(1006),
  },
  [213] = {
    [aux_sym__deftype2_repeat1] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(1009),
  },
  [214] = {
    [aux_sym_let_pairs_repeat1] = STATE(222),
    [anon_sym_RBRACK] = ACTIONS(1011),
    [sym_identifier] = ACTIONS(1013),
  },
  [215] = {
    [aux_sym__deftype2_repeat1] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(1015),
    [anon_sym_RPAREN] = ACTIONS(1018),
  },
  [216] = {
    [aux_sym_let_pairs_repeat1] = STATE(216),
    [anon_sym_RBRACK] = ACTIONS(1020),
    [sym_identifier] = ACTIONS(1022),
  },
  [217] = {
    [aux_sym__name_deftypes_repeat1] = STATE(219),
    [anon_sym_RPAREN2] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1027),
  },
  [218] = {
    [anon_sym_LPAREN] = ACTIONS(1029),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
  },
  [219] = {
    [aux_sym__name_deftypes_repeat1] = STATE(212),
    [anon_sym_RPAREN2] = ACTIONS(1031),
    [sym_identifier] = ACTIONS(1033),
  },
  [220] = {
    [sym_interface_fn] = STATE(286),
    [anon_sym_Fn] = ACTIONS(1035),
    [anon_sym_] = ACTIONS(1035),
  },
  [221] = {
    [anon_sym_LPAREN] = ACTIONS(1037),
    [anon_sym_RPAREN] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1037),
  },
  [222] = {
    [aux_sym_let_pairs_repeat1] = STATE(216),
    [anon_sym_RBRACK] = ACTIONS(1039),
    [sym_identifier] = ACTIONS(1013),
  },
  [223] = {
    [anon_sym_RBRACK2] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [sym_identifier] = ACTIONS(643),
  },
  [224] = {
    [anon_sym_RBRACK] = ACTIONS(639),
    [sym_identifier] = ACTIONS(639),
  },
  [225] = {
    [anon_sym_RBRACK] = ACTIONS(619),
    [sym_identifier] = ACTIONS(619),
  },
  [226] = {
    [anon_sym_RBRACK] = ACTIONS(635),
    [sym_identifier] = ACTIONS(635),
  },
  [227] = {
    [sym_parameters] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(1041),
  },
  [228] = {
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_identifier] = ACTIONS(643),
  },
  [229] = {
    [anon_sym_RBRACK] = ACTIONS(326),
    [sym_identifier] = ACTIONS(326),
  },
  [230] = {
    [anon_sym_RBRACK] = ACTIONS(647),
    [sym_identifier] = ACTIONS(647),
  },
  [231] = {
    [anon_sym_RBRACK] = ACTIONS(651),
    [sym_identifier] = ACTIONS(651),
  },
  [232] = {
    [anon_sym_RBRACK] = ACTIONS(587),
    [sym_identifier] = ACTIONS(587),
  },
  [233] = {
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_identifier] = ACTIONS(607),
  },
  [234] = {
    [sym_upper_identifier] = ACTIONS(1043),
    [sym_identifier] = ACTIONS(1045),
  },
  [235] = {
    [aux_sym_str_literal_token1] = ACTIONS(1047),
    [sym_escape_sequence] = ACTIONS(1049),
  },
  [236] = {
    [sym_fields] = STATE(284),
    [anon_sym_LBRACK] = ACTIONS(1051),
  },
  [237] = {
    [sym_parameters] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(1041),
  },
  [238] = {
    [sym_str_literal] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [239] = {
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_identifier] = ACTIONS(595),
  },
  [240] = {
    [sym_parameters] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(1041),
  },
  [241] = {
    [sym_let_pairs] = STATE(25),
    [anon_sym_LBRACK] = ACTIONS(1053),
  },
  [242] = {
    [anon_sym_RBRACK] = ACTIONS(591),
    [sym_identifier] = ACTIONS(591),
  },
  [243] = {
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_identifier] = ACTIONS(611),
  },
  [244] = {
    [anon_sym_RBRACK] = ACTIONS(615),
    [sym_identifier] = ACTIONS(615),
  },
  [245] = {
    [aux_sym_str_literal_token1] = ACTIONS(1055),
    [sym_escape_sequence] = ACTIONS(1057),
  },
  [246] = {
    [aux_sym_str_literal_token1] = ACTIONS(1059),
    [sym_escape_sequence] = ACTIONS(1061),
  },
  [247] = {
    [aux_sym_str_literal_token1] = ACTIONS(1063),
    [sym_escape_sequence] = ACTIONS(1065),
  },
  [248] = {
    [anon_sym_LPAREN] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1067),
  },
  [249] = {
    [sym_upper_identifier] = ACTIONS(1069),
    [sym_identifier] = ACTIONS(1071),
  },
  [250] = {
    [sym_str_literal] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(210),
  },
  [251] = {
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_identifier] = ACTIONS(631),
  },
  [252] = {
    [sym_typed_parameters] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(1073),
  },
  [253] = {
    [anon_sym_RBRACK] = ACTIONS(623),
    [sym_identifier] = ACTIONS(623),
  },
  [254] = {
    [aux_sym_str_literal_token1] = ACTIONS(1075),
    [sym_escape_sequence] = ACTIONS(1077),
  },
  [255] = {
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_identifier] = ACTIONS(627),
  },
  [256] = {
    [anon_sym_RBRACK] = ACTIONS(1079),
    [sym_identifier] = ACTIONS(1079),
  },
  [257] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(1041),
  },
  [258] = {
    [anon_sym_RPAREN] = ACTIONS(1081),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(1083),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(1085),
  },
  [261] = {
    [sym_identifier] = ACTIONS(1087),
  },
  [262] = {
    [sym_identifier] = ACTIONS(1089),
  },
  [263] = {
    [sym_identifier] = ACTIONS(1091),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(1093),
  },
  [265] = {
    [aux_sym_line_comment_token1] = ACTIONS(1095),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(1097),
  },
  [267] = {
    [anon_sym_RPAREN] = ACTIONS(1099),
  },
  [268] = {
    [sym_identifier] = ACTIONS(1101),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(1103),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(1105),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(1107),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(1109),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(1111),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(1113),
  },
  [275] = {
    [sym_identifier] = ACTIONS(1115),
  },
  [276] = {
    [sym_identifier] = ACTIONS(1117),
  },
  [277] = {
    [sym_identifier] = ACTIONS(1119),
  },
  [278] = {
    [sym_identifier] = ACTIONS(1121),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(1123),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(1125),
  },
  [281] = {
    [sym_identifier] = ACTIONS(1127),
  },
  [282] = {
    [anon_sym_RPAREN] = ACTIONS(1129),
  },
  [283] = {
    [anon_sym_RPAREN] = ACTIONS(1131),
  },
  [284] = {
    [anon_sym_RPAREN2] = ACTIONS(1133),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(1135),
  },
  [286] = {
    [anon_sym_RPAREN] = ACTIONS(1137),
  },
  [287] = {
    [sym_identifier] = ACTIONS(1139),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(1141),
  },
  [289] = {
    [anon_sym_RPAREN] = ACTIONS(1143),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(1145),
  },
  [291] = {
    [sym_identifier] = ACTIONS(1147),
  },
  [292] = {
    [sym_identifier] = ACTIONS(1149),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(1151),
  },
  [294] = {
    [anon_sym_RPAREN] = ACTIONS(1153),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(1155),
  },
  [296] = {
    [anon_sym_RPAREN2] = ACTIONS(1109),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(1157),
  },
  [298] = {
    [sym_identifier] = ACTIONS(1159),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(1161),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(1163),
  },
  [301] = {
    [anon_sym_RPAREN2] = ACTIONS(1155),
  },
  [302] = {
    [anon_sym_LPAREN] = ACTIONS(1165),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(1167),
  },
  [304] = {
    [sym_identifier] = ACTIONS(1169),
  },
  [305] = {
    [sym_identifier] = ACTIONS(1171),
  },
  [306] = {
    [sym_identifier] = ACTIONS(1173),
  },
  [307] = {
    [sym_upper_identifier] = ACTIONS(1175),
  },
  [308] = {
    [ts_builtin_sym_end] = ACTIONS(1177),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(265),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(48),
  [11] = {.count = 1, .reusable = false}, SHIFT(48),
  [13] = {.count = 1, .reusable = true}, SHIFT(35),
  [15] = {.count = 1, .reusable = false}, SHIFT(35),
  [17] = {.count = 1, .reusable = false}, SHIFT(307),
  [19] = {.count = 1, .reusable = false}, SHIFT(306),
  [21] = {.count = 1, .reusable = false}, SHIFT(304),
  [23] = {.count = 1, .reusable = false}, SHIFT(240),
  [25] = {.count = 1, .reusable = false}, SHIFT(292),
  [27] = {.count = 1, .reusable = false}, SHIFT(241),
  [29] = {.count = 1, .reusable = true}, SHIFT(107),
  [31] = {.count = 1, .reusable = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = false}, SHIFT(50),
  [35] = {.count = 1, .reusable = false}, SHIFT(52),
  [37] = {.count = 1, .reusable = false}, SHIFT(53),
  [39] = {.count = 1, .reusable = false}, SHIFT(54),
  [41] = {.count = 1, .reusable = false}, SHIFT(278),
  [43] = {.count = 1, .reusable = false}, SHIFT(95),
  [45] = {.count = 1, .reusable = false}, SHIFT(276),
  [47] = {.count = 1, .reusable = false}, SHIFT(275),
  [49] = {.count = 1, .reusable = false}, SHIFT(263),
  [51] = {.count = 1, .reusable = false}, SHIFT(262),
  [53] = {.count = 1, .reusable = false}, SHIFT(261),
  [55] = {.count = 1, .reusable = false}, SHIFT(185),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, SHIFT(32),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = true}, SHIFT(34),
  [65] = {.count = 1, .reusable = false}, SHIFT(269),
  [67] = {.count = 1, .reusable = false}, SHIFT(176),
  [69] = {.count = 1, .reusable = true}, SHIFT(207),
  [71] = {.count = 1, .reusable = true}, SHIFT(245),
  [73] = {.count = 1, .reusable = true}, SHIFT(197),
  [75] = {.count = 1, .reusable = true}, SHIFT(103),
  [77] = {.count = 1, .reusable = true}, SHIFT(287),
  [79] = {.count = 1, .reusable = true}, SHIFT(144),
  [81] = {.count = 1, .reusable = false}, SHIFT(168),
  [83] = {.count = 1, .reusable = false}, SHIFT(299),
  [85] = {.count = 1, .reusable = false}, SHIFT(293),
  [87] = {.count = 1, .reusable = false}, SHIFT(271),
  [89] = {.count = 1, .reusable = false}, SHIFT(273),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(2),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(305),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(124),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(29),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(44),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(51),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(55),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(118),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(105),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(209),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(254),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(210),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(121),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(268),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(118),
  [160] = {.count = 1, .reusable = true}, SHIFT(2),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [164] = {.count = 1, .reusable = false}, SHIFT(305),
  [166] = {.count = 1, .reusable = true}, SHIFT(124),
  [168] = {.count = 1, .reusable = true}, SHIFT(29),
  [170] = {.count = 1, .reusable = true}, SHIFT(44),
  [172] = {.count = 1, .reusable = true}, SHIFT(51),
  [174] = {.count = 1, .reusable = true}, SHIFT(55),
  [176] = {.count = 1, .reusable = false}, SHIFT(118),
  [178] = {.count = 1, .reusable = false}, SHIFT(105),
  [180] = {.count = 1, .reusable = true}, SHIFT(209),
  [182] = {.count = 1, .reusable = true}, SHIFT(254),
  [184] = {.count = 1, .reusable = true}, SHIFT(210),
  [186] = {.count = 1, .reusable = true}, SHIFT(121),
  [188] = {.count = 1, .reusable = true}, SHIFT(268),
  [190] = {.count = 1, .reusable = true}, SHIFT(118),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [194] = {.count = 1, .reusable = true}, SHIFT(6),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [198] = {.count = 1, .reusable = true}, SHIFT(143),
  [200] = {.count = 1, .reusable = true}, SHIFT(39),
  [202] = {.count = 1, .reusable = true}, SHIFT(38),
  [204] = {.count = 1, .reusable = true}, SHIFT(36),
  [206] = {.count = 1, .reusable = false}, SHIFT(152),
  [208] = {.count = 1, .reusable = false}, SHIFT(172),
  [210] = {.count = 1, .reusable = true}, SHIFT(204),
  [212] = {.count = 1, .reusable = true}, SHIFT(246),
  [214] = {.count = 1, .reusable = true}, SHIFT(192),
  [216] = {.count = 1, .reusable = true}, SHIFT(141),
  [218] = {.count = 1, .reusable = true}, SHIFT(152),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(6),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(143),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(39),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(38),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(33),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(36),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(13),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(172),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(204),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(246),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(192),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(141),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(287),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(13),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(6),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(143),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(39),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(38),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(33),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(36),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(152),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(172),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(204),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(246),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(192),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(141),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(287),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(152),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [310] = {.count = 1, .reusable = false}, SHIFT(13),
  [312] = {.count = 1, .reusable = true}, SHIFT(13),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [318] = {.count = 1, .reusable = false}, SHIFT(15),
  [320] = {.count = 1, .reusable = true}, SHIFT(15),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_line_comment, 2),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [332] = {.count = 1, .reusable = true}, SHIFT(37),
  [334] = {.count = 1, .reusable = false}, SHIFT(259),
  [336] = {.count = 1, .reusable = true}, SHIFT(259),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [340] = {.count = 1, .reusable = false}, SHIFT(290),
  [342] = {.count = 1, .reusable = true}, SHIFT(290),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [346] = {.count = 1, .reusable = false}, SHIFT(264),
  [348] = {.count = 1, .reusable = true}, SHIFT(264),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [352] = {.count = 1, .reusable = false}, SHIFT(280),
  [354] = {.count = 1, .reusable = true}, SHIFT(280),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [358] = {.count = 1, .reusable = false}, SHIFT(288),
  [360] = {.count = 1, .reusable = true}, SHIFT(288),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [364] = {.count = 1, .reusable = false}, SHIFT(289),
  [366] = {.count = 1, .reusable = true}, SHIFT(289),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [370] = {.count = 1, .reusable = false}, SHIFT(297),
  [372] = {.count = 1, .reusable = true}, SHIFT(297),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(101),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(72),
  [380] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(47),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(43),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(41),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(40),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [397] = {.count = 1, .reusable = false}, SHIFT(300),
  [399] = {.count = 1, .reusable = true}, SHIFT(300),
  [401] = {.count = 1, .reusable = false}, SHIFT(122),
  [403] = {.count = 1, .reusable = true}, SHIFT(122),
  [405] = {.count = 1, .reusable = false}, SHIFT(266),
  [407] = {.count = 1, .reusable = true}, SHIFT(266),
  [409] = {.count = 1, .reusable = false}, SHIFT(145),
  [411] = {.count = 1, .reusable = true}, SHIFT(145),
  [413] = {.count = 1, .reusable = false}, SHIFT(166),
  [415] = {.count = 1, .reusable = true}, SHIFT(166),
  [417] = {.count = 1, .reusable = false}, SHIFT(157),
  [419] = {.count = 1, .reusable = true}, SHIFT(157),
  [421] = {.count = 1, .reusable = false}, SHIFT(156),
  [423] = {.count = 1, .reusable = true}, SHIFT(156),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_operators, 1),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_operators, 1),
  [429] = {.count = 1, .reusable = true}, SHIFT(3),
  [431] = {.count = 1, .reusable = true}, SHIFT(109),
  [433] = {.count = 1, .reusable = true}, SHIFT(47),
  [435] = {.count = 1, .reusable = true}, SHIFT(43),
  [437] = {.count = 1, .reusable = true}, SHIFT(41),
  [439] = {.count = 1, .reusable = true}, SHIFT(40),
  [441] = {.count = 1, .reusable = false}, SHIFT(75),
  [443] = {.count = 1, .reusable = false}, SHIFT(76),
  [445] = {.count = 1, .reusable = true}, SHIFT(196),
  [447] = {.count = 1, .reusable = true}, SHIFT(235),
  [449] = {.count = 1, .reusable = true}, SHIFT(195),
  [451] = {.count = 1, .reusable = true}, SHIFT(135),
  [453] = {.count = 1, .reusable = true}, SHIFT(298),
  [455] = {.count = 1, .reusable = true}, SHIFT(75),
  [457] = {.count = 1, .reusable = false}, SHIFT(74),
  [459] = {.count = 1, .reusable = true}, SHIFT(74),
  [461] = {.count = 1, .reusable = false}, SHIFT(129),
  [463] = {.count = 1, .reusable = true}, SHIFT(129),
  [465] = {.count = 1, .reusable = false}, SHIFT(69),
  [467] = {.count = 1, .reusable = true}, SHIFT(69),
  [469] = {.count = 1, .reusable = false}, SHIFT(115),
  [471] = {.count = 1, .reusable = true}, SHIFT(115),
  [473] = {.count = 1, .reusable = true}, SHIFT(5),
  [475] = {.count = 1, .reusable = true}, SHIFT(117),
  [477] = {.count = 1, .reusable = true}, SHIFT(57),
  [479] = {.count = 1, .reusable = true}, SHIFT(61),
  [481] = {.count = 1, .reusable = true}, SHIFT(59),
  [483] = {.count = 1, .reusable = true}, SHIFT(49),
  [485] = {.count = 1, .reusable = false}, SHIFT(256),
  [487] = {.count = 1, .reusable = false}, SHIFT(225),
  [489] = {.count = 1, .reusable = true}, SHIFT(202),
  [491] = {.count = 1, .reusable = true}, SHIFT(247),
  [493] = {.count = 1, .reusable = true}, SHIFT(200),
  [495] = {.count = 1, .reusable = true}, SHIFT(114),
  [497] = {.count = 1, .reusable = true}, SHIFT(291),
  [499] = {.count = 1, .reusable = true}, SHIFT(256),
  [501] = {.count = 1, .reusable = true}, SHIFT(101),
  [503] = {.count = 1, .reusable = false}, SHIFT(72),
  [505] = {.count = 1, .reusable = true}, SHIFT(85),
  [507] = {.count = 1, .reusable = false}, SHIFT(71),
  [509] = {.count = 1, .reusable = false}, SHIFT(70),
  [511] = {.count = 1, .reusable = true}, SHIFT(70),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_other_str, 1),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_other_str, 1),
  [517] = {.count = 1, .reusable = false}, SHIFT(244),
  [519] = {.count = 1, .reusable = true}, SHIFT(244),
  [521] = {.count = 1, .reusable = false}, SHIFT(56),
  [523] = {.count = 1, .reusable = true}, SHIFT(56),
  [525] = {.count = 1, .reusable = false}, SHIFT(111),
  [527] = {.count = 1, .reusable = true}, SHIFT(111),
  [529] = {.count = 1, .reusable = false}, SHIFT(24),
  [531] = {.count = 1, .reusable = true}, SHIFT(24),
  [533] = {.count = 1, .reusable = false}, SHIFT(303),
  [535] = {.count = 1, .reusable = true}, SHIFT(303),
  [537] = {.count = 1, .reusable = false}, SHIFT(283),
  [539] = {.count = 1, .reusable = true}, SHIFT(283),
  [541] = {.count = 1, .reusable = false}, SHIFT(108),
  [543] = {.count = 1, .reusable = true}, SHIFT(108),
  [545] = {.count = 1, .reusable = false}, SHIFT(30),
  [547] = {.count = 1, .reusable = true}, SHIFT(30),
  [549] = {.count = 1, .reusable = false}, SHIFT(239),
  [551] = {.count = 1, .reusable = true}, SHIFT(239),
  [553] = {.count = 1, .reusable = true}, SHIFT(86),
  [555] = {.count = 1, .reusable = false}, SHIFT(243),
  [557] = {.count = 1, .reusable = true}, SHIFT(243),
  [559] = {.count = 1, .reusable = false}, SHIFT(285),
  [561] = {.count = 1, .reusable = true}, SHIFT(285),
  [563] = {.count = 1, .reusable = false}, SHIFT(242),
  [565] = {.count = 1, .reusable = true}, SHIFT(242),
  [567] = {.count = 1, .reusable = false}, SHIFT(258),
  [569] = {.count = 1, .reusable = true}, SHIFT(258),
  [571] = {.count = 1, .reusable = true}, SHIFT(87),
  [573] = {.count = 1, .reusable = false}, SHIFT(155),
  [575] = {.count = 1, .reusable = false}, SHIFT(158),
  [577] = {.count = 1, .reusable = true}, SHIFT(99),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [645] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [663] = {.count = 1, .reusable = true}, SHIFT(146),
  [665] = {.count = 1, .reusable = false}, SHIFT(116),
  [667] = {.count = 1, .reusable = false}, SHIFT(252),
  [669] = {.count = 1, .reusable = false}, SHIFT(96),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(101),
  [674] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(94),
  [677] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(93),
  [682] = {.count = 1, .reusable = false}, SHIFT(94),
  [684] = {.count = 1, .reusable = true}, SHIFT(295),
  [686] = {.count = 1, .reusable = false}, SHIFT(93),
  [688] = {.count = 1, .reusable = true}, SHIFT(296),
  [690] = {.count = 1, .reusable = true}, SHIFT(272),
  [692] = {.count = 1, .reusable = true}, SHIFT(301),
  [694] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [696] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [698] = {.count = 1, .reusable = true}, SHIFT(97),
  [700] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 41),
  [702] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 41),
  [704] = {.count = 1, .reusable = true}, SHIFT(98),
  [706] = {.count = 1, .reusable = true}, SHIFT(161),
  [708] = {.count = 1, .reusable = false}, SHIFT(100),
  [710] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [712] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 41),
  [714] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 41),
  [716] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [718] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(116),
  [721] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(100),
  [724] = {.count = 1, .reusable = true}, SHIFT(65),
  [726] = {.count = 1, .reusable = false}, SHIFT(102),
  [728] = {.count = 1, .reusable = true}, SHIFT(66),
  [730] = {.count = 1, .reusable = false}, SHIFT(173),
  [732] = {.count = 1, .reusable = true}, SHIFT(182),
  [734] = {.count = 1, .reusable = true}, SHIFT(178),
  [736] = {.count = 1, .reusable = false}, SHIFT(112),
  [738] = {.count = 1, .reusable = true}, SHIFT(183),
  [740] = {.count = 1, .reusable = false}, SHIFT(104),
  [742] = {.count = 1, .reusable = true}, SHIFT(77),
  [744] = {.count = 1, .reusable = false}, SHIFT(132),
  [746] = {.count = 1, .reusable = true}, SHIFT(233),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(107),
  [751] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [753] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(112),
  [756] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(176),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(207),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(245),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(197),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(103),
  [771] = {.count = 1, .reusable = true}, SHIFT(230),
  [773] = {.count = 1, .reusable = true}, SHIFT(224),
  [775] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [777] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [779] = {.count = 1, .reusable = true}, SHIFT(253),
  [781] = {.count = 1, .reusable = false}, SHIFT(113),
  [783] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [785] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [787] = {.count = 1, .reusable = true}, SHIFT(139),
  [789] = {.count = 1, .reusable = true}, SHIFT(136),
  [791] = {.count = 1, .reusable = true}, SHIFT(127),
  [793] = {.count = 1, .reusable = true}, SHIFT(106),
  [795] = {.count = 1, .reusable = false}, SHIFT(120),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(107),
  [800] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(173),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(176),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(207),
  [809] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(245),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(197),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(103),
  [818] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [820] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [822] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [824] = {.count = 1, .reusable = true}, SHIFT(83),
  [826] = {.count = 1, .reusable = true}, SHIFT(174),
  [828] = {.count = 1, .reusable = true}, SHIFT(170),
  [830] = {.count = 1, .reusable = true}, SHIFT(81),
  [832] = {.count = 1, .reusable = true}, SHIFT(149),
  [834] = {.count = 1, .reusable = true}, SHIFT(154),
  [836] = {.count = 1, .reusable = true}, SHIFT(73),
  [838] = {.count = 1, .reusable = true}, SHIFT(171),
  [840] = {.count = 1, .reusable = false}, SHIFT(140),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [844] = {.count = 1, .reusable = true}, SHIFT(234),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [852] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [854] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym_doc, 3, .production_id = 15),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [876] = {.count = 1, .reusable = false}, SHIFT(184),
  [878] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [880] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [882] = {.count = 1, .reusable = true}, SHIFT(281),
  [884] = {.count = 1, .reusable = true}, SHIFT(221),
  [886] = {.count = 1, .reusable = true}, SHIFT(249),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [890] = {.count = 1, .reusable = true}, SHIFT(89),
  [892] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [894] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(277),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(187),
  [900] = {.count = 1, .reusable = true}, SHIFT(169),
  [902] = {.count = 1, .reusable = true}, SHIFT(277),
  [904] = {.count = 1, .reusable = true}, SHIFT(187),
  [906] = {.count = 1, .reusable = true}, SHIFT(162),
  [908] = {.count = 1, .reusable = true}, SHIFT(188),
  [910] = {.count = 1, .reusable = false}, SHIFT(208),
  [912] = {.count = 1, .reusable = true}, SHIFT(148),
  [914] = {.count = 1, .reusable = true}, SHIFT(208),
  [916] = {.count = 1, .reusable = true}, SHIFT(137),
  [918] = {.count = 1, .reusable = false}, SHIFT(205),
  [920] = {.count = 1, .reusable = true}, SHIFT(163),
  [922] = {.count = 1, .reusable = true}, SHIFT(205),
  [924] = {.count = 1, .reusable = true}, SHIFT(68),
  [926] = {.count = 1, .reusable = true}, SHIFT(84),
  [928] = {.count = 1, .reusable = false}, SHIFT(193),
  [930] = {.count = 1, .reusable = true}, SHIFT(80),
  [932] = {.count = 1, .reusable = true}, SHIFT(193),
  [934] = {.count = 1, .reusable = false}, SHIFT(194),
  [936] = {.count = 1, .reusable = true}, SHIFT(78),
  [938] = {.count = 1, .reusable = true}, SHIFT(194),
  [940] = {.count = 1, .reusable = false}, SHIFT(201),
  [942] = {.count = 1, .reusable = true}, SHIFT(179),
  [944] = {.count = 1, .reusable = true}, SHIFT(201),
  [946] = {.count = 1, .reusable = true}, SHIFT(232),
  [948] = {.count = 1, .reusable = true}, SHIFT(231),
  [950] = {.count = 1, .reusable = false}, SHIFT(198),
  [952] = {.count = 1, .reusable = true}, SHIFT(226),
  [954] = {.count = 1, .reusable = true}, SHIFT(198),
  [956] = {.count = 1, .reusable = true}, SHIFT(175),
  [958] = {.count = 1, .reusable = false}, SHIFT(199),
  [960] = {.count = 1, .reusable = true}, SHIFT(255),
  [962] = {.count = 1, .reusable = true}, SHIFT(199),
  [964] = {.count = 1, .reusable = true}, SHIFT(177),
  [966] = {.count = 1, .reusable = false}, SHIFT(190),
  [968] = {.count = 1, .reusable = true}, SHIFT(167),
  [970] = {.count = 1, .reusable = true}, SHIFT(190),
  [972] = {.count = 1, .reusable = true}, SHIFT(153),
  [974] = {.count = 1, .reusable = true}, SHIFT(138),
  [976] = {.count = 1, .reusable = false}, SHIFT(203),
  [978] = {.count = 1, .reusable = true}, SHIFT(180),
  [980] = {.count = 1, .reusable = true}, SHIFT(203),
  [982] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(208),
  [985] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(208),
  [990] = {.count = 1, .reusable = false}, SHIFT(191),
  [992] = {.count = 1, .reusable = true}, SHIFT(123),
  [994] = {.count = 1, .reusable = true}, SHIFT(191),
  [996] = {.count = 1, .reusable = false}, SHIFT(206),
  [998] = {.count = 1, .reusable = true}, SHIFT(126),
  [1000] = {.count = 1, .reusable = true}, SHIFT(206),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 44),
  [1004] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [1006] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(212),
  [1009] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [1011] = {.count = 1, .reusable = true}, SHIFT(147),
  [1013] = {.count = 1, .reusable = true}, SHIFT(45),
  [1015] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 42), SHIFT_REPEAT(249),
  [1018] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 42),
  [1020] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [1022] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(45),
  [1025] = {.count = 1, .reusable = true}, SHIFT(218),
  [1027] = {.count = 1, .reusable = true}, SHIFT(219),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [1031] = {.count = 1, .reusable = true}, SHIFT(211),
  [1033] = {.count = 1, .reusable = true}, SHIFT(212),
  [1035] = {.count = 1, .reusable = true}, SHIFT(252),
  [1037] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [1039] = {.count = 1, .reusable = true}, SHIFT(164),
  [1041] = {.count = 1, .reusable = true}, SHIFT(189),
  [1043] = {.count = 1, .reusable = true}, SHIFT(159),
  [1045] = {.count = 1, .reusable = false}, SHIFT(159),
  [1047] = {.count = 1, .reusable = false}, SHIFT(79),
  [1049] = {.count = 1, .reusable = true}, SHIFT(79),
  [1051] = {.count = 1, .reusable = true}, SHIFT(92),
  [1053] = {.count = 1, .reusable = true}, SHIFT(214),
  [1055] = {.count = 1, .reusable = false}, SHIFT(181),
  [1057] = {.count = 1, .reusable = true}, SHIFT(181),
  [1059] = {.count = 1, .reusable = false}, SHIFT(165),
  [1061] = {.count = 1, .reusable = true}, SHIFT(165),
  [1063] = {.count = 1, .reusable = false}, SHIFT(251),
  [1065] = {.count = 1, .reusable = true}, SHIFT(251),
  [1067] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 46),
  [1069] = {.count = 1, .reusable = true}, SHIFT(236),
  [1071] = {.count = 1, .reusable = false}, SHIFT(236),
  [1073] = {.count = 1, .reusable = true}, SHIFT(58),
  [1075] = {.count = 1, .reusable = false}, SHIFT(125),
  [1077] = {.count = 1, .reusable = true}, SHIFT(125),
  [1079] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [1081] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [1085] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 43),
  [1087] = {.count = 1, .reusable = true}, SHIFT(11),
  [1089] = {.count = 1, .reusable = true}, SHIFT(227),
  [1091] = {.count = 1, .reusable = true}, SHIFT(257),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [1095] = {.count = 1, .reusable = true}, SHIFT(18),
  [1097] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [1099] = {.count = 1, .reusable = true}, SHIFT(260),
  [1101] = {.count = 1, .reusable = true}, SHIFT(130),
  [1103] = {.count = 1, .reusable = true}, SHIFT(131),
  [1105] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [1107] = {.count = 1, .reusable = true}, SHIFT(229),
  [1109] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [1111] = {.count = 1, .reusable = true}, SHIFT(150),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 45),
  [1115] = {.count = 1, .reusable = true}, SHIFT(302),
  [1117] = {.count = 1, .reusable = true}, SHIFT(63),
  [1119] = {.count = 1, .reusable = true}, SHIFT(223),
  [1121] = {.count = 1, .reusable = true}, SHIFT(60),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [1125] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 38),
  [1127] = {.count = 1, .reusable = true}, SHIFT(217),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 43),
  [1131] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [1133] = {.count = 1, .reusable = true}, SHIFT(248),
  [1135] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [1137] = {.count = 1, .reusable = true}, SHIFT(282),
  [1139] = {.count = 1, .reusable = true}, SHIFT(151),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [1147] = {.count = 1, .reusable = true}, SHIFT(228),
  [1149] = {.count = 1, .reusable = true}, SHIFT(237),
  [1151] = {.count = 1, .reusable = true}, SHIFT(19),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [1159] = {.count = 1, .reusable = true}, SHIFT(82),
  [1161] = {.count = 1, .reusable = true}, SHIFT(67),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [1165] = {.count = 1, .reusable = true}, SHIFT(220),
  [1167] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [1169] = {.count = 1, .reusable = true}, SHIFT(28),
  [1171] = {.count = 1, .reusable = true}, SHIFT(250),
  [1173] = {.count = 1, .reusable = true}, SHIFT(238),
  [1175] = {.count = 1, .reusable = true}, SHIFT(294),
  [1177] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
