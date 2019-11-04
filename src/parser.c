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
#define STATE_COUNT 313
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
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
  anon_sym_match = 20,
  anon_sym_register = 21,
  anon_sym_Bool = 22,
  anon_sym_Char = 23,
  anon_sym_Int = 24,
  anon_sym_Long = 25,
  anon_sym_Float = 26,
  anon_sym_Double = 27,
  anon_sym_Vector2 = 28,
  anon_sym_Vector3 = 29,
  anon_sym_VectorN = 30,
  anon_sym_String = 31,
  anon_sym_Pattern = 32,
  anon_sym_Array = 33,
  anon_sym_Map = 34,
  anon_sym_Maybe = 35,
  anon_sym_Result = 36,
  anon_sym_Id = 37,
  anon_sym_Ptr = 38,
  anon_sym_DOT = 39,
  anon_sym_definterface = 40,
  anon_sym_defmacro = 41,
  anon_sym_defndynamic = 42,
  anon_sym_defmodule = 43,
  anon_sym_deftype = 44,
  anon_sym_RPAREN2 = 45,
  anon_sym_COMMA = 46,
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
  anon_sym_BSLASH = 59,
  anon_sym_POUND_DQUOTE = 60,
  sym_escape_sequence = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_COLON = 64,
  sym_hidden = 65,
  anon_sym_let_DASHdo = 66,
  anon_sym_while_DASHdo = 67,
  anon_sym_defn_DASHdo = 68,
  anon_sym_break = 69,
  anon_sym_for = 70,
  anon_sym_when = 71,
  anon_sym_cond = 72,
  anon_sym_unless = 73,
  anon_sym_case = 74,
  anon_sym_foreach = 75,
  anon_sym_defdynamic = 76,
  anon_sym_load = 77,
  anon_sym_PLUS = 78,
  anon_sym_DASH = 79,
  anon_sym_SLASH = 80,
  anon_sym_STAR = 81,
  anon_sym_PERCENT = 82,
  anon_sym_LT = 83,
  anon_sym_GT = 84,
  anon_sym_EQ = 85,
  anon_sym_LT_EQ = 86,
  anon_sym_GT_EQ = 87,
  anon_sym_SLASH_EQ = 88,
  anon_sym_and = 89,
  anon_sym_or = 90,
  anon_sym_not = 91,
  anon_sym_and_STAR = 92,
  anon_sym_or_STAR = 93,
  sym_upper_identifier = 94,
  sym_identifier = 95,
  sym_source_file = 96,
  sym_line_comment = 97,
  sym__s_expr = 98,
  sym__expr = 99,
  sym__anything = 100,
  sym__s_forms = 101,
  sym__defs = 102,
  sym__literals = 103,
  sym__short_helper = 104,
  sym_use = 105,
  sym_doc = 106,
  sym_def = 107,
  sym_fn = 108,
  sym_defn = 109,
  sym_let = 110,
  sym_let_pairs = 111,
  sym_do = 112,
  sym_if = 113,
  sym_while = 114,
  sym_ref = 115,
  sym_address = 116,
  sym_set = 117,
  sym_the = 118,
  sym_match = 119,
  sym_match_case = 120,
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
  aux_sym_match_repeat1 = 156,
  aux_sym_complex_type_repeat1 = 157,
  aux_sym_call_expression_repeat1 = 158,
  aux_sym_defmodule_repeat1 = 159,
  aux_sym__deftype2_repeat1 = 160,
  aux_sym__name_deftypes_repeat1 = 161,
  aux_sym_fields_repeat1 = 162,
  aux_sym_parameters_repeat1 = 163,
  aux_sym_typed_parameters_repeat1 = 164,
  aux_sym_str_literal_repeat1 = 165,
  aux_sym_array_expression_repeat1 = 166,
  aux_sym_map_expression_repeat1 = 167,
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
  [anon_sym_match] = "match",
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
  [sym_match] = "match",
  [sym_match_case] = "match_case",
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
  [aux_sym_match_repeat1] = "match_repeat1",
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
  [anon_sym_match] = {
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
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_match_case] = {
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
  [aux_sym_match_repeat1] = {
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
  field_case = 4,
  field_condition = 5,
  field_definition = 6,
  field_doc_str = 7,
  field_else = 8,
  field_expr = 9,
  field_fields = 10,
  field_fn = 11,
  field_generic_type = 12,
  field_key = 13,
  field_module = 14,
  field_name = 15,
  field_pairs = 16,
  field_parameters = 17,
  field_return_type = 18,
  field_then = 19,
  field_type = 20,
  field_typed_params = 21,
  field_value = 22,
  field_value_name = 23,
  field_var = 24,
  field_variable = 25,
  field_variant = 26,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_case] = "case",
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
  [38] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 3},
  [40] = {.index = 76, .length = 1},
  [41] = {.index = 77, .length = 2},
  [43] = {.index = 79, .length = 4},
  [44] = {.index = 83, .length = 2},
  [45] = {.index = 85, .length = 2},
  [46] = {.index = 87, .length = 2},
  [47] = {.index = 89, .length = 2},
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
    {field_body, 1},
    {field_case, 0},
  [73] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [76] =
    {field_definition, 1},
  [77] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [79] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [83] =
    {field_fn, 3},
    {field_name, 1},
  [85] =
    {field_generic_type, 2},
    {field_name, 1},
  [87] =
    {field_return_type, 2},
    {field_typed_params, 1},
  [89] =
    {field_fields, 2},
    {field_variant, 1},
};

