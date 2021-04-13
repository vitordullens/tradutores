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

  extern Simbolo tabelaSimbolos[100000];
  int indiceTabela = -1;

  char tipo[100000][100];
  int indiceTipo = 0;

  int listaEscopo[100];
  int indiceEscopo = 0;
  int escopo = 0;
  int ehFuncao = 0;

  int indiceFuncao;
  int indiceParam;
  int indiceArg;

  NodoArvore* raiz;

  int erros = 0;
%}

%union {
  struct Lexema {
    int coluna, linha, escopo;
    char corpo[100];
  } lexema;

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
%type <nodo> set_aux_exp
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


%token <lexema> ID
%token <lexema> FLOAT_TYPE INT_TYPE SET_TYPE ELEM_TYPE
%token <lexema> ARITMETIC_OP1 ARITMETIC_OP2
%token <lexema> RELATIONAL_OP
%token <lexema> AND OR
%token <lexema> SET_OP1 SET_OP2
%token <lexema> INPUT OUTPUT
%token <lexema> INTEGER FLOAT STRING EMPTY
%token <lexema> IF ELSE
%right THEN ELSE
%token <lexema> FOR
%token <lexema> RETURN
%token <lexema> INFIX_OP
%token <lexema> FORALL ISSET
%token <lexema> ';' '!' '=' ')' '(' '}' '{' ','


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
    $$ = $1;
  }

declaration:
  function_declaration {
    $$ = $1;
  }
  | var_declaration {
    $$ = $1;
  }
  | error {}

var_declaration:
  type ID ';' {
    int check = checkDuplicado($2.corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of variable", $2.corpo);
      erros++;
    }

    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = listaEscopo[indiceEscopo];
    s.ehFuncao = 0;
    s.ehParametro = 0;
    s.quantidadeParams = 0;
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
  type ID '(' {
    int check = checkDuplicado($2.corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of function", $2.corpo);
      erros++;
    }

    escopo++; 
    ehFuncao = 1;
    indiceEscopo++; 
    listaEscopo[indiceEscopo] = escopo; 

    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = 0;
    s.ehFuncao = 1;
    s.ehParametro = 0;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    indiceFuncao = indiceTabela;
    indiceParam = 0;

  } params_list ')' brackets_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $1->proximo = $5;
    $5->proximo = $7;
  }
  | type ID  '('{ 
    int check = checkDuplicado($2.corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of function", $2.corpo);
      erros++;
    }

    escopo++; 
    ehFuncao = 1;
    indiceEscopo++; 
    listaEscopo[indiceEscopo] = escopo; 

    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = 0;
    s.ehFuncao = 1;
    s.ehParametro = 0;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;
  } ')' brackets_stmt {
    $$ = retornaNodo();
    strcpy($$->val, "function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $1->proximo = $6;
  }

params_list:
 type ID ',' params_list {
    int check = checkDuplicado($2.corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of variable", $2.corpo);
      erros++;
    }

    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = listaEscopo[indiceEscopo];
    s.ehFuncao = 0;
    s.ehParametro = 1;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    Simbolo funcao = tabelaSimbolos[indiceFuncao];
    strcpy(funcao.params[indiceParam], s.corpo);
    strcpy(funcao.tipoParams[indiceParam], s.tipo);
    funcao.quantidadeParams++;
    tabelaSimbolos[indiceFuncao] = funcao;
    indiceParam++;

    $$ = retornaNodo();
    strcpy($$->val, "params_list");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $1->proximo = $4;
 }
 | type ID {
    int check = checkDuplicado($2.corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of variable", $2.corpo);
      erros++;
    }

    Simbolo s = criarSimbolo($2.linha, $2.coluna, $2.corpo);
    s.escopo = listaEscopo[indiceEscopo];
    s.ehFuncao = 0;
    s.ehParametro = 1;
    s.quantidadeParams = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    Simbolo funcao = tabelaSimbolos[indiceFuncao];
    strcpy(funcao.params[indiceParam], s.corpo);
    strcpy(funcao.tipoParams[indiceParam], s.tipo);
    funcao.quantidadeParams++;
    tabelaSimbolos[indiceFuncao] = funcao;
    indiceParam++;

    $$ = retornaNodo();
    strcpy($$->val, "params_list");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
 }

brackets_stmt:
  '{' {
    if(ehFuncao) {
      ehFuncao = 0;
    } else {
      indiceEscopo++; 
      escopo++; 
      listaEscopo[indiceEscopo] = escopo; 
    }
  } stmts '}'  {
    indiceEscopo--;
    $$ = $3;
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
    $$ = $1;
  }

stmt:
  for_stmt {
    $$ = $1;
  }
  | if_else_stmt {
    $$ = $1;
  }
  | return_stmt {
    $$ = $1;
  }
  | io_stmt {
    $$ = $1;
  }
  | exp_stmt {
    $$ = $1;
  }
  | set_stmt {
    $$ = $1;
  }
  | var_declaration {
    $$ = $1;
  }
  | assignment ';'{
    $$ = $1;
  }
  | brackets_stmt {
    $$ = $1;
  }

io_stmt: 
  INPUT '(' ID ')' ';' {
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      erros++;
    }

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
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "forall_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
    $$->proximo = $5;
    $5->filho = $7;
  }
  | FORALL '(' ID INFIX_OP or_exp ')' stmt {
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "forall_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
    $$->proximo = $5;
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
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "assignment");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->filho = $3;
  }
  | ID '=' assignment {
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "assignment");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->filho = $3;
  }

