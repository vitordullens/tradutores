%define lr.type canonical-lr
%define parse.error verbose
%defines

%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "tabela.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  char *tipo;

  int indiceTabela = -1;
%}

%union {
  struct Token {
    int column, line;
    char *body;
  } token;
}

%type program
%type declaration_list
%type declaration
%type var_declaration
%type function_declaration
%type params_list
%type stmts
%type stmt
%type brackets_stmt
%type io_stmt
%type for_stmt
%type if_else_stmt
%type return_stmt
%type set_stmt
%type exp_stmt
%type exp
%type set_exp
%type set_in_exp
%type or_exp
%type and_exp
%type relational_exp
%type sum_exp
%type mul_exp
%type primal_exp
%type arg_list
%type type
%type const
%type assignment
%type unary_exp


%token <token> ID
%token <token> INT_TYPE
%token <token> FLOAT_TYPE
%token <token> SET_TYPE
%token <token> ELEM_TYPE
%token <token> ARITMETIC_OP1
%token <token> ARITMETIC_OP2
%token <token> RELATIONAL_OP
%token <token> AND
%token <token> OR
%token <token> SET_OP1
%token <token> INPUT
%token <token> OUTPUT
%token <token> STRING
%token <token> INTEGER
%token <token> FLOAT
%token <token> EMPTY
%token <token> IF
%token <token> ELSE
%token <token> FOR
%token <token> RETURN
%token <token> INFIX_OP
%token <token> FORALL
%token <token> ISSET
%token <token> ';'
%token <token> ','
%token <token> '{'
%token <token> '}'
%token <token> '('
%token <token> ')'
%token <token> '='
%token <token> '!'


%start program

%%

program:
  declaration_list {}

declaration_list:
  declaration_list declaration  {}
  | declaration {}

declaration:
  function_declaration {}
  | var_declaration {}
  | error {}

var_declaration:
  type ID ';' {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopoAtual(&escopo);
    s.ehFuncao = 0;
    s.tipo = strdup(tipo);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;
  }

function_declaration:
  type ID '(' params_list ')' brackets_stmt {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopoAtual(&escopo);
    s.ehFuncao = 1;
    s.tipo = strdup(tipo);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;
  }
  | type ID '(' ')' brackets_stmt {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopoAtual(&escopo);
    s.ehFuncao = 1;
    s.tipo = strdup(tipo);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;
  }

params_list:
 type ID ',' params_list {}
 | type ID {}

brackets_stmt:
  '{' stmts '}' {
  }
  | error {}

stmts:
  stmt stmts {}
  | stmt {}

stmt:
  for_stmt {}
  | if_else_stmt {}
  | return_stmt {}
  | io_stmt {}
  | exp_stmt {}
  | set_stmt {}
  | var_declaration {}
  | assignment {}
  | brackets_stmt {}

io_stmt: 
  INPUT '(' ID ')' ';' {}
  | OUTPUT '(' STRING ')' ';' {}
  | OUTPUT '(' exp ')' ';' {}

for_stmt:
  FOR '(' assignment ';' exp ';' assignment ')' stmt {}

if_else_stmt:
  IF '(' exp ')' stmt {}
  | IF '(' exp ')' brackets_stmt ELSE stmt {}

return_stmt:
  RETURN ';' {}
  | RETURN exp ';' {}

set_stmt:
  FORALL '(' ID INFIX_OP set_exp ')' stmt {}
  | FORALL '(' ID INFIX_OP ID ')' stmt {}
  | ISSET '(' ID ')' ';' {}
  | ISSET '(' set_exp ')' ';' {}

exp_stmt:
  exp ';' {}

assignment:
  ID '=' exp ';' {}

exp:
  or_exp {}
  | set_exp {}

set_exp:
  SET_OP1 '(' set_in_exp ')' {}

set_in_exp:
  or_exp INFIX_OP ID {}
  | or_exp INFIX_OP set_exp {}

or_exp:
  or_exp OR and_exp {}
  | and_exp {}
  | set_in_exp {}

and_exp:
  and_exp AND relational_exp {}
  | relational_exp {}

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {}
  | sum_exp {}

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {}
  | mul_exp {}

mul_exp:
  mul_exp ARITMETIC_OP2 unary_exp {}
  | unary_exp {}

unary_exp:
  primal_exp {}
  | '!' primal_exp {}
  | ARITMETIC_OP1 primal_exp {}
  | ID '(' arg_list ')' {}
  | ID '(' ')' {}


primal_exp:
  ID {}
  | const {}
  | '(' exp ')' {}

arg_list:
  exp ',' arg_list {}
  | exp {}

type:
  INT_TYPE {
    tipo = strdup("INT");
  }
  | FLOAT_TYPE {
    tipo = strdup("FLOAT");
  }
  | SET_TYPE {
    tipo = strdup("SET");
  }
  | ELEM_TYPE {
    tipo = strdup("ELEM");
  }

const:
  INTEGER {}
  | FLOAT {}
  | EMPTY {}

%%

void yyerror(const char* msg) {
  fprintf (stderr, "SYNTAX ERROR %d:%d - %s\n", yylval.token.line, yylval.token.column, msg);
}

int main(int argc, char ** argv) {
    ++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else {
        yyin = stdin;
    }

    escopo.idx = -1;
    escopo.proximo = -1;
    
    yyparse();

    printTabela(indiceTabela);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

