%option noyywrap
%option noinput nounput

%{
    #include "sintatico.tab.h"
    #include "tabela.h"

    int linha = 1, coluna = 1;
    extern int erros;
%}

NUMBER [0-9]

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

STRING \"[^\"]*\"|\'([^'\\\n]|\\.)'


%%

{COMMENT} {}

{STRING} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return STRING;
}

{NUMBER}+ {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return INTEGER;
}

{NUMBER}+"."{NUMBER}* {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return FLOAT;
}

{INT_TYPE} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return INT_TYPE;
}

{FLOAT_TYPE} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return FLOAT_TYPE;
}

{SET_TYPE} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return SET_TYPE;
}
{ELEM_TYPE} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ELEM_TYPE;
}

{EMPTY} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return EMPTY;
}

"if" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return IF;
}

"else" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ELSE;
}

"for" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return FOR;
}

"return" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return RETURN;
}

"forall" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return FORALL;
}

"is_set" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ISSET;
}

{ARITMETIC_OP1} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ARITMETIC_OP1;
}

{ARITMETIC_OP2} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ARITMETIC_OP2;
}

{RELATIONAL_OP} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return RELATIONAL_OP;
}

{OR} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return OR;
}

{AND} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return AND;
}

"!" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return '!';
}

{SET_OP1} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return SET_OP1;
}

"in" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return INFIX_OP;
}

{INPUT} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return INPUT;
}

{OUTPUT} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return OUTPUT;
}

{ID} {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ID;
}

"=" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return '=';
}

"," {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ',';
}

";" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ';';
}

"{" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return '{';
}

"}" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return '}';
}

"(" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return '(';
}

")" {
  strcpy(yylval.lexema.corpo, yytext);
  yylval.lexema.linha = linha;
  yylval.lexema.coluna = coluna;
  coluna += yyleng;
  return ')';
}

[ \t]+ {
  coluna += yyleng;
}

\n|\r {
    linha++;
    coluna = 1;
}

. {
    erros++;
    printf("%-15s %d:%-3d - Unidentified character: %s\n","LEXICAL ERROR ", linha, coluna, yytext);
}
