//
//  interpreter_token.cpp
//  Nadia-CPP
//
//  Created by Dean Lee on 6/3/20.
//  Copyright © 2020 Dean Lee. All rights reserved.
//

#include "interpreter_token.hpp"

Interpreter_Token::Interpreter_Token(Token_Type inputTokenType, string inputLexeme, string inputLiteral, int inputLine) : tokenType(inputTokenType), lexeme(inputLexeme), literal(inputLiteral), line(inputLine)
{
    
}
string Interpreter_Token::toString()
{
    string tokenTypeArray[] = {"LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE", "COMMA", "DOT", "MUNUS", "PLUS", "SEMICOLON", "SLASH", "STAR", "BANG", "BAG_EQUAL", "EQUAL", "EQUAL_EQUAL", "GREATER", "GREATER_EQUAL",
    "LESS", "LESS_EQUAL", "IDENTIFIER", "STRING", "NUMBER", "AND", "CLASS", "ELSE", "FALSE", "FUN", "FOR", "IF", "NIL", "OR", "PRINT", "RETURN", "SUPER", "THIS", "TRUE", "VAR", "WHILE", "EOF"};
    
    string tokenString;
    
    tokenString.append(tokenTypeArray[tokenType]).append(" ").append(lexeme).append(" ").append(literal);

    return tokenString;
}