static TSSymbol ts_alias_sequences[48][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [0] = sym_identifier,
  },
  [42] = {
    [0] = sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(328);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '>') ADVANCE(330);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'B') ADVANCE(136);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'P') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(59);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == 955) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(328);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '>') ADVANCE(330);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'B') ADVANCE(136);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'P') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(59);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == 955) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '%') ADVANCE(328);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '>') ADVANCE(330);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(340);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(225);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == 'w') ADVANCE(392);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(340);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(340);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(340);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == 'w') ADVANCE(392);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(340);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '{') ADVANCE(307);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(305);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'D') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(416);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == 'P') ADVANCE(351);
      if (lookahead == 'R') ADVANCE(383);
      if (lookahead == 'S') ADVANCE(450);
      if (lookahead == 'V') ADVANCE(384);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'D') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(416);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == 'P') ADVANCE(351);
      if (lookahead == 'R') ADVANCE(383);
      if (lookahead == 'S') ADVANCE(450);
      if (lookahead == 'V') ADVANCE(384);
      if (lookahead == 955) ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(245);
      if (lookahead == '3') ADVANCE(247);
      if (lookahead == 'N') ADVANCE(249);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(251);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 187:
      if (lookahead == '{') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 188:
      if (lookahead == '}') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(340);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 202:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 204:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 208:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 212:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 218:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 220:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 222:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 224:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      END_STATE();
    case 226:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 228:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 232:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 234:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 236:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 238:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 240:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 242:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 244:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 246:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 248:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_VectorN);
      END_STATE();
    case 250:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 252:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Pattern);
      END_STATE();
    case 254:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 256:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 258:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Maybe);
      END_STATE();
    case 260:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 262:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 264:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Ptr);
      END_STATE();
    case 266:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_definterface);
      END_STATE();
    case 269:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_defmacro);
      END_STATE();
    case 271:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      END_STATE();
    case 273:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 275:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_deftype);
      END_STATE();
    case 277:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 281:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 283:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 291:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 296:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 298:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(300);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_hidden);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_let_DASHdo);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_while_DASHdo);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_defn_DASHdo);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_cond);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_defdynamic);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '*') ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '*') ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_and_STAR);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_or_STAR);
      END_STATE();
    case 340:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(226);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(246);
      if (lookahead == '3') ADVANCE(248);
      if (lookahead == 'N') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 344:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 345:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 346:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(453);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 353:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 355:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 359:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 362:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 366:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 379:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 381:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 382:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 383:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 385:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(222);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 392:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(421);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(421);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 412:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 420:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 'y') ADVANCE(354);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 450:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 451:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 456:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 457:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 458:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(411);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
      END_STATE();
    case 462:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(462);
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
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 2},
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
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
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
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 16},
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
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
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
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 15},
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
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 189},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 189},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 197},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 15},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 15},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 15},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 15},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 15},
  [294] = {.lex_state = 15},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 15},
  [305] = {.lex_state = 15},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 15},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 0},
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
    [anon_sym_match] = ACTIONS(1),
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
    [sym_source_file] = STATE(312),
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
    [sym_line_comment] = STATE(274),
    [sym__s_expr] = STATE(274),
    [sym__anything] = STATE(274),
    [sym__s_forms] = STATE(274),
    [sym__defs] = STATE(274),
    [sym__literals] = STATE(274),
    [sym__short_helper] = STATE(274),
    [sym_use] = STATE(274),
    [sym_doc] = STATE(274),
    [sym_def] = STATE(274),
    [sym_fn] = STATE(274),
    [sym_defn] = STATE(274),
    [sym_let] = STATE(274),
    [sym_do] = STATE(274),
    [sym_if] = STATE(274),
    [sym_while] = STATE(274),
    [sym_ref] = STATE(274),
    [sym_address] = STATE(274),
    [sym_set] = STATE(274),
    [sym_the] = STATE(274),
    [sym_match] = STATE(274),
    [sym_register] = STATE(274),
    [sym_call_expression] = STATE(274),
    [sym__call_name] = STATE(19),
    [sym_call_no_module] = STATE(19),
    [sym_call_with_module] = STATE(19),
    [sym_definterface] = STATE(274),
    [sym_defmacro] = STATE(274),
    [sym_defndynamic] = STATE(274),
    [sym_defmodule] = STATE(274),
    [sym_deftype] = STATE(274),
    [sym_short_ref] = STATE(274),
    [sym_short_copy] = STATE(274),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(274),
    [sym_bool_literal] = STATE(274),
    [sym_str_literal] = STATE(274),
    [sym_char_literal] = STATE(274),
    [sym_pattern_literal] = STATE(274),
    [sym_array_expression] = STATE(274),
    [sym_map_expression] = STATE(274),
    [sym_symbol] = STATE(274),
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
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(67),
    [sym_float_literal] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [3] = {
    [sym_line_comment] = STATE(303),
    [sym__s_expr] = STATE(303),
    [sym__anything] = STATE(303),
    [sym__s_forms] = STATE(303),
    [sym__defs] = STATE(303),
    [sym__literals] = STATE(303),
    [sym__short_helper] = STATE(303),
    [sym_use] = STATE(303),
    [sym_doc] = STATE(303),
    [sym_def] = STATE(303),
    [sym_fn] = STATE(303),
    [sym_defn] = STATE(303),
    [sym_let] = STATE(303),
    [sym_do] = STATE(303),
    [sym_if] = STATE(303),
    [sym_while] = STATE(303),
    [sym_ref] = STATE(303),
    [sym_address] = STATE(303),
    [sym_set] = STATE(303),
    [sym_the] = STATE(303),
    [sym_match] = STATE(303),
    [sym_register] = STATE(303),
    [sym_call_expression] = STATE(303),
    [sym__call_name] = STATE(19),
    [sym_call_no_module] = STATE(19),
    [sym_call_with_module] = STATE(19),
    [sym_definterface] = STATE(303),
    [sym_defmacro] = STATE(303),
    [sym_defndynamic] = STATE(303),
    [sym_defmodule] = STATE(303),
    [sym_deftype] = STATE(303),
    [sym_short_ref] = STATE(303),
    [sym_short_copy] = STATE(303),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(303),
    [sym_bool_literal] = STATE(303),
    [sym_str_literal] = STATE(303),
    [sym_char_literal] = STATE(303),
    [sym_pattern_literal] = STATE(303),
    [sym_array_expression] = STATE(303),
    [sym_map_expression] = STATE(303),
    [sym_symbol] = STATE(303),
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
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(85),
    [sym_float_literal] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [4] = {
    [sym_line_comment] = STATE(278),
    [sym__s_expr] = STATE(278),
    [sym__anything] = STATE(278),
    [sym__s_forms] = STATE(278),
    [sym__defs] = STATE(278),
    [sym__literals] = STATE(278),
    [sym__short_helper] = STATE(278),
    [sym_use] = STATE(278),
    [sym_doc] = STATE(278),
    [sym_def] = STATE(278),
    [sym_fn] = STATE(278),
    [sym_defn] = STATE(278),
    [sym_let] = STATE(278),
    [sym_do] = STATE(278),
    [sym_if] = STATE(278),
    [sym_while] = STATE(278),
    [sym_ref] = STATE(278),
    [sym_address] = STATE(278),
    [sym_set] = STATE(278),
    [sym_the] = STATE(278),
    [sym_match] = STATE(278),
    [sym_register] = STATE(278),
    [sym_call_expression] = STATE(278),
    [sym__call_name] = STATE(19),
    [sym_call_no_module] = STATE(19),
    [sym_call_with_module] = STATE(19),
    [sym_definterface] = STATE(278),
    [sym_defmacro] = STATE(278),
    [sym_defndynamic] = STATE(278),
    [sym_defmodule] = STATE(278),
    [sym_deftype] = STATE(278),
    [sym_short_ref] = STATE(278),
    [sym_short_copy] = STATE(278),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(278),
    [sym_bool_literal] = STATE(278),
    [sym_str_literal] = STATE(278),
    [sym_char_literal] = STATE(278),
    [sym_pattern_literal] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_map_expression] = STATE(278),
    [sym_symbol] = STATE(278),
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
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(87),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [5] = {
    [sym_line_comment] = STATE(270),
    [sym__s_expr] = STATE(270),
    [sym__anything] = STATE(270),
    [sym__s_forms] = STATE(270),
    [sym__defs] = STATE(270),
    [sym__literals] = STATE(270),
    [sym__short_helper] = STATE(270),
    [sym_use] = STATE(270),
    [sym_doc] = STATE(270),
    [sym_def] = STATE(270),
    [sym_fn] = STATE(270),
    [sym_defn] = STATE(270),
    [sym_let] = STATE(270),
    [sym_do] = STATE(270),
    [sym_if] = STATE(270),
    [sym_while] = STATE(270),
    [sym_ref] = STATE(270),
    [sym_address] = STATE(270),
    [sym_set] = STATE(270),
    [sym_the] = STATE(270),
    [sym_match] = STATE(270),
    [sym_register] = STATE(270),
    [sym_call_expression] = STATE(270),
    [sym__call_name] = STATE(19),
    [sym_call_no_module] = STATE(19),
    [sym_call_with_module] = STATE(19),
    [sym_definterface] = STATE(270),
    [sym_defmacro] = STATE(270),
    [sym_defndynamic] = STATE(270),
    [sym_defmodule] = STATE(270),
    [sym_deftype] = STATE(270),
    [sym_short_ref] = STATE(270),
    [sym_short_copy] = STATE(270),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(270),
    [sym_bool_literal] = STATE(270),
    [sym_str_literal] = STATE(270),
    [sym_char_literal] = STATE(270),
    [sym_pattern_literal] = STATE(270),
    [sym_array_expression] = STATE(270),
    [sym_map_expression] = STATE(270),
    [sym_symbol] = STATE(270),
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
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(89),
    [sym_float_literal] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [6] = {
    [sym_line_comment] = STATE(277),
    [sym__s_expr] = STATE(277),
    [sym__anything] = STATE(277),
    [sym__s_forms] = STATE(277),
    [sym__defs] = STATE(277),
    [sym__literals] = STATE(277),
    [sym__short_helper] = STATE(277),
    [sym_use] = STATE(277),
    [sym_doc] = STATE(277),
    [sym_def] = STATE(277),
    [sym_fn] = STATE(277),
    [sym_defn] = STATE(277),
    [sym_let] = STATE(277),
    [sym_do] = STATE(277),
    [sym_if] = STATE(277),
    [sym_while] = STATE(277),
    [sym_ref] = STATE(277),
    [sym_address] = STATE(277),
    [sym_set] = STATE(277),
    [sym_the] = STATE(277),
    [sym_match] = STATE(277),
    [sym_register] = STATE(277),
    [sym_call_expression] = STATE(277),
    [sym__call_name] = STATE(19),
    [sym_call_no_module] = STATE(19),
    [sym_call_with_module] = STATE(19),
    [sym_definterface] = STATE(277),
    [sym_defmacro] = STATE(277),
    [sym_defndynamic] = STATE(277),
    [sym_defmodule] = STATE(277),
    [sym_deftype] = STATE(277),
    [sym_short_ref] = STATE(277),
    [sym_short_copy] = STATE(277),
    [sym_short_fn_ref] = STATE(19),
    [sym_short_quote] = STATE(277),
    [sym_bool_literal] = STATE(277),
    [sym_str_literal] = STATE(277),
    [sym_char_literal] = STATE(277),
    [sym_pattern_literal] = STATE(277),
    [sym_array_expression] = STATE(277),
    [sym_map_expression] = STATE(277),
    [sym_symbol] = STATE(277),
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
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_register] = ACTIONS(47),
    [anon_sym_definterface] = ACTIONS(49),
    [anon_sym_defmacro] = ACTIONS(51),
    [anon_sym_defndynamic] = ACTIONS(53),
    [anon_sym_defmodule] = ACTIONS(55),
    [anon_sym_deftype] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(91),
    [sym_float_literal] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [7] = {
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_doc] = STATE(58),
    [sym_short_ref] = STATE(119),
    [sym_short_copy] = STATE(119),
    [sym_short_fn_ref] = STATE(119),
    [sym_short_quote] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [sym_symbol] = STATE(119),
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_doc] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(109),
    [sym_float_literal] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(123),
    [sym_identifier] = ACTIONS(109),
  },
  [8] = {
    [sym_line_comment] = STATE(11),
    [sym__s_expr] = STATE(11),
    [sym_other_str] = STATE(11),
    [sym_operators] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(125),
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
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_doc] = STATE(58),
    [sym_short_ref] = STATE(119),
    [sym_short_copy] = STATE(119),
    [sym_short_fn_ref] = STATE(119),
    [sym_short_quote] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [sym_symbol] = STATE(119),
    [aux_sym_defmodule_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_doc] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(109),
    [sym_float_literal] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(123),
    [sym_identifier] = ACTIONS(109),
  },
  [10] = {
    [sym__s_expr] = STATE(119),
    [sym__expr] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__short_helper] = STATE(119),
    [sym_doc] = STATE(58),
    [sym_short_ref] = STATE(119),
    [sym_short_copy] = STATE(119),
    [sym_short_fn_ref] = STATE(119),
    [sym_short_quote] = STATE(119),
    [sym_bool_literal] = STATE(119),
    [sym_str_literal] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_pattern_literal] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_map_expression] = STATE(119),
    [sym_symbol] = STATE(119),
    [aux_sym_defmodule_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_doc] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_integer_literal] = ACTIONS(152),
    [sym_float_literal] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(161),
    [anon_sym_POUND_DQUOTE] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(170),
    [sym_upper_identifier] = ACTIONS(173),
    [sym_identifier] = ACTIONS(152),
  },
  [11] = {
    [sym_line_comment] = STATE(11),
    [sym__s_expr] = STATE(11),
    [sym_other_str] = STATE(11),
    [sym_operators] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_let_DASHdo] = ACTIONS(184),
    [anon_sym_while_DASHdo] = ACTIONS(184),
    [anon_sym_defn_DASHdo] = ACTIONS(184),
    [anon_sym_break] = ACTIONS(184),
    [anon_sym_for] = ACTIONS(187),
    [anon_sym_when] = ACTIONS(184),
    [anon_sym_cond] = ACTIONS(184),
    [anon_sym_unless] = ACTIONS(184),
    [anon_sym_case] = ACTIONS(184),
    [anon_sym_foreach] = ACTIONS(184),
    [anon_sym_defdynamic] = ACTIONS(184),
    [anon_sym_load] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(193),
    [anon_sym_or] = ACTIONS(193),
    [anon_sym_not] = ACTIONS(190),
    [anon_sym_and_STAR] = ACTIONS(190),
    [anon_sym_or_STAR] = ACTIONS(190),
  },
  [12] = {
    [sym__s_expr] = STATE(64),
    [sym__expr] = STATE(64),
    [sym__literals] = STATE(64),
    [sym__short_helper] = STATE(64),
    [sym_match_case] = STATE(12),
    [sym_short_ref] = STATE(64),
    [sym_short_copy] = STATE(64),
    [sym_short_fn_ref] = STATE(64),
    [sym_short_quote] = STATE(64),
    [sym_bool_literal] = STATE(64),
    [sym_str_literal] = STATE(64),
    [sym_char_literal] = STATE(64),
    [sym_pattern_literal] = STATE(64),
    [sym_array_expression] = STATE(64),
    [sym_map_expression] = STATE(64),
    [sym_symbol] = STATE(64),
    [aux_sym_match_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_AMP] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [sym_integer_literal] = ACTIONS(216),
    [sym_float_literal] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_POUND_DQUOTE] = ACTIONS(228),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(234),
    [sym_upper_identifier] = ACTIONS(237),
    [sym_identifier] = ACTIONS(216),
  },
  [13] = {
    [sym__s_expr] = STATE(64),
    [sym__expr] = STATE(64),
    [sym__literals] = STATE(64),
    [sym__short_helper] = STATE(64),
    [sym_match_case] = STATE(12),
    [sym_short_ref] = STATE(64),
    [sym_short_copy] = STATE(64),
    [sym_short_fn_ref] = STATE(64),
    [sym_short_quote] = STATE(64),
    [sym_bool_literal] = STATE(64),
    [sym_str_literal] = STATE(64),
    [sym_char_literal] = STATE(64),
    [sym_pattern_literal] = STATE(64),
    [sym_array_expression] = STATE(64),
    [sym_map_expression] = STATE(64),
    [sym_symbol] = STATE(64),
    [aux_sym_match_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(252),
    [sym_float_literal] = ACTIONS(252),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(264),
    [sym_identifier] = ACTIONS(252),
  },
  [14] = {
    [sym__s_expr] = STATE(64),
    [sym__expr] = STATE(64),
    [sym__literals] = STATE(64),
    [sym__short_helper] = STATE(64),
    [sym_match_case] = STATE(13),
    [sym_short_ref] = STATE(64),
    [sym_short_copy] = STATE(64),
    [sym_short_fn_ref] = STATE(64),
    [sym_short_quote] = STATE(64),
    [sym_bool_literal] = STATE(64),
    [sym_str_literal] = STATE(64),
    [sym_char_literal] = STATE(64),
    [sym_pattern_literal] = STATE(64),
    [sym_array_expression] = STATE(64),
    [sym_map_expression] = STATE(64),
    [sym_symbol] = STATE(64),
    [aux_sym_match_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(252),
    [sym_float_literal] = ACTIONS(252),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(264),
    [sym_identifier] = ACTIONS(252),
  },
  [15] = {
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
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_AMP] = ACTIONS(276),
    [anon_sym_AT] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [sym_integer_literal] = ACTIONS(288),
    [sym_float_literal] = ACTIONS(288),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_POUND_DQUOTE] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(306),
    [sym_upper_identifier] = ACTIONS(309),
    [sym_identifier] = ACTIONS(288),
  },
  [16] = {
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
    [aux_sym_do_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(314),
    [sym_float_literal] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(316),
    [sym_identifier] = ACTIONS(314),
  },
  [17] = {
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
    [aux_sym_do_repeat1] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [sym_integer_literal] = ACTIONS(338),
    [sym_float_literal] = ACTIONS(338),
    [anon_sym_true] = ACTIONS(341),
    [anon_sym_false] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(347),
    [anon_sym_POUND_DQUOTE] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(356),
    [sym_upper_identifier] = ACTIONS(359),
    [sym_identifier] = ACTIONS(338),
  },
  [18] = {
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
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(364),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(366),
    [sym_identifier] = ACTIONS(364),
  },
  [19] = {
    [sym__s_expr] = STATE(18),
    [sym__expr] = STATE(18),
    [sym__literals] = STATE(18),
    [sym__short_helper] = STATE(18),
    [sym_short_ref] = STATE(18),
    [sym_short_copy] = STATE(18),
    [sym_short_fn_ref] = STATE(18),
    [sym_short_quote] = STATE(18),
    [sym_bool_literal] = STATE(18),
    [sym_str_literal] = STATE(18),
    [sym_char_literal] = STATE(18),
    [sym_pattern_literal] = STATE(18),
    [sym_array_expression] = STATE(18),
    [sym_map_expression] = STATE(18),
    [sym_symbol] = STATE(18),
    [aux_sym_call_expression_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(370),
    [sym_float_literal] = ACTIONS(370),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(372),
    [sym_identifier] = ACTIONS(370),
  },
  [20] = {
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
    [aux_sym_do_repeat1] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(314),
    [sym_float_literal] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(316),
    [sym_identifier] = ACTIONS(314),
  },
  [21] = {
    [sym__s_expr] = STATE(272),
    [sym__expr] = STATE(272),
    [sym__literals] = STATE(272),
    [sym__short_helper] = STATE(272),
    [sym_short_ref] = STATE(272),
    [sym_short_copy] = STATE(272),
    [sym_short_fn_ref] = STATE(272),
    [sym_short_quote] = STATE(272),
    [sym_bool_literal] = STATE(272),
    [sym_str_literal] = STATE(272),
    [sym_char_literal] = STATE(272),
    [sym_pattern_literal] = STATE(272),
    [sym_array_expression] = STATE(272),
    [sym_map_expression] = STATE(272),
    [sym_symbol] = STATE(272),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(380),
    [sym_float_literal] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(382),
    [sym_identifier] = ACTIONS(380),
  },
  [22] = {
    [sym__s_expr] = STATE(276),
    [sym__expr] = STATE(276),
    [sym__literals] = STATE(276),
    [sym__short_helper] = STATE(276),
    [sym_short_ref] = STATE(276),
    [sym_short_copy] = STATE(276),
    [sym_short_fn_ref] = STATE(276),
    [sym_short_quote] = STATE(276),
    [sym_bool_literal] = STATE(276),
    [sym_str_literal] = STATE(276),
    [sym_char_literal] = STATE(276),
    [sym_pattern_literal] = STATE(276),
    [sym_array_expression] = STATE(276),
    [sym_map_expression] = STATE(276),
    [sym_symbol] = STATE(276),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(386),
    [sym_float_literal] = ACTIONS(386),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(388),
    [sym_identifier] = ACTIONS(386),
  },
  [23] = {
    [sym__s_expr] = STATE(279),
    [sym__expr] = STATE(279),
    [sym__literals] = STATE(279),
    [sym__short_helper] = STATE(279),
    [sym_short_ref] = STATE(279),
    [sym_short_copy] = STATE(279),
    [sym_short_fn_ref] = STATE(279),
    [sym_short_quote] = STATE(279),
    [sym_bool_literal] = STATE(279),
    [sym_str_literal] = STATE(279),
    [sym_char_literal] = STATE(279),
    [sym_pattern_literal] = STATE(279),
    [sym_array_expression] = STATE(279),
    [sym_map_expression] = STATE(279),
    [sym_symbol] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(392),
    [sym_float_literal] = ACTIONS(392),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(394),
    [sym_identifier] = ACTIONS(392),
  },
  [24] = {
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
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(398),
    [sym_float_literal] = ACTIONS(398),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(400),
    [sym_identifier] = ACTIONS(398),
  },
  [25] = {
    [sym__s_expr] = STATE(302),
    [sym__expr] = STATE(302),
    [sym__literals] = STATE(302),
    [sym__short_helper] = STATE(302),
    [sym_short_ref] = STATE(302),
    [sym_short_copy] = STATE(302),
    [sym_short_fn_ref] = STATE(302),
    [sym_short_quote] = STATE(302),
    [sym_bool_literal] = STATE(302),
    [sym_str_literal] = STATE(302),
    [sym_char_literal] = STATE(302),
    [sym_pattern_literal] = STATE(302),
    [sym_array_expression] = STATE(302),
    [sym_map_expression] = STATE(302),
    [sym_symbol] = STATE(302),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(404),
    [sym_float_literal] = ACTIONS(404),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(406),
    [sym_identifier] = ACTIONS(404),
  },
  [26] = {
    [sym__s_expr] = STATE(284),
    [sym__expr] = STATE(284),
    [sym__literals] = STATE(284),
    [sym__short_helper] = STATE(284),
    [sym_short_ref] = STATE(284),
    [sym_short_copy] = STATE(284),
    [sym_short_fn_ref] = STATE(284),
    [sym_short_quote] = STATE(284),
    [sym_bool_literal] = STATE(284),
    [sym_str_literal] = STATE(284),
    [sym_char_literal] = STATE(284),
    [sym_pattern_literal] = STATE(284),
    [sym_array_expression] = STATE(284),
    [sym_map_expression] = STATE(284),
    [sym_symbol] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(410),
    [sym_float_literal] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(412),
    [sym_identifier] = ACTIONS(410),
  },
  [27] = {
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
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(416),
    [sym_float_literal] = ACTIONS(416),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(418),
    [sym_identifier] = ACTIONS(416),
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
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(420),
    [sym_float_literal] = ACTIONS(420),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(422),
    [sym_identifier] = ACTIONS(420),
  },
  [29] = {
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
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(424),
    [sym_float_literal] = ACTIONS(424),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(426),
    [sym_identifier] = ACTIONS(424),
  },
  [30] = {
    [sym__s_expr] = STATE(14),
    [sym__expr] = STATE(14),
    [sym__literals] = STATE(14),
    [sym__short_helper] = STATE(14),
    [sym_short_ref] = STATE(14),
    [sym_short_copy] = STATE(14),
    [sym_short_fn_ref] = STATE(14),
    [sym_short_quote] = STATE(14),
    [sym_bool_literal] = STATE(14),
    [sym_str_literal] = STATE(14),
    [sym_char_literal] = STATE(14),
    [sym_pattern_literal] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_map_expression] = STATE(14),
    [sym_symbol] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(428),
    [sym_float_literal] = ACTIONS(428),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(430),
    [sym_identifier] = ACTIONS(428),
  },
  [31] = {
    [sym__s_expr] = STATE(84),
    [sym__expr] = STATE(84),
    [sym__literals] = STATE(84),
    [sym__short_helper] = STATE(84),
    [sym_short_ref] = STATE(84),
    [sym_short_copy] = STATE(84),
    [sym_short_fn_ref] = STATE(84),
    [sym_short_quote] = STATE(84),
    [sym_bool_literal] = STATE(84),
    [sym_str_literal] = STATE(84),
    [sym_char_literal] = STATE(84),
    [sym_pattern_literal] = STATE(84),
    [sym_array_expression] = STATE(84),
    [sym_map_expression] = STATE(84),
    [sym_symbol] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_integer_literal] = ACTIONS(444),
    [sym_float_literal] = ACTIONS(444),
    [anon_sym_true] = ACTIONS(446),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [anon_sym_BSLASH] = ACTIONS(450),
    [anon_sym_POUND_DQUOTE] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(456),
    [sym_upper_identifier] = ACTIONS(458),
    [sym_identifier] = ACTIONS(444),
  },
  [32] = {
    [sym__s_expr] = STATE(73),
    [sym__expr] = STATE(73),
    [sym__literals] = STATE(73),
    [sym__short_helper] = STATE(73),
    [sym_short_ref] = STATE(73),
    [sym_short_copy] = STATE(73),
    [sym_short_fn_ref] = STATE(73),
    [sym_short_quote] = STATE(73),
    [sym_bool_literal] = STATE(73),
    [sym_str_literal] = STATE(73),
    [sym_char_literal] = STATE(73),
    [sym_pattern_literal] = STATE(73),
    [sym_array_expression] = STATE(73),
    [sym_map_expression] = STATE(73),
    [sym_symbol] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_integer_literal] = ACTIONS(460),
    [sym_float_literal] = ACTIONS(460),
    [anon_sym_true] = ACTIONS(446),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [anon_sym_BSLASH] = ACTIONS(450),
    [anon_sym_POUND_DQUOTE] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(456),
    [sym_upper_identifier] = ACTIONS(462),
    [sym_identifier] = ACTIONS(460),
  },
  [33] = {
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
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(464),
    [sym_float_literal] = ACTIONS(464),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(466),
    [sym_identifier] = ACTIONS(464),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_let_DASHdo] = ACTIONS(468),
    [anon_sym_while_DASHdo] = ACTIONS(468),
    [anon_sym_defn_DASHdo] = ACTIONS(468),
    [anon_sym_break] = ACTIONS(468),
    [anon_sym_for] = ACTIONS(470),
    [anon_sym_when] = ACTIONS(468),
    [anon_sym_cond] = ACTIONS(468),
    [anon_sym_unless] = ACTIONS(468),
    [anon_sym_case] = ACTIONS(468),
    [anon_sym_foreach] = ACTIONS(468),
    [anon_sym_defdynamic] = ACTIONS(468),
    [anon_sym_load] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(470),
    [anon_sym_not] = ACTIONS(468),
    [anon_sym_and_STAR] = ACTIONS(468),
    [anon_sym_or_STAR] = ACTIONS(468),
  },
  [35] = {
    [sym__short_helper] = STATE(35),
    [sym_type] = STATE(35),
    [sym_complex_type] = STATE(88),
    [sym_short_ref] = STATE(35),
    [sym_short_copy] = STATE(35),
    [sym_short_fn_ref] = STATE(35),
    [sym_short_quote] = STATE(35),
    [aux_sym_typed_parameters_repeat1] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_Bool] = ACTIONS(477),
    [anon_sym_Char] = ACTIONS(477),
    [anon_sym_Int] = ACTIONS(477),
    [anon_sym_Long] = ACTIONS(477),
    [anon_sym_Float] = ACTIONS(477),
    [anon_sym_Double] = ACTIONS(477),
    [anon_sym_Vector2] = ACTIONS(477),
    [anon_sym_Vector3] = ACTIONS(477),
    [anon_sym_VectorN] = ACTIONS(477),
    [anon_sym_String] = ACTIONS(477),
    [anon_sym_Pattern] = ACTIONS(477),
    [anon_sym_Array] = ACTIONS(477),
    [anon_sym_Map] = ACTIONS(477),
    [anon_sym_Maybe] = ACTIONS(477),
    [anon_sym_Result] = ACTIONS(477),
    [anon_sym_Id] = ACTIONS(477),
    [anon_sym_Ptr] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_TILDE] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [sym_identifier] = ACTIONS(492),
  },
  [36] = {
    [sym__s_expr] = STATE(81),
    [sym__expr] = STATE(81),
    [sym__literals] = STATE(81),
    [sym__short_helper] = STATE(81),
    [sym_short_ref] = STATE(81),
    [sym_short_copy] = STATE(81),
    [sym_short_fn_ref] = STATE(81),
    [sym_short_quote] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [sym_str_literal] = STATE(81),
    [sym_char_literal] = STATE(81),
    [sym_pattern_literal] = STATE(81),
    [sym_array_expression] = STATE(81),
    [sym_map_expression] = STATE(81),
    [sym_symbol] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_integer_literal] = ACTIONS(495),
    [sym_float_literal] = ACTIONS(495),
    [anon_sym_true] = ACTIONS(446),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [anon_sym_BSLASH] = ACTIONS(450),
    [anon_sym_POUND_DQUOTE] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(456),
    [sym_upper_identifier] = ACTIONS(497),
    [sym_identifier] = ACTIONS(495),
  },
  [37] = {
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(420),
    [sym_float_literal] = ACTIONS(420),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(422),
    [sym_identifier] = ACTIONS(420),
  },
  [38] = {
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
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(499),
    [sym_float_literal] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(501),
    [sym_identifier] = ACTIONS(499),
  },
  [39] = {
    [sym__s_expr] = STATE(150),
    [sym__expr] = STATE(150),
    [sym__literals] = STATE(150),
    [sym__short_helper] = STATE(150),
    [sym_short_ref] = STATE(150),
    [sym_short_copy] = STATE(150),
    [sym_short_fn_ref] = STATE(150),
    [sym_short_quote] = STATE(150),
    [sym_bool_literal] = STATE(150),
    [sym_str_literal] = STATE(150),
    [sym_char_literal] = STATE(150),
    [sym_pattern_literal] = STATE(150),
    [sym_array_expression] = STATE(150),
    [sym_map_expression] = STATE(150),
    [sym_symbol] = STATE(150),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(503),
    [sym_float_literal] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(505),
    [sym_identifier] = ACTIONS(503),
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
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(507),
    [sym_float_literal] = ACTIONS(507),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(509),
    [sym_identifier] = ACTIONS(507),
  },
  [41] = {
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
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [sym_integer_literal] = ACTIONS(523),
    [sym_float_literal] = ACTIONS(523),
    [anon_sym_true] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(529),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_upper_identifier] = ACTIONS(537),
    [sym_identifier] = ACTIONS(523),
  },
  [42] = {
    [sym__s_expr] = STATE(260),
    [sym__expr] = STATE(260),
    [sym__literals] = STATE(260),
    [sym__short_helper] = STATE(260),
    [sym_short_ref] = STATE(260),
    [sym_short_copy] = STATE(260),
    [sym_short_fn_ref] = STATE(260),
    [sym_short_quote] = STATE(260),
    [sym_bool_literal] = STATE(260),
    [sym_str_literal] = STATE(260),
    [sym_char_literal] = STATE(260),
    [sym_pattern_literal] = STATE(260),
    [sym_array_expression] = STATE(260),
    [sym_map_expression] = STATE(260),
    [sym_symbol] = STATE(260),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [sym_integer_literal] = ACTIONS(539),
    [sym_float_literal] = ACTIONS(539),
    [anon_sym_true] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(529),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_upper_identifier] = ACTIONS(541),
    [sym_identifier] = ACTIONS(539),
  },
  [43] = {
    [sym__s_expr] = STATE(261),
    [sym__expr] = STATE(261),
    [sym__literals] = STATE(261),
    [sym__short_helper] = STATE(261),
    [sym_short_ref] = STATE(261),
    [sym_short_copy] = STATE(261),
    [sym_short_fn_ref] = STATE(261),
    [sym_short_quote] = STATE(261),
    [sym_bool_literal] = STATE(261),
    [sym_str_literal] = STATE(261),
    [sym_char_literal] = STATE(261),
    [sym_pattern_literal] = STATE(261),
    [sym_array_expression] = STATE(261),
    [sym_map_expression] = STATE(261),
    [sym_symbol] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [sym_integer_literal] = ACTIONS(543),
    [sym_float_literal] = ACTIONS(543),
    [anon_sym_true] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(529),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_upper_identifier] = ACTIONS(545),
    [sym_identifier] = ACTIONS(543),
  },
  [44] = {
    [sym__s_expr] = STATE(262),
    [sym__expr] = STATE(262),
    [sym__literals] = STATE(262),
    [sym__short_helper] = STATE(262),
    [sym_short_ref] = STATE(262),
    [sym_short_copy] = STATE(262),
    [sym_short_fn_ref] = STATE(262),
    [sym_short_quote] = STATE(262),
    [sym_bool_literal] = STATE(262),
    [sym_str_literal] = STATE(262),
    [sym_char_literal] = STATE(262),
    [sym_pattern_literal] = STATE(262),
    [sym_array_expression] = STATE(262),
    [sym_map_expression] = STATE(262),
    [sym_symbol] = STATE(262),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [sym_integer_literal] = ACTIONS(547),
    [sym_float_literal] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(529),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_upper_identifier] = ACTIONS(549),
    [sym_identifier] = ACTIONS(547),
  },
  [45] = {
    [sym__short_helper] = STATE(35),
    [sym_type] = STATE(35),
    [sym_complex_type] = STATE(88),
    [sym_short_ref] = STATE(35),
    [sym_short_copy] = STATE(35),
    [sym_short_fn_ref] = STATE(35),
    [sym_short_quote] = STATE(35),
    [aux_sym_typed_parameters_repeat1] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_Bool] = ACTIONS(555),
    [anon_sym_Char] = ACTIONS(555),
    [anon_sym_Int] = ACTIONS(555),
    [anon_sym_Long] = ACTIONS(555),
    [anon_sym_Float] = ACTIONS(555),
    [anon_sym_Double] = ACTIONS(555),
    [anon_sym_Vector2] = ACTIONS(555),
    [anon_sym_Vector3] = ACTIONS(555),
    [anon_sym_VectorN] = ACTIONS(555),
    [anon_sym_String] = ACTIONS(555),
    [anon_sym_Pattern] = ACTIONS(555),
    [anon_sym_Array] = ACTIONS(555),
    [anon_sym_Map] = ACTIONS(555),
    [anon_sym_Maybe] = ACTIONS(555),
    [anon_sym_Result] = ACTIONS(555),
    [anon_sym_Id] = ACTIONS(555),
    [anon_sym_Ptr] = ACTIONS(555),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_identifier] = ACTIONS(557),
  },
  [46] = {
    [sym__s_expr] = STATE(267),
    [sym__expr] = STATE(267),
    [sym__literals] = STATE(267),
    [sym__short_helper] = STATE(267),
    [sym_short_ref] = STATE(267),
    [sym_short_copy] = STATE(267),
    [sym_short_fn_ref] = STATE(267),
    [sym_short_quote] = STATE(267),
    [sym_bool_literal] = STATE(267),
    [sym_str_literal] = STATE(267),
    [sym_char_literal] = STATE(267),
    [sym_pattern_literal] = STATE(267),
    [sym_array_expression] = STATE(267),
    [sym_map_expression] = STATE(267),
    [sym_symbol] = STATE(267),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(559),
    [sym_float_literal] = ACTIONS(559),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(561),
    [sym_identifier] = ACTIONS(559),
  },
  [47] = {
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
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(499),
    [sym_float_literal] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(501),
    [sym_identifier] = ACTIONS(499),
  },
  [48] = {
    [sym__short_helper] = STATE(45),
    [sym_type] = STATE(45),
    [sym_complex_type] = STATE(88),
    [sym_short_ref] = STATE(45),
    [sym_short_copy] = STATE(45),
    [sym_short_fn_ref] = STATE(45),
    [sym_short_quote] = STATE(45),
    [aux_sym_typed_parameters_repeat1] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_Bool] = ACTIONS(555),
    [anon_sym_Char] = ACTIONS(555),
    [anon_sym_Int] = ACTIONS(555),
    [anon_sym_Long] = ACTIONS(555),
    [anon_sym_Float] = ACTIONS(555),
    [anon_sym_Double] = ACTIONS(555),
    [anon_sym_Vector2] = ACTIONS(555),
    [anon_sym_Vector3] = ACTIONS(555),
    [anon_sym_VectorN] = ACTIONS(555),
    [anon_sym_String] = ACTIONS(555),
    [anon_sym_Pattern] = ACTIONS(555),
    [anon_sym_Array] = ACTIONS(555),
    [anon_sym_Map] = ACTIONS(555),
    [anon_sym_Maybe] = ACTIONS(555),
    [anon_sym_Result] = ACTIONS(555),
    [anon_sym_Id] = ACTIONS(555),
    [anon_sym_Ptr] = ACTIONS(555),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_identifier] = ACTIONS(557),
  },
  [49] = {
    [sym__s_expr] = STATE(150),
    [sym__expr] = STATE(150),
    [sym__literals] = STATE(150),
    [sym__short_helper] = STATE(150),
    [sym_short_ref] = STATE(150),
    [sym_short_copy] = STATE(150),
    [sym_short_fn_ref] = STATE(150),
    [sym_short_quote] = STATE(150),
    [sym_bool_literal] = STATE(150),
    [sym_str_literal] = STATE(150),
    [sym_char_literal] = STATE(150),
    [sym_pattern_literal] = STATE(150),
    [sym_array_expression] = STATE(150),
    [sym_map_expression] = STATE(150),
    [sym_symbol] = STATE(150),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(503),
    [sym_float_literal] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(505),
    [sym_identifier] = ACTIONS(503),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_let_DASHdo] = ACTIONS(565),
    [anon_sym_while_DASHdo] = ACTIONS(565),
    [anon_sym_defn_DASHdo] = ACTIONS(565),
    [anon_sym_break] = ACTIONS(565),
    [anon_sym_for] = ACTIONS(567),
    [anon_sym_when] = ACTIONS(565),
    [anon_sym_cond] = ACTIONS(565),
    [anon_sym_unless] = ACTIONS(565),
    [anon_sym_case] = ACTIONS(565),
    [anon_sym_foreach] = ACTIONS(565),
    [anon_sym_defdynamic] = ACTIONS(565),
    [anon_sym_load] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(567),
    [anon_sym_GT] = ACTIONS(567),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_LT_EQ] = ACTIONS(565),
    [anon_sym_GT_EQ] = ACTIONS(565),
    [anon_sym_SLASH_EQ] = ACTIONS(565),
    [anon_sym_and] = ACTIONS(567),
    [anon_sym_or] = ACTIONS(567),
    [anon_sym_not] = ACTIONS(565),
    [anon_sym_and_STAR] = ACTIONS(565),
    [anon_sym_or_STAR] = ACTIONS(565),
  },
  [51] = {
    [sym__s_expr] = STATE(127),
    [sym__expr] = STATE(127),
    [sym__literals] = STATE(127),
    [sym__short_helper] = STATE(127),
    [sym_short_ref] = STATE(127),
    [sym_short_copy] = STATE(127),
    [sym_short_fn_ref] = STATE(127),
    [sym_short_quote] = STATE(127),
    [sym_bool_literal] = STATE(127),
    [sym_str_literal] = STATE(127),
    [sym_char_literal] = STATE(127),
    [sym_pattern_literal] = STATE(127),
    [sym_array_expression] = STATE(127),
    [sym_map_expression] = STATE(127),
    [sym_symbol] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(569),
    [sym_float_literal] = ACTIONS(569),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(571),
    [sym_identifier] = ACTIONS(569),
  },
  [52] = {
    [sym__s_expr] = STATE(307),
    [sym__expr] = STATE(307),
    [sym__literals] = STATE(307),
    [sym__short_helper] = STATE(307),
    [sym_short_ref] = STATE(307),
    [sym_short_copy] = STATE(307),
    [sym_short_fn_ref] = STATE(307),
    [sym_short_quote] = STATE(307),
    [sym_bool_literal] = STATE(307),
    [sym_str_literal] = STATE(307),
    [sym_char_literal] = STATE(307),
    [sym_pattern_literal] = STATE(307),
    [sym_array_expression] = STATE(307),
    [sym_map_expression] = STATE(307),
    [sym_symbol] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(573),
    [sym_float_literal] = ACTIONS(573),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(575),
    [sym_identifier] = ACTIONS(573),
  },
  [53] = {
    [sym__s_expr] = STATE(128),
    [sym__expr] = STATE(128),
    [sym__literals] = STATE(128),
    [sym__short_helper] = STATE(128),
    [sym_short_ref] = STATE(128),
    [sym_short_copy] = STATE(128),
    [sym_short_fn_ref] = STATE(128),
    [sym_short_quote] = STATE(128),
    [sym_bool_literal] = STATE(128),
    [sym_str_literal] = STATE(128),
    [sym_char_literal] = STATE(128),
    [sym_pattern_literal] = STATE(128),
    [sym_array_expression] = STATE(128),
    [sym_map_expression] = STATE(128),
    [sym_symbol] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(577),
    [sym_float_literal] = ACTIONS(577),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(579),
    [sym_identifier] = ACTIONS(577),
  },
  [54] = {
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
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(581),
    [sym_float_literal] = ACTIONS(581),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(583),
    [sym_identifier] = ACTIONS(581),
  },
  [55] = {
    [sym__s_expr] = STATE(138),
    [sym__expr] = STATE(138),
    [sym__literals] = STATE(138),
    [sym__short_helper] = STATE(138),
    [sym_short_ref] = STATE(138),
    [sym_short_copy] = STATE(138),
    [sym_short_fn_ref] = STATE(138),
    [sym_short_quote] = STATE(138),
    [sym_bool_literal] = STATE(138),
    [sym_str_literal] = STATE(138),
    [sym_char_literal] = STATE(138),
    [sym_pattern_literal] = STATE(138),
    [sym_array_expression] = STATE(138),
    [sym_map_expression] = STATE(138),
    [sym_symbol] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(585),
    [sym_float_literal] = ACTIONS(585),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(587),
    [sym_identifier] = ACTIONS(585),
  },
  [56] = {
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
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(507),
    [sym_float_literal] = ACTIONS(507),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(509),
    [sym_identifier] = ACTIONS(507),
  },
  [57] = {
    [sym__s_expr] = STATE(246),
    [sym__expr] = STATE(246),
    [sym__literals] = STATE(246),
    [sym__short_helper] = STATE(246),
    [sym_short_ref] = STATE(246),
    [sym_short_copy] = STATE(246),
    [sym_short_fn_ref] = STATE(246),
    [sym_short_quote] = STATE(246),
    [sym_bool_literal] = STATE(246),
    [sym_str_literal] = STATE(246),
    [sym_char_literal] = STATE(246),
    [sym_pattern_literal] = STATE(246),
    [sym_array_expression] = STATE(246),
    [sym_map_expression] = STATE(246),
    [sym_symbol] = STATE(246),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [sym_integer_literal] = ACTIONS(589),
    [sym_float_literal] = ACTIONS(589),
    [anon_sym_true] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(529),
    [anon_sym_POUND_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_upper_identifier] = ACTIONS(591),
    [sym_identifier] = ACTIONS(589),
  },
  [58] = {
    [sym__s_expr] = STATE(134),
    [sym__expr] = STATE(134),
    [sym__literals] = STATE(134),
    [sym__short_helper] = STATE(134),
    [sym_short_ref] = STATE(134),
    [sym_short_copy] = STATE(134),
    [sym_short_fn_ref] = STATE(134),
    [sym_short_quote] = STATE(134),
    [sym_bool_literal] = STATE(134),
    [sym_str_literal] = STATE(134),
    [sym_char_literal] = STATE(134),
    [sym_pattern_literal] = STATE(134),
    [sym_array_expression] = STATE(134),
    [sym_map_expression] = STATE(134),
    [sym_symbol] = STATE(134),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(593),
    [sym_float_literal] = ACTIONS(593),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [sym_upper_identifier] = ACTIONS(595),
    [sym_identifier] = ACTIONS(593),
  },
  [59] = {
    [sym__s_expr] = STATE(65),
    [sym__expr] = STATE(65),
    [sym__literals] = STATE(65),
    [sym__short_helper] = STATE(65),
    [sym_short_ref] = STATE(65),
    [sym_short_copy] = STATE(65),
    [sym_short_fn_ref] = STATE(65),
    [sym_short_quote] = STATE(65),
    [sym_bool_literal] = STATE(65),
    [sym_str_literal] = STATE(65),
    [sym_char_literal] = STATE(65),
    [sym_pattern_literal] = STATE(65),
    [sym_array_expression] = STATE(65),
    [sym_map_expression] = STATE(65),
    [sym_symbol] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(597),
    [sym_float_literal] = ACTIONS(597),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(599),
    [sym_identifier] = ACTIONS(597),
  },
  [60] = {
    [sym__s_expr] = STATE(89),
    [sym__expr] = STATE(89),
    [sym__literals] = STATE(89),
    [sym__short_helper] = STATE(89),
    [sym_short_ref] = STATE(89),
    [sym_short_copy] = STATE(89),
    [sym_short_fn_ref] = STATE(89),
    [sym_short_quote] = STATE(89),
    [sym_bool_literal] = STATE(89),
    [sym_str_literal] = STATE(89),
    [sym_char_literal] = STATE(89),
    [sym_pattern_literal] = STATE(89),
    [sym_array_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [sym_symbol] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_integer_literal] = ACTIONS(601),
    [sym_float_literal] = ACTIONS(601),
    [anon_sym_true] = ACTIONS(446),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [anon_sym_BSLASH] = ACTIONS(450),
    [anon_sym_POUND_DQUOTE] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(456),
    [sym_upper_identifier] = ACTIONS(603),
    [sym_identifier] = ACTIONS(601),
  },
  [61] = {
    [sym__s_expr] = STATE(26),
    [sym__expr] = STATE(26),
    [sym__literals] = STATE(26),
    [sym__short_helper] = STATE(26),
    [sym_short_ref] = STATE(26),
    [sym_short_copy] = STATE(26),
    [sym_short_fn_ref] = STATE(26),
    [sym_short_quote] = STATE(26),
    [sym_bool_literal] = STATE(26),
    [sym_str_literal] = STATE(26),
    [sym_char_literal] = STATE(26),
    [sym_pattern_literal] = STATE(26),
    [sym_array_expression] = STATE(26),
    [sym_map_expression] = STATE(26),
    [sym_symbol] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(605),
    [sym_float_literal] = ACTIONS(605),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(607),
    [sym_identifier] = ACTIONS(605),
  },
  [62] = {
    [sym__s_expr] = STATE(265),
    [sym__expr] = STATE(265),
    [sym__literals] = STATE(265),
    [sym__short_helper] = STATE(265),
    [sym_short_ref] = STATE(265),
    [sym_short_copy] = STATE(265),
    [sym_short_fn_ref] = STATE(265),
    [sym_short_quote] = STATE(265),
    [sym_bool_literal] = STATE(265),
    [sym_str_literal] = STATE(265),
    [sym_char_literal] = STATE(265),
    [sym_pattern_literal] = STATE(265),
    [sym_array_expression] = STATE(265),
    [sym_map_expression] = STATE(265),
    [sym_symbol] = STATE(265),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(609),
    [sym_float_literal] = ACTIONS(609),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(611),
    [sym_identifier] = ACTIONS(609),
  },
  [63] = {
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
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(613),
    [sym_float_literal] = ACTIONS(613),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(615),
    [sym_identifier] = ACTIONS(613),
  },
  [64] = {
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
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_integer_literal] = ACTIONS(617),
    [sym_float_literal] = ACTIONS(617),
    [anon_sym_true] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_POUND_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(619),
    [sym_identifier] = ACTIONS(617),
  },
  [65] = {
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
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(621),
    [sym_float_literal] = ACTIONS(621),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_upper_identifier] = ACTIONS(623),
    [sym_identifier] = ACTIONS(621),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(625),
    [anon_sym_SEMI] = ACTIONS(625),
    [anon_sym_LPAREN] = ACTIONS(625),
    [anon_sym_let_DASHdo] = ACTIONS(625),
    [anon_sym_while_DASHdo] = ACTIONS(625),
    [anon_sym_defn_DASHdo] = ACTIONS(625),
    [anon_sym_break] = ACTIONS(625),
    [anon_sym_for] = ACTIONS(627),
    [anon_sym_when] = ACTIONS(625),
    [anon_sym_cond] = ACTIONS(625),
    [anon_sym_unless] = ACTIONS(625),
    [anon_sym_case] = ACTIONS(625),
    [anon_sym_foreach] = ACTIONS(625),
    [anon_sym_defdynamic] = ACTIONS(625),
    [anon_sym_load] = ACTIONS(625),
    [anon_sym_PLUS] = ACTIONS(625),
    [anon_sym_DASH] = ACTIONS(625),
    [anon_sym_SLASH] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(625),
    [anon_sym_PERCENT] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [anon_sym_EQ] = ACTIONS(625),
    [anon_sym_LT_EQ] = ACTIONS(625),
    [anon_sym_GT_EQ] = ACTIONS(625),
    [anon_sym_SLASH_EQ] = ACTIONS(625),
    [anon_sym_and] = ACTIONS(627),
    [anon_sym_or] = ACTIONS(627),
    [anon_sym_not] = ACTIONS(625),
    [anon_sym_and_STAR] = ACTIONS(625),
    [anon_sym_or_STAR] = ACTIONS(625),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_SEMI] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_let_DASHdo] = ACTIONS(629),
    [anon_sym_while_DASHdo] = ACTIONS(629),
    [anon_sym_defn_DASHdo] = ACTIONS(629),
    [anon_sym_break] = ACTIONS(629),
    [anon_sym_for] = ACTIONS(631),
    [anon_sym_when] = ACTIONS(629),
    [anon_sym_cond] = ACTIONS(629),
    [anon_sym_unless] = ACTIONS(629),
    [anon_sym_case] = ACTIONS(629),
    [anon_sym_foreach] = ACTIONS(629),
    [anon_sym_defdynamic] = ACTIONS(629),
    [anon_sym_load] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(631),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_EQ] = ACTIONS(629),
    [anon_sym_LT_EQ] = ACTIONS(629),
    [anon_sym_GT_EQ] = ACTIONS(629),
    [anon_sym_SLASH_EQ] = ACTIONS(629),
    [anon_sym_and] = ACTIONS(631),
    [anon_sym_or] = ACTIONS(631),
    [anon_sym_not] = ACTIONS(629),
    [anon_sym_and_STAR] = ACTIONS(629),
    [anon_sym_or_STAR] = ACTIONS(629),
  },
  [68] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(161),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(633),
    [anon_sym_Bool] = ACTIONS(635),
    [anon_sym_Char] = ACTIONS(635),
    [anon_sym_Int] = ACTIONS(635),
    [anon_sym_Long] = ACTIONS(635),
    [anon_sym_Float] = ACTIONS(635),
    [anon_sym_Double] = ACTIONS(635),
    [anon_sym_Vector2] = ACTIONS(635),
    [anon_sym_Vector3] = ACTIONS(635),
    [anon_sym_VectorN] = ACTIONS(635),
    [anon_sym_String] = ACTIONS(635),
    [anon_sym_Pattern] = ACTIONS(635),
    [anon_sym_Array] = ACTIONS(635),
    [anon_sym_Map] = ACTIONS(635),
    [anon_sym_Maybe] = ACTIONS(635),
    [anon_sym_Result] = ACTIONS(635),
    [anon_sym_Id] = ACTIONS(635),
    [anon_sym_Ptr] = ACTIONS(635),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_identifier] = ACTIONS(637),
  },
  [69] = {
    [sym__short_helper] = STATE(286),
    [sym_type] = STATE(286),
    [sym_complex_type] = STATE(161),
    [sym_short_ref] = STATE(286),
    [sym_short_copy] = STATE(286),
    [sym_short_fn_ref] = STATE(286),
    [sym_short_quote] = STATE(286),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_Bool] = ACTIONS(635),
    [anon_sym_Char] = ACTIONS(635),
    [anon_sym_Int] = ACTIONS(635),
    [anon_sym_Long] = ACTIONS(635),
    [anon_sym_Float] = ACTIONS(635),
    [anon_sym_Double] = ACTIONS(635),
    [anon_sym_Vector2] = ACTIONS(635),
    [anon_sym_Vector3] = ACTIONS(635),
    [anon_sym_VectorN] = ACTIONS(635),
    [anon_sym_String] = ACTIONS(635),
    [anon_sym_Pattern] = ACTIONS(635),
    [anon_sym_Array] = ACTIONS(635),
    [anon_sym_Map] = ACTIONS(635),
    [anon_sym_Maybe] = ACTIONS(635),
    [anon_sym_Result] = ACTIONS(635),
    [anon_sym_Id] = ACTIONS(635),
    [anon_sym_Ptr] = ACTIONS(635),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(637),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [anon_sym_Bool] = ACTIONS(643),
    [anon_sym_Char] = ACTIONS(643),
    [anon_sym_Int] = ACTIONS(643),
    [anon_sym_Long] = ACTIONS(643),
    [anon_sym_Float] = ACTIONS(643),
    [anon_sym_Double] = ACTIONS(643),
    [anon_sym_Vector2] = ACTIONS(643),
    [anon_sym_Vector3] = ACTIONS(643),
    [anon_sym_VectorN] = ACTIONS(643),
    [anon_sym_String] = ACTIONS(643),
    [anon_sym_Pattern] = ACTIONS(643),
    [anon_sym_Array] = ACTIONS(643),
    [anon_sym_Map] = ACTIONS(643),
    [anon_sym_Maybe] = ACTIONS(643),
    [anon_sym_Result] = ACTIONS(643),
    [anon_sym_Id] = ACTIONS(643),
    [anon_sym_Ptr] = ACTIONS(643),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(641),
    [anon_sym_AT] = ACTIONS(641),
    [anon_sym_TILDE] = ACTIONS(641),
    [anon_sym_SQUOTE] = ACTIONS(641),
    [sym_identifier] = ACTIONS(643),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [anon_sym_Bool] = ACTIONS(647),
    [anon_sym_Char] = ACTIONS(647),
    [anon_sym_Int] = ACTIONS(647),
    [anon_sym_Long] = ACTIONS(647),
    [anon_sym_Float] = ACTIONS(647),
    [anon_sym_Double] = ACTIONS(647),
    [anon_sym_Vector2] = ACTIONS(647),
    [anon_sym_Vector3] = ACTIONS(647),
    [anon_sym_VectorN] = ACTIONS(647),
    [anon_sym_String] = ACTIONS(647),
    [anon_sym_Pattern] = ACTIONS(647),
    [anon_sym_Array] = ACTIONS(647),
    [anon_sym_Map] = ACTIONS(647),
    [anon_sym_Maybe] = ACTIONS(647),
    [anon_sym_Result] = ACTIONS(647),
    [anon_sym_Id] = ACTIONS(647),
    [anon_sym_Ptr] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_AT] = ACTIONS(645),
    [anon_sym_TILDE] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(645),
    [sym_identifier] = ACTIONS(647),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [anon_sym_Bool] = ACTIONS(651),
    [anon_sym_Char] = ACTIONS(651),
    [anon_sym_Int] = ACTIONS(651),
    [anon_sym_Long] = ACTIONS(651),
    [anon_sym_Float] = ACTIONS(651),
    [anon_sym_Double] = ACTIONS(651),
    [anon_sym_Vector2] = ACTIONS(651),
    [anon_sym_Vector3] = ACTIONS(651),
    [anon_sym_VectorN] = ACTIONS(651),
    [anon_sym_String] = ACTIONS(651),
    [anon_sym_Pattern] = ACTIONS(651),
    [anon_sym_Array] = ACTIONS(651),
    [anon_sym_Map] = ACTIONS(651),
    [anon_sym_Maybe] = ACTIONS(651),
    [anon_sym_Result] = ACTIONS(651),
    [anon_sym_Id] = ACTIONS(651),
    [anon_sym_Ptr] = ACTIONS(651),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_AT] = ACTIONS(649),
    [anon_sym_TILDE] = ACTIONS(649),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [sym_identifier] = ACTIONS(651),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_RBRACK] = ACTIONS(653),
    [anon_sym_Bool] = ACTIONS(655),
    [anon_sym_Char] = ACTIONS(655),
    [anon_sym_Int] = ACTIONS(655),
    [anon_sym_Long] = ACTIONS(655),
    [anon_sym_Float] = ACTIONS(655),
    [anon_sym_Double] = ACTIONS(655),
    [anon_sym_Vector2] = ACTIONS(655),
    [anon_sym_Vector3] = ACTIONS(655),
    [anon_sym_VectorN] = ACTIONS(655),
    [anon_sym_String] = ACTIONS(655),
    [anon_sym_Pattern] = ACTIONS(655),
    [anon_sym_Array] = ACTIONS(655),
    [anon_sym_Map] = ACTIONS(655),
    [anon_sym_Maybe] = ACTIONS(655),
    [anon_sym_Result] = ACTIONS(655),
    [anon_sym_Id] = ACTIONS(655),
    [anon_sym_Ptr] = ACTIONS(655),
    [anon_sym_AMP] = ACTIONS(653),
    [anon_sym_AT] = ACTIONS(653),
    [anon_sym_TILDE] = ACTIONS(653),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [sym_identifier] = ACTIONS(655),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [anon_sym_Bool] = ACTIONS(659),
    [anon_sym_Char] = ACTIONS(659),
    [anon_sym_Int] = ACTIONS(659),
    [anon_sym_Long] = ACTIONS(659),
    [anon_sym_Float] = ACTIONS(659),
    [anon_sym_Double] = ACTIONS(659),
    [anon_sym_Vector2] = ACTIONS(659),
    [anon_sym_Vector3] = ACTIONS(659),
    [anon_sym_VectorN] = ACTIONS(659),
    [anon_sym_String] = ACTIONS(659),
    [anon_sym_Pattern] = ACTIONS(659),
    [anon_sym_Array] = ACTIONS(659),
    [anon_sym_Map] = ACTIONS(659),
    [anon_sym_Maybe] = ACTIONS(659),
    [anon_sym_Result] = ACTIONS(659),
    [anon_sym_Id] = ACTIONS(659),
    [anon_sym_Ptr] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(657),
    [anon_sym_AT] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [sym_identifier] = ACTIONS(659),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [anon_sym_Bool] = ACTIONS(663),
    [anon_sym_Char] = ACTIONS(663),
    [anon_sym_Int] = ACTIONS(663),
    [anon_sym_Long] = ACTIONS(663),
    [anon_sym_Float] = ACTIONS(663),
    [anon_sym_Double] = ACTIONS(663),
    [anon_sym_Vector2] = ACTIONS(663),
    [anon_sym_Vector3] = ACTIONS(663),
    [anon_sym_VectorN] = ACTIONS(663),
    [anon_sym_String] = ACTIONS(663),
    [anon_sym_Pattern] = ACTIONS(663),
    [anon_sym_Array] = ACTIONS(663),
    [anon_sym_Map] = ACTIONS(663),
    [anon_sym_Maybe] = ACTIONS(663),
    [anon_sym_Result] = ACTIONS(663),
    [anon_sym_Id] = ACTIONS(663),
    [anon_sym_Ptr] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AT] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(661),
    [sym_identifier] = ACTIONS(663),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [anon_sym_Bool] = ACTIONS(667),
    [anon_sym_Char] = ACTIONS(667),
    [anon_sym_Int] = ACTIONS(667),
    [anon_sym_Long] = ACTIONS(667),
    [anon_sym_Float] = ACTIONS(667),
    [anon_sym_Double] = ACTIONS(667),
    [anon_sym_Vector2] = ACTIONS(667),
    [anon_sym_Vector3] = ACTIONS(667),
    [anon_sym_VectorN] = ACTIONS(667),
    [anon_sym_String] = ACTIONS(667),
    [anon_sym_Pattern] = ACTIONS(667),
    [anon_sym_Array] = ACTIONS(667),
    [anon_sym_Map] = ACTIONS(667),
    [anon_sym_Maybe] = ACTIONS(667),
    [anon_sym_Result] = ACTIONS(667),
    [anon_sym_Id] = ACTIONS(667),
    [anon_sym_Ptr] = ACTIONS(667),
    [anon_sym_AMP] = ACTIONS(665),
    [anon_sym_AT] = ACTIONS(665),
    [anon_sym_TILDE] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(665),
    [sym_identifier] = ACTIONS(667),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [anon_sym_Bool] = ACTIONS(671),
    [anon_sym_Char] = ACTIONS(671),
    [anon_sym_Int] = ACTIONS(671),
    [anon_sym_Long] = ACTIONS(671),
    [anon_sym_Float] = ACTIONS(671),
    [anon_sym_Double] = ACTIONS(671),
    [anon_sym_Vector2] = ACTIONS(671),
    [anon_sym_Vector3] = ACTIONS(671),
    [anon_sym_VectorN] = ACTIONS(671),
    [anon_sym_String] = ACTIONS(671),
    [anon_sym_Pattern] = ACTIONS(671),
    [anon_sym_Array] = ACTIONS(671),
    [anon_sym_Map] = ACTIONS(671),
    [anon_sym_Maybe] = ACTIONS(671),
    [anon_sym_Result] = ACTIONS(671),
    [anon_sym_Id] = ACTIONS(671),
    [anon_sym_Ptr] = ACTIONS(671),
    [anon_sym_AMP] = ACTIONS(669),
    [anon_sym_AT] = ACTIONS(669),
    [anon_sym_TILDE] = ACTIONS(669),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [sym_identifier] = ACTIONS(671),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [anon_sym_Bool] = ACTIONS(470),
    [anon_sym_Char] = ACTIONS(470),
    [anon_sym_Int] = ACTIONS(470),
    [anon_sym_Long] = ACTIONS(470),
    [anon_sym_Float] = ACTIONS(470),
    [anon_sym_Double] = ACTIONS(470),
    [anon_sym_Vector2] = ACTIONS(470),
    [anon_sym_Vector3] = ACTIONS(470),
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
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_Bool] = ACTIONS(675),
    [anon_sym_Char] = ACTIONS(675),
    [anon_sym_Int] = ACTIONS(675),
    [anon_sym_Long] = ACTIONS(675),
    [anon_sym_Float] = ACTIONS(675),
    [anon_sym_Double] = ACTIONS(675),
    [anon_sym_Vector2] = ACTIONS(675),
    [anon_sym_Vector3] = ACTIONS(675),
    [anon_sym_VectorN] = ACTIONS(675),
    [anon_sym_String] = ACTIONS(675),
    [anon_sym_Pattern] = ACTIONS(675),
    [anon_sym_Array] = ACTIONS(675),
    [anon_sym_Map] = ACTIONS(675),
    [anon_sym_Maybe] = ACTIONS(675),
    [anon_sym_Result] = ACTIONS(675),
    [anon_sym_Id] = ACTIONS(675),
    [anon_sym_Ptr] = ACTIONS(675),
    [anon_sym_AMP] = ACTIONS(673),
    [anon_sym_AT] = ACTIONS(673),
    [anon_sym_TILDE] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [sym_identifier] = ACTIONS(675),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [anon_sym_Bool] = ACTIONS(679),
    [anon_sym_Char] = ACTIONS(679),
    [anon_sym_Int] = ACTIONS(679),
    [anon_sym_Long] = ACTIONS(679),
    [anon_sym_Float] = ACTIONS(679),
    [anon_sym_Double] = ACTIONS(679),
    [anon_sym_Vector2] = ACTIONS(679),
    [anon_sym_Vector3] = ACTIONS(679),
    [anon_sym_VectorN] = ACTIONS(679),
    [anon_sym_String] = ACTIONS(679),
    [anon_sym_Pattern] = ACTIONS(679),
    [anon_sym_Array] = ACTIONS(679),
    [anon_sym_Map] = ACTIONS(679),
    [anon_sym_Maybe] = ACTIONS(679),
    [anon_sym_Result] = ACTIONS(679),
    [anon_sym_Id] = ACTIONS(679),
    [anon_sym_Ptr] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_AT] = ACTIONS(677),
    [anon_sym_TILDE] = ACTIONS(677),
    [anon_sym_SQUOTE] = ACTIONS(677),
    [sym_identifier] = ACTIONS(679),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [anon_sym_Bool] = ACTIONS(683),
    [anon_sym_Char] = ACTIONS(683),
    [anon_sym_Int] = ACTIONS(683),
    [anon_sym_Long] = ACTIONS(683),
    [anon_sym_Float] = ACTIONS(683),
    [anon_sym_Double] = ACTIONS(683),
    [anon_sym_Vector2] = ACTIONS(683),
    [anon_sym_Vector3] = ACTIONS(683),
    [anon_sym_VectorN] = ACTIONS(683),
    [anon_sym_String] = ACTIONS(683),
    [anon_sym_Pattern] = ACTIONS(683),
    [anon_sym_Array] = ACTIONS(683),
    [anon_sym_Map] = ACTIONS(683),
    [anon_sym_Maybe] = ACTIONS(683),
    [anon_sym_Result] = ACTIONS(683),
    [anon_sym_Id] = ACTIONS(683),
    [anon_sym_Ptr] = ACTIONS(683),
    [anon_sym_AMP] = ACTIONS(681),
    [anon_sym_AT] = ACTIONS(681),
    [anon_sym_TILDE] = ACTIONS(681),
    [anon_sym_SQUOTE] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_RBRACK] = ACTIONS(685),
    [anon_sym_Bool] = ACTIONS(687),
    [anon_sym_Char] = ACTIONS(687),
    [anon_sym_Int] = ACTIONS(687),
    [anon_sym_Long] = ACTIONS(687),
    [anon_sym_Float] = ACTIONS(687),
    [anon_sym_Double] = ACTIONS(687),
    [anon_sym_Vector2] = ACTIONS(687),
    [anon_sym_Vector3] = ACTIONS(687),
    [anon_sym_VectorN] = ACTIONS(687),
    [anon_sym_String] = ACTIONS(687),
    [anon_sym_Pattern] = ACTIONS(687),
    [anon_sym_Array] = ACTIONS(687),
    [anon_sym_Map] = ACTIONS(687),
    [anon_sym_Maybe] = ACTIONS(687),
    [anon_sym_Result] = ACTIONS(687),
    [anon_sym_Id] = ACTIONS(687),
    [anon_sym_Ptr] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(685),
    [anon_sym_AT] = ACTIONS(685),
    [anon_sym_TILDE] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(685),
    [sym_identifier] = ACTIONS(687),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [anon_sym_Bool] = ACTIONS(691),
    [anon_sym_Char] = ACTIONS(691),
    [anon_sym_Int] = ACTIONS(691),
    [anon_sym_Long] = ACTIONS(691),
    [anon_sym_Float] = ACTIONS(691),
    [anon_sym_Double] = ACTIONS(691),
    [anon_sym_Vector2] = ACTIONS(691),
    [anon_sym_Vector3] = ACTIONS(691),
    [anon_sym_VectorN] = ACTIONS(691),
    [anon_sym_String] = ACTIONS(691),
    [anon_sym_Pattern] = ACTIONS(691),
    [anon_sym_Array] = ACTIONS(691),
    [anon_sym_Map] = ACTIONS(691),
    [anon_sym_Maybe] = ACTIONS(691),
    [anon_sym_Result] = ACTIONS(691),
    [anon_sym_Id] = ACTIONS(691),
    [anon_sym_Ptr] = ACTIONS(691),
    [anon_sym_AMP] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(689),
    [anon_sym_TILDE] = ACTIONS(689),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(693),
    [anon_sym_Bool] = ACTIONS(695),
    [anon_sym_Char] = ACTIONS(695),
    [anon_sym_Int] = ACTIONS(695),
    [anon_sym_Long] = ACTIONS(695),
    [anon_sym_Float] = ACTIONS(695),
    [anon_sym_Double] = ACTIONS(695),
    [anon_sym_Vector2] = ACTIONS(695),
    [anon_sym_Vector3] = ACTIONS(695),
    [anon_sym_VectorN] = ACTIONS(695),
    [anon_sym_String] = ACTIONS(695),
    [anon_sym_Pattern] = ACTIONS(695),
    [anon_sym_Array] = ACTIONS(695),
    [anon_sym_Map] = ACTIONS(695),
    [anon_sym_Maybe] = ACTIONS(695),
    [anon_sym_Result] = ACTIONS(695),
    [anon_sym_Id] = ACTIONS(695),
    [anon_sym_Ptr] = ACTIONS(695),
    [anon_sym_AMP] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(693),
    [anon_sym_TILDE] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(693),
    [sym_identifier] = ACTIONS(695),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_RBRACK] = ACTIONS(697),
    [anon_sym_Bool] = ACTIONS(699),
    [anon_sym_Char] = ACTIONS(699),
    [anon_sym_Int] = ACTIONS(699),
    [anon_sym_Long] = ACTIONS(699),
    [anon_sym_Float] = ACTIONS(699),
    [anon_sym_Double] = ACTIONS(699),
    [anon_sym_Vector2] = ACTIONS(699),
    [anon_sym_Vector3] = ACTIONS(699),
    [anon_sym_VectorN] = ACTIONS(699),
    [anon_sym_String] = ACTIONS(699),
    [anon_sym_Pattern] = ACTIONS(699),
    [anon_sym_Array] = ACTIONS(699),
    [anon_sym_Map] = ACTIONS(699),
    [anon_sym_Maybe] = ACTIONS(699),
    [anon_sym_Result] = ACTIONS(699),
    [anon_sym_Id] = ACTIONS(699),
    [anon_sym_Ptr] = ACTIONS(699),
    [anon_sym_AMP] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_TILDE] = ACTIONS(697),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [sym_identifier] = ACTIONS(699),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_RBRACK] = ACTIONS(701),
    [anon_sym_Bool] = ACTIONS(703),
    [anon_sym_Char] = ACTIONS(703),
    [anon_sym_Int] = ACTIONS(703),
    [anon_sym_Long] = ACTIONS(703),
    [anon_sym_Float] = ACTIONS(703),
    [anon_sym_Double] = ACTIONS(703),
    [anon_sym_Vector2] = ACTIONS(703),
    [anon_sym_Vector3] = ACTIONS(703),
    [anon_sym_VectorN] = ACTIONS(703),
    [anon_sym_String] = ACTIONS(703),
    [anon_sym_Pattern] = ACTIONS(703),
    [anon_sym_Array] = ACTIONS(703),
    [anon_sym_Map] = ACTIONS(703),
    [anon_sym_Maybe] = ACTIONS(703),
    [anon_sym_Result] = ACTIONS(703),
    [anon_sym_Id] = ACTIONS(703),
    [anon_sym_Ptr] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(701),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_TILDE] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_identifier] = ACTIONS(703),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(705),
    [anon_sym_Bool] = ACTIONS(707),
    [anon_sym_Char] = ACTIONS(707),
    [anon_sym_Int] = ACTIONS(707),
    [anon_sym_Long] = ACTIONS(707),
    [anon_sym_Float] = ACTIONS(707),
    [anon_sym_Double] = ACTIONS(707),
    [anon_sym_Vector2] = ACTIONS(707),
    [anon_sym_Vector3] = ACTIONS(707),
    [anon_sym_VectorN] = ACTIONS(707),
    [anon_sym_String] = ACTIONS(707),
    [anon_sym_Pattern] = ACTIONS(707),
    [anon_sym_Array] = ACTIONS(707),
    [anon_sym_Map] = ACTIONS(707),
    [anon_sym_Maybe] = ACTIONS(707),
    [anon_sym_Result] = ACTIONS(707),
    [anon_sym_Id] = ACTIONS(707),
    [anon_sym_Ptr] = ACTIONS(707),
    [anon_sym_AMP] = ACTIONS(705),
    [anon_sym_AT] = ACTIONS(705),
    [anon_sym_TILDE] = ACTIONS(705),
    [anon_sym_SQUOTE] = ACTIONS(705),
    [sym_identifier] = ACTIONS(707),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [anon_sym_Bool] = ACTIONS(711),
    [anon_sym_Char] = ACTIONS(711),
    [anon_sym_Int] = ACTIONS(711),
    [anon_sym_Long] = ACTIONS(711),
    [anon_sym_Float] = ACTIONS(711),
    [anon_sym_Double] = ACTIONS(711),
    [anon_sym_Vector2] = ACTIONS(711),
    [anon_sym_Vector3] = ACTIONS(711),
    [anon_sym_VectorN] = ACTIONS(711),
    [anon_sym_String] = ACTIONS(711),
    [anon_sym_Pattern] = ACTIONS(711),
    [anon_sym_Array] = ACTIONS(711),
    [anon_sym_Map] = ACTIONS(711),
    [anon_sym_Maybe] = ACTIONS(711),
    [anon_sym_Result] = ACTIONS(711),
    [anon_sym_Id] = ACTIONS(711),
    [anon_sym_Ptr] = ACTIONS(711),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_AT] = ACTIONS(709),
    [anon_sym_TILDE] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(713),
    [anon_sym_Bool] = ACTIONS(715),
    [anon_sym_Char] = ACTIONS(715),
    [anon_sym_Int] = ACTIONS(715),
    [anon_sym_Long] = ACTIONS(715),
    [anon_sym_Float] = ACTIONS(715),
    [anon_sym_Double] = ACTIONS(715),
    [anon_sym_Vector2] = ACTIONS(715),
    [anon_sym_Vector3] = ACTIONS(715),
    [anon_sym_VectorN] = ACTIONS(715),
    [anon_sym_String] = ACTIONS(715),
    [anon_sym_Pattern] = ACTIONS(715),
    [anon_sym_Array] = ACTIONS(715),
    [anon_sym_Map] = ACTIONS(715),
    [anon_sym_Maybe] = ACTIONS(715),
    [anon_sym_Result] = ACTIONS(715),
    [anon_sym_Id] = ACTIONS(715),
    [anon_sym_Ptr] = ACTIONS(715),
    [anon_sym_AMP] = ACTIONS(713),
    [anon_sym_AT] = ACTIONS(713),
    [anon_sym_TILDE] = ACTIONS(713),
    [anon_sym_SQUOTE] = ACTIONS(713),
    [sym_identifier] = ACTIONS(715),
  },
  [90] = {
    [sym_interface_fn] = STATE(281),
    [aux_sym_complex_type_repeat1] = STATE(106),
    [anon_sym_RPAREN] = ACTIONS(717),
    [anon_sym_Bool] = ACTIONS(719),
    [anon_sym_Char] = ACTIONS(719),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_Long] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Double] = ACTIONS(719),
    [anon_sym_Vector2] = ACTIONS(719),
    [anon_sym_Vector3] = ACTIONS(719),
    [anon_sym_VectorN] = ACTIONS(719),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_Pattern] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_Map] = ACTIONS(719),
    [anon_sym_Maybe] = ACTIONS(719),
    [anon_sym_Result] = ACTIONS(719),
    [anon_sym_Id] = ACTIONS(719),
    [anon_sym_Ptr] = ACTIONS(719),
    [anon_sym_Fn] = ACTIONS(721),
    [anon_sym_] = ACTIONS(721),
    [sym_identifier] = ACTIONS(723),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(725),
    [anon_sym_Bool] = ACTIONS(727),
    [anon_sym_Char] = ACTIONS(727),
    [anon_sym_Int] = ACTIONS(727),
    [anon_sym_Long] = ACTIONS(727),
    [anon_sym_Float] = ACTIONS(727),
    [anon_sym_Double] = ACTIONS(727),
    [anon_sym_Vector2] = ACTIONS(727),
    [anon_sym_Vector3] = ACTIONS(727),
    [anon_sym_VectorN] = ACTIONS(727),
    [anon_sym_String] = ACTIONS(727),
    [anon_sym_Pattern] = ACTIONS(727),
    [anon_sym_Array] = ACTIONS(727),
    [anon_sym_Map] = ACTIONS(727),
    [anon_sym_Maybe] = ACTIONS(727),
    [anon_sym_Result] = ACTIONS(727),
    [anon_sym_Id] = ACTIONS(727),
    [anon_sym_Ptr] = ACTIONS(727),
    [anon_sym_AMP] = ACTIONS(725),
    [anon_sym_AT] = ACTIONS(725),
    [anon_sym_TILDE] = ACTIONS(725),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [sym_identifier] = ACTIONS(727),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(729),
    [anon_sym_Bool] = ACTIONS(731),
    [anon_sym_Char] = ACTIONS(731),
    [anon_sym_Int] = ACTIONS(731),
    [anon_sym_Long] = ACTIONS(731),
    [anon_sym_Float] = ACTIONS(731),
    [anon_sym_Double] = ACTIONS(731),
    [anon_sym_Vector2] = ACTIONS(731),
    [anon_sym_Vector3] = ACTIONS(731),
    [anon_sym_VectorN] = ACTIONS(731),
    [anon_sym_String] = ACTIONS(731),
    [anon_sym_Pattern] = ACTIONS(731),
    [anon_sym_Array] = ACTIONS(731),
    [anon_sym_Map] = ACTIONS(731),
    [anon_sym_Maybe] = ACTIONS(731),
    [anon_sym_Result] = ACTIONS(731),
    [anon_sym_Id] = ACTIONS(731),
    [anon_sym_Ptr] = ACTIONS(731),
    [anon_sym_AMP] = ACTIONS(729),
    [anon_sym_AT] = ACTIONS(729),
    [anon_sym_TILDE] = ACTIONS(729),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
  },
  [93] = {
    [sym_complex_type] = STATE(98),
    [aux_sym_fields_repeat1] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(733),
    [anon_sym_Bool] = ACTIONS(735),
    [anon_sym_Char] = ACTIONS(735),
    [anon_sym_Int] = ACTIONS(735),
    [anon_sym_Long] = ACTIONS(735),
    [anon_sym_Float] = ACTIONS(735),
    [anon_sym_Double] = ACTIONS(735),
    [anon_sym_Vector2] = ACTIONS(735),
    [anon_sym_Vector3] = ACTIONS(735),
    [anon_sym_VectorN] = ACTIONS(735),
    [anon_sym_String] = ACTIONS(735),
    [anon_sym_Pattern] = ACTIONS(735),
    [anon_sym_Array] = ACTIONS(735),
    [anon_sym_Map] = ACTIONS(735),
    [anon_sym_Maybe] = ACTIONS(735),
    [anon_sym_Result] = ACTIONS(735),
    [anon_sym_Id] = ACTIONS(735),
    [anon_sym_Ptr] = ACTIONS(735),
    [sym_identifier] = ACTIONS(737),
  },
  [94] = {
    [sym_complex_type] = STATE(98),
    [aux_sym_fields_repeat1] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(739),
    [anon_sym_RBRACK] = ACTIONS(742),
    [anon_sym_Bool] = ACTIONS(744),
    [anon_sym_Char] = ACTIONS(744),
    [anon_sym_Int] = ACTIONS(744),
    [anon_sym_Long] = ACTIONS(744),
    [anon_sym_Float] = ACTIONS(744),
    [anon_sym_Double] = ACTIONS(744),
    [anon_sym_Vector2] = ACTIONS(744),
    [anon_sym_Vector3] = ACTIONS(744),
    [anon_sym_VectorN] = ACTIONS(744),
    [anon_sym_String] = ACTIONS(744),
    [anon_sym_Pattern] = ACTIONS(744),
    [anon_sym_Array] = ACTIONS(744),
    [anon_sym_Map] = ACTIONS(744),
    [anon_sym_Maybe] = ACTIONS(744),
    [anon_sym_Result] = ACTIONS(744),
    [anon_sym_Id] = ACTIONS(744),
    [anon_sym_Ptr] = ACTIONS(744),
    [sym_identifier] = ACTIONS(747),
  },
  [95] = {
    [sym_complex_type] = STATE(98),
    [aux_sym_fields_repeat1] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(750),
    [anon_sym_Bool] = ACTIONS(735),
    [anon_sym_Char] = ACTIONS(735),
    [anon_sym_Int] = ACTIONS(735),
    [anon_sym_Long] = ACTIONS(735),
    [anon_sym_Float] = ACTIONS(735),
    [anon_sym_Double] = ACTIONS(735),
    [anon_sym_Vector2] = ACTIONS(735),
    [anon_sym_Vector3] = ACTIONS(735),
    [anon_sym_VectorN] = ACTIONS(735),
    [anon_sym_String] = ACTIONS(735),
    [anon_sym_Pattern] = ACTIONS(735),
    [anon_sym_Array] = ACTIONS(735),
    [anon_sym_Map] = ACTIONS(735),
    [anon_sym_Maybe] = ACTIONS(735),
    [anon_sym_Result] = ACTIONS(735),
    [anon_sym_Id] = ACTIONS(735),
    [anon_sym_Ptr] = ACTIONS(735),
    [sym_identifier] = ACTIONS(737),
  },
  [96] = {
    [sym_complex_type] = STATE(98),
    [aux_sym_fields_repeat1] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(752),
    [anon_sym_Bool] = ACTIONS(735),
    [anon_sym_Char] = ACTIONS(735),
    [anon_sym_Int] = ACTIONS(735),
    [anon_sym_Long] = ACTIONS(735),
    [anon_sym_Float] = ACTIONS(735),
    [anon_sym_Double] = ACTIONS(735),
    [anon_sym_Vector2] = ACTIONS(735),
    [anon_sym_Vector3] = ACTIONS(735),
    [anon_sym_VectorN] = ACTIONS(735),
    [anon_sym_String] = ACTIONS(735),
    [anon_sym_Pattern] = ACTIONS(735),
    [anon_sym_Array] = ACTIONS(735),
    [anon_sym_Map] = ACTIONS(735),
    [anon_sym_Maybe] = ACTIONS(735),
    [anon_sym_Result] = ACTIONS(735),
    [anon_sym_Id] = ACTIONS(735),
    [anon_sym_Ptr] = ACTIONS(735),
    [sym_identifier] = ACTIONS(737),
  },
  [97] = {
    [sym_complex_type] = STATE(98),
    [aux_sym_fields_repeat1] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(754),
    [anon_sym_Bool] = ACTIONS(735),
    [anon_sym_Char] = ACTIONS(735),
    [anon_sym_Int] = ACTIONS(735),
    [anon_sym_Long] = ACTIONS(735),
    [anon_sym_Float] = ACTIONS(735),
    [anon_sym_Double] = ACTIONS(735),
    [anon_sym_Vector2] = ACTIONS(735),
    [anon_sym_Vector3] = ACTIONS(735),
    [anon_sym_VectorN] = ACTIONS(735),
    [anon_sym_String] = ACTIONS(735),
    [anon_sym_Pattern] = ACTIONS(735),
    [anon_sym_Array] = ACTIONS(735),
    [anon_sym_Map] = ACTIONS(735),
    [anon_sym_Maybe] = ACTIONS(735),
    [anon_sym_Result] = ACTIONS(735),
    [anon_sym_Id] = ACTIONS(735),
    [anon_sym_Ptr] = ACTIONS(735),
    [sym_identifier] = ACTIONS(737),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_RBRACK] = ACTIONS(756),
    [anon_sym_Bool] = ACTIONS(758),
    [anon_sym_Char] = ACTIONS(758),
    [anon_sym_Int] = ACTIONS(758),
    [anon_sym_Long] = ACTIONS(758),
    [anon_sym_Float] = ACTIONS(758),
    [anon_sym_Double] = ACTIONS(758),
    [anon_sym_Vector2] = ACTIONS(758),
    [anon_sym_Vector3] = ACTIONS(758),
    [anon_sym_VectorN] = ACTIONS(758),
    [anon_sym_String] = ACTIONS(758),
    [anon_sym_Pattern] = ACTIONS(758),
    [anon_sym_Array] = ACTIONS(758),
    [anon_sym_Map] = ACTIONS(758),
    [anon_sym_Maybe] = ACTIONS(758),
    [anon_sym_Result] = ACTIONS(758),
    [anon_sym_Id] = ACTIONS(758),
    [anon_sym_Ptr] = ACTIONS(758),
    [anon_sym_COMMA] = ACTIONS(760),
    [sym_identifier] = ACTIONS(758),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [anon_sym_Bool] = ACTIONS(764),
    [anon_sym_Char] = ACTIONS(764),
    [anon_sym_Int] = ACTIONS(764),
    [anon_sym_Long] = ACTIONS(764),
    [anon_sym_Float] = ACTIONS(764),
    [anon_sym_Double] = ACTIONS(764),
    [anon_sym_Vector2] = ACTIONS(764),
    [anon_sym_Vector3] = ACTIONS(764),
    [anon_sym_VectorN] = ACTIONS(764),
    [anon_sym_String] = ACTIONS(764),
    [anon_sym_Pattern] = ACTIONS(764),
    [anon_sym_Array] = ACTIONS(764),
    [anon_sym_Map] = ACTIONS(764),
    [anon_sym_Maybe] = ACTIONS(764),
    [anon_sym_Result] = ACTIONS(764),
    [anon_sym_Id] = ACTIONS(764),
    [anon_sym_Ptr] = ACTIONS(764),
    [anon_sym_COMMA] = ACTIONS(766),
    [sym_identifier] = ACTIONS(764),
  },
  [100] = {
    [sym_type] = STATE(62),
    [sym_complex_type] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_Bool] = ACTIONS(635),
    [anon_sym_Char] = ACTIONS(635),
    [anon_sym_Int] = ACTIONS(635),
    [anon_sym_Long] = ACTIONS(635),
    [anon_sym_Float] = ACTIONS(635),
    [anon_sym_Double] = ACTIONS(635),
    [anon_sym_Vector2] = ACTIONS(635),
    [anon_sym_Vector3] = ACTIONS(635),
    [anon_sym_VectorN] = ACTIONS(635),
    [anon_sym_String] = ACTIONS(635),
    [anon_sym_Pattern] = ACTIONS(635),
    [anon_sym_Array] = ACTIONS(635),
    [anon_sym_Map] = ACTIONS(635),
    [anon_sym_Maybe] = ACTIONS(635),
    [anon_sym_Result] = ACTIONS(635),
    [anon_sym_Id] = ACTIONS(635),
    [anon_sym_Ptr] = ACTIONS(635),
    [sym_identifier] = ACTIONS(637),
  },
  [101] = {
    [aux_sym_complex_type_repeat1] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_Bool] = ACTIONS(719),
    [anon_sym_Char] = ACTIONS(719),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_Long] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Double] = ACTIONS(719),
    [anon_sym_Vector2] = ACTIONS(719),
    [anon_sym_Vector3] = ACTIONS(719),
    [anon_sym_VectorN] = ACTIONS(719),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_Pattern] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_Map] = ACTIONS(719),
    [anon_sym_Maybe] = ACTIONS(719),
    [anon_sym_Result] = ACTIONS(719),
    [anon_sym_Id] = ACTIONS(719),
    [anon_sym_Ptr] = ACTIONS(719),
    [sym_identifier] = ACTIONS(770),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(742),
    [anon_sym_RBRACK] = ACTIONS(742),
    [anon_sym_Bool] = ACTIONS(772),
    [anon_sym_Char] = ACTIONS(772),
    [anon_sym_Int] = ACTIONS(772),
    [anon_sym_Long] = ACTIONS(772),
    [anon_sym_Float] = ACTIONS(772),
    [anon_sym_Double] = ACTIONS(772),
    [anon_sym_Vector2] = ACTIONS(772),
    [anon_sym_Vector3] = ACTIONS(772),
    [anon_sym_VectorN] = ACTIONS(772),
    [anon_sym_String] = ACTIONS(772),
    [anon_sym_Pattern] = ACTIONS(772),
    [anon_sym_Array] = ACTIONS(772),
    [anon_sym_Map] = ACTIONS(772),
    [anon_sym_Maybe] = ACTIONS(772),
    [anon_sym_Result] = ACTIONS(772),
    [anon_sym_Id] = ACTIONS(772),
    [anon_sym_Ptr] = ACTIONS(772),
    [sym_identifier] = ACTIONS(772),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [anon_sym_Bool] = ACTIONS(776),
    [anon_sym_Char] = ACTIONS(776),
    [anon_sym_Int] = ACTIONS(776),
    [anon_sym_Long] = ACTIONS(776),
    [anon_sym_Float] = ACTIONS(776),
    [anon_sym_Double] = ACTIONS(776),
    [anon_sym_Vector2] = ACTIONS(776),
    [anon_sym_Vector3] = ACTIONS(776),
    [anon_sym_VectorN] = ACTIONS(776),
    [anon_sym_String] = ACTIONS(776),
    [anon_sym_Pattern] = ACTIONS(776),
    [anon_sym_Array] = ACTIONS(776),
    [anon_sym_Map] = ACTIONS(776),
    [anon_sym_Maybe] = ACTIONS(776),
    [anon_sym_Result] = ACTIONS(776),
    [anon_sym_Id] = ACTIONS(776),
    [anon_sym_Ptr] = ACTIONS(776),
    [sym_identifier] = ACTIONS(776),
  },
  [104] = {
    [aux_sym_complex_type_repeat1] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(778),
    [anon_sym_Bool] = ACTIONS(780),
    [anon_sym_Char] = ACTIONS(780),
    [anon_sym_Int] = ACTIONS(780),
    [anon_sym_Long] = ACTIONS(780),
    [anon_sym_Float] = ACTIONS(780),
    [anon_sym_Double] = ACTIONS(780),
    [anon_sym_Vector2] = ACTIONS(780),
    [anon_sym_Vector3] = ACTIONS(780),
    [anon_sym_VectorN] = ACTIONS(780),
    [anon_sym_String] = ACTIONS(780),
    [anon_sym_Pattern] = ACTIONS(780),
    [anon_sym_Array] = ACTIONS(780),
    [anon_sym_Map] = ACTIONS(780),
    [anon_sym_Maybe] = ACTIONS(780),
    [anon_sym_Result] = ACTIONS(780),
    [anon_sym_Id] = ACTIONS(780),
    [anon_sym_Ptr] = ACTIONS(780),
    [sym_identifier] = ACTIONS(783),
  },
  [105] = {
    [aux_sym_complex_type_repeat1] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(786),
    [anon_sym_Bool] = ACTIONS(719),
    [anon_sym_Char] = ACTIONS(719),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_Long] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Double] = ACTIONS(719),
    [anon_sym_Vector2] = ACTIONS(719),
    [anon_sym_Vector3] = ACTIONS(719),
    [anon_sym_VectorN] = ACTIONS(719),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_Pattern] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_Map] = ACTIONS(719),
    [anon_sym_Maybe] = ACTIONS(719),
    [anon_sym_Result] = ACTIONS(719),
    [anon_sym_Id] = ACTIONS(719),
    [anon_sym_Ptr] = ACTIONS(719),
    [sym_identifier] = ACTIONS(788),
  },
  [106] = {
    [aux_sym_complex_type_repeat1] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(790),
    [anon_sym_Bool] = ACTIONS(719),
    [anon_sym_Char] = ACTIONS(719),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_Long] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Double] = ACTIONS(719),
    [anon_sym_Vector2] = ACTIONS(719),
    [anon_sym_Vector3] = ACTIONS(719),
    [anon_sym_VectorN] = ACTIONS(719),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_Pattern] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_Map] = ACTIONS(719),
    [anon_sym_Maybe] = ACTIONS(719),
    [anon_sym_Result] = ACTIONS(719),
    [anon_sym_Id] = ACTIONS(719),
    [anon_sym_Ptr] = ACTIONS(719),
    [sym_identifier] = ACTIONS(788),
  },
  [107] = {
    [aux_sym_complex_type_repeat1] = STATE(106),
    [anon_sym_RPAREN] = ACTIONS(717),
    [anon_sym_Bool] = ACTIONS(719),
    [anon_sym_Char] = ACTIONS(719),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_Long] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Double] = ACTIONS(719),
    [anon_sym_Vector2] = ACTIONS(719),
    [anon_sym_Vector3] = ACTIONS(719),
    [anon_sym_VectorN] = ACTIONS(719),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_Pattern] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_Map] = ACTIONS(719),
    [anon_sym_Maybe] = ACTIONS(719),
    [anon_sym_Result] = ACTIONS(719),
    [anon_sym_Id] = ACTIONS(719),
    [anon_sym_Ptr] = ACTIONS(719),
    [sym_identifier] = ACTIONS(723),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_doc] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_AT] = ACTIONS(677),
    [anon_sym_TILDE] = ACTIONS(677),
    [anon_sym_SQUOTE] = ACTIONS(677),
    [sym_integer_literal] = ACTIONS(679),
    [sym_float_literal] = ACTIONS(679),
    [anon_sym_true] = ACTIONS(679),
    [anon_sym_false] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(677),
    [anon_sym_BSLASH] = ACTIONS(677),
    [anon_sym_POUND_DQUOTE] = ACTIONS(677),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_COLON] = ACTIONS(677),
    [sym_upper_identifier] = ACTIONS(677),
    [sym_identifier] = ACTIONS(679),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(693),
    [anon_sym_doc] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_AMP] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(693),
    [anon_sym_TILDE] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(693),
    [sym_integer_literal] = ACTIONS(695),
    [sym_float_literal] = ACTIONS(695),
    [anon_sym_true] = ACTIONS(695),
    [anon_sym_false] = ACTIONS(695),
    [anon_sym_DQUOTE] = ACTIONS(693),
    [anon_sym_BSLASH] = ACTIONS(693),
    [anon_sym_POUND_DQUOTE] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(693),
    [sym_upper_identifier] = ACTIONS(693),
    [sym_identifier] = ACTIONS(695),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_doc] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_AMP] = ACTIONS(701),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_TILDE] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_integer_literal] = ACTIONS(703),
    [sym_float_literal] = ACTIONS(703),
    [anon_sym_true] = ACTIONS(703),
    [anon_sym_false] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [anon_sym_BSLASH] = ACTIONS(701),
    [anon_sym_POUND_DQUOTE] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(701),
    [sym_upper_identifier] = ACTIONS(701),
    [sym_identifier] = ACTIONS(703),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_doc] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
    [anon_sym_AT] = ACTIONS(673),
    [anon_sym_TILDE] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [sym_integer_literal] = ACTIONS(675),
    [sym_float_literal] = ACTIONS(675),
    [anon_sym_true] = ACTIONS(675),
    [anon_sym_false] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [anon_sym_BSLASH] = ACTIONS(673),
    [anon_sym_POUND_DQUOTE] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [sym_upper_identifier] = ACTIONS(673),
    [sym_identifier] = ACTIONS(675),
  },
  [112] = {
    [sym__literals] = STATE(121),
    [sym_bool_literal] = STATE(121),
    [sym_str_literal] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_pattern_literal] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_map_expression] = STATE(121),
    [aux_sym_array_expression_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(792),
    [sym_integer_literal] = ACTIONS(794),
    [sym_float_literal] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(794),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_Bool] = ACTIONS(798),
    [anon_sym_Char] = ACTIONS(798),
    [anon_sym_Int] = ACTIONS(798),
    [anon_sym_Long] = ACTIONS(798),
    [anon_sym_Float] = ACTIONS(798),
    [anon_sym_Double] = ACTIONS(798),
    [anon_sym_Vector2] = ACTIONS(798),
    [anon_sym_Vector3] = ACTIONS(798),
    [anon_sym_VectorN] = ACTIONS(798),
    [anon_sym_String] = ACTIONS(798),
    [anon_sym_Pattern] = ACTIONS(798),
    [anon_sym_Array] = ACTIONS(798),
    [anon_sym_Map] = ACTIONS(798),
    [anon_sym_Maybe] = ACTIONS(798),
    [anon_sym_Result] = ACTIONS(798),
    [anon_sym_Id] = ACTIONS(798),
    [anon_sym_Ptr] = ACTIONS(798),
    [sym_identifier] = ACTIONS(798),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(649),
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_doc] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_AT] = ACTIONS(649),
    [anon_sym_TILDE] = ACTIONS(649),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [sym_integer_literal] = ACTIONS(651),
    [sym_float_literal] = ACTIONS(651),
    [anon_sym_true] = ACTIONS(651),
    [anon_sym_false] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [anon_sym_BSLASH] = ACTIONS(649),
    [anon_sym_POUND_DQUOTE] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(649),
    [sym_upper_identifier] = ACTIONS(649),
    [sym_identifier] = ACTIONS(651),
  },
  [115] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(802),
    [sym_identifier] = ACTIONS(800),
  },
  [116] = {
    [sym__literals] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_pattern_literal] = STATE(126),
    [sym_array_expression] = STATE(126),
    [sym_map_expression] = STATE(126),
    [aux_sym_array_expression_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(804),
    [sym_integer_literal] = ACTIONS(806),
    [sym_float_literal] = ACTIONS(806),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(806),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_doc] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_AMP] = ACTIONS(685),
    [anon_sym_AT] = ACTIONS(685),
    [anon_sym_TILDE] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(685),
    [sym_integer_literal] = ACTIONS(687),
    [sym_float_literal] = ACTIONS(687),
    [anon_sym_true] = ACTIONS(687),
    [anon_sym_false] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(685),
    [anon_sym_BSLASH] = ACTIONS(685),
    [anon_sym_POUND_DQUOTE] = ACTIONS(685),
    [anon_sym_LBRACE] = ACTIONS(685),
    [anon_sym_COLON] = ACTIONS(685),
    [sym_upper_identifier] = ACTIONS(685),
    [sym_identifier] = ACTIONS(687),
  },
  [118] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(808),
    [sym_identifier] = ACTIONS(800),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_doc] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_AMP] = ACTIONS(810),
    [anon_sym_AT] = ACTIONS(810),
    [anon_sym_TILDE] = ACTIONS(810),
    [anon_sym_SQUOTE] = ACTIONS(810),
    [sym_integer_literal] = ACTIONS(812),
    [sym_float_literal] = ACTIONS(812),
    [anon_sym_true] = ACTIONS(812),
    [anon_sym_false] = ACTIONS(812),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_BSLASH] = ACTIONS(810),
    [anon_sym_POUND_DQUOTE] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [sym_upper_identifier] = ACTIONS(810),
    [sym_identifier] = ACTIONS(812),
  },
  [120] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(814),
    [sym_identifier] = ACTIONS(800),
  },
  [121] = {
    [sym__literals] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [aux_sym_array_expression_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(816),
    [sym_integer_literal] = ACTIONS(818),
    [sym_float_literal] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(818),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_doc] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_AMP] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(689),
    [anon_sym_TILDE] = ACTIONS(689),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [sym_integer_literal] = ACTIONS(691),
    [sym_float_literal] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(691),
    [anon_sym_false] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [anon_sym_BSLASH] = ACTIONS(689),
    [anon_sym_POUND_DQUOTE] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(689),
    [anon_sym_COLON] = ACTIONS(689),
    [sym_upper_identifier] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_doc] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_TILDE] = ACTIONS(697),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [sym_integer_literal] = ACTIONS(699),
    [sym_float_literal] = ACTIONS(699),
    [anon_sym_true] = ACTIONS(699),
    [anon_sym_false] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [anon_sym_BSLASH] = ACTIONS(697),
    [anon_sym_POUND_DQUOTE] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_COLON] = ACTIONS(697),
    [sym_upper_identifier] = ACTIONS(697),
    [sym_identifier] = ACTIONS(699),
  },
  [124] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(820),
    [sym_identifier] = ACTIONS(800),
  },
  [125] = {
    [sym__literals] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [aux_sym_array_expression_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_RBRACK] = ACTIONS(825),
    [sym_integer_literal] = ACTIONS(827),
    [sym_float_literal] = ACTIONS(827),
    [anon_sym_true] = ACTIONS(830),
    [anon_sym_false] = ACTIONS(830),
    [anon_sym_DQUOTE] = ACTIONS(833),
    [anon_sym_BSLASH] = ACTIONS(836),
    [anon_sym_POUND_DQUOTE] = ACTIONS(839),
    [anon_sym_LBRACE] = ACTIONS(842),
    [sym_identifier] = ACTIONS(827),
  },
  [126] = {
    [sym__literals] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [aux_sym_array_expression_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(845),
    [sym_integer_literal] = ACTIONS(818),
    [sym_float_literal] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(818),
  },
  [127] = {
    [anon_sym_LPAREN] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_doc] = ACTIONS(715),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_AMP] = ACTIONS(713),
    [anon_sym_AT] = ACTIONS(713),
    [anon_sym_TILDE] = ACTIONS(713),
    [anon_sym_SQUOTE] = ACTIONS(713),
    [sym_integer_literal] = ACTIONS(715),
    [sym_float_literal] = ACTIONS(715),
    [anon_sym_true] = ACTIONS(715),
    [anon_sym_false] = ACTIONS(715),
    [anon_sym_DQUOTE] = ACTIONS(713),
    [anon_sym_BSLASH] = ACTIONS(713),
    [anon_sym_POUND_DQUOTE] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_COLON] = ACTIONS(713),
    [sym_upper_identifier] = ACTIONS(713),
    [sym_identifier] = ACTIONS(715),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_doc] = ACTIONS(683),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_AMP] = ACTIONS(681),
    [anon_sym_AT] = ACTIONS(681),
    [anon_sym_TILDE] = ACTIONS(681),
    [anon_sym_SQUOTE] = ACTIONS(681),
    [sym_integer_literal] = ACTIONS(683),
    [sym_float_literal] = ACTIONS(683),
    [anon_sym_true] = ACTIONS(683),
    [anon_sym_false] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [anon_sym_BSLASH] = ACTIONS(681),
    [anon_sym_POUND_DQUOTE] = ACTIONS(681),
    [anon_sym_LBRACE] = ACTIONS(681),
    [anon_sym_COLON] = ACTIONS(681),
    [sym_upper_identifier] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
  },
  [129] = {
    [sym__literals] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [aux_sym_array_expression_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(847),
    [sym_integer_literal] = ACTIONS(818),
    [sym_float_literal] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(818),
  },
  [130] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(849),
    [sym_integer_literal] = ACTIONS(852),
    [sym_float_literal] = ACTIONS(852),
    [anon_sym_true] = ACTIONS(855),
    [anon_sym_false] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [anon_sym_BSLASH] = ACTIONS(861),
    [anon_sym_POUND_DQUOTE] = ACTIONS(864),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(870),
    [sym_identifier] = ACTIONS(852),
  },
  [131] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(872),
    [sym_identifier] = ACTIONS(800),
  },
  [132] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_doc] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_TILDE] = ACTIONS(468),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [sym_integer_literal] = ACTIONS(470),
    [sym_float_literal] = ACTIONS(470),
    [anon_sym_true] = ACTIONS(470),
    [anon_sym_false] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(468),
    [anon_sym_POUND_DQUOTE] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(468),
    [sym_upper_identifier] = ACTIONS(468),
    [sym_identifier] = ACTIONS(470),
  },
  [133] = {
    [sym__literals] = STATE(139),
    [sym_bool_literal] = STATE(139),
    [sym_str_literal] = STATE(139),
    [sym_char_literal] = STATE(139),
    [sym_pattern_literal] = STATE(139),
    [sym_array_expression] = STATE(139),
    [sym_map_expression] = STATE(139),
    [aux_sym_array_expression_repeat1] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(874),
    [sym_integer_literal] = ACTIONS(876),
    [sym_float_literal] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(876),
  },
  [134] = {
    [anon_sym_LPAREN] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_doc] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(878),
    [anon_sym_AMP] = ACTIONS(878),
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_TILDE] = ACTIONS(878),
    [anon_sym_SQUOTE] = ACTIONS(878),
    [sym_integer_literal] = ACTIONS(880),
    [sym_float_literal] = ACTIONS(880),
    [anon_sym_true] = ACTIONS(880),
    [anon_sym_false] = ACTIONS(880),
    [anon_sym_DQUOTE] = ACTIONS(878),
    [anon_sym_BSLASH] = ACTIONS(878),
    [anon_sym_POUND_DQUOTE] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_COLON] = ACTIONS(878),
    [sym_upper_identifier] = ACTIONS(878),
    [sym_identifier] = ACTIONS(880),
  },
  [135] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(140),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(882),
    [sym_identifier] = ACTIONS(800),
  },
  [136] = {
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_doc] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
    [anon_sym_AT] = ACTIONS(669),
    [anon_sym_TILDE] = ACTIONS(669),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [sym_integer_literal] = ACTIONS(671),
    [sym_float_literal] = ACTIONS(671),
    [anon_sym_true] = ACTIONS(671),
    [anon_sym_false] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [anon_sym_BSLASH] = ACTIONS(669),
    [anon_sym_POUND_DQUOTE] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [sym_upper_identifier] = ACTIONS(669),
    [sym_identifier] = ACTIONS(671),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_doc] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(665),
    [anon_sym_AT] = ACTIONS(665),
    [anon_sym_TILDE] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(665),
    [sym_integer_literal] = ACTIONS(667),
    [sym_float_literal] = ACTIONS(667),
    [anon_sym_true] = ACTIONS(667),
    [anon_sym_false] = ACTIONS(667),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [anon_sym_BSLASH] = ACTIONS(665),
    [anon_sym_POUND_DQUOTE] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [sym_upper_identifier] = ACTIONS(665),
    [sym_identifier] = ACTIONS(667),
  },
  [138] = {
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_doc] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_AMP] = ACTIONS(653),
    [anon_sym_AT] = ACTIONS(653),
    [anon_sym_TILDE] = ACTIONS(653),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [sym_integer_literal] = ACTIONS(655),
    [sym_float_literal] = ACTIONS(655),
    [anon_sym_true] = ACTIONS(655),
    [anon_sym_false] = ACTIONS(655),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [anon_sym_BSLASH] = ACTIONS(653),
    [anon_sym_POUND_DQUOTE] = ACTIONS(653),
    [anon_sym_LBRACE] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(653),
    [sym_upper_identifier] = ACTIONS(653),
    [sym_identifier] = ACTIONS(655),
  },
  [139] = {
    [sym__literals] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [aux_sym_array_expression_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(884),
    [sym_integer_literal] = ACTIONS(818),
    [sym_float_literal] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(818),
  },
  [140] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(886),
    [sym_identifier] = ACTIONS(800),
  },
  [141] = {
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_doc] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AT] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(661),
    [sym_integer_literal] = ACTIONS(663),
    [sym_float_literal] = ACTIONS(663),
    [anon_sym_true] = ACTIONS(663),
    [anon_sym_false] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [anon_sym_BSLASH] = ACTIONS(661),
    [anon_sym_POUND_DQUOTE] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(661),
    [anon_sym_COLON] = ACTIONS(661),
    [sym_upper_identifier] = ACTIONS(661),
    [sym_identifier] = ACTIONS(663),
  },
  [142] = {
    [sym__literals] = STATE(129),
    [sym_bool_literal] = STATE(129),
    [sym_str_literal] = STATE(129),
    [sym_char_literal] = STATE(129),
    [sym_pattern_literal] = STATE(129),
    [sym_array_expression] = STATE(129),
    [sym_map_expression] = STATE(129),
    [aux_sym_array_expression_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(888),
    [sym_integer_literal] = ACTIONS(890),
    [sym_float_literal] = ACTIONS(890),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(890),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_doc] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_AMP] = ACTIONS(657),
    [anon_sym_AT] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [sym_integer_literal] = ACTIONS(659),
    [sym_float_literal] = ACTIONS(659),
    [anon_sym_true] = ACTIONS(659),
    [anon_sym_false] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [anon_sym_BSLASH] = ACTIONS(657),
    [anon_sym_POUND_DQUOTE] = ACTIONS(657),
    [anon_sym_LBRACE] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(657),
    [sym_upper_identifier] = ACTIONS(657),
    [sym_identifier] = ACTIONS(659),
  },
  [144] = {
    [anon_sym_LPAREN] = ACTIONS(892),
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_DOT] = ACTIONS(894),
    [anon_sym_AMP] = ACTIONS(892),
    [anon_sym_AT] = ACTIONS(892),
    [anon_sym_TILDE] = ACTIONS(892),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [sym_integer_literal] = ACTIONS(896),
    [sym_float_literal] = ACTIONS(896),
    [anon_sym_true] = ACTIONS(896),
    [anon_sym_false] = ACTIONS(896),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_BSLASH] = ACTIONS(892),
    [anon_sym_POUND_DQUOTE] = ACTIONS(892),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_COLON] = ACTIONS(892),
    [sym_upper_identifier] = ACTIONS(892),
    [sym_identifier] = ACTIONS(896),
  },
  [145] = {
    [sym__literals] = STATE(148),
    [sym_bool_literal] = STATE(148),
    [sym_str_literal] = STATE(148),
    [sym_char_literal] = STATE(148),
    [sym_pattern_literal] = STATE(148),
    [sym_array_expression] = STATE(148),
    [sym_map_expression] = STATE(148),
    [aux_sym_array_expression_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(898),
    [sym_integer_literal] = ACTIONS(900),
    [sym_float_literal] = ACTIONS(900),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(900),
  },
  [146] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(902),
    [sym_identifier] = ACTIONS(800),
  },
  [147] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(904),
    [sym_identifier] = ACTIONS(800),
  },
  [148] = {
    [sym__literals] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [aux_sym_array_expression_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(906),
    [sym_integer_literal] = ACTIONS(818),
    [sym_float_literal] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(818),
  },
  [149] = {
    [sym__literals] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [aux_sym_map_expression_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(800),
    [sym_float_literal] = ACTIONS(800),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(908),
    [sym_identifier] = ACTIONS(800),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_AMP] = ACTIONS(681),
    [anon_sym_AT] = ACTIONS(681),
    [anon_sym_TILDE] = ACTIONS(681),
    [anon_sym_SQUOTE] = ACTIONS(681),
    [sym_integer_literal] = ACTIONS(683),
    [sym_float_literal] = ACTIONS(683),
    [anon_sym_true] = ACTIONS(683),
    [anon_sym_false] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [anon_sym_BSLASH] = ACTIONS(681),
    [anon_sym_POUND_DQUOTE] = ACTIONS(681),
    [anon_sym_LBRACE] = ACTIONS(681),
    [anon_sym_COLON] = ACTIONS(681),
    [sym_upper_identifier] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_AMP] = ACTIONS(657),
    [anon_sym_AT] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [sym_integer_literal] = ACTIONS(659),
    [sym_float_literal] = ACTIONS(659),
    [anon_sym_true] = ACTIONS(659),
    [anon_sym_false] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [anon_sym_BSLASH] = ACTIONS(657),
    [anon_sym_POUND_DQUOTE] = ACTIONS(657),
    [anon_sym_LBRACE] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(657),
    [sym_upper_identifier] = ACTIONS(657),
    [sym_identifier] = ACTIONS(659),
  },
  [152] = {
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_TILDE] = ACTIONS(697),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [sym_integer_literal] = ACTIONS(699),
    [sym_float_literal] = ACTIONS(699),
    [anon_sym_true] = ACTIONS(699),
    [anon_sym_false] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [anon_sym_BSLASH] = ACTIONS(697),
    [anon_sym_POUND_DQUOTE] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_COLON] = ACTIONS(697),
    [sym_upper_identifier] = ACTIONS(697),
    [sym_identifier] = ACTIONS(699),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(910),
    [anon_sym_RPAREN] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(910),
    [anon_sym_AMP] = ACTIONS(910),
    [anon_sym_AT] = ACTIONS(910),
    [anon_sym_TILDE] = ACTIONS(910),
    [anon_sym_SQUOTE] = ACTIONS(910),
    [sym_integer_literal] = ACTIONS(912),
    [sym_float_literal] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(912),
    [anon_sym_false] = ACTIONS(912),
    [anon_sym_DQUOTE] = ACTIONS(910),
    [anon_sym_BSLASH] = ACTIONS(910),
    [anon_sym_POUND_DQUOTE] = ACTIONS(910),
    [anon_sym_LBRACE] = ACTIONS(910),
    [anon_sym_COLON] = ACTIONS(910),
    [sym_upper_identifier] = ACTIONS(910),
    [sym_identifier] = ACTIONS(912),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(914),
    [anon_sym_RPAREN] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(914),
    [anon_sym_AMP] = ACTIONS(914),
    [anon_sym_AT] = ACTIONS(914),
    [anon_sym_TILDE] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(914),
    [sym_integer_literal] = ACTIONS(916),
    [sym_float_literal] = ACTIONS(916),
    [anon_sym_true] = ACTIONS(916),
    [anon_sym_false] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(914),
    [anon_sym_BSLASH] = ACTIONS(914),
    [anon_sym_POUND_DQUOTE] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(914),
    [anon_sym_COLON] = ACTIONS(914),
    [sym_upper_identifier] = ACTIONS(914),
    [sym_identifier] = ACTIONS(916),
  },
  [155] = {
    [anon_sym_LPAREN] = ACTIONS(918),
    [anon_sym_RPAREN] = ACTIONS(918),
    [anon_sym_LBRACK] = ACTIONS(918),
    [anon_sym_AMP] = ACTIONS(918),
    [anon_sym_AT] = ACTIONS(918),
    [anon_sym_TILDE] = ACTIONS(918),
    [anon_sym_SQUOTE] = ACTIONS(918),
    [sym_integer_literal] = ACTIONS(920),
    [sym_float_literal] = ACTIONS(920),
    [anon_sym_true] = ACTIONS(920),
    [anon_sym_false] = ACTIONS(920),
    [anon_sym_DQUOTE] = ACTIONS(918),
    [anon_sym_BSLASH] = ACTIONS(918),
    [anon_sym_POUND_DQUOTE] = ACTIONS(918),
    [anon_sym_LBRACE] = ACTIONS(918),
    [anon_sym_COLON] = ACTIONS(918),
    [sym_upper_identifier] = ACTIONS(918),
    [sym_identifier] = ACTIONS(920),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_AMP] = ACTIONS(713),
    [anon_sym_AT] = ACTIONS(713),
    [anon_sym_TILDE] = ACTIONS(713),
    [anon_sym_SQUOTE] = ACTIONS(713),
    [sym_integer_literal] = ACTIONS(715),
    [sym_float_literal] = ACTIONS(715),
    [anon_sym_true] = ACTIONS(715),
    [anon_sym_false] = ACTIONS(715),
    [anon_sym_DQUOTE] = ACTIONS(713),
    [anon_sym_BSLASH] = ACTIONS(713),
    [anon_sym_POUND_DQUOTE] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_COLON] = ACTIONS(713),
    [sym_upper_identifier] = ACTIONS(713),
    [sym_identifier] = ACTIONS(715),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(693),
    [anon_sym_RPAREN] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_AMP] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(693),
    [anon_sym_TILDE] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(693),
    [sym_integer_literal] = ACTIONS(695),
    [sym_float_literal] = ACTIONS(695),
    [anon_sym_true] = ACTIONS(695),
    [anon_sym_false] = ACTIONS(695),
    [anon_sym_DQUOTE] = ACTIONS(693),
    [anon_sym_BSLASH] = ACTIONS(693),
    [anon_sym_POUND_DQUOTE] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(693),
    [sym_upper_identifier] = ACTIONS(693),
    [sym_identifier] = ACTIONS(695),
  },
  [158] = {
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_AMP] = ACTIONS(653),
    [anon_sym_AT] = ACTIONS(653),
    [anon_sym_TILDE] = ACTIONS(653),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [sym_integer_literal] = ACTIONS(655),
    [sym_float_literal] = ACTIONS(655),
    [anon_sym_true] = ACTIONS(655),
    [anon_sym_false] = ACTIONS(655),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [anon_sym_BSLASH] = ACTIONS(653),
    [anon_sym_POUND_DQUOTE] = ACTIONS(653),
    [anon_sym_LBRACE] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(653),
    [sym_upper_identifier] = ACTIONS(653),
    [sym_identifier] = ACTIONS(655),
  },
  [159] = {
    [anon_sym_LPAREN] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [anon_sym_AMP] = ACTIONS(922),
    [anon_sym_AT] = ACTIONS(922),
    [anon_sym_TILDE] = ACTIONS(922),
    [anon_sym_SQUOTE] = ACTIONS(922),
    [sym_integer_literal] = ACTIONS(924),
    [sym_float_literal] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(924),
    [anon_sym_false] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_BSLASH] = ACTIONS(922),
    [anon_sym_POUND_DQUOTE] = ACTIONS(922),
    [anon_sym_LBRACE] = ACTIONS(922),
    [anon_sym_COLON] = ACTIONS(922),
    [sym_upper_identifier] = ACTIONS(922),
    [sym_identifier] = ACTIONS(924),
  },
  [160] = {
    [anon_sym_LPAREN] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_AT] = ACTIONS(645),
    [anon_sym_TILDE] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(645),
    [sym_integer_literal] = ACTIONS(647),
    [sym_float_literal] = ACTIONS(647),
    [anon_sym_true] = ACTIONS(647),
    [anon_sym_false] = ACTIONS(647),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [anon_sym_BSLASH] = ACTIONS(645),
    [anon_sym_POUND_DQUOTE] = ACTIONS(645),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [sym_upper_identifier] = ACTIONS(645),
    [sym_identifier] = ACTIONS(647),
  },
  [161] = {
    [anon_sym_LPAREN] = ACTIONS(709),
    [anon_sym_RPAREN] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_AT] = ACTIONS(709),
    [anon_sym_TILDE] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_integer_literal] = ACTIONS(711),
    [sym_float_literal] = ACTIONS(711),
    [anon_sym_true] = ACTIONS(711),
    [anon_sym_false] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [anon_sym_BSLASH] = ACTIONS(709),
    [anon_sym_POUND_DQUOTE] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [sym_upper_identifier] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
  },
  [162] = {
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_RPAREN] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(926),
    [anon_sym_AMP] = ACTIONS(926),
    [anon_sym_AT] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [sym_integer_literal] = ACTIONS(928),
    [sym_float_literal] = ACTIONS(928),
    [anon_sym_true] = ACTIONS(928),
    [anon_sym_false] = ACTIONS(928),
    [anon_sym_DQUOTE] = ACTIONS(926),
    [anon_sym_BSLASH] = ACTIONS(926),
    [anon_sym_POUND_DQUOTE] = ACTIONS(926),
    [anon_sym_LBRACE] = ACTIONS(926),
    [anon_sym_COLON] = ACTIONS(926),
    [sym_upper_identifier] = ACTIONS(926),
    [sym_identifier] = ACTIONS(928),
  },
  [163] = {
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_AMP] = ACTIONS(705),
    [anon_sym_AT] = ACTIONS(705),
    [anon_sym_TILDE] = ACTIONS(705),
    [anon_sym_SQUOTE] = ACTIONS(705),
    [sym_integer_literal] = ACTIONS(707),
    [sym_float_literal] = ACTIONS(707),
    [anon_sym_true] = ACTIONS(707),
    [anon_sym_false] = ACTIONS(707),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_BSLASH] = ACTIONS(705),
    [anon_sym_POUND_DQUOTE] = ACTIONS(705),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [sym_upper_identifier] = ACTIONS(705),
    [sym_identifier] = ACTIONS(707),
  },
  [164] = {
    [anon_sym_LPAREN] = ACTIONS(930),
    [anon_sym_RPAREN] = ACTIONS(930),
    [anon_sym_LBRACK] = ACTIONS(930),
    [anon_sym_AMP] = ACTIONS(930),
    [anon_sym_AT] = ACTIONS(930),
    [anon_sym_TILDE] = ACTIONS(930),
    [anon_sym_SQUOTE] = ACTIONS(930),
    [sym_integer_literal] = ACTIONS(932),
    [sym_float_literal] = ACTIONS(932),
    [anon_sym_true] = ACTIONS(932),
    [anon_sym_false] = ACTIONS(932),
    [anon_sym_DQUOTE] = ACTIONS(930),
    [anon_sym_BSLASH] = ACTIONS(930),
    [anon_sym_POUND_DQUOTE] = ACTIONS(930),
    [anon_sym_LBRACE] = ACTIONS(930),
    [anon_sym_COLON] = ACTIONS(930),
    [sym_upper_identifier] = ACTIONS(930),
    [sym_identifier] = ACTIONS(932),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_AMP] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(689),
    [anon_sym_TILDE] = ACTIONS(689),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [sym_integer_literal] = ACTIONS(691),
    [sym_float_literal] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(691),
    [anon_sym_false] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [anon_sym_BSLASH] = ACTIONS(689),
    [anon_sym_POUND_DQUOTE] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(689),
    [anon_sym_COLON] = ACTIONS(689),
    [sym_upper_identifier] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
  },
  [166] = {
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AT] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(661),
    [sym_integer_literal] = ACTIONS(663),
    [sym_float_literal] = ACTIONS(663),
    [anon_sym_true] = ACTIONS(663),
    [anon_sym_false] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [anon_sym_BSLASH] = ACTIONS(661),
    [anon_sym_POUND_DQUOTE] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(661),
    [anon_sym_COLON] = ACTIONS(661),
    [sym_upper_identifier] = ACTIONS(661),
    [sym_identifier] = ACTIONS(663),
  },
  [167] = {
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(665),
    [anon_sym_AT] = ACTIONS(665),
    [anon_sym_TILDE] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(665),
    [sym_integer_literal] = ACTIONS(667),
    [sym_float_literal] = ACTIONS(667),
    [anon_sym_true] = ACTIONS(667),
    [anon_sym_false] = ACTIONS(667),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [anon_sym_BSLASH] = ACTIONS(665),
    [anon_sym_POUND_DQUOTE] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [sym_upper_identifier] = ACTIONS(665),
    [sym_identifier] = ACTIONS(667),
  },
  [168] = {
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
    [anon_sym_AT] = ACTIONS(669),
    [anon_sym_TILDE] = ACTIONS(669),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [sym_integer_literal] = ACTIONS(671),
    [sym_float_literal] = ACTIONS(671),
    [anon_sym_true] = ACTIONS(671),
    [anon_sym_false] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [anon_sym_BSLASH] = ACTIONS(669),
    [anon_sym_POUND_DQUOTE] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [sym_upper_identifier] = ACTIONS(669),
    [sym_identifier] = ACTIONS(671),
  },
  [169] = {
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_AMP] = ACTIONS(701),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_TILDE] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_integer_literal] = ACTIONS(703),
    [sym_float_literal] = ACTIONS(703),
    [anon_sym_true] = ACTIONS(703),
    [anon_sym_false] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [anon_sym_BSLASH] = ACTIONS(701),
    [anon_sym_POUND_DQUOTE] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(701),
    [sym_upper_identifier] = ACTIONS(701),
    [sym_identifier] = ACTIONS(703),
  },
  [170] = {
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(641),
    [anon_sym_AT] = ACTIONS(641),
    [anon_sym_TILDE] = ACTIONS(641),
    [anon_sym_SQUOTE] = ACTIONS(641),
    [sym_integer_literal] = ACTIONS(643),
    [sym_float_literal] = ACTIONS(643),
    [anon_sym_true] = ACTIONS(643),
    [anon_sym_false] = ACTIONS(643),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [anon_sym_BSLASH] = ACTIONS(641),
    [anon_sym_POUND_DQUOTE] = ACTIONS(641),
    [anon_sym_LBRACE] = ACTIONS(641),
    [anon_sym_COLON] = ACTIONS(641),
    [sym_upper_identifier] = ACTIONS(641),
    [sym_identifier] = ACTIONS(643),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_TILDE] = ACTIONS(468),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [sym_integer_literal] = ACTIONS(470),
    [sym_float_literal] = ACTIONS(470),
    [anon_sym_true] = ACTIONS(470),
    [anon_sym_false] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(468),
    [anon_sym_POUND_DQUOTE] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(468),
    [sym_upper_identifier] = ACTIONS(468),
    [sym_identifier] = ACTIONS(470),
  },
  [172] = {
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_AT] = ACTIONS(677),
    [anon_sym_TILDE] = ACTIONS(677),
    [anon_sym_SQUOTE] = ACTIONS(677),
    [sym_integer_literal] = ACTIONS(679),
    [sym_float_literal] = ACTIONS(679),
    [anon_sym_true] = ACTIONS(679),
    [anon_sym_false] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(677),
    [anon_sym_BSLASH] = ACTIONS(677),
    [anon_sym_POUND_DQUOTE] = ACTIONS(677),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_COLON] = ACTIONS(677),
    [sym_upper_identifier] = ACTIONS(677),
    [sym_identifier] = ACTIONS(679),
  },
  [173] = {
    [anon_sym_LPAREN] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_AMP] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(934),
    [anon_sym_TILDE] = ACTIONS(934),
    [anon_sym_SQUOTE] = ACTIONS(934),
    [sym_integer_literal] = ACTIONS(936),
    [sym_float_literal] = ACTIONS(936),
    [anon_sym_true] = ACTIONS(936),
    [anon_sym_false] = ACTIONS(936),
    [anon_sym_DQUOTE] = ACTIONS(934),
    [anon_sym_BSLASH] = ACTIONS(934),
    [anon_sym_POUND_DQUOTE] = ACTIONS(934),
    [anon_sym_LBRACE] = ACTIONS(934),
    [anon_sym_COLON] = ACTIONS(934),
    [sym_upper_identifier] = ACTIONS(934),
    [sym_identifier] = ACTIONS(936),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(938),
    [anon_sym_RPAREN] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(938),
    [anon_sym_AMP] = ACTIONS(938),
    [anon_sym_AT] = ACTIONS(938),
    [anon_sym_TILDE] = ACTIONS(938),
    [anon_sym_SQUOTE] = ACTIONS(938),
    [sym_integer_literal] = ACTIONS(940),
    [sym_float_literal] = ACTIONS(940),
    [anon_sym_true] = ACTIONS(940),
    [anon_sym_false] = ACTIONS(940),
    [anon_sym_DQUOTE] = ACTIONS(938),
    [anon_sym_BSLASH] = ACTIONS(938),
    [anon_sym_POUND_DQUOTE] = ACTIONS(938),
    [anon_sym_LBRACE] = ACTIONS(938),
    [anon_sym_COLON] = ACTIONS(938),
    [sym_upper_identifier] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
    [anon_sym_AT] = ACTIONS(673),
    [anon_sym_TILDE] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [sym_integer_literal] = ACTIONS(675),
    [sym_float_literal] = ACTIONS(675),
    [anon_sym_true] = ACTIONS(675),
    [anon_sym_false] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [anon_sym_BSLASH] = ACTIONS(673),
    [anon_sym_POUND_DQUOTE] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [sym_upper_identifier] = ACTIONS(673),
    [sym_identifier] = ACTIONS(675),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_AMP] = ACTIONS(685),
    [anon_sym_AT] = ACTIONS(685),
    [anon_sym_TILDE] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(685),
    [sym_integer_literal] = ACTIONS(687),
    [sym_float_literal] = ACTIONS(687),
    [anon_sym_true] = ACTIONS(687),
    [anon_sym_false] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(685),
    [anon_sym_BSLASH] = ACTIONS(685),
    [anon_sym_POUND_DQUOTE] = ACTIONS(685),
    [anon_sym_LBRACE] = ACTIONS(685),
    [anon_sym_COLON] = ACTIONS(685),
    [sym_upper_identifier] = ACTIONS(685),
    [sym_identifier] = ACTIONS(687),
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(649),
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_AT] = ACTIONS(649),
    [anon_sym_TILDE] = ACTIONS(649),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [sym_integer_literal] = ACTIONS(651),
    [sym_float_literal] = ACTIONS(651),
    [anon_sym_true] = ACTIONS(651),
    [anon_sym_false] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [anon_sym_BSLASH] = ACTIONS(649),
    [anon_sym_POUND_DQUOTE] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(649),
    [sym_upper_identifier] = ACTIONS(649),
    [sym_identifier] = ACTIONS(651),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(892),
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(892),
    [anon_sym_AT] = ACTIONS(892),
    [anon_sym_TILDE] = ACTIONS(892),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [sym_integer_literal] = ACTIONS(896),
    [sym_float_literal] = ACTIONS(896),
    [anon_sym_true] = ACTIONS(896),
    [anon_sym_false] = ACTIONS(896),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_BSLASH] = ACTIONS(892),
    [anon_sym_POUND_DQUOTE] = ACTIONS(892),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_COLON] = ACTIONS(892),
    [sym_upper_identifier] = ACTIONS(892),
    [sym_identifier] = ACTIONS(896),
  },
  [179] = {
    [sym__literals] = STATE(190),
    [sym_bool_literal] = STATE(190),
    [sym_str_literal] = STATE(190),
    [sym_char_literal] = STATE(190),
    [sym_pattern_literal] = STATE(190),
    [sym_array_expression] = STATE(190),
    [sym_map_expression] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(942),
    [sym_float_literal] = ACTIONS(942),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(942),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_RBRACK] = ACTIONS(697),
    [sym_integer_literal] = ACTIONS(699),
    [sym_float_literal] = ACTIONS(699),
    [anon_sym_true] = ACTIONS(699),
    [anon_sym_false] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [anon_sym_BSLASH] = ACTIONS(697),
    [anon_sym_POUND_DQUOTE] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_RBRACE] = ACTIONS(697),
    [sym_identifier] = ACTIONS(699),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_integer_literal] = ACTIONS(691),
    [sym_float_literal] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(691),
    [anon_sym_false] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [anon_sym_BSLASH] = ACTIONS(689),
    [anon_sym_POUND_DQUOTE] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(689),
    [anon_sym_RBRACE] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym_integer_literal] = ACTIONS(675),
    [sym_float_literal] = ACTIONS(675),
    [anon_sym_true] = ACTIONS(675),
    [anon_sym_false] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [anon_sym_BSLASH] = ACTIONS(673),
    [anon_sym_POUND_DQUOTE] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [sym_identifier] = ACTIONS(675),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [sym_integer_literal] = ACTIONS(679),
    [sym_float_literal] = ACTIONS(679),
    [anon_sym_true] = ACTIONS(679),
    [anon_sym_false] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(677),
    [anon_sym_BSLASH] = ACTIONS(677),
    [anon_sym_POUND_DQUOTE] = ACTIONS(677),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(677),
    [sym_identifier] = ACTIONS(679),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_integer_literal] = ACTIONS(651),
    [sym_float_literal] = ACTIONS(651),
    [anon_sym_true] = ACTIONS(651),
    [anon_sym_false] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [anon_sym_BSLASH] = ACTIONS(649),
    [anon_sym_POUND_DQUOTE] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(649),
    [anon_sym_RBRACE] = ACTIONS(649),
    [sym_identifier] = ACTIONS(651),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_RBRACK] = ACTIONS(685),
    [sym_integer_literal] = ACTIONS(687),
    [sym_float_literal] = ACTIONS(687),
    [anon_sym_true] = ACTIONS(687),
    [anon_sym_false] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(685),
    [anon_sym_BSLASH] = ACTIONS(685),
    [anon_sym_POUND_DQUOTE] = ACTIONS(685),
    [anon_sym_LBRACE] = ACTIONS(685),
    [anon_sym_RBRACE] = ACTIONS(685),
    [sym_identifier] = ACTIONS(687),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [sym_integer_literal] = ACTIONS(663),
    [sym_float_literal] = ACTIONS(663),
    [anon_sym_true] = ACTIONS(663),
    [anon_sym_false] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [anon_sym_BSLASH] = ACTIONS(661),
    [anon_sym_POUND_DQUOTE] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(661),
    [anon_sym_RBRACE] = ACTIONS(661),
    [sym_identifier] = ACTIONS(663),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [sym_integer_literal] = ACTIONS(671),
    [sym_float_literal] = ACTIONS(671),
    [anon_sym_true] = ACTIONS(671),
    [anon_sym_false] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [anon_sym_BSLASH] = ACTIONS(669),
    [anon_sym_POUND_DQUOTE] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(669),
    [sym_identifier] = ACTIONS(671),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym_integer_literal] = ACTIONS(659),
    [sym_float_literal] = ACTIONS(659),
    [anon_sym_true] = ACTIONS(659),
    [anon_sym_false] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [anon_sym_BSLASH] = ACTIONS(657),
    [anon_sym_POUND_DQUOTE] = ACTIONS(657),
    [anon_sym_LBRACE] = ACTIONS(657),
    [anon_sym_RBRACE] = ACTIONS(657),
    [sym_identifier] = ACTIONS(659),
  },
  [189] = {
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym_integer_literal] = ACTIONS(667),
    [sym_float_literal] = ACTIONS(667),
    [anon_sym_true] = ACTIONS(667),
    [anon_sym_false] = ACTIONS(667),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [anon_sym_BSLASH] = ACTIONS(665),
    [anon_sym_POUND_DQUOTE] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_RBRACE] = ACTIONS(665),
    [sym_identifier] = ACTIONS(667),
  },
  [190] = {
    [anon_sym_LBRACK] = ACTIONS(944),
    [sym_integer_literal] = ACTIONS(946),
    [sym_float_literal] = ACTIONS(946),
    [anon_sym_true] = ACTIONS(946),
    [anon_sym_false] = ACTIONS(946),
    [anon_sym_DQUOTE] = ACTIONS(944),
    [anon_sym_BSLASH] = ACTIONS(944),
    [anon_sym_POUND_DQUOTE] = ACTIONS(944),
    [anon_sym_LBRACE] = ACTIONS(944),
    [anon_sym_RBRACE] = ACTIONS(944),
    [sym_identifier] = ACTIONS(946),
  },
  [191] = {
    [sym_symbol] = STATE(192),
    [aux_sym_parameters_repeat1] = STATE(192),
    [anon_sym_RBRACK] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_identifier] = ACTIONS(950),
  },
  [192] = {
    [sym_symbol] = STATE(192),
    [aux_sym_parameters_repeat1] = STATE(192),
    [anon_sym_RBRACK] = ACTIONS(952),
    [anon_sym_COLON] = ACTIONS(954),
    [sym_identifier] = ACTIONS(957),
  },
  [193] = {
    [sym_fields] = STATE(266),
    [aux_sym__deftype2_repeat1] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(960),
    [anon_sym_RPAREN] = ACTIONS(962),
    [anon_sym_LBRACK] = ACTIONS(964),
  },
  [194] = {
    [sym_symbol] = STATE(191),
    [aux_sym_parameters_repeat1] = STATE(191),
    [anon_sym_RBRACK] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_identifier] = ACTIONS(968),
  },
  [195] = {
    [sym__deftype1] = STATE(301),
    [sym__deftype2] = STATE(301),
    [sym__name_deftypes] = STATE(193),
    [anon_sym_LPAREN] = ACTIONS(970),
    [sym_identifier] = ACTIONS(972),
  },
  [196] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [197] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(980),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [198] = {
    [aux_sym_str_literal_repeat1] = STATE(204),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [aux_sym_str_literal_token1] = ACTIONS(984),
    [sym_escape_sequence] = ACTIONS(986),
  },
  [199] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(988),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [200] = {
    [aux_sym_str_literal_repeat1] = STATE(199),
    [anon_sym_DQUOTE] = ACTIONS(990),
    [aux_sym_str_literal_token1] = ACTIONS(992),
    [sym_escape_sequence] = ACTIONS(994),
  },
  [201] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(996),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [202] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(998),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [203] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(1000),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [204] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(1002),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [205] = {
    [aux_sym_str_literal_repeat1] = STATE(202),
    [anon_sym_DQUOTE] = ACTIONS(1004),
    [aux_sym_str_literal_token1] = ACTIONS(1006),
    [sym_escape_sequence] = ACTIONS(1008),
  },
  [206] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(1010),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [207] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [208] = {
    [aux_sym_str_literal_repeat1] = STATE(203),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [aux_sym_str_literal_token1] = ACTIONS(1016),
    [sym_escape_sequence] = ACTIONS(1018),
  },
  [209] = {
    [aux_sym_str_literal_repeat1] = STATE(196),
    [anon_sym_DQUOTE] = ACTIONS(1020),
    [aux_sym_str_literal_token1] = ACTIONS(1022),
    [sym_escape_sequence] = ACTIONS(1024),
  },
  [210] = {
    [aux_sym_str_literal_repeat1] = STATE(201),
    [anon_sym_DQUOTE] = ACTIONS(1026),
    [aux_sym_str_literal_token1] = ACTIONS(1028),
    [sym_escape_sequence] = ACTIONS(1030),
  },
  [211] = {
    [aux_sym_str_literal_repeat1] = STATE(206),
    [anon_sym_DQUOTE] = ACTIONS(1032),
    [aux_sym_str_literal_token1] = ACTIONS(1034),
    [sym_escape_sequence] = ACTIONS(1036),
  },
  [212] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(1038),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [213] = {
    [aux_sym_str_literal_repeat1] = STATE(207),
    [anon_sym_DQUOTE] = ACTIONS(1040),
    [aux_sym_str_literal_token1] = ACTIONS(1042),
    [sym_escape_sequence] = ACTIONS(1044),
  },
  [214] = {
    [aux_sym_str_literal_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(1046),
    [aux_sym_str_literal_token1] = ACTIONS(1048),
    [sym_escape_sequence] = ACTIONS(1051),
  },
  [215] = {
    [aux_sym_str_literal_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(1054),
    [aux_sym_str_literal_token1] = ACTIONS(1056),
    [sym_escape_sequence] = ACTIONS(1058),
  },
  [216] = {
    [aux_sym_str_literal_repeat1] = STATE(212),
    [anon_sym_DQUOTE] = ACTIONS(1060),
    [aux_sym_str_literal_token1] = ACTIONS(1062),
    [sym_escape_sequence] = ACTIONS(1064),
  },
  [217] = {
    [aux_sym_let_pairs_repeat1] = STATE(223),
    [anon_sym_RBRACK] = ACTIONS(1066),
    [sym_identifier] = ACTIONS(1068),
  },
  [218] = {
    [anon_sym_RBRACK] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(701),
    [sym_identifier] = ACTIONS(701),
  },
  [219] = {
    [anon_sym_LPAREN] = ACTIONS(1070),
    [anon_sym_RPAREN] = ACTIONS(1070),
    [anon_sym_LBRACK] = ACTIONS(1070),
  },
  [220] = {
    [aux_sym__deftype2_repeat1] = STATE(220),
    [anon_sym_LPAREN] = ACTIONS(1072),
    [anon_sym_RPAREN] = ACTIONS(1075),
  },
  [221] = {
    [sym_interface_fn] = STATE(289),
    [anon_sym_Fn] = ACTIONS(1077),
    [anon_sym_] = ACTIONS(1077),
  },
  [222] = {
    [aux_sym__name_deftypes_repeat1] = STATE(227),
    [anon_sym_RPAREN] = ACTIONS(1079),
    [sym_identifier] = ACTIONS(1081),
  },
  [223] = {
    [aux_sym_let_pairs_repeat1] = STATE(223),
    [anon_sym_RBRACK] = ACTIONS(1083),
    [sym_identifier] = ACTIONS(1085),
  },
  [224] = {
    [aux_sym_let_pairs_repeat1] = STATE(217),
    [anon_sym_RBRACK] = ACTIONS(1088),
    [sym_identifier] = ACTIONS(1068),
  },
  [225] = {
    [aux_sym__deftype2_repeat1] = STATE(220),
    [anon_sym_LPAREN] = ACTIONS(960),
    [anon_sym_RPAREN] = ACTIONS(1090),
  },
  [226] = {
    [anon_sym_LPAREN] = ACTIONS(1092),
    [anon_sym_RPAREN] = ACTIONS(1092),
    [anon_sym_LBRACK] = ACTIONS(1092),
  },
  [227] = {
    [aux_sym__name_deftypes_repeat1] = STATE(228),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [sym_identifier] = ACTIONS(1096),
  },
  [228] = {
    [aux_sym__name_deftypes_repeat1] = STATE(228),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [sym_identifier] = ACTIONS(1100),
  },
  [229] = {
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_RPAREN] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
  },
  [230] = {
    [anon_sym_RBRACK] = ACTIONS(661),
    [sym_identifier] = ACTIONS(661),
  },
  [231] = {
    [sym_str_literal] = STATE(154),
    [anon_sym_DQUOTE] = ACTIONS(71),
  },
  [232] = {
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym_identifier] = ACTIONS(657),
  },
  [233] = {
    [sym_upper_identifier] = ACTIONS(1105),
    [sym_identifier] = ACTIONS(1107),
  },
  [234] = {
    [sym_fields] = STATE(291),
    [anon_sym_LBRACK] = ACTIONS(1109),
  },
  [235] = {
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym_identifier] = ACTIONS(665),
  },
  [236] = {
    [anon_sym_RBRACK] = ACTIONS(669),
    [sym_identifier] = ACTIONS(669),
  },
  [237] = {
    [anon_sym_RBRACK] = ACTIONS(468),
    [sym_identifier] = ACTIONS(468),
  },
  [238] = {
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym_identifier] = ACTIONS(673),
  },
  [239] = {
    [anon_sym_RBRACK] = ACTIONS(677),
    [sym_identifier] = ACTIONS(677),
  },
  [240] = {
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_identifier] = ACTIONS(649),
  },
  [241] = {
    [anon_sym_RBRACK] = ACTIONS(685),
    [sym_identifier] = ACTIONS(685),
  },
  [242] = {
    [sym_parameters] = STATE(25),
    [anon_sym_LBRACK] = ACTIONS(1111),
  },
  [243] = {
    [sym_let_pairs] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(1113),
  },
  [244] = {
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_identifier] = ACTIONS(689),
  },
  [245] = {
    [anon_sym_RBRACK] = ACTIONS(697),
    [sym_identifier] = ACTIONS(697),
  },
  [246] = {
    [anon_sym_RBRACK] = ACTIONS(1115),
    [sym_identifier] = ACTIONS(1115),
  },
  [247] = {
    [aux_sym_str_literal_token1] = ACTIONS(1117),
    [sym_escape_sequence] = ACTIONS(1119),
  },
  [248] = {
    [aux_sym_str_literal_token1] = ACTIONS(1121),
    [sym_escape_sequence] = ACTIONS(1123),
  },
  [249] = {
    [anon_sym_LPAREN] = ACTIONS(1125),
    [anon_sym_RPAREN] = ACTIONS(1125),
  },
  [250] = {
    [aux_sym_str_literal_token1] = ACTIONS(1127),
    [sym_escape_sequence] = ACTIONS(1129),
  },
  [251] = {
    [sym_typed_parameters] = STATE(69),
    [anon_sym_LBRACK] = ACTIONS(1131),
  },
  [252] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(1111),
  },
  [253] = {
    [aux_sym_str_literal_token1] = ACTIONS(1133),
    [sym_escape_sequence] = ACTIONS(1135),
  },
  [254] = {
    [aux_sym_str_literal_token1] = ACTIONS(1137),
    [sym_escape_sequence] = ACTIONS(1139),
  },
  [255] = {
    [sym_str_literal] = STATE(154),
    [anon_sym_DQUOTE] = ACTIONS(256),
  },
  [256] = {
    [sym_parameters] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(1111),
  },
  [257] = {
    [sym_parameters] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(1111),
  },
  [258] = {
    [sym_upper_identifier] = ACTIONS(1141),
    [sym_identifier] = ACTIONS(1143),
  },
  [259] = {
    [anon_sym_RBRACK] = ACTIONS(713),
    [sym_identifier] = ACTIONS(713),
  },
  [260] = {
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_identifier] = ACTIONS(681),
  },
  [261] = {
    [anon_sym_RBRACK] = ACTIONS(693),
    [sym_identifier] = ACTIONS(693),
  },
  [262] = {
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym_identifier] = ACTIONS(653),
  },
  [263] = {
    [anon_sym_RPAREN] = ACTIONS(1145),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(1147),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(1149),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(1151),
  },
  [267] = {
    [anon_sym_RPAREN] = ACTIONS(1153),
  },
  [268] = {
    [anon_sym_RPAREN2] = ACTIONS(1145),
  },
  [269] = {
    [anon_sym_RPAREN2] = ACTIONS(1155),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(1157),
  },
  [271] = {
    [aux_sym_line_comment_token1] = ACTIONS(1159),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(1161),
  },
  [273] = {
    [sym_identifier] = ACTIONS(1163),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(1165),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(1167),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(1169),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(1171),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(1173),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(1175),
  },
  [280] = {
    [sym_identifier] = ACTIONS(1177),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(1179),
  },
  [282] = {
    [sym_identifier] = ACTIONS(1181),
  },
  [283] = {
    [anon_sym_RPAREN] = ACTIONS(1183),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(1185),
  },
  [285] = {
    [sym_identifier] = ACTIONS(1187),
  },
  [286] = {
    [anon_sym_RPAREN] = ACTIONS(1189),
  },
  [287] = {
    [anon_sym_LPAREN] = ACTIONS(1191),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(1193),
  },
  [289] = {
    [anon_sym_RPAREN] = ACTIONS(1195),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(1197),
  },
  [291] = {
    [anon_sym_RPAREN2] = ACTIONS(1199),
  },
  [292] = {
    [anon_sym_RPAREN] = ACTIONS(1201),
  },
  [293] = {
    [sym_identifier] = ACTIONS(1203),
  },
  [294] = {
    [sym_identifier] = ACTIONS(1205),
  },
  [295] = {
    [sym_identifier] = ACTIONS(1207),
  },
  [296] = {
    [sym_identifier] = ACTIONS(1209),
  },
  [297] = {
    [sym_identifier] = ACTIONS(1211),
  },
  [298] = {
    [sym_identifier] = ACTIONS(1213),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(1215),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(1217),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(1219),
  },
  [302] = {
    [anon_sym_RPAREN] = ACTIONS(1221),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(1223),
  },
  [304] = {
    [sym_identifier] = ACTIONS(1225),
  },
  [305] = {
    [sym_identifier] = ACTIONS(1227),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(1155),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(1229),
  },
  [308] = {
    [sym_identifier] = ACTIONS(1231),
  },
  [309] = {
    [sym_identifier] = ACTIONS(1233),
  },
  [310] = {
    [sym_identifier] = ACTIONS(1235),
  },
  [311] = {
    [sym_upper_identifier] = ACTIONS(1237),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(1239),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(271),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(67),
  [11] = {.count = 1, .reusable = false}, SHIFT(67),
  [13] = {.count = 1, .reusable = true}, SHIFT(66),
  [15] = {.count = 1, .reusable = false}, SHIFT(66),
  [17] = {.count = 1, .reusable = false}, SHIFT(311),
  [19] = {.count = 1, .reusable = false}, SHIFT(310),
  [21] = {.count = 1, .reusable = false}, SHIFT(308),
  [23] = {.count = 1, .reusable = false}, SHIFT(242),
  [25] = {.count = 1, .reusable = false}, SHIFT(304),
  [27] = {.count = 1, .reusable = false}, SHIFT(243),
  [29] = {.count = 1, .reusable = true}, SHIFT(116),
  [31] = {.count = 1, .reusable = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(63),
  [35] = {.count = 1, .reusable = false}, SHIFT(61),
  [37] = {.count = 1, .reusable = false}, SHIFT(46),
  [39] = {.count = 1, .reusable = false}, SHIFT(33),
  [41] = {.count = 1, .reusable = false}, SHIFT(298),
  [43] = {.count = 1, .reusable = false}, SHIFT(100),
  [45] = {.count = 1, .reusable = false}, SHIFT(30),
  [47] = {.count = 1, .reusable = false}, SHIFT(297),
  [49] = {.count = 1, .reusable = false}, SHIFT(296),
  [51] = {.count = 1, .reusable = false}, SHIFT(295),
  [53] = {.count = 1, .reusable = false}, SHIFT(294),
  [55] = {.count = 1, .reusable = false}, SHIFT(293),
  [57] = {.count = 1, .reusable = false}, SHIFT(195),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = true}, SHIFT(38),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = true}, SHIFT(40),
  [67] = {.count = 1, .reusable = false}, SHIFT(274),
  [69] = {.count = 1, .reusable = false}, SHIFT(180),
  [71] = {.count = 1, .reusable = true}, SHIFT(198),
  [73] = {.count = 1, .reusable = true}, SHIFT(253),
  [75] = {.count = 1, .reusable = true}, SHIFT(200),
  [77] = {.count = 1, .reusable = true}, SHIFT(146),
  [79] = {.count = 1, .reusable = true}, SHIFT(280),
  [81] = {.count = 1, .reusable = true}, SHIFT(144),
  [83] = {.count = 1, .reusable = false}, SHIFT(178),
  [85] = {.count = 1, .reusable = false}, SHIFT(303),
  [87] = {.count = 1, .reusable = false}, SHIFT(278),
  [89] = {.count = 1, .reusable = false}, SHIFT(270),
  [91] = {.count = 1, .reusable = false}, SHIFT(277),
  [93] = {.count = 1, .reusable = true}, SHIFT(2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [97] = {.count = 1, .reusable = false}, SHIFT(309),
  [99] = {.count = 1, .reusable = true}, SHIFT(133),
  [101] = {.count = 1, .reusable = true}, SHIFT(55),
  [103] = {.count = 1, .reusable = true}, SHIFT(54),
  [105] = {.count = 1, .reusable = true}, SHIFT(53),
  [107] = {.count = 1, .reusable = true}, SHIFT(51),
  [109] = {.count = 1, .reusable = false}, SHIFT(119),
  [111] = {.count = 1, .reusable = false}, SHIFT(123),
  [113] = {.count = 1, .reusable = true}, SHIFT(213),
  [115] = {.count = 1, .reusable = true}, SHIFT(254),
  [117] = {.count = 1, .reusable = true}, SHIFT(210),
  [119] = {.count = 1, .reusable = true}, SHIFT(135),
  [121] = {.count = 1, .reusable = true}, SHIFT(273),
  [123] = {.count = 1, .reusable = true}, SHIFT(119),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(2),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(309),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(133),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(55),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(54),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(53),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(51),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(119),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(123),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(213),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(254),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(210),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(135),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(273),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 41), SHIFT_REPEAT(119),
  [176] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(5),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(142),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(28),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(47),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(39),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(56),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(64),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(152),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(211),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(250),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(209),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(124),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(280),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(64),
  [240] = {.count = 1, .reusable = true}, SHIFT(5),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_match, 3, .production_id = 9),
  [244] = {.count = 1, .reusable = true}, SHIFT(142),
  [246] = {.count = 1, .reusable = true}, SHIFT(28),
  [248] = {.count = 1, .reusable = true}, SHIFT(47),
  [250] = {.count = 1, .reusable = true}, SHIFT(56),
  [252] = {.count = 1, .reusable = false}, SHIFT(64),
  [254] = {.count = 1, .reusable = false}, SHIFT(152),
  [256] = {.count = 1, .reusable = true}, SHIFT(211),
  [258] = {.count = 1, .reusable = true}, SHIFT(250),
  [260] = {.count = 1, .reusable = true}, SHIFT(209),
  [262] = {.count = 1, .reusable = true}, SHIFT(124),
  [264] = {.count = 1, .reusable = true}, SHIFT(64),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_match, 2, .production_id = 9),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(5),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(142),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(28),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(47),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(39),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(56),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(15),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(152),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(211),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(250),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(209),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(124),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(280),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(15),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [314] = {.count = 1, .reusable = false}, SHIFT(164),
  [316] = {.count = 1, .reusable = true}, SHIFT(164),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(5),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(142),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(28),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(47),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(39),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(56),
  [338] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(164),
  [341] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(152),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(211),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(250),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(209),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(124),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(280),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(164),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [364] = {.count = 1, .reusable = false}, SHIFT(15),
  [366] = {.count = 1, .reusable = true}, SHIFT(15),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [370] = {.count = 1, .reusable = false}, SHIFT(18),
  [372] = {.count = 1, .reusable = true}, SHIFT(18),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [378] = {.count = 1, .reusable = true}, SHIFT(49),
  [380] = {.count = 1, .reusable = false}, SHIFT(272),
  [382] = {.count = 1, .reusable = true}, SHIFT(272),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [386] = {.count = 1, .reusable = false}, SHIFT(276),
  [388] = {.count = 1, .reusable = true}, SHIFT(276),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [392] = {.count = 1, .reusable = false}, SHIFT(279),
  [394] = {.count = 1, .reusable = true}, SHIFT(279),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [398] = {.count = 1, .reusable = false}, SHIFT(264),
  [400] = {.count = 1, .reusable = true}, SHIFT(264),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [404] = {.count = 1, .reusable = false}, SHIFT(302),
  [406] = {.count = 1, .reusable = true}, SHIFT(302),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [410] = {.count = 1, .reusable = false}, SHIFT(284),
  [412] = {.count = 1, .reusable = true}, SHIFT(284),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [416] = {.count = 1, .reusable = false}, SHIFT(300),
  [418] = {.count = 1, .reusable = true}, SHIFT(300),
  [420] = {.count = 1, .reusable = false}, SHIFT(158),
  [422] = {.count = 1, .reusable = true}, SHIFT(158),
  [424] = {.count = 1, .reusable = false}, SHIFT(283),
  [426] = {.count = 1, .reusable = true}, SHIFT(283),
  [428] = {.count = 1, .reusable = false}, SHIFT(14),
  [430] = {.count = 1, .reusable = true}, SHIFT(14),
  [432] = {.count = 1, .reusable = true}, SHIFT(3),
  [434] = {.count = 1, .reusable = true}, SHIFT(112),
  [436] = {.count = 1, .reusable = true}, SHIFT(32),
  [438] = {.count = 1, .reusable = true}, SHIFT(31),
  [440] = {.count = 1, .reusable = true}, SHIFT(36),
  [442] = {.count = 1, .reusable = true}, SHIFT(60),
  [444] = {.count = 1, .reusable = false}, SHIFT(84),
  [446] = {.count = 1, .reusable = false}, SHIFT(85),
  [448] = {.count = 1, .reusable = true}, SHIFT(216),
  [450] = {.count = 1, .reusable = true}, SHIFT(247),
  [452] = {.count = 1, .reusable = true}, SHIFT(215),
  [454] = {.count = 1, .reusable = true}, SHIFT(118),
  [456] = {.count = 1, .reusable = true}, SHIFT(305),
  [458] = {.count = 1, .reusable = true}, SHIFT(84),
  [460] = {.count = 1, .reusable = false}, SHIFT(73),
  [462] = {.count = 1, .reusable = true}, SHIFT(73),
  [464] = {.count = 1, .reusable = false}, SHIFT(288),
  [466] = {.count = 1, .reusable = true}, SHIFT(288),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(101),
  [475] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [477] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(87),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(36),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(60),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(88),
  [495] = {.count = 1, .reusable = false}, SHIFT(81),
  [497] = {.count = 1, .reusable = true}, SHIFT(81),
  [499] = {.count = 1, .reusable = false}, SHIFT(157),
  [501] = {.count = 1, .reusable = true}, SHIFT(157),
  [503] = {.count = 1, .reusable = false}, SHIFT(150),
  [505] = {.count = 1, .reusable = true}, SHIFT(150),
  [507] = {.count = 1, .reusable = false}, SHIFT(156),
  [509] = {.count = 1, .reusable = true}, SHIFT(156),
  [511] = {.count = 1, .reusable = true}, SHIFT(6),
  [513] = {.count = 1, .reusable = true}, SHIFT(145),
  [515] = {.count = 1, .reusable = true}, SHIFT(44),
  [517] = {.count = 1, .reusable = true}, SHIFT(43),
  [519] = {.count = 1, .reusable = true}, SHIFT(42),
  [521] = {.count = 1, .reusable = true}, SHIFT(41),
  [523] = {.count = 1, .reusable = false}, SHIFT(259),
  [525] = {.count = 1, .reusable = false}, SHIFT(245),
  [527] = {.count = 1, .reusable = true}, SHIFT(205),
  [529] = {.count = 1, .reusable = true}, SHIFT(248),
  [531] = {.count = 1, .reusable = true}, SHIFT(208),
  [533] = {.count = 1, .reusable = true}, SHIFT(147),
  [535] = {.count = 1, .reusable = true}, SHIFT(282),
  [537] = {.count = 1, .reusable = true}, SHIFT(259),
  [539] = {.count = 1, .reusable = false}, SHIFT(260),
  [541] = {.count = 1, .reusable = true}, SHIFT(260),
  [543] = {.count = 1, .reusable = false}, SHIFT(261),
  [545] = {.count = 1, .reusable = true}, SHIFT(261),
  [547] = {.count = 1, .reusable = false}, SHIFT(262),
  [549] = {.count = 1, .reusable = true}, SHIFT(262),
  [551] = {.count = 1, .reusable = true}, SHIFT(101),
  [553] = {.count = 1, .reusable = true}, SHIFT(92),
  [555] = {.count = 1, .reusable = false}, SHIFT(87),
  [557] = {.count = 1, .reusable = false}, SHIFT(88),
  [559] = {.count = 1, .reusable = false}, SHIFT(267),
  [561] = {.count = 1, .reusable = true}, SHIFT(267),
  [563] = {.count = 1, .reusable = true}, SHIFT(91),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_line_comment, 2),
  [569] = {.count = 1, .reusable = false}, SHIFT(127),
  [571] = {.count = 1, .reusable = true}, SHIFT(127),
  [573] = {.count = 1, .reusable = false}, SHIFT(307),
  [575] = {.count = 1, .reusable = true}, SHIFT(307),
  [577] = {.count = 1, .reusable = false}, SHIFT(128),
  [579] = {.count = 1, .reusable = true}, SHIFT(128),
  [581] = {.count = 1, .reusable = false}, SHIFT(109),
  [583] = {.count = 1, .reusable = true}, SHIFT(109),
  [585] = {.count = 1, .reusable = false}, SHIFT(138),
  [587] = {.count = 1, .reusable = true}, SHIFT(138),
  [589] = {.count = 1, .reusable = false}, SHIFT(246),
  [591] = {.count = 1, .reusable = true}, SHIFT(246),
  [593] = {.count = 1, .reusable = false}, SHIFT(134),
  [595] = {.count = 1, .reusable = true}, SHIFT(134),
  [597] = {.count = 1, .reusable = false}, SHIFT(65),
  [599] = {.count = 1, .reusable = true}, SHIFT(65),
  [601] = {.count = 1, .reusable = false}, SHIFT(89),
  [603] = {.count = 1, .reusable = true}, SHIFT(89),
  [605] = {.count = 1, .reusable = false}, SHIFT(26),
  [607] = {.count = 1, .reusable = true}, SHIFT(26),
  [609] = {.count = 1, .reusable = false}, SHIFT(265),
  [611] = {.count = 1, .reusable = true}, SHIFT(265),
  [613] = {.count = 1, .reusable = false}, SHIFT(59),
  [615] = {.count = 1, .reusable = true}, SHIFT(59),
  [617] = {.count = 1, .reusable = false}, SHIFT(173),
  [619] = {.count = 1, .reusable = true}, SHIFT(173),
  [621] = {.count = 1, .reusable = false}, SHIFT(290),
  [623] = {.count = 1, .reusable = true}, SHIFT(290),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_operators, 1),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym_operators, 1),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_other_str, 1),
  [631] = {.count = 1, .reusable = false}, REDUCE(sym_other_str, 1),
  [633] = {.count = 1, .reusable = true}, SHIFT(90),
  [635] = {.count = 1, .reusable = false}, SHIFT(163),
  [637] = {.count = 1, .reusable = false}, SHIFT(161),
  [639] = {.count = 1, .reusable = true}, SHIFT(107),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [651] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [655] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [659] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [663] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [679] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [707] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [711] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [717] = {.count = 1, .reusable = true}, SHIFT(160),
  [719] = {.count = 1, .reusable = false}, SHIFT(113),
  [721] = {.count = 1, .reusable = false}, SHIFT(251),
  [723] = {.count = 1, .reusable = false}, SHIFT(106),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [733] = {.count = 1, .reusable = true}, SHIFT(268),
  [735] = {.count = 1, .reusable = false}, SHIFT(99),
  [737] = {.count = 1, .reusable = false}, SHIFT(98),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(101),
  [742] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [744] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(99),
  [747] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(98),
  [750] = {.count = 1, .reusable = true}, SHIFT(263),
  [752] = {.count = 1, .reusable = true}, SHIFT(306),
  [754] = {.count = 1, .reusable = true}, SHIFT(269),
  [756] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [758] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [760] = {.count = 1, .reusable = true}, SHIFT(102),
  [762] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 42),
  [764] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 42),
  [766] = {.count = 1, .reusable = true}, SHIFT(103),
  [768] = {.count = 1, .reusable = true}, SHIFT(71),
  [770] = {.count = 1, .reusable = false}, SHIFT(105),
  [772] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [774] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 42),
  [776] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 42),
  [778] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [780] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(113),
  [783] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(104),
  [786] = {.count = 1, .reusable = true}, SHIFT(70),
  [788] = {.count = 1, .reusable = false}, SHIFT(104),
  [790] = {.count = 1, .reusable = true}, SHIFT(170),
  [792] = {.count = 1, .reusable = true}, SHIFT(83),
  [794] = {.count = 1, .reusable = false}, SHIFT(121),
  [796] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [798] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [800] = {.count = 1, .reusable = false}, SHIFT(179),
  [802] = {.count = 1, .reusable = true}, SHIFT(151),
  [804] = {.count = 1, .reusable = true}, SHIFT(181),
  [806] = {.count = 1, .reusable = false}, SHIFT(126),
  [808] = {.count = 1, .reusable = true}, SHIFT(79),
  [810] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [812] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [814] = {.count = 1, .reusable = true}, SHIFT(188),
  [816] = {.count = 1, .reusable = true}, SHIFT(77),
  [818] = {.count = 1, .reusable = false}, SHIFT(125),
  [820] = {.count = 1, .reusable = true}, SHIFT(175),
  [822] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(116),
  [825] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [827] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(125),
  [830] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(180),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(198),
  [836] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(253),
  [839] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(200),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(146),
  [845] = {.count = 1, .reusable = true}, SHIFT(187),
  [847] = {.count = 1, .reusable = true}, SHIFT(168),
  [849] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(116),
  [852] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(179),
  [855] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(180),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(198),
  [861] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(253),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(200),
  [867] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(146),
  [870] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [872] = {.count = 1, .reusable = true}, SHIFT(74),
  [874] = {.count = 1, .reusable = true}, SHIFT(122),
  [876] = {.count = 1, .reusable = false}, SHIFT(139),
  [878] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [880] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [882] = {.count = 1, .reusable = true}, SHIFT(111),
  [884] = {.count = 1, .reusable = true}, SHIFT(136),
  [886] = {.count = 1, .reusable = true}, SHIFT(143),
  [888] = {.count = 1, .reusable = true}, SHIFT(165),
  [890] = {.count = 1, .reusable = false}, SHIFT(129),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [894] = {.count = 1, .reusable = true}, SHIFT(233),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [898] = {.count = 1, .reusable = true}, SHIFT(244),
  [900] = {.count = 1, .reusable = false}, SHIFT(148),
  [902] = {.count = 1, .reusable = true}, SHIFT(182),
  [904] = {.count = 1, .reusable = true}, SHIFT(238),
  [906] = {.count = 1, .reusable = true}, SHIFT(236),
  [908] = {.count = 1, .reusable = true}, SHIFT(232),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [916] = {.count = 1, .reusable = false}, REDUCE(sym_doc, 3, .production_id = 15),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [920] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [922] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [924] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [928] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [930] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [932] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_match_case, 2, .production_id = 38),
  [936] = {.count = 1, .reusable = false}, REDUCE(sym_match_case, 2, .production_id = 38),
  [938] = {.count = 1, .reusable = true}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [940] = {.count = 1, .reusable = false}, REDUCE(sym_call_with_module, 3, .production_id = 32),
  [942] = {.count = 1, .reusable = false}, SHIFT(190),
  [944] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [946] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [948] = {.count = 1, .reusable = true}, SHIFT(153),
  [950] = {.count = 1, .reusable = true}, SHIFT(192),
  [952] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [954] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(282),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(192),
  [960] = {.count = 1, .reusable = true}, SHIFT(258),
  [962] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [964] = {.count = 1, .reusable = true}, SHIFT(96),
  [966] = {.count = 1, .reusable = true}, SHIFT(155),
  [968] = {.count = 1, .reusable = true}, SHIFT(191),
  [970] = {.count = 1, .reusable = true}, SHIFT(285),
  [972] = {.count = 1, .reusable = true}, SHIFT(219),
  [974] = {.count = 1, .reusable = false}, SHIFT(166),
  [976] = {.count = 1, .reusable = false}, SHIFT(214),
  [978] = {.count = 1, .reusable = true}, SHIFT(214),
  [980] = {.count = 1, .reusable = false}, SHIFT(75),
  [982] = {.count = 1, .reusable = false}, SHIFT(185),
  [984] = {.count = 1, .reusable = false}, SHIFT(204),
  [986] = {.count = 1, .reusable = true}, SHIFT(204),
  [988] = {.count = 1, .reusable = false}, SHIFT(186),
  [990] = {.count = 1, .reusable = false}, SHIFT(183),
  [992] = {.count = 1, .reusable = false}, SHIFT(199),
  [994] = {.count = 1, .reusable = true}, SHIFT(199),
  [996] = {.count = 1, .reusable = false}, SHIFT(141),
  [998] = {.count = 1, .reusable = false}, SHIFT(235),
  [1000] = {.count = 1, .reusable = false}, SHIFT(230),
  [1002] = {.count = 1, .reusable = false}, SHIFT(189),
  [1004] = {.count = 1, .reusable = false}, SHIFT(241),
  [1006] = {.count = 1, .reusable = false}, SHIFT(202),
  [1008] = {.count = 1, .reusable = true}, SHIFT(202),
  [1010] = {.count = 1, .reusable = false}, SHIFT(167),
  [1012] = {.count = 1, .reusable = false}, SHIFT(137),
  [1014] = {.count = 1, .reusable = false}, SHIFT(239),
  [1016] = {.count = 1, .reusable = false}, SHIFT(203),
  [1018] = {.count = 1, .reusable = true}, SHIFT(203),
  [1020] = {.count = 1, .reusable = false}, SHIFT(172),
  [1022] = {.count = 1, .reusable = false}, SHIFT(196),
  [1024] = {.count = 1, .reusable = true}, SHIFT(196),
  [1026] = {.count = 1, .reusable = false}, SHIFT(108),
  [1028] = {.count = 1, .reusable = false}, SHIFT(201),
  [1030] = {.count = 1, .reusable = true}, SHIFT(201),
  [1032] = {.count = 1, .reusable = false}, SHIFT(176),
  [1034] = {.count = 1, .reusable = false}, SHIFT(206),
  [1036] = {.count = 1, .reusable = true}, SHIFT(206),
  [1038] = {.count = 1, .reusable = false}, SHIFT(76),
  [1040] = {.count = 1, .reusable = false}, SHIFT(117),
  [1042] = {.count = 1, .reusable = false}, SHIFT(207),
  [1044] = {.count = 1, .reusable = true}, SHIFT(207),
  [1046] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [1048] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(214),
  [1051] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(214),
  [1054] = {.count = 1, .reusable = false}, SHIFT(80),
  [1056] = {.count = 1, .reusable = false}, SHIFT(197),
  [1058] = {.count = 1, .reusable = true}, SHIFT(197),
  [1060] = {.count = 1, .reusable = false}, SHIFT(82),
  [1062] = {.count = 1, .reusable = false}, SHIFT(212),
  [1064] = {.count = 1, .reusable = true}, SHIFT(212),
  [1066] = {.count = 1, .reusable = true}, SHIFT(162),
  [1068] = {.count = 1, .reusable = true}, SHIFT(57),
  [1070] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [1072] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 43), SHIFT_REPEAT(258),
  [1075] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 43),
  [1077] = {.count = 1, .reusable = true}, SHIFT(251),
  [1079] = {.count = 1, .reusable = true}, SHIFT(229),
  [1081] = {.count = 1, .reusable = true}, SHIFT(227),
  [1083] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [1085] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(57),
  [1088] = {.count = 1, .reusable = true}, SHIFT(159),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [1092] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 45),
  [1094] = {.count = 1, .reusable = true}, SHIFT(226),
  [1096] = {.count = 1, .reusable = true}, SHIFT(228),
  [1098] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [1100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(228),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [1105] = {.count = 1, .reusable = true}, SHIFT(174),
  [1107] = {.count = 1, .reusable = false}, SHIFT(174),
  [1109] = {.count = 1, .reusable = true}, SHIFT(97),
  [1111] = {.count = 1, .reusable = true}, SHIFT(194),
  [1113] = {.count = 1, .reusable = true}, SHIFT(224),
  [1115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [1117] = {.count = 1, .reusable = false}, SHIFT(72),
  [1119] = {.count = 1, .reusable = true}, SHIFT(72),
  [1121] = {.count = 1, .reusable = false}, SHIFT(240),
  [1123] = {.count = 1, .reusable = true}, SHIFT(240),
  [1125] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 47),
  [1127] = {.count = 1, .reusable = false}, SHIFT(177),
  [1129] = {.count = 1, .reusable = true}, SHIFT(177),
  [1131] = {.count = 1, .reusable = true}, SHIFT(48),
  [1133] = {.count = 1, .reusable = false}, SHIFT(184),
  [1135] = {.count = 1, .reusable = true}, SHIFT(184),
  [1137] = {.count = 1, .reusable = false}, SHIFT(114),
  [1139] = {.count = 1, .reusable = true}, SHIFT(114),
  [1141] = {.count = 1, .reusable = true}, SHIFT(234),
  [1143] = {.count = 1, .reusable = false}, SHIFT(234),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [1147] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [1149] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [1151] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [1157] = {.count = 1, .reusable = true}, SHIFT(171),
  [1159] = {.count = 1, .reusable = true}, SHIFT(50),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [1163] = {.count = 1, .reusable = true}, SHIFT(110),
  [1165] = {.count = 1, .reusable = true}, SHIFT(132),
  [1167] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [1169] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [1171] = {.count = 1, .reusable = true}, SHIFT(237),
  [1173] = {.count = 1, .reusable = true}, SHIFT(34),
  [1175] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 39),
  [1177] = {.count = 1, .reusable = true}, SHIFT(169),
  [1179] = {.count = 1, .reusable = true}, SHIFT(299),
  [1181] = {.count = 1, .reusable = true}, SHIFT(218),
  [1183] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [1185] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [1187] = {.count = 1, .reusable = true}, SHIFT(222),
  [1189] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 46),
  [1191] = {.count = 1, .reusable = true}, SHIFT(221),
  [1193] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [1195] = {.count = 1, .reusable = true}, SHIFT(292),
  [1197] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [1199] = {.count = 1, .reusable = true}, SHIFT(249),
  [1201] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 44),
  [1203] = {.count = 1, .reusable = true}, SHIFT(7),
  [1205] = {.count = 1, .reusable = true}, SHIFT(252),
  [1207] = {.count = 1, .reusable = true}, SHIFT(256),
  [1209] = {.count = 1, .reusable = true}, SHIFT(287),
  [1211] = {.count = 1, .reusable = true}, SHIFT(68),
  [1213] = {.count = 1, .reusable = true}, SHIFT(29),
  [1215] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 44),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [1219] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [1221] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [1223] = {.count = 1, .reusable = true}, SHIFT(78),
  [1225] = {.count = 1, .reusable = true}, SHIFT(257),
  [1227] = {.count = 1, .reusable = true}, SHIFT(86),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [1231] = {.count = 1, .reusable = true}, SHIFT(52),
  [1233] = {.count = 1, .reusable = true}, SHIFT(255),
  [1235] = {.count = 1, .reusable = true}, SHIFT(231),
  [1237] = {.count = 1, .reusable = true}, SHIFT(275),
  [1239] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
