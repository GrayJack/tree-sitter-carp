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
#define STATE_COUNT 307
#define SYMBOL_COUNT 165
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
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
  anon_sym_Fn = 46,
  anon_sym_ = 47,
  anon_sym_AMP = 48,
  anon_sym_AT = 49,
  anon_sym_TILDE = 50,
  anon_sym_SQUOTE = 51,
  sym_integer_literal = 52,
  sym_float_literal = 53,
  anon_sym_true = 54,
  anon_sym_false = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_str_literal_token1 = 57,
  anon_sym_BSLASH = 58,
  anon_sym_POUND_DQUOTE = 59,
  sym_escape_sequence = 60,
  anon_sym_LBRACE = 61,
  anon_sym_RBRACE = 62,
  anon_sym_COLON = 63,
  sym_hidden = 64,
  anon_sym_let_DASHdo = 65,
  anon_sym_while_DASHdo = 66,
  anon_sym_defn_DASHdo = 67,
  anon_sym_break = 68,
  anon_sym_for = 69,
  anon_sym_when = 70,
  anon_sym_cond = 71,
  anon_sym_unless = 72,
  anon_sym_case = 73,
  anon_sym_foreach = 74,
  anon_sym_defdynamic = 75,
  anon_sym_load = 76,
  anon_sym_match = 77,
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
  sym_register = 119,
  sym_type = 120,
  sym_complex_type = 121,
  sym_call_expression = 122,
  sym__call_name = 123,
  sym_call_no_module = 124,
  sym_call_with_module = 125,
  sym_definterface = 126,
  sym_defmacro = 127,
  sym_defndynamic = 128,
  sym_defmodule = 129,
  sym_deftype = 130,
  sym__deftype1 = 131,
  sym__deftype2 = 132,
  sym__name_deftypes = 133,
  sym_fields = 134,
  sym_interface_fn = 135,
  sym_short_ref = 136,
  sym_short_copy = 137,
  sym_short_fn_ref = 138,
  sym_short_quote = 139,
  sym_parameters = 140,
  sym_typed_parameters = 141,
  sym_bool_literal = 142,
  sym_str_literal = 143,
  sym_char_literal = 144,
  sym_pattern_literal = 145,
  sym_array_expression = 146,
  sym_map_expression = 147,
  sym_symbol = 148,
  sym_other_str = 149,
  sym_operators = 150,
  aux_sym_source_file_repeat1 = 151,
  aux_sym_let_pairs_repeat1 = 152,
  aux_sym_do_repeat1 = 153,
  aux_sym_complex_type_repeat1 = 154,
  aux_sym_call_expression_repeat1 = 155,
  aux_sym_defmodule_repeat1 = 156,
  aux_sym__deftype2_repeat1 = 157,
  aux_sym__name_deftypes_repeat1 = 158,
  aux_sym_fields_repeat1 = 159,
  aux_sym_parameters_repeat1 = 160,
  aux_sym_typed_parameters_repeat1 = 161,
  aux_sym_str_literal_repeat1 = 162,
  aux_sym_array_expression_repeat1 = 163,
  aux_sym_map_expression_repeat1 = 164,
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
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(327);
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '+') ADVANCE(322);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '@') ADVANCE(283);
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
      if (lookahead == '\\') ADVANCE(302);
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
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == 955) ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(327);
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '+') ADVANCE(322);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '@') ADVANCE(283);
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
      if (lookahead == '\\') ADVANCE(302);
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
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == 955) ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '%') ADVANCE(327);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '+') ADVANCE(322);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == '>') ADVANCE(329);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(339);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\\') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(225);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(389);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(339);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(339);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(339);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(389);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(339);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(303);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'B') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(391);
      if (lookahead == 'D') ADVANCE(411);
      if (lookahead == 'F') ADVANCE(398);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == 'P') ADVANCE(349);
      if (lookahead == 'R') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(381);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '~') ADVANCE(284);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ':') ADVANCE(307);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'B') ADVANCE(415);
      if (lookahead == 'C') ADVANCE(391);
      if (lookahead == 'D') ADVANCE(411);
      if (lookahead == 'F') ADVANCE(397);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == 'P') ADVANCE(349);
      if (lookahead == 'R') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(381);
      if (lookahead == 955) ADVANCE(281);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
      if (lookahead == '2') ADVANCE(243);
      if (lookahead == '3') ADVANCE(245);
      if (lookahead == 'N') ADVANCE(247);
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
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(319);
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
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(320);
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
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(266);
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
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(318);
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
      if (lookahead == 'k') ADVANCE(312);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(278);
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
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(251);
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
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(310);
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
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(229);
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
      if (lookahead == 's') ADVANCE(316);
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
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(259);
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
      if (lookahead == 'y') ADVANCE(253);
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
      if (lookahead == '}') ADVANCE(304);
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
          (913 <= lookahead && lookahead <= 937)) ADVANCE(339);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == 'm') ADVANCE(344);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 230:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 232:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 234:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 236:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 238:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 240:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 242:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 244:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 246:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_VectorN);
      END_STATE();
    case 248:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 250:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Pattern);
      END_STATE();
    case 252:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 254:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 256:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Maybe);
      END_STATE();
    case 258:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 260:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 262:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Ptr);
      END_STATE();
    case 264:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_definterface);
      END_STATE();
    case 267:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_defmacro);
      END_STATE();
    case 269:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      END_STATE();
    case 271:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 273:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_deftype);
      END_STATE();
    case 275:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 279:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 281:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 289:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 294:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 296:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_hidden);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_let_DASHdo);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_while_DASHdo);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_defn_DASHdo);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_cond);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_defdynamic);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '*') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '*') ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_and_STAR);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_or_STAR);
      END_STATE();
    case 339:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(339);
      END_STATE();
    case 340:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead == '3') ADVANCE(246);
      if (lookahead == 'N') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(403);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == '!' ||
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 354:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 363:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 365:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 366:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 368:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 369:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 370:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 376:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 378:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 383:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 384:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'g') ADVANCE(392);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 402:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 405:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 414:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 421:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 432:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 435:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 438:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
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
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 447:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(419);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(405);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
      END_STATE();
    case 457:
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(457);
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
  [87] = {.lex_state = 16},
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
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 15},
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
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 189},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 189},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 15},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 15},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 197},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 15},
  [277] = {.lex_state = 15},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 15},
  [281] = {.lex_state = 15},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 15},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 15},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 15},
  [303] = {.lex_state = 15},
  [304] = {.lex_state = 15},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 0},
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
    [sym_source_file] = STATE(306),
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
    [sym_line_comment] = STATE(268),
    [sym__s_expr] = STATE(268),
    [sym__anything] = STATE(268),
    [sym__s_forms] = STATE(268),
    [sym__defs] = STATE(268),
    [sym__literals] = STATE(268),
    [sym__short_helper] = STATE(268),
    [sym_use] = STATE(268),
    [sym_doc] = STATE(268),
    [sym_def] = STATE(268),
    [sym_fn] = STATE(268),
    [sym_defn] = STATE(268),
    [sym_let] = STATE(268),
    [sym_do] = STATE(268),
    [sym_if] = STATE(268),
    [sym_while] = STATE(268),
    [sym_ref] = STATE(268),
    [sym_address] = STATE(268),
    [sym_set] = STATE(268),
    [sym_the] = STATE(268),
    [sym_register] = STATE(268),
    [sym_call_expression] = STATE(268),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(268),
    [sym_defmacro] = STATE(268),
    [sym_defndynamic] = STATE(268),
    [sym_defmodule] = STATE(268),
    [sym_deftype] = STATE(268),
    [sym_short_ref] = STATE(268),
    [sym_short_copy] = STATE(268),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(268),
    [sym_bool_literal] = STATE(268),
    [sym_str_literal] = STATE(268),
    [sym_char_literal] = STATE(268),
    [sym_pattern_literal] = STATE(268),
    [sym_array_expression] = STATE(268),
    [sym_map_expression] = STATE(268),
    [sym_symbol] = STATE(268),
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
    [sym_line_comment] = STATE(297),
    [sym__s_expr] = STATE(297),
    [sym__anything] = STATE(297),
    [sym__s_forms] = STATE(297),
    [sym__defs] = STATE(297),
    [sym__literals] = STATE(297),
    [sym__short_helper] = STATE(297),
    [sym_use] = STATE(297),
    [sym_doc] = STATE(297),
    [sym_def] = STATE(297),
    [sym_fn] = STATE(297),
    [sym_defn] = STATE(297),
    [sym_let] = STATE(297),
    [sym_do] = STATE(297),
    [sym_if] = STATE(297),
    [sym_while] = STATE(297),
    [sym_ref] = STATE(297),
    [sym_address] = STATE(297),
    [sym_set] = STATE(297),
    [sym_the] = STATE(297),
    [sym_register] = STATE(297),
    [sym_call_expression] = STATE(297),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(297),
    [sym_defmacro] = STATE(297),
    [sym_defndynamic] = STATE(297),
    [sym_defmodule] = STATE(297),
    [sym_deftype] = STATE(297),
    [sym_short_ref] = STATE(297),
    [sym_short_copy] = STATE(297),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(297),
    [sym_bool_literal] = STATE(297),
    [sym_str_literal] = STATE(297),
    [sym_char_literal] = STATE(297),
    [sym_pattern_literal] = STATE(297),
    [sym_array_expression] = STATE(297),
    [sym_map_expression] = STATE(297),
    [sym_symbol] = STATE(297),
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
    [sym_line_comment] = STATE(292),
    [sym__s_expr] = STATE(292),
    [sym__anything] = STATE(292),
    [sym__s_forms] = STATE(292),
    [sym__defs] = STATE(292),
    [sym__literals] = STATE(292),
    [sym__short_helper] = STATE(292),
    [sym_use] = STATE(292),
    [sym_doc] = STATE(292),
    [sym_def] = STATE(292),
    [sym_fn] = STATE(292),
    [sym_defn] = STATE(292),
    [sym_let] = STATE(292),
    [sym_do] = STATE(292),
    [sym_if] = STATE(292),
    [sym_while] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_address] = STATE(292),
    [sym_set] = STATE(292),
    [sym_the] = STATE(292),
    [sym_register] = STATE(292),
    [sym_call_expression] = STATE(292),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(292),
    [sym_defmacro] = STATE(292),
    [sym_defndynamic] = STATE(292),
    [sym_defmodule] = STATE(292),
    [sym_deftype] = STATE(292),
    [sym_short_ref] = STATE(292),
    [sym_short_copy] = STATE(292),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(292),
    [sym_bool_literal] = STATE(292),
    [sym_str_literal] = STATE(292),
    [sym_char_literal] = STATE(292),
    [sym_pattern_literal] = STATE(292),
    [sym_array_expression] = STATE(292),
    [sym_map_expression] = STATE(292),
    [sym_symbol] = STATE(292),
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
    [sym_line_comment] = STATE(272),
    [sym__s_expr] = STATE(272),
    [sym__anything] = STATE(272),
    [sym__s_forms] = STATE(272),
    [sym__defs] = STATE(272),
    [sym__literals] = STATE(272),
    [sym__short_helper] = STATE(272),
    [sym_use] = STATE(272),
    [sym_doc] = STATE(272),
    [sym_def] = STATE(272),
    [sym_fn] = STATE(272),
    [sym_defn] = STATE(272),
    [sym_let] = STATE(272),
    [sym_do] = STATE(272),
    [sym_if] = STATE(272),
    [sym_while] = STATE(272),
    [sym_ref] = STATE(272),
    [sym_address] = STATE(272),
    [sym_set] = STATE(272),
    [sym_the] = STATE(272),
    [sym_register] = STATE(272),
    [sym_call_expression] = STATE(272),
    [sym__call_name] = STATE(17),
    [sym_call_no_module] = STATE(17),
    [sym_call_with_module] = STATE(17),
    [sym_definterface] = STATE(272),
    [sym_defmacro] = STATE(272),
    [sym_defndynamic] = STATE(272),
    [sym_defmodule] = STATE(272),
    [sym_deftype] = STATE(272),
    [sym_short_ref] = STATE(272),
    [sym_short_copy] = STATE(272),
    [sym_short_fn_ref] = STATE(17),
    [sym_short_quote] = STATE(272),
    [sym_bool_literal] = STATE(272),
    [sym_str_literal] = STATE(272),
    [sym_char_literal] = STATE(272),
    [sym_pattern_literal] = STATE(272),
    [sym_array_expression] = STATE(272),
    [sym_map_expression] = STATE(272),
    [sym_symbol] = STATE(272),
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
    [sym__s_expr] = STATE(287),
    [sym__expr] = STATE(287),
    [sym__literals] = STATE(287),
    [sym__short_helper] = STATE(287),
    [sym_short_ref] = STATE(287),
    [sym_short_copy] = STATE(287),
    [sym_short_fn_ref] = STATE(287),
    [sym_short_quote] = STATE(287),
    [sym_bool_literal] = STATE(287),
    [sym_str_literal] = STATE(287),
    [sym_char_literal] = STATE(287),
    [sym_pattern_literal] = STATE(287),
    [sym_array_expression] = STATE(287),
    [sym_map_expression] = STATE(287),
    [sym_symbol] = STATE(287),
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
    [sym__s_expr] = STATE(296),
    [sym__expr] = STATE(296),
    [sym__literals] = STATE(296),
    [sym__short_helper] = STATE(296),
    [sym_short_ref] = STATE(296),
    [sym_short_copy] = STATE(296),
    [sym_short_fn_ref] = STATE(296),
    [sym_short_quote] = STATE(296),
    [sym_bool_literal] = STATE(296),
    [sym_str_literal] = STATE(296),
    [sym_char_literal] = STATE(296),
    [sym_pattern_literal] = STATE(296),
    [sym_array_expression] = STATE(296),
    [sym_map_expression] = STATE(296),
    [sym_symbol] = STATE(296),
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
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_Bool] = ACTIONS(379),
    [anon_sym_Char] = ACTIONS(379),
    [anon_sym_Int] = ACTIONS(379),
    [anon_sym_Long] = ACTIONS(379),
    [anon_sym_Float] = ACTIONS(379),
    [anon_sym_Double] = ACTIONS(379),
    [anon_sym_Vector2] = ACTIONS(379),
    [anon_sym_Vector3] = ACTIONS(379),
    [anon_sym_VectorN] = ACTIONS(379),
    [anon_sym_String] = ACTIONS(379),
    [anon_sym_Pattern] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(379),
    [anon_sym_Map] = ACTIONS(379),
    [anon_sym_Maybe] = ACTIONS(379),
    [anon_sym_Result] = ACTIONS(379),
    [anon_sym_Id] = ACTIONS(379),
    [anon_sym_Ptr] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [sym_identifier] = ACTIONS(394),
  },
  [28] = {
    [sym__s_expr] = STATE(298),
    [sym__expr] = STATE(298),
    [sym__literals] = STATE(298),
    [sym__short_helper] = STATE(298),
    [sym_short_ref] = STATE(298),
    [sym_short_copy] = STATE(298),
    [sym_short_fn_ref] = STATE(298),
    [sym_short_quote] = STATE(298),
    [sym_bool_literal] = STATE(298),
    [sym_str_literal] = STATE(298),
    [sym_char_literal] = STATE(298),
    [sym_pattern_literal] = STATE(298),
    [sym_array_expression] = STATE(298),
    [sym_map_expression] = STATE(298),
    [sym_symbol] = STATE(298),
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
    [sym__s_expr] = STATE(255),
    [sym__expr] = STATE(255),
    [sym__literals] = STATE(255),
    [sym__short_helper] = STATE(255),
    [sym_short_ref] = STATE(255),
    [sym_short_copy] = STATE(255),
    [sym_short_fn_ref] = STATE(255),
    [sym_short_quote] = STATE(255),
    [sym_bool_literal] = STATE(255),
    [sym_str_literal] = STATE(255),
    [sym_char_literal] = STATE(255),
    [sym_pattern_literal] = STATE(255),
    [sym_array_expression] = STATE(255),
    [sym_map_expression] = STATE(255),
    [sym_symbol] = STATE(255),
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
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_Bool] = ACTIONS(505),
    [anon_sym_Char] = ACTIONS(505),
    [anon_sym_Int] = ACTIONS(505),
    [anon_sym_Long] = ACTIONS(505),
    [anon_sym_Float] = ACTIONS(505),
    [anon_sym_Double] = ACTIONS(505),
    [anon_sym_Vector2] = ACTIONS(505),
    [anon_sym_Vector3] = ACTIONS(505),
    [anon_sym_VectorN] = ACTIONS(505),
    [anon_sym_String] = ACTIONS(505),
    [anon_sym_Pattern] = ACTIONS(505),
    [anon_sym_Array] = ACTIONS(505),
    [anon_sym_Map] = ACTIONS(505),
    [anon_sym_Maybe] = ACTIONS(505),
    [anon_sym_Result] = ACTIONS(505),
    [anon_sym_Id] = ACTIONS(505),
    [anon_sym_Ptr] = ACTIONS(505),
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
    [sym__s_expr] = STATE(301),
    [sym__expr] = STATE(301),
    [sym__literals] = STATE(301),
    [sym__short_helper] = STATE(301),
    [sym_short_ref] = STATE(301),
    [sym_short_copy] = STATE(301),
    [sym_short_fn_ref] = STATE(301),
    [sym_short_quote] = STATE(301),
    [sym_bool_literal] = STATE(301),
    [sym_str_literal] = STATE(301),
    [sym_char_literal] = STATE(301),
    [sym_pattern_literal] = STATE(301),
    [sym_array_expression] = STATE(301),
    [sym_map_expression] = STATE(301),
    [sym_symbol] = STATE(301),
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
    [sym__s_expr] = STATE(282),
    [sym__expr] = STATE(282),
    [sym__literals] = STATE(282),
    [sym__short_helper] = STATE(282),
    [sym_short_ref] = STATE(282),
    [sym_short_copy] = STATE(282),
    [sym_short_fn_ref] = STATE(282),
    [sym_short_quote] = STATE(282),
    [sym_bool_literal] = STATE(282),
    [sym_str_literal] = STATE(282),
    [sym_char_literal] = STATE(282),
    [sym_pattern_literal] = STATE(282),
    [sym_array_expression] = STATE(282),
    [sym_map_expression] = STATE(282),
    [sym_symbol] = STATE(282),
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
    [sym__s_expr] = STATE(238),
    [sym__expr] = STATE(238),
    [sym__literals] = STATE(238),
    [sym__short_helper] = STATE(238),
    [sym_short_ref] = STATE(238),
    [sym_short_copy] = STATE(238),
    [sym_short_fn_ref] = STATE(238),
    [sym_short_quote] = STATE(238),
    [sym_bool_literal] = STATE(238),
    [sym_str_literal] = STATE(238),
    [sym_char_literal] = STATE(238),
    [sym_pattern_literal] = STATE(238),
    [sym_array_expression] = STATE(238),
    [sym_map_expression] = STATE(238),
    [sym_symbol] = STATE(238),
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
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_Bool] = ACTIONS(505),
    [anon_sym_Char] = ACTIONS(505),
    [anon_sym_Int] = ACTIONS(505),
    [anon_sym_Long] = ACTIONS(505),
    [anon_sym_Float] = ACTIONS(505),
    [anon_sym_Double] = ACTIONS(505),
    [anon_sym_Vector2] = ACTIONS(505),
    [anon_sym_Vector3] = ACTIONS(505),
    [anon_sym_VectorN] = ACTIONS(505),
    [anon_sym_String] = ACTIONS(505),
    [anon_sym_Pattern] = ACTIONS(505),
    [anon_sym_Array] = ACTIONS(505),
    [anon_sym_Map] = ACTIONS(505),
    [anon_sym_Maybe] = ACTIONS(505),
    [anon_sym_Result] = ACTIONS(505),
    [anon_sym_Id] = ACTIONS(505),
    [anon_sym_Ptr] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_identifier] = ACTIONS(507),
  },
  [59] = {
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
    [sym__s_expr] = STATE(241),
    [sym__expr] = STATE(241),
    [sym__literals] = STATE(241),
    [sym__short_helper] = STATE(241),
    [sym_short_ref] = STATE(241),
    [sym_short_copy] = STATE(241),
    [sym_short_fn_ref] = STATE(241),
    [sym_short_quote] = STATE(241),
    [sym_bool_literal] = STATE(241),
    [sym_str_literal] = STATE(241),
    [sym_char_literal] = STATE(241),
    [sym_pattern_literal] = STATE(241),
    [sym_array_expression] = STATE(241),
    [sym_map_expression] = STATE(241),
    [sym_symbol] = STATE(241),
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
    [sym__s_expr] = STATE(257),
    [sym__expr] = STATE(257),
    [sym__literals] = STATE(257),
    [sym__short_helper] = STATE(257),
    [sym_short_ref] = STATE(257),
    [sym_short_copy] = STATE(257),
    [sym_short_fn_ref] = STATE(257),
    [sym_short_quote] = STATE(257),
    [sym_bool_literal] = STATE(257),
    [sym_str_literal] = STATE(257),
    [sym_char_literal] = STATE(257),
    [sym_pattern_literal] = STATE(257),
    [sym_array_expression] = STATE(257),
    [sym_map_expression] = STATE(257),
    [sym_symbol] = STATE(257),
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
    [sym__short_helper] = STATE(273),
    [sym_type] = STATE(273),
    [sym_complex_type] = STATE(158),
    [sym_short_ref] = STATE(273),
    [sym_short_copy] = STATE(273),
    [sym_short_fn_ref] = STATE(273),
    [sym_short_quote] = STATE(273),
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
    [anon_sym_RBRACK] = ACTIONS(579),
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
    [anon_sym_AMP] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [sym_identifier] = ACTIONS(581),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(583),
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
    [anon_sym_AMP] = ACTIONS(583),
    [anon_sym_AT] = ACTIONS(583),
    [anon_sym_TILDE] = ACTIONS(583),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [sym_identifier] = ACTIONS(585),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
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
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_RBRACK] = ACTIONS(587),
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
    [anon_sym_AMP] = ACTIONS(587),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_TILDE] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [sym_identifier] = ACTIONS(589),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(591),
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
    [anon_sym_AMP] = ACTIONS(591),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_TILDE] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(595),
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
    [anon_sym_AMP] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_TILDE] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [sym_identifier] = ACTIONS(597),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
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
    [anon_sym_AMP] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(599),
    [anon_sym_TILDE] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_RBRACK] = ACTIONS(603),
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
    [anon_sym_AMP] = ACTIONS(603),
    [anon_sym_AT] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [sym_identifier] = ACTIONS(605),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_RBRACK] = ACTIONS(607),
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
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_AT] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [sym_identifier] = ACTIONS(609),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(611),
    [anon_sym_RBRACK] = ACTIONS(611),
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
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_TILDE] = ACTIONS(611),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [sym_identifier] = ACTIONS(613),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_RBRACK] = ACTIONS(615),
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
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_TILDE] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(615),
    [sym_identifier] = ACTIONS(617),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(619),
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
    [anon_sym_AMP] = ACTIONS(619),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym_TILDE] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(623),
    [anon_sym_RBRACK] = ACTIONS(623),
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
    [anon_sym_AMP] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(623),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [sym_identifier] = ACTIONS(625),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(627),
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
    [anon_sym_AMP] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(627),
    [anon_sym_TILDE] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [sym_identifier] = ACTIONS(629),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
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
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_TILDE] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [sym_identifier] = ACTIONS(633),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(635),
    [anon_sym_RBRACK] = ACTIONS(635),
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
    [anon_sym_AMP] = ACTIONS(635),
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_TILDE] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [sym_identifier] = ACTIONS(637),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
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
    [anon_sym_AMP] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(639),
    [anon_sym_TILDE] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [sym_identifier] = ACTIONS(641),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_RBRACK] = ACTIONS(643),
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
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AT] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [sym_identifier] = ACTIONS(645),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_RBRACK] = ACTIONS(647),
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
    [anon_sym_AMP] = ACTIONS(647),
    [anon_sym_AT] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [sym_identifier] = ACTIONS(649),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
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
    [sym_interface_fn] = STATE(266),
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
    [anon_sym_RBRACK] = ACTIONS(674),
    [anon_sym_Bool] = ACTIONS(676),
    [anon_sym_Char] = ACTIONS(676),
    [anon_sym_Int] = ACTIONS(676),
    [anon_sym_Long] = ACTIONS(676),
    [anon_sym_Float] = ACTIONS(676),
    [anon_sym_Double] = ACTIONS(676),
    [anon_sym_Vector2] = ACTIONS(676),
    [anon_sym_Vector3] = ACTIONS(676),
    [anon_sym_VectorN] = ACTIONS(676),
    [anon_sym_String] = ACTIONS(676),
    [anon_sym_Pattern] = ACTIONS(676),
    [anon_sym_Array] = ACTIONS(676),
    [anon_sym_Map] = ACTIONS(676),
    [anon_sym_Maybe] = ACTIONS(676),
    [anon_sym_Result] = ACTIONS(676),
    [anon_sym_Id] = ACTIONS(676),
    [anon_sym_Ptr] = ACTIONS(676),
    [sym_identifier] = ACTIONS(679),
  },
  [89] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(682),
    [anon_sym_Bool] = ACTIONS(684),
    [anon_sym_Char] = ACTIONS(684),
    [anon_sym_Int] = ACTIONS(684),
    [anon_sym_Long] = ACTIONS(684),
    [anon_sym_Float] = ACTIONS(684),
    [anon_sym_Double] = ACTIONS(684),
    [anon_sym_Vector2] = ACTIONS(684),
    [anon_sym_Vector3] = ACTIONS(684),
    [anon_sym_VectorN] = ACTIONS(684),
    [anon_sym_String] = ACTIONS(684),
    [anon_sym_Pattern] = ACTIONS(684),
    [anon_sym_Array] = ACTIONS(684),
    [anon_sym_Map] = ACTIONS(684),
    [anon_sym_Maybe] = ACTIONS(684),
    [anon_sym_Result] = ACTIONS(684),
    [anon_sym_Id] = ACTIONS(684),
    [anon_sym_Ptr] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [90] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(688),
    [anon_sym_Bool] = ACTIONS(684),
    [anon_sym_Char] = ACTIONS(684),
    [anon_sym_Int] = ACTIONS(684),
    [anon_sym_Long] = ACTIONS(684),
    [anon_sym_Float] = ACTIONS(684),
    [anon_sym_Double] = ACTIONS(684),
    [anon_sym_Vector2] = ACTIONS(684),
    [anon_sym_Vector3] = ACTIONS(684),
    [anon_sym_VectorN] = ACTIONS(684),
    [anon_sym_String] = ACTIONS(684),
    [anon_sym_Pattern] = ACTIONS(684),
    [anon_sym_Array] = ACTIONS(684),
    [anon_sym_Map] = ACTIONS(684),
    [anon_sym_Maybe] = ACTIONS(684),
    [anon_sym_Result] = ACTIONS(684),
    [anon_sym_Id] = ACTIONS(684),
    [anon_sym_Ptr] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [91] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_Bool] = ACTIONS(684),
    [anon_sym_Char] = ACTIONS(684),
    [anon_sym_Int] = ACTIONS(684),
    [anon_sym_Long] = ACTIONS(684),
    [anon_sym_Float] = ACTIONS(684),
    [anon_sym_Double] = ACTIONS(684),
    [anon_sym_Vector2] = ACTIONS(684),
    [anon_sym_Vector3] = ACTIONS(684),
    [anon_sym_VectorN] = ACTIONS(684),
    [anon_sym_String] = ACTIONS(684),
    [anon_sym_Pattern] = ACTIONS(684),
    [anon_sym_Array] = ACTIONS(684),
    [anon_sym_Map] = ACTIONS(684),
    [anon_sym_Maybe] = ACTIONS(684),
    [anon_sym_Result] = ACTIONS(684),
    [anon_sym_Id] = ACTIONS(684),
    [anon_sym_Ptr] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [92] = {
    [sym_complex_type] = STATE(93),
    [aux_sym_fields_repeat1] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(692),
    [anon_sym_Bool] = ACTIONS(684),
    [anon_sym_Char] = ACTIONS(684),
    [anon_sym_Int] = ACTIONS(684),
    [anon_sym_Long] = ACTIONS(684),
    [anon_sym_Float] = ACTIONS(684),
    [anon_sym_Double] = ACTIONS(684),
    [anon_sym_Vector2] = ACTIONS(684),
    [anon_sym_Vector3] = ACTIONS(684),
    [anon_sym_VectorN] = ACTIONS(684),
    [anon_sym_String] = ACTIONS(684),
    [anon_sym_Pattern] = ACTIONS(684),
    [anon_sym_Array] = ACTIONS(684),
    [anon_sym_Map] = ACTIONS(684),
    [anon_sym_Maybe] = ACTIONS(684),
    [anon_sym_Result] = ACTIONS(684),
    [anon_sym_Id] = ACTIONS(684),
    [anon_sym_Ptr] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(694),
    [anon_sym_RBRACK] = ACTIONS(694),
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
    [sym_identifier] = ACTIONS(696),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RBRACK] = ACTIONS(700),
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
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
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
    [sym_identifier] = ACTIONS(710),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
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
    [anon_sym_RBRACK] = ACTIONS(734),
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
  [106] = {
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
    [anon_sym_RBRACK] = ACTIONS(738),
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
    [anon_sym_RBRACK] = ACTIONS(742),
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
    [anon_sym_RBRACK] = ACTIONS(751),
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
    [anon_sym_RBRACK] = ACTIONS(771),
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
    [anon_sym_RBRACK] = ACTIONS(779),
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
    [anon_sym_RBRACK] = ACTIONS(789),
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
    [anon_sym_RBRACK] = ACTIONS(793),
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
  [126] = {
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
  [127] = {
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
    [anon_sym_RBRACK] = ACTIONS(824),
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
    [anon_sym_RBRACK] = ACTIONS(832),
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
    [anon_sym_RBRACK] = ACTIONS(838),
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
  [152] = {
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
  [172] = {
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
    [anon_sym_RBRACK] = ACTIONS(607),
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
    [anon_sym_RBRACK] = ACTIONS(587),
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
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(623),
    [anon_sym_RBRACK] = ACTIONS(623),
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
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
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
    [anon_sym_RBRACK] = ACTIONS(647),
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
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
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
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
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
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_RBRACK] = ACTIONS(635),
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
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_integer_literal] = ACTIONS(645),
    [sym_float_literal] = ACTIONS(645),
    [anon_sym_true] = ACTIONS(645),
    [anon_sym_false] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [anon_sym_BSLASH] = ACTIONS(643),
    [anon_sym_POUND_DQUOTE] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [sym_identifier] = ACTIONS(645),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(627),
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
    [sym__deftype1] = STATE(278),
    [sym__deftype2] = STATE(278),
    [sym__name_deftypes] = STATE(186),
    [anon_sym_LPAREN] = ACTIONS(882),
    [sym_identifier] = ACTIONS(884),
  },
  [186] = {
    [sym_fields] = STATE(269),
    [aux_sym__deftype2_repeat1] = STATE(213),
    [anon_sym_LPAREN] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(890),
  },
  [187] = {
    [sym_symbol] = STATE(187),
    [aux_sym_parameters_repeat1] = STATE(187),
    [anon_sym_RBRACK] = ACTIONS(892),
    [anon_sym_COLON] = ACTIONS(894),
    [sym_identifier] = ACTIONS(897),
  },
  [188] = {
    [sym_symbol] = STATE(187),
    [aux_sym_parameters_repeat1] = STATE(187),
    [anon_sym_RBRACK] = ACTIONS(900),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_identifier] = ACTIONS(902),
  },
  [189] = {
    [sym_symbol] = STATE(188),
    [aux_sym_parameters_repeat1] = STATE(188),
    [anon_sym_RBRACK] = ACTIONS(904),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_identifier] = ACTIONS(906),
  },
  [190] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(908),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [191] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(914),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [192] = {
    [aux_sym_str_literal_repeat1] = STATE(205),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [aux_sym_str_literal_token1] = ACTIONS(918),
    [sym_escape_sequence] = ACTIONS(920),
  },
  [193] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [194] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(924),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [195] = {
    [aux_sym_str_literal_repeat1] = STATE(193),
    [anon_sym_DQUOTE] = ACTIONS(926),
    [aux_sym_str_literal_token1] = ACTIONS(928),
    [sym_escape_sequence] = ACTIONS(930),
  },
  [196] = {
    [aux_sym_str_literal_repeat1] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(932),
    [aux_sym_str_literal_token1] = ACTIONS(934),
    [sym_escape_sequence] = ACTIONS(936),
  },
  [197] = {
    [aux_sym_str_literal_repeat1] = STATE(201),
    [anon_sym_DQUOTE] = ACTIONS(938),
    [aux_sym_str_literal_token1] = ACTIONS(940),
    [sym_escape_sequence] = ACTIONS(942),
  },
  [198] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(944),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [199] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(946),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [200] = {
    [aux_sym_str_literal_repeat1] = STATE(198),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [aux_sym_str_literal_token1] = ACTIONS(950),
    [sym_escape_sequence] = ACTIONS(952),
  },
  [201] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(954),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [202] = {
    [aux_sym_str_literal_repeat1] = STATE(199),
    [anon_sym_DQUOTE] = ACTIONS(956),
    [aux_sym_str_literal_token1] = ACTIONS(958),
    [sym_escape_sequence] = ACTIONS(960),
  },
  [203] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(962),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [204] = {
    [aux_sym_str_literal_repeat1] = STATE(190),
    [anon_sym_DQUOTE] = ACTIONS(964),
    [aux_sym_str_literal_token1] = ACTIONS(966),
    [sym_escape_sequence] = ACTIONS(968),
  },
  [205] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(970),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [206] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(972),
    [aux_sym_str_literal_token1] = ACTIONS(910),
    [sym_escape_sequence] = ACTIONS(912),
  },
  [207] = {
    [aux_sym_str_literal_repeat1] = STATE(203),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [aux_sym_str_literal_token1] = ACTIONS(976),
    [sym_escape_sequence] = ACTIONS(978),
  },
  [208] = {
    [aux_sym_str_literal_repeat1] = STATE(208),
    [anon_sym_DQUOTE] = ACTIONS(980),
    [aux_sym_str_literal_token1] = ACTIONS(982),
    [sym_escape_sequence] = ACTIONS(985),
  },
  [209] = {
    [aux_sym_str_literal_repeat1] = STATE(191),
    [anon_sym_DQUOTE] = ACTIONS(988),
    [aux_sym_str_literal_token1] = ACTIONS(990),
    [sym_escape_sequence] = ACTIONS(992),
  },
  [210] = {
    [aux_sym_str_literal_repeat1] = STATE(206),
    [anon_sym_DQUOTE] = ACTIONS(994),
    [aux_sym_str_literal_token1] = ACTIONS(996),
    [sym_escape_sequence] = ACTIONS(998),
  },
  [211] = {
    [anon_sym_LPAREN] = ACTIONS(1000),
    [anon_sym_RPAREN] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(1000),
  },
  [212] = {
    [aux_sym__name_deftypes_repeat1] = STATE(212),
    [anon_sym_RPAREN] = ACTIONS(1002),
    [sym_identifier] = ACTIONS(1004),
  },
  [213] = {
    [aux_sym__deftype2_repeat1] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(1007),
  },
  [214] = {
    [anon_sym_LPAREN] = ACTIONS(1009),
    [anon_sym_RPAREN] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(1009),
  },
  [215] = {
    [aux_sym__deftype2_repeat1] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(1011),
    [anon_sym_RPAREN] = ACTIONS(1014),
  },
  [216] = {
    [aux_sym_let_pairs_repeat1] = STATE(216),
    [anon_sym_RBRACK] = ACTIONS(1016),
    [sym_identifier] = ACTIONS(1018),
  },
  [217] = {
    [aux_sym__name_deftypes_repeat1] = STATE(218),
    [anon_sym_RPAREN] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(1023),
  },
  [218] = {
    [aux_sym__name_deftypes_repeat1] = STATE(212),
    [anon_sym_RPAREN] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1027),
  },
  [219] = {
    [sym_interface_fn] = STATE(285),
    [anon_sym_Fn] = ACTIONS(1029),
    [anon_sym_] = ACTIONS(1029),
  },
  [220] = {
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_RPAREN] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(1031),
  },
  [221] = {
    [aux_sym_let_pairs_repeat1] = STATE(216),
    [anon_sym_RBRACK] = ACTIONS(1033),
    [sym_identifier] = ACTIONS(1035),
  },
  [222] = {
    [anon_sym_RBRACK] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [sym_identifier] = ACTIONS(619),
  },
  [223] = {
    [aux_sym_let_pairs_repeat1] = STATE(221),
    [anon_sym_RBRACK] = ACTIONS(1037),
    [sym_identifier] = ACTIONS(1035),
  },
  [224] = {
    [aux_sym_str_literal_token1] = ACTIONS(1039),
    [sym_escape_sequence] = ACTIONS(1041),
  },
  [225] = {
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_identifier] = ACTIONS(627),
  },
  [226] = {
    [anon_sym_RBRACK] = ACTIONS(639),
    [sym_identifier] = ACTIONS(639),
  },
  [227] = {
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_identifier] = ACTIONS(643),
  },
  [228] = {
    [sym_upper_identifier] = ACTIONS(1043),
    [sym_identifier] = ACTIONS(1045),
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
    [aux_sym_str_literal_token1] = ACTIONS(1047),
    [sym_escape_sequence] = ACTIONS(1049),
  },
  [235] = {
    [sym_fields] = STATE(270),
    [anon_sym_LBRACK] = ACTIONS(1051),
  },
  [236] = {
    [sym_parameters] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(1053),
  },
  [237] = {
    [sym_str_literal] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [238] = {
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_identifier] = ACTIONS(595),
  },
  [239] = {
    [sym_parameters] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(1053),
  },
  [240] = {
    [sym_let_pairs] = STATE(25),
    [anon_sym_LBRACK] = ACTIONS(1055),
  },
  [241] = {
    [anon_sym_RBRACK] = ACTIONS(591),
    [sym_identifier] = ACTIONS(591),
  },
  [242] = {
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_identifier] = ACTIONS(611),
  },
  [243] = {
    [anon_sym_RBRACK] = ACTIONS(615),
    [sym_identifier] = ACTIONS(615),
  },
  [244] = {
    [aux_sym_str_literal_token1] = ACTIONS(1057),
    [sym_escape_sequence] = ACTIONS(1059),
  },
  [245] = {
    [aux_sym_str_literal_token1] = ACTIONS(1061),
    [sym_escape_sequence] = ACTIONS(1063),
  },
  [246] = {
    [sym_parameters] = STATE(20),
    [anon_sym_LBRACK] = ACTIONS(1053),
  },
  [247] = {
    [anon_sym_LPAREN] = ACTIONS(1065),
    [anon_sym_RPAREN] = ACTIONS(1065),
  },
  [248] = {
    [sym_upper_identifier] = ACTIONS(1067),
    [sym_identifier] = ACTIONS(1069),
  },
  [249] = {
    [sym_str_literal] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(210),
  },
  [250] = {
    [anon_sym_RBRACK] = ACTIONS(623),
    [sym_identifier] = ACTIONS(623),
  },
  [251] = {
    [sym_typed_parameters] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(1071),
  },
  [252] = {
    [anon_sym_RBRACK] = ACTIONS(635),
    [sym_identifier] = ACTIONS(635),
  },
  [253] = {
    [aux_sym_str_literal_token1] = ACTIONS(1073),
    [sym_escape_sequence] = ACTIONS(1075),
  },
  [254] = {
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_identifier] = ACTIONS(631),
  },
  [255] = {
    [anon_sym_RBRACK] = ACTIONS(1077),
    [sym_identifier] = ACTIONS(1077),
  },
  [256] = {
    [sym_parameters] = STATE(21),
    [anon_sym_LBRACK] = ACTIONS(1053),
  },
  [257] = {
    [anon_sym_RPAREN] = ACTIONS(1079),
  },
  [258] = {
    [anon_sym_RPAREN2] = ACTIONS(1081),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(1083),
  },
  [260] = {
    [sym_identifier] = ACTIONS(1085),
  },
  [261] = {
    [anon_sym_RPAREN] = ACTIONS(1087),
  },
  [262] = {
    [sym_identifier] = ACTIONS(1089),
  },
  [263] = {
    [anon_sym_RPAREN] = ACTIONS(1091),
  },
  [264] = {
    [aux_sym_line_comment_token1] = ACTIONS(1093),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(1095),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(1097),
  },
  [267] = {
    [sym_identifier] = ACTIONS(1099),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(1101),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(1103),
  },
  [270] = {
    [anon_sym_RPAREN2] = ACTIONS(1105),
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
    [sym_identifier] = ACTIONS(1113),
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
    [anon_sym_RPAREN] = ACTIONS(1121),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(1123),
  },
  [280] = {
    [sym_identifier] = ACTIONS(1125),
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
    [anon_sym_RPAREN] = ACTIONS(1133),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(1135),
  },
  [286] = {
    [sym_identifier] = ACTIONS(1137),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(1139),
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
    [anon_sym_RPAREN] = ACTIONS(1149),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(1151),
  },
  [294] = {
    [anon_sym_RPAREN] = ACTIONS(1081),
  },
  [295] = {
    [anon_sym_RPAREN2] = ACTIONS(1131),
  },
  [296] = {
    [anon_sym_RPAREN] = ACTIONS(1153),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(1155),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(1157),
  },
  [299] = {
    [sym_identifier] = ACTIONS(1159),
  },
  [300] = {
    [anon_sym_LPAREN] = ACTIONS(1161),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(1163),
  },
  [302] = {
    [sym_identifier] = ACTIONS(1165),
  },
  [303] = {
    [sym_identifier] = ACTIONS(1167),
  },
  [304] = {
    [sym_identifier] = ACTIONS(1169),
  },
  [305] = {
    [sym_upper_identifier] = ACTIONS(1171),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(1173),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(264),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(48),
  [11] = {.count = 1, .reusable = false}, SHIFT(48),
  [13] = {.count = 1, .reusable = true}, SHIFT(35),
  [15] = {.count = 1, .reusable = false}, SHIFT(35),
  [17] = {.count = 1, .reusable = false}, SHIFT(305),
  [19] = {.count = 1, .reusable = false}, SHIFT(304),
  [21] = {.count = 1, .reusable = false}, SHIFT(302),
  [23] = {.count = 1, .reusable = false}, SHIFT(239),
  [25] = {.count = 1, .reusable = false}, SHIFT(291),
  [27] = {.count = 1, .reusable = false}, SHIFT(240),
  [29] = {.count = 1, .reusable = true}, SHIFT(107),
  [31] = {.count = 1, .reusable = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = false}, SHIFT(50),
  [35] = {.count = 1, .reusable = false}, SHIFT(52),
  [37] = {.count = 1, .reusable = false}, SHIFT(53),
  [39] = {.count = 1, .reusable = false}, SHIFT(54),
  [41] = {.count = 1, .reusable = false}, SHIFT(277),
  [43] = {.count = 1, .reusable = false}, SHIFT(95),
  [45] = {.count = 1, .reusable = false}, SHIFT(275),
  [47] = {.count = 1, .reusable = false}, SHIFT(274),
  [49] = {.count = 1, .reusable = false}, SHIFT(262),
  [51] = {.count = 1, .reusable = false}, SHIFT(281),
  [53] = {.count = 1, .reusable = false}, SHIFT(260),
  [55] = {.count = 1, .reusable = false}, SHIFT(185),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, SHIFT(32),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = true}, SHIFT(34),
  [65] = {.count = 1, .reusable = false}, SHIFT(268),
  [67] = {.count = 1, .reusable = false}, SHIFT(176),
  [69] = {.count = 1, .reusable = true}, SHIFT(207),
  [71] = {.count = 1, .reusable = true}, SHIFT(244),
  [73] = {.count = 1, .reusable = true}, SHIFT(197),
  [75] = {.count = 1, .reusable = true}, SHIFT(103),
  [77] = {.count = 1, .reusable = true}, SHIFT(286),
  [79] = {.count = 1, .reusable = true}, SHIFT(144),
  [81] = {.count = 1, .reusable = false}, SHIFT(168),
  [83] = {.count = 1, .reusable = false}, SHIFT(297),
  [85] = {.count = 1, .reusable = false}, SHIFT(292),
  [87] = {.count = 1, .reusable = false}, SHIFT(271),
  [89] = {.count = 1, .reusable = false}, SHIFT(272),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(2),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(303),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(124),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(29),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(44),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(51),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(55),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(118),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(105),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(209),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(253),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(210),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(121),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(267),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 40), SHIFT_REPEAT(118),
  [160] = {.count = 1, .reusable = true}, SHIFT(2),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [164] = {.count = 1, .reusable = false}, SHIFT(303),
  [166] = {.count = 1, .reusable = true}, SHIFT(124),
  [168] = {.count = 1, .reusable = true}, SHIFT(29),
  [170] = {.count = 1, .reusable = true}, SHIFT(44),
  [172] = {.count = 1, .reusable = true}, SHIFT(51),
  [174] = {.count = 1, .reusable = true}, SHIFT(55),
  [176] = {.count = 1, .reusable = false}, SHIFT(118),
  [178] = {.count = 1, .reusable = false}, SHIFT(105),
  [180] = {.count = 1, .reusable = true}, SHIFT(209),
  [182] = {.count = 1, .reusable = true}, SHIFT(253),
  [184] = {.count = 1, .reusable = true}, SHIFT(210),
  [186] = {.count = 1, .reusable = true}, SHIFT(121),
  [188] = {.count = 1, .reusable = true}, SHIFT(267),
  [190] = {.count = 1, .reusable = true}, SHIFT(118),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [194] = {.count = 1, .reusable = true}, SHIFT(6),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [198] = {.count = 1, .reusable = true}, SHIFT(143),
  [200] = {.count = 1, .reusable = true}, SHIFT(39),
  [202] = {.count = 1, .reusable = true}, SHIFT(38),
  [204] = {.count = 1, .reusable = true}, SHIFT(36),
  [206] = {.count = 1, .reusable = false}, SHIFT(151),
  [208] = {.count = 1, .reusable = false}, SHIFT(172),
  [210] = {.count = 1, .reusable = true}, SHIFT(204),
  [212] = {.count = 1, .reusable = true}, SHIFT(245),
  [214] = {.count = 1, .reusable = true}, SHIFT(192),
  [216] = {.count = 1, .reusable = true}, SHIFT(141),
  [218] = {.count = 1, .reusable = true}, SHIFT(151),
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
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(245),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(192),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(141),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(286),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(13),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(6),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(143),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(39),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(38),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(33),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(36),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(151),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(172),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(204),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(245),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(192),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(141),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(286),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(151),
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
  [334] = {.count = 1, .reusable = false}, SHIFT(290),
  [336] = {.count = 1, .reusable = true}, SHIFT(290),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [340] = {.count = 1, .reusable = false}, SHIFT(289),
  [342] = {.count = 1, .reusable = true}, SHIFT(289),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [346] = {.count = 1, .reusable = false}, SHIFT(261),
  [348] = {.count = 1, .reusable = true}, SHIFT(261),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [352] = {.count = 1, .reusable = false}, SHIFT(279),
  [354] = {.count = 1, .reusable = true}, SHIFT(279),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [358] = {.count = 1, .reusable = false}, SHIFT(287),
  [360] = {.count = 1, .reusable = true}, SHIFT(287),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [364] = {.count = 1, .reusable = false}, SHIFT(288),
  [366] = {.count = 1, .reusable = true}, SHIFT(288),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [370] = {.count = 1, .reusable = false}, SHIFT(296),
  [372] = {.count = 1, .reusable = true}, SHIFT(296),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(101),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(72),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(47),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(43),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(41),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(40),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [397] = {.count = 1, .reusable = false}, SHIFT(298),
  [399] = {.count = 1, .reusable = true}, SHIFT(298),
  [401] = {.count = 1, .reusable = false}, SHIFT(122),
  [403] = {.count = 1, .reusable = true}, SHIFT(122),
  [405] = {.count = 1, .reusable = false}, SHIFT(265),
  [407] = {.count = 1, .reusable = true}, SHIFT(265),
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
  [443] = {.count = 1, .reusable = false}, SHIFT(77),
  [445] = {.count = 1, .reusable = true}, SHIFT(196),
  [447] = {.count = 1, .reusable = true}, SHIFT(234),
  [449] = {.count = 1, .reusable = true}, SHIFT(195),
  [451] = {.count = 1, .reusable = true}, SHIFT(135),
  [453] = {.count = 1, .reusable = true}, SHIFT(299),
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
  [485] = {.count = 1, .reusable = false}, SHIFT(255),
  [487] = {.count = 1, .reusable = false}, SHIFT(250),
  [489] = {.count = 1, .reusable = true}, SHIFT(202),
  [491] = {.count = 1, .reusable = true}, SHIFT(224),
  [493] = {.count = 1, .reusable = true}, SHIFT(200),
  [495] = {.count = 1, .reusable = true}, SHIFT(114),
  [497] = {.count = 1, .reusable = true}, SHIFT(276),
  [499] = {.count = 1, .reusable = true}, SHIFT(255),
  [501] = {.count = 1, .reusable = true}, SHIFT(101),
  [503] = {.count = 1, .reusable = true}, SHIFT(85),
  [505] = {.count = 1, .reusable = false}, SHIFT(72),
  [507] = {.count = 1, .reusable = false}, SHIFT(71),
  [509] = {.count = 1, .reusable = false}, SHIFT(70),
  [511] = {.count = 1, .reusable = true}, SHIFT(70),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_other_str, 1),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_other_str, 1),
  [517] = {.count = 1, .reusable = false}, SHIFT(243),
  [519] = {.count = 1, .reusable = true}, SHIFT(243),
  [521] = {.count = 1, .reusable = false}, SHIFT(56),
  [523] = {.count = 1, .reusable = true}, SHIFT(56),
  [525] = {.count = 1, .reusable = false}, SHIFT(111),
  [527] = {.count = 1, .reusable = true}, SHIFT(111),
  [529] = {.count = 1, .reusable = false}, SHIFT(24),
  [531] = {.count = 1, .reusable = true}, SHIFT(24),
  [533] = {.count = 1, .reusable = false}, SHIFT(301),
  [535] = {.count = 1, .reusable = true}, SHIFT(301),
  [537] = {.count = 1, .reusable = false}, SHIFT(282),
  [539] = {.count = 1, .reusable = true}, SHIFT(282),
  [541] = {.count = 1, .reusable = false}, SHIFT(108),
  [543] = {.count = 1, .reusable = true}, SHIFT(108),
  [545] = {.count = 1, .reusable = false}, SHIFT(30),
  [547] = {.count = 1, .reusable = true}, SHIFT(30),
  [549] = {.count = 1, .reusable = false}, SHIFT(238),
  [551] = {.count = 1, .reusable = true}, SHIFT(238),
  [553] = {.count = 1, .reusable = true}, SHIFT(86),
  [555] = {.count = 1, .reusable = false}, SHIFT(242),
  [557] = {.count = 1, .reusable = true}, SHIFT(242),
  [559] = {.count = 1, .reusable = false}, SHIFT(284),
  [561] = {.count = 1, .reusable = true}, SHIFT(284),
  [563] = {.count = 1, .reusable = false}, SHIFT(241),
  [565] = {.count = 1, .reusable = true}, SHIFT(241),
  [567] = {.count = 1, .reusable = false}, SHIFT(257),
  [569] = {.count = 1, .reusable = true}, SHIFT(257),
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
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [645] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
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
  [667] = {.count = 1, .reusable = false}, SHIFT(251),
  [669] = {.count = 1, .reusable = false}, SHIFT(96),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(101),
  [674] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [676] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(94),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(93),
  [682] = {.count = 1, .reusable = true}, SHIFT(294),
  [684] = {.count = 1, .reusable = false}, SHIFT(94),
  [686] = {.count = 1, .reusable = false}, SHIFT(93),
  [688] = {.count = 1, .reusable = true}, SHIFT(295),
  [690] = {.count = 1, .reusable = true}, SHIFT(283),
  [692] = {.count = 1, .reusable = true}, SHIFT(258),
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
  [742] = {.count = 1, .reusable = true}, SHIFT(78),
  [744] = {.count = 1, .reusable = false}, SHIFT(132),
  [746] = {.count = 1, .reusable = true}, SHIFT(233),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(107),
  [751] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [753] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(112),
  [756] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(176),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(207),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(244),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(197),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(103),
  [771] = {.count = 1, .reusable = true}, SHIFT(230),
  [773] = {.count = 1, .reusable = true}, SHIFT(227),
  [775] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [777] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [779] = {.count = 1, .reusable = true}, SHIFT(225),
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
  [809] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(244),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(197),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(103),
  [818] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [820] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [822] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [824] = {.count = 1, .reusable = true}, SHIFT(83),
  [826] = {.count = 1, .reusable = true}, SHIFT(174),
  [828] = {.count = 1, .reusable = true}, SHIFT(170),
  [830] = {.count = 1, .reusable = true}, SHIFT(82),
  [832] = {.count = 1, .reusable = true}, SHIFT(149),
  [834] = {.count = 1, .reusable = true}, SHIFT(154),
  [836] = {.count = 1, .reusable = true}, SHIFT(73),
  [838] = {.count = 1, .reusable = true}, SHIFT(171),
  [840] = {.count = 1, .reusable = false}, SHIFT(140),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym_call_no_module, 1, .production_id = 1),
  [844] = {.count = 1, .reusable = true}, SHIFT(228),
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
  [882] = {.count = 1, .reusable = true}, SHIFT(280),
  [884] = {.count = 1, .reusable = true}, SHIFT(220),
  [886] = {.count = 1, .reusable = true}, SHIFT(248),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [890] = {.count = 1, .reusable = true}, SHIFT(89),
  [892] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [894] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(276),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(187),
  [900] = {.count = 1, .reusable = true}, SHIFT(169),
  [902] = {.count = 1, .reusable = true}, SHIFT(187),
  [904] = {.count = 1, .reusable = true}, SHIFT(162),
  [906] = {.count = 1, .reusable = true}, SHIFT(188),
  [908] = {.count = 1, .reusable = false}, SHIFT(148),
  [910] = {.count = 1, .reusable = false}, SHIFT(208),
  [912] = {.count = 1, .reusable = true}, SHIFT(208),
  [914] = {.count = 1, .reusable = false}, SHIFT(137),
  [916] = {.count = 1, .reusable = false}, SHIFT(163),
  [918] = {.count = 1, .reusable = false}, SHIFT(205),
  [920] = {.count = 1, .reusable = true}, SHIFT(205),
  [922] = {.count = 1, .reusable = false}, SHIFT(68),
  [924] = {.count = 1, .reusable = false}, SHIFT(84),
  [926] = {.count = 1, .reusable = false}, SHIFT(81),
  [928] = {.count = 1, .reusable = false}, SHIFT(193),
  [930] = {.count = 1, .reusable = true}, SHIFT(193),
  [932] = {.count = 1, .reusable = false}, SHIFT(79),
  [934] = {.count = 1, .reusable = false}, SHIFT(194),
  [936] = {.count = 1, .reusable = true}, SHIFT(194),
  [938] = {.count = 1, .reusable = false}, SHIFT(179),
  [940] = {.count = 1, .reusable = false}, SHIFT(201),
  [942] = {.count = 1, .reusable = true}, SHIFT(201),
  [944] = {.count = 1, .reusable = false}, SHIFT(232),
  [946] = {.count = 1, .reusable = false}, SHIFT(231),
  [948] = {.count = 1, .reusable = false}, SHIFT(226),
  [950] = {.count = 1, .reusable = false}, SHIFT(198),
  [952] = {.count = 1, .reusable = true}, SHIFT(198),
  [954] = {.count = 1, .reusable = false}, SHIFT(175),
  [956] = {.count = 1, .reusable = false}, SHIFT(254),
  [958] = {.count = 1, .reusable = false}, SHIFT(199),
  [960] = {.count = 1, .reusable = true}, SHIFT(199),
  [962] = {.count = 1, .reusable = false}, SHIFT(177),
  [964] = {.count = 1, .reusable = false}, SHIFT(167),
  [966] = {.count = 1, .reusable = false}, SHIFT(190),
  [968] = {.count = 1, .reusable = true}, SHIFT(190),
  [970] = {.count = 1, .reusable = false}, SHIFT(153),
  [972] = {.count = 1, .reusable = false}, SHIFT(138),
  [974] = {.count = 1, .reusable = false}, SHIFT(180),
  [976] = {.count = 1, .reusable = false}, SHIFT(203),
  [978] = {.count = 1, .reusable = true}, SHIFT(203),
  [980] = {.count = 1, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [982] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(208),
  [985] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(208),
  [988] = {.count = 1, .reusable = false}, SHIFT(123),
  [990] = {.count = 1, .reusable = false}, SHIFT(191),
  [992] = {.count = 1, .reusable = true}, SHIFT(191),
  [994] = {.count = 1, .reusable = false}, SHIFT(126),
  [996] = {.count = 1, .reusable = false}, SHIFT(206),
  [998] = {.count = 1, .reusable = true}, SHIFT(206),
  [1000] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 44),
  [1002] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [1004] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(212),
  [1007] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [1009] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 42), SHIFT_REPEAT(248),
  [1014] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 42),
  [1016] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [1018] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(45),
  [1021] = {.count = 1, .reusable = true}, SHIFT(214),
  [1023] = {.count = 1, .reusable = true}, SHIFT(218),
  [1025] = {.count = 1, .reusable = true}, SHIFT(211),
  [1027] = {.count = 1, .reusable = true}, SHIFT(212),
  [1029] = {.count = 1, .reusable = true}, SHIFT(251),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [1033] = {.count = 1, .reusable = true}, SHIFT(164),
  [1035] = {.count = 1, .reusable = true}, SHIFT(45),
  [1037] = {.count = 1, .reusable = true}, SHIFT(147),
  [1039] = {.count = 1, .reusable = false}, SHIFT(252),
  [1041] = {.count = 1, .reusable = true}, SHIFT(252),
  [1043] = {.count = 1, .reusable = true}, SHIFT(159),
  [1045] = {.count = 1, .reusable = false}, SHIFT(159),
  [1047] = {.count = 1, .reusable = false}, SHIFT(80),
  [1049] = {.count = 1, .reusable = true}, SHIFT(80),
  [1051] = {.count = 1, .reusable = true}, SHIFT(92),
  [1053] = {.count = 1, .reusable = true}, SHIFT(189),
  [1055] = {.count = 1, .reusable = true}, SHIFT(223),
  [1057] = {.count = 1, .reusable = false}, SHIFT(181),
  [1059] = {.count = 1, .reusable = true}, SHIFT(181),
  [1061] = {.count = 1, .reusable = false}, SHIFT(165),
  [1063] = {.count = 1, .reusable = true}, SHIFT(165),
  [1065] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 46),
  [1067] = {.count = 1, .reusable = true}, SHIFT(235),
  [1069] = {.count = 1, .reusable = false}, SHIFT(235),
  [1071] = {.count = 1, .reusable = true}, SHIFT(58),
  [1073] = {.count = 1, .reusable = false}, SHIFT(125),
  [1075] = {.count = 1, .reusable = true}, SHIFT(125),
  [1077] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [1079] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [1081] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 43),
  [1085] = {.count = 1, .reusable = true}, SHIFT(11),
  [1087] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [1089] = {.count = 1, .reusable = true}, SHIFT(256),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 43),
  [1093] = {.count = 1, .reusable = true}, SHIFT(18),
  [1095] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [1097] = {.count = 1, .reusable = true}, SHIFT(259),
  [1099] = {.count = 1, .reusable = true}, SHIFT(130),
  [1101] = {.count = 1, .reusable = true}, SHIFT(131),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [1105] = {.count = 1, .reusable = true}, SHIFT(247),
  [1107] = {.count = 1, .reusable = true}, SHIFT(229),
  [1109] = {.count = 1, .reusable = true}, SHIFT(150),
  [1111] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 45),
  [1113] = {.count = 1, .reusable = true}, SHIFT(300),
  [1115] = {.count = 1, .reusable = true}, SHIFT(63),
  [1117] = {.count = 1, .reusable = true}, SHIFT(222),
  [1119] = {.count = 1, .reusable = true}, SHIFT(60),
  [1121] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 38),
  [1125] = {.count = 1, .reusable = true}, SHIFT(217),
  [1127] = {.count = 1, .reusable = true}, SHIFT(246),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [1131] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [1133] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [1135] = {.count = 1, .reusable = true}, SHIFT(263),
  [1137] = {.count = 1, .reusable = true}, SHIFT(152),
  [1139] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [1147] = {.count = 1, .reusable = true}, SHIFT(236),
  [1149] = {.count = 1, .reusable = true}, SHIFT(19),
  [1151] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [1155] = {.count = 1, .reusable = true}, SHIFT(67),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [1159] = {.count = 1, .reusable = true}, SHIFT(76),
  [1161] = {.count = 1, .reusable = true}, SHIFT(219),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [1165] = {.count = 1, .reusable = true}, SHIFT(28),
  [1167] = {.count = 1, .reusable = true}, SHIFT(249),
  [1169] = {.count = 1, .reusable = true}, SHIFT(237),
  [1171] = {.count = 1, .reusable = true}, SHIFT(293),
  [1173] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
