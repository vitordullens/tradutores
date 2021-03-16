%option noyywrap
%option noinput nounput
%option bison-bridge

%{
    #include "sintatic.tab.h"
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>

    int line = 1, column = 1, errors = 0;
%}

DIGIT [0-9]

ID  [a-zA-Z_][_a-z0-9A-Z]*

BASIC_TYPE int|float

SET_TYPE set

ELEM_TYPE elem

EMPTY EMPTY

BASIC_OP  if|else|for|return

ARITMETIC_OP1 "+"|"-"

ARITMETIC_OP2  "*"|"/"

RELATIONAL_OP >|<|">="|"<="|"!="|"=="

LOGIC_OP "!"|"&&"|"||"

SET_OP1 add|remove|exists

SET_OP2 forall|is_set

INFIX_OP in

INPUT  read

OUTPUT write|writeln

COMMENT "//".*

STRING \"[^\"]*\"|'[^']*'


%%

{COMMENT} {}

{STRING} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return STRING;
}

{DIGIT}+ {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return INTEGER;
}

{DIGIT}+"."{DIGIT}+ {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return FLOAT;
}

{BASIC_TYPE} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return BASIC_TYPE;
}

{SET_TYPE} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return SET_TYPE;
}
{ELEM_TYPE} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return ELEM_TYPE;
}

{EMPTY} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return EMPTY;
}

{BASIC_OP} {
  printf("Basic operator: %s\n", yytext);
  column += yyleng;
}

{ARITMETIC_OP1} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return ARITMETIC_OP1;
}

{ARITMETIC_OP2} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return ARITMETIC_OP2;
}

{RELATIONAL_OP} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return RELATIONAL_OP;
}

{LOGIC_OP} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return LOGIC_OP;
}

{SET_OP1} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return SET_OP1;
}

{SET_OP2} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return SET_OP2;
}

{INFIX_OP} {
  printf("Infix operator: %s\n", yytext);
  column += yyleng;
}

{INPUT} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return INPUT;
}

{OUTPUT} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return OUTPUT;
}

{ID} {
  yylval->token.lex = (char*) malloc(sizeof(char) * (1 + strlen(yytext)));
  strcpy(yylval->token.lex, yytext);
  yylval->token.line = line;
  column += yyleng;
  yylval->token.column = column;
  return ID;
}

"=" {
  printf("Assingnment: %s\n", yytext);
  column += yyleng;
}

"," {
    printf("Variable separator: %s\n", yytext);
}

";" {
    printf("Command separator: %s\n", yytext);
    column += yyleng;
}

"{"|"}" {
    printf("Block delimiter: %s\n", yytext);
    column += yyleng;
}

"("|")" {
    printf("Parentheses: %s\n", yytext);
    column += yyleng;
}

[ \t]+ {}

\n|\r {
    line++;
    column = 1;
}

. {
    errors++;
    printf("ERROR: Unidentified character: %s - line: %d - column: %d\n", yytext, line, column);
}

{DIGIT}+[^+*<>=~&|/^\n\t ;,)\]-]+ {
    errors++;
    printf("ERROR: Incorrect token format: %s - line: %d - column: %d\n", yytext, line, column);
}
