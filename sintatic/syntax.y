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

  extern Simbolo tabelaSimbolos[1000000];

  char tipo[10000][100];

  int indiceTipo = 0;

  int indiceTabela = -1;

  int escopo = 0;

  NodoArvore* raiz;

  int erros = 0;
%}

%union {
  struct Token {
    int coluna, linha;
    char corpo[100];
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
%type <nodo> assignment
%type <nodo> exp
%type <nodo> set_exp
%type <nodo> set_in_exp
%type <nodo> or_exp
%type <nodo> and_exp
%type <nodo> relational_exp
%type <nodo> sum_exp
%type <nodo> mul_exp
%type <nodo> unary_exp
%type <nodo> primal_exp
%type <nodo> arg_list
%type <nodo> type
%type <nodo> const


%token <token> ID
%token <token> FLOAT_TYPE INT_TYPE SET_TYPE ELEM_TYPE
%token <token> ARITMETIC_OP1 ARITMETIC_OP2
%token <token> RELATIONAL_OP
%token <token> AND OR
%token <token> SET_OP1
%token <token> INPUT OUTPUT
%token <token> INTEGER FLOAT STRING EMPTY
%token <token> IF ELSE
%right THEN ELSE
%token <token> FOR
%token <token> RETURN
%token <token> INFIX_OP
%token <token> FORALL ISSET
%token <token> ';' '!' '=' ')' '(' '}' '{' ','


%start program

%%

program:
  declaration_list {
    $$ = retornaNodo();
    strcpy($$->val, "program");
    $$->filho = $1;
    raiz = $$;
  }

declaration_list:
  declaration_list declaration  {
    $$ = retornaNodo();
    strcpy($$->val, "declaration_list");
    $$->filho = $1;
    $1->proximo = $2;
  }
  | declaration {
    $$ = retornaNodo();
    strcpy($$->val, "declaration_list");
    $$->filho = $1;
  }

declaration:
  function_declaration {
    $$ = retornaNodo();
    strcpy($$->val, "declaration");
    $$->filho = $1;
  }
  | var_declaration {
    $$ = retornaNodo();
    strcpy($$->val, "declaration");
    $$->filho = $1;
  }
  | error {}

var_declaration:
  type ID ';' {
    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = retornaNodo();
    strcpy($$->val, "var_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
  }

function_declaration:
  type ID '(' params_list ')' brackets_stmt {
    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = retornaNodo();
    strcpy($$->val, "function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $1->proximo = $4;
    $4->proximo = $6;
  }
  | type ID '(' ')' brackets_stmt {
    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = retornaNodo();
    strcpy($$->val, "function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $1->proximo = $5;
  }

params_list:
 type ID ',' params_list {
   Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = retornaNodo();
    strcpy($$->val, "params_list");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $1->proximo = $4;
 }
 | type ID {
    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = retornaNodo();
    strcpy($$->val, "params_list");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
 }

brackets_stmt:
  '{' stmts '}' {
    $$ = retornaNodo();
    strcpy($$->val, "brackets_stmt");
    $$->filho = $2;
  }
  | error {}

stmts:
  stmt stmts {
    $$ = retornaNodo();
    strcpy($$->val, "stmts");
    $$->filho = $1;
    $$->proximo = $2;
  }
  | stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmts");
    $$->filho = $1;
  }

stmt:
  for_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | if_else_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | return_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | io_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | exp_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | set_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | var_declaration {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | assignment ';'{
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }
  | brackets_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "stmt");
    $$->filho = $1;
  }

io_stmt: 
  INPUT '(' ID ')' ';' {
    $$ = retornaNodo();
    strcpy($$->val, "io_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }
  | OUTPUT '(' STRING ')' ';' {
    $$ = retornaNodo();
    strcpy($$->val, "io_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 1);
  }
  | OUTPUT '(' exp ')' ';' {
    $$ = retornaNodo();
    strcpy($$->val, "io_stmt");
    $$->filho = $3;
  }

for_stmt:
  FOR '(' assignment ';' exp ';' assignment ')' stmt {
    $$ = retornaNodo();
    strcpy($$->val, "for_stmt");
    $$->filho = $3;
    $3->proximo = $5;
    $5->proximo = $7;
    $7->proximo = $9;
  }

if_else_stmt:
  IF '(' exp ')' stmt %prec THEN{
    $$ = retornaNodo();
    strcpy($$->val, "if_else_stmt");
    $$->filho = $3;
    $3->proximo = $5;
  }
  | IF '(' exp ')' stmt ELSE stmt {
    $$ = retornaNodo();
    strcpy($$->val, "if_else_stmt");
    $$->filho = $3;
    $3->proximo = $5;
    $5->proximo = $7;
  }

return_stmt:
  RETURN ';' {
    $$ = retornaNodo();
    strcpy($$->val, "return_stmt");
  }
  | RETURN exp ';' {
    $$ = retornaNodo();
    strcpy($$->val, "return_stmt");
    $$->filho = $2;
  }

set_stmt:
  FORALL '(' ID INFIX_OP set_exp ')' stmt {
    $$ = retornaNodo();
    strcpy($$->val, "set_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
    $$->filho = $5;
    $5->proximo = $7;
  }
  | FORALL '(' ID INFIX_OP ID ')' stmt {
    $$ = retornaNodo();
    strcpy($$->val, "set_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
    $$->filho = $7;
  }

exp_stmt:
  exp ';' {
    $$ = retornaNodo();
    strcpy($$->val, "exp_stmt");
    $$->filho = $1;
  }

assignment:
  ID '=' exp {
    $$ = retornaNodo();
    strcpy($$->val, "assignment");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->filho = $3;
  }
  | ID '=' assignment {
    $$ = retornaNodo();
    strcpy($$->val, "assignment");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->filho = $3;
  }

exp:
  or_exp {
    $$ = retornaNodo();
    strcpy($$->val, "exp");
    $$->filho = $1;
  }
  | set_exp {
    $$ = retornaNodo();
    strcpy($$->val, "exp");
    $$->filho = $1;
  }

set_exp:
  SET_OP1 '(' set_in_exp ')' {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->filho = $3;
  }
  | ISSET '(' ID ')' {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }
  | ISSET '(' set_exp ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->filho = $3;
  }
  | '!' ISSET '(' ID ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->simbolo = criarSimboloArvore($4.linha, $4.coluna, $4.corpo, 2);
  }
  | '!' ISSET '(' set_exp ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->filho = $4;
  }

set_in_exp:
  or_exp INFIX_OP ID {
    $$ = retornaNodo();
    strcpy($$->val, "set_in_exp");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }
  | or_exp INFIX_OP set_exp {
    $$ = retornaNodo();
    strcpy($$->val, "set_in_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | set_exp INFIX_OP set_exp {
    $$ = retornaNodo();
    strcpy($$->val, "set_in_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | set_exp INFIX_OP ID {
    $$ = retornaNodo();
    strcpy($$->val, "set_in_exp");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }

or_exp:
  or_exp OR and_exp {
    $$ = retornaNodo();
    strcpy($$->val, "or_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | and_exp {
    $$ = retornaNodo();
    strcpy($$->val, "or_exp");
    $$->filho = $1;
  }
  | set_in_exp {
    $$ = retornaNodo();
    strcpy($$->val, "or_exp");
    $$->filho = $1;
  }

and_exp:
  and_exp AND relational_exp {
    $$ = retornaNodo();
    strcpy($$->val, "and_exp");
    $$->filho = $1;
    $$->proximo = $3;
  }
  | relational_exp {
    $$ = retornaNodo();
    strcpy($$->val, "and_exp");
    $$->filho = $1;
  }

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {
    $$ = retornaNodo();
    strcpy($$->val, "relatorional_exp");
    $$->filho = $1;
    $$->proximo = $3;
  }
  | sum_exp {
    $$ = retornaNodo();
    strcpy($$->val, "relatorional_exp");
    $$->filho = $1;
  }

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {
    $$ = retornaNodo();
    strcpy($$->val, "sum_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | mul_exp {
    $$ = retornaNodo();
    strcpy($$->val, "sum_exp");
    $$->filho = $1;
  }

mul_exp:
  mul_exp ARITMETIC_OP2 unary_exp {
    $$ = retornaNodo();
    strcpy($$->val, "mul_exp");
    $$->filho = $1;
    $$->proximo = $3;
  }
  | unary_exp {
    $$ = retornaNodo();
    strcpy($$->val, "mul_exp");
    $$->filho = $1;
  }

unary_exp:
  primal_exp {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $1;
  }
  | '!' primal_exp {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $2;
  }
  | ARITMETIC_OP1 primal_exp {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $2;
  }
  | ID '(' arg_list ')' {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->filho = $3;
  }
  | ID '(' ')' {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
  }
  | '!' ID '(' arg_list ')' {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $$->filho = $4;
  }
  | '!' ID '(' ')' {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
  }



primal_exp:
  ID {
    $$ = retornaNodo();
    strcpy($$->val, "primal_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
  }
  | const {
    $$ = retornaNodo();
    strcpy($$->val, "primal_exp");
    $$->filho = $1;
  }
  | '(' exp ')' {
    $$ = retornaNodo();
    strcpy($$->val, "primal_exp");
    $$->filho = $2;
  }

arg_list:
  exp ',' arg_list {
    $$ = retornaNodo();
    strcpy($$->val, "arg_list");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | exp {
    $$ = retornaNodo();
    strcpy($$->val, "arg_list");
    $$->filho = $1;
  }

type:
  INT_TYPE {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    $$ = retornaNodo();
    strcpy($$->val, "INT_TYPE");
  }
  | FLOAT_TYPE {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    $$ = retornaNodo();
    strcpy($$->val, "FLOAT_TYPE");
  }
  | SET_TYPE {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    $$ = retornaNodo();
    strcpy($$->val, "SET_TYPE");
  }
  | ELEM_TYPE {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    $$ = retornaNodo();
    strcpy($$->val, "ELEM_TYPE");
  }

const:
  INTEGER {
    $$ = retornaNodo();
    strcpy($$->val, "CONST");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 1);
  }
  | FLOAT {
    $$ = retornaNodo();
    strcpy($$->val, "CONST");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 1);
  }
  | EMPTY {
    $$ = retornaNodo();
    strcpy($$->val, "CONST");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 1);
  }

%%

void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.linha, yylval.token.coluna, msg);
  erros++;
}

int main(int argc, char * argv[]) {
    ++argv, --argc;
    if(argc > 0) {
        yyin = fopen(argv[0], "r");
    }
    else {
        yyin = stdin;
    }
    
    yyparse();

    printTabela(indiceTabela);

    if (erros) {
      if(erros == 1) {
      printf("\n\n--> Paser finalizado com %d erro\n", erros);
      }
      else {
        printf("\n\n--> Paser finalizado com %d erros\n", erros);  
      }
      return 0;
    }

    printArvore(raiz, 0);
    freeArvore(raiz);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

