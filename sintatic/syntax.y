%define lr.type canonical-lr
%define parse.error verbose
%defines

%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "tabela.h"
  #include "arvore.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  char *tipo;

  int indiceTabela = -1;

  NodoArvore* raiz;
%}

%union {
  struct Token {
    int column, line;
    char *body;
  } token;

  struct NodoArvore* nodo;
}

%type <nodo> program
%type <nodo> declaration_list
%type <nodo> declaration
%type <nodo> var_declaration
%type <nodo> function_declaration
%type <nodo> params_list
%type <nodo> stmts
%type <nodo> stmt
%type <nodo> brackets_stmt
%type <nodo> io_stmt
%type <nodo> for_stmt
%type <nodo> if_else_stmt
%type <nodo> return_stmt
%type <nodo> set_stmt
%type <nodo> exp_stmt
%type <nodo> exp
%type <nodo> set_exp
%type <nodo> set_in_exp
%type <nodo> or_exp
%type <nodo> and_exp
%type <nodo> relational_exp
%type <nodo> sum_exp
%type <nodo> mul_exp
%type <nodo> primal_exp
%type <nodo> arg_list
%type <nodo> type
%type <nodo> const
%type <nodo> assignment
%type <nodo> unary_exp


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
  declaration_list {
    $$ = criarNodo("program");
    $$->filho = $1;
    raiz = $$;
  }

declaration_list:
  declaration_list declaration  {}
  | declaration {
    $$ = criarNodo("declaration_list");
    $$->filho = $1;
  }

declaration:
  function_declaration {
    $$ = criarNodo("declaration");
    $$->filho = $1;
  }
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

    $$ = criarNodo("function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.line, $2.column, $2.body);
    $1->proximo = $5;
  }

params_list:
 type ID ',' params_list {}
 | type ID {}

brackets_stmt:
  '{' stmts '}' {
    $$ = criarNodo("brackets_stmt");
    $$->filho = $2;
  }
  | error {}

stmts:
  stmt stmts {}
  | stmt {
    $$ = criarNodo("stmts");
    $$->filho = $1;
  }

stmt:
  for_stmt {}
  | if_else_stmt {}
  | return_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
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
  | RETURN exp ';' {
    $$ = criarNodo("return_stmt");
    $$->filho = $2;
  }

set_stmt:
  FORALL '(' ID INFIX_OP set_exp ')' stmt {}
  | FORALL '(' ID INFIX_OP ID ')' stmt {}
  | ISSET '(' ID ')' ';' {}
  | ISSET '(' set_exp ')' ';' {}

exp_stmt:
  exp ';' {
    $$ = criarNodo("exp_stmt");
    $$->filho = $1;
  }

assignment:
  ID '=' exp ';' {}

exp:
  or_exp {
    $$ = criarNodo("exp");
    $$->filho = $1;
  }
  | set_exp {}

set_exp:
  SET_OP1 '(' set_in_exp ')' {}

set_in_exp:
  or_exp INFIX_OP ID {}
  | or_exp INFIX_OP set_exp {}

or_exp:
  or_exp OR and_exp {}
  | and_exp {
    $$ = criarNodo("or_exp");
    $$->filho = $1;
  }
  | set_in_exp {}

and_exp:
  and_exp AND relational_exp {}
  | relational_exp {
    $$ = criarNodo("and_exp");
    $$->filho = $1;
  }

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {}
  | sum_exp {
    $$ = criarNodo("relatorional_exp");
    $$->filho = $1;
  }

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {}
  | mul_exp {
    $$ = criarNodo("sum_exp");
    $$->filho = $1;
  }

mul_exp:
  mul_exp ARITMETIC_OP2 unary_exp {}
  | unary_exp {
    $$ = criarNodo("mul_exp");
    $$->filho = $1;
  }

unary_exp:
  primal_exp {
    $$ = criarNodo("unary_exp");
    $$->filho = $1;
  }
  | '!' primal_exp {}
  | ARITMETIC_OP1 primal_exp {}
  | ID '(' arg_list ')' {}
  | ID '(' ')' {}


primal_exp:
  ID {}
  | const {
    $$ = criarNodo("primal_exp");
    $$->filho = $1;
  }
  | '(' exp ')' {}

arg_list:
  exp ',' arg_list {}
  | exp {}

type:
  INT_TYPE {
    tipo = strdup("INT");
    $$ = criarNodo("INT_TYPE");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }
  | FLOAT_TYPE {
    tipo = strdup("FLOAT");
    $$ = criarNodo("FLOAT_TYPE");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }
  | SET_TYPE {
    tipo = strdup("SET");
    $$ = criarNodo("SET_TYPE");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }
  | ELEM_TYPE {
    tipo = strdup("ELEM");
    $$ = criarNodo("ELEM_TYPE");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }

const:
  INTEGER {
    $$ = criarNodo("const");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }
  | FLOAT {
    $$ = criarNodo("const");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }
  | EMPTY {
    $$ = criarNodo("const");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }

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
    printArvore(raiz, 0);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

