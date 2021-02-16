%option noyywrap
%{
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

ARITMETIC_OP  "+"|"-"|"*"|"/"

RELATIONAL_OP >|<|">="|"<="|"!="|"=="

LOGIC_OP "!"|"&&"|"||"

SET_OP  add|remove|forall|is_set|exists

INFIX_OP in

INPUT  read

OUTPUT write|writeln

COMMENT "//".*

STRING \"[^\"]*\"|'[^']*'


%%

{COMMENT} {}

{STRING} {
  printf("String output: %s\n", yytext);
  column += yyleng;
}

{DIGIT}+ {
  printf("Integer: %s\n", yytext);
  column += yyleng;
}

{DIGIT}+"."{DIGIT}+ {
  printf("Float: %s\n", yytext);
  column += yyleng;
}

{BASIC_TYPE} {
  printf("Basic type: %s\n", yytext);
  column += yyleng;
}

{SET_TYPE} {
  printf("Set type: %s\n", yytext);
  column += yyleng;
}
{ELEM_TYPE} {
  printf("Elem type: %s\n", yytext);
  column += yyleng;
}

{EMPTY} {
  printf("Constant EMPTY: %s\n", yytext);
  column += yyleng;
}

{BASIC_OP} {
  printf("Basic operator: %s\n", yytext);
  column += yyleng;
}

{ARITMETIC_OP} {
  printf("Aritmetic operator: %s\n", yytext);
  column += yyleng;
}

{RELATIONAL_OP} {
  printf("Relational operator: %s\n", yytext);
  column += yyleng;
}

{LOGIC_OP} {
  printf("Logic operator: %s\n", yytext);
  column += yyleng;
}

{SET_OP} {
  printf("Set operator: %s\n", yytext);
  column += yyleng;
}

{INFIX_OP} {
  printf("Infix operator: %s\n", yytext);
  column += yyleng;
}

{INPUT} {
  printf("Input operator: %s\n", yytext);
  column += yyleng;
}

{OUTPUT} {
  printf("Output operator: %s\n", yytext);
  column += yyleng;
}

{ID} {
    printf("Identifier: %s\n", yytext);
    column += yyleng;
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

%%

int main() {
    yylex();
    printf("\n");
    if(errors > 0){
        printf("Lexical analysis finished with %d error(s)\n", errors);
    }
    else{
        printf("Lexical analysis finished without errors.\n");
    }
    return 0;
}