%option noyywrap
%option noinput nounput

%{
    #include "syntax.tab.h"
    #include "tabela.h"

    int line = 1, column = 1, errors = 0;
%}

DIGIT [0-9]

ID  [a-zA-Z_][_a-z0-9A-Z]*

INT_TYPE int

FLOAT_TYPE float

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
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return STRING;
}

{DIGIT}+ {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INTEGER;
}

{DIGIT}+"."{DIGIT}+ {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FLOAT;
}

{INT_TYPE} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INT_TYPE;
}

{FLOAT_TYPE} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FLOAT_TYPE;
}

{SET_TYPE} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return SET_TYPE;
}
{ELEM_TYPE} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ELEM_TYPE;
}

{EMPTY} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return EMPTY;
}

"if" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return IF;
}

"else" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ELSE;
}

"for" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FOR;
}

"return" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return RETURN;
}

"forall" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return FORALL;
}

"is_set" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ISSET;
}

{ARITMETIC_OP1} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ARITMETIC_OP1;
}

{ARITMETIC_OP2} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ARITMETIC_OP2;
}

{RELATIONAL_OP} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return RELATIONAL_OP;
}

{OR} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return OR;
}

{AND} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return AND;
}

"!" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '!';
}

{SET_OP1} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return SET_OP1;
}

"in" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INFIX_OP;
}

{INPUT} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return INPUT;
}

{OUTPUT} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return OUTPUT;
}

{ID} {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- identifier: %s\n", line, column, yytext);
  column += yyleng;
  return ID;
}

"=" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '=';
}

"," {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ',';
}

";" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return ';';
}

"{" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  adicionarEscopo(&escopo);
  column += yyleng;
  return '{';
}

"}" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  removerEscopo(&escopo);
  column += yyleng;
  return '}';
}

"(" {
  strcpy(yylval.token.body, yytext);
  yylval.token.line = line;
  yylval.token.column = column;
  // printf("LEXICO %d:%d -------- %s\n", line, column, yytext);
  column += yyleng;
  return '(';
}

")" {
  strcpy(yylval.token.body, yytext);
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
    printf("%-15s %d:%-3d - Unidentified character: %s\n","LEXICAL ERROR ", line, column, yytext);
}

{DIGIT}+[^+*<>=~&|/^\n\t ;,)\]-]+ {
    errors++;
    printf("%-15s %d:%-3d - Incorrect token format: %s\n", "LEXICAL ERROR ", line, column, yytext);
}
