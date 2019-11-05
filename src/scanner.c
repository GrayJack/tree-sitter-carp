#include <tree_sitter/parser.h>
// #include <wctype.h>

enum TokenType {
  DOC,
};

void * tree_sitter_carp_external_scanner_create(void) { return NULL; }

void tree_sitter_carp_external_scanner_destroy(void *payload) {}

void tree_sitter_carp_external_scanner_reset(void *payload) {}

unsigned tree_sitter_carp_external_scanner_serialize(
    void *payload,
    char *buffer)
{
  return 0;
}

void tree_sitter_carp_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) { }

static void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

bool tree_sitter_carp_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[DOC] && lexer->lookahead == '(') {
        advance(lexer);
        if (lexer->lookahead != 'd') return false;
        advance(lexer);
        if (lexer->lookahead != 'o') return false;
        advance(lexer);
        if (lexer->lookahead != 'c') return false;

        while (true) {
            switch (lexer->lookahead) {
                case '\0':
                    return false;
                case '\"':
                    advance(lexer);
                    while (true) {
                        switch (lexer->lookahead) {
                            case '\"':
                                advance(lexer);
                                goto EndWhile;
                            default:
                                advance(lexer);
                                break;
                        }
                    }
                    EndWhile: ;
                    break;
                case ')':
                    advance(lexer);
                    lexer->result_symbol = DOC;
                    return true;
                default:
                    advance(lexer);
                    break;
            }
        }
    }

    return false;
}
