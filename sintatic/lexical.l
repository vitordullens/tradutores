%option noyywrap
%option noinput nounput

%{
    #include "syntax.tab.h"

    int line = 1, column = 1, errors = 0;
%}

DIGIT [0-9]

ID  [a-zA-Z_][_a-z0-9A-Z]*

BASIC_TYPE int|float

SET_TYPE set

ELEM_TYPE elem

EMPTY EMPTY

ARITMETIC_OP1 "+"|"-"

ARITMETIC_OP2  "*"|"/"

RELATIONAL_OP >|<|">="|"<="|"!="|"=="

OR "||"

AND "&&"

SET_OP1 add|remove|exists

INPUT  read

OUTPUT write|writeln

COMMENT "//".*

STRING \"[^\"]*\"|'[^']*'


%%

{COMMENT} {}

{STRING} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return STRING;
}

{DIGIT}+ {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INTEGER;
}

{DIGIT}+"."{DIGIT}+ {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FLOAT;
}

{BASIC_TYPE} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return BASIC_TYPE;
}

{SET_TYPE} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return SET_TYPE;
}
{ELEM_TYPE} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ELEM_TYPE;
}

{EMPTY} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return EMPTY;
}

"if" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return IF;
}

"else" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ELSE;
}

"for" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FOR;
}

"return" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return RETURN;
}

"forall" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FORALL;
}

"is_set" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ISSET;
}

{ARITMETIC_OP1} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ARITMETIC_OP1;
}

{ARITMETIC_OP2} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ARITMETIC_OP2;
}

{RELATIONAL_OP} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return RELATIONAL_OP;
}

{OR} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return OR;
}

{AND} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return AND;
}

"!" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '!';
}

{SET_OP1} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return SET_OP1;
}

"in" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INFIX_OP;
}

{INPUT} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INPUT;
}

{OUTPUT} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return OUTPUT;
}

{ID} {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- identifier: %s\n", line, column, yytext);
  column += yyleng;
  return ID;
}

"=" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '=';
}

"," {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ',';
}

";" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ';';
}

"{" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '{';
}

"}" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '}';
}

"(" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '(';
}

")" {
  yylval.token.body = strdup(yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ')';
}

[ \t]+ {
  column += yyleng;
}

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