exp:
  or_exp {
    $$ = $1;
  }
  | set_exp {
    $$ = $1;
  }

set_exp:
  SET_OP1 '(' set_in_exp ')' {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
    $$->filho = $3;
  }
  | SET_OP2 '(' set_aux_exp ')' {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
    $$->filho = $3;
  }

set_aux_exp:
  ID INFIX_OP or_exp {
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "set_aux_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->proximo = $3;
  }
  | ID INFIX_OP set_exp {
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "set_aux_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->proximo = $3;
  }

set_in_exp:
  or_exp INFIX_OP ID {
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      erros++;
    }

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
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "set_in_exp");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }

or_exp:
  or_exp OR and_exp {
    $$ = retornaNodo();
    strcpy($$->val, "or_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 3);
    $$->filho = $1;
    $1->proximo = $3;
  }
  | and_exp {
    $$ = $1;
  }
  | set_in_exp {
    $$ = $1;
  }

and_exp:
  and_exp AND relational_exp {
    $$ = retornaNodo();
    strcpy($$->val, "and_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 3);
    $$->filho = $1;
    $1->proximo = $3;
  }
  | relational_exp {
    $$ = $1;
  }

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {
    $$ = retornaNodo();
    strcpy($$->val, "relatorional_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 3);
    $$->filho = $1;
    $1->proximo = $3;
  }
  | sum_exp {
    $$ = $1;
  }

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {
    $$ = retornaNodo();
    strcpy($$->val, "sum_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 3);
    $$->filho = $1;
    $1->proximo = $3;
  }
  | mul_exp {
    $$ = $1;
  }

mul_exp:
  mul_exp ARITMETIC_OP2 unary_exp {
    $$ = retornaNodo();
    strcpy($$->val, "mul_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 3);
    $$->filho = $1;
    $1->proximo = $3;
  }
  | unary_exp {
    $$ = $1;
  }

unary_exp:
  primal_exp {
    $$ = $1;
  }
  | '!' primal_exp {
    $$ = $2;
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
  }
  | ARITMETIC_OP1 primal_exp {
    $$ = $2;
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
  }
  | ARITMETIC_OP1 ID '(' ')' {
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      erros++;
    }
    indiceArg = 0;
    check = checkQuantidadeParametros($2.corpo, $2.linha, $2.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
  }
  | ARITMETIC_OP1 ID '(' {
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      erros++;
    }
    indiceArg = 0;

  } arg_list ')' {
    int check = checkQuantidadeParametros($2.corpo, $2.linha, $2.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }
    indiceArg = 0;

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $$->filho = $5;
  }
  | ID '(' {
      int check = checkDeclarado($1.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
      if(!check){
        printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared function", $1.corpo);
        erros++;
      }
      indiceArg = 0;

    } arg_list ')' {
      int check = checkQuantidadeParametros($1.corpo, $1.linha, $1.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
      if(!check){
        erros++;
      }
      indiceArg = 0;

      $$ = $4;
  }
  | ID '(' ')' {
    int check = checkDeclarado($1.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared function", $1.corpo);
      erros++;
    }

    indiceArg = 0;
    check = checkQuantidadeParametros($1.corpo, $1.linha, $1.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
  }
  | '!' ID '(' {
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      erros++;
    }
    
    indiceArg = 0;

  } arg_list ')' {
    int check = checkQuantidadeParametros($1.corpo, $1.linha, $1.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }
    indiceArg = 0;

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $$->filho = $5;
  }
  | '!' ID '(' ')' {
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      erros++;
    }

    indiceArg = 0;
    check = checkQuantidadeParametros($2.corpo, $2.linha, $2.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
  }
  | ISSET '(' ID ')' {
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }
  | ISSET '(' set_exp ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $3;
  }
  | '!' ISSET '(' ID ')'  {
    int check = checkDeclarado($4.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $4.linha, $4.coluna, "Undeclared variable", $4.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($4.linha, $4.coluna, $4.corpo, 2);
  }
  | '!' ISSET '(' set_exp ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $4;
  }



primal_exp:
  ID {
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      erros++;
    }

    $$ = retornaNodo();
    strcpy($$->val, "primal_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
  }
  | const {
    $$ = $1;
  }
  | '(' exp ')' {
    $$ = $2;
  }

arg_list:
  exp ',' arg_list {
    indiceArg++;

    $$ = retornaNodo();
    strcpy($$->val, "arg_list");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | exp {
    indiceArg++;

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
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.lexema.linha, yylval.lexema.coluna, msg);
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

    for(int i=0; i<10000000;i++){
      listaEscopo[i] = 0;
    }
    
    yyparse();

    int check = checkMain(indiceTabela);
    if(!check){
      printf("%-15s - %s \n", "SEMANTIC ERROR", "The program doens't have a 'main' function");
      erros++;
    }

    if (erros == 0) {
      printArvore(raiz, 0);
      freeArvore(raiz);
    }

    printTabela(indiceTabela);

    if (erros >= 1) {
      if(erros == 1) {
      printf("\n\n--> Paser finalizado com %d erro\n", erros);
      }
      else {
        printf("\n\n--> Paser finalizado com %d erros\n", erros);  
      }
    }

    fclose(yyin);
    yylex_destroy();
    return 0;
}

