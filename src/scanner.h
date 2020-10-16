#ifndef is_scanner_h
#define is_scanner_h

typedef enum {
  // Single-character tokens.
TOKEN_NL,
  // One or two character tokens.

  // Literals.
TOKEN_STRING,	
  // Keywords.
TOKEN_IDENTIFIER,
TOKEN_SAY,
  TOKEN_ERROR,
  TOKEN_EOF
} TokenType;

typedef struct {
  TokenType type;
  const char* start;
  int length;
  int line;
} Token;


void initScanner(const char* source);
Token scanToken();

#endif
