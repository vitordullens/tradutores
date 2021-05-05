%define lr.type canonical-lr
%define parse.error verbose

%defines

%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "tabela.h"
  #include "arvore.h"
  #include "tac.h"

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;

  extern Simbolo tabelaSimbolos[100000];
  int indiceTabela = -1;

  char tipo[100000][8];
  int indiceTipo = 0;

  int listaEscopo[100];
  int indiceEscopo = 0;
  int escopo = 0;
  int ehFuncao = 0;

  int indiceFuncao;
  int indiceParam;
  int indiceArg;

  Simbolo prevFuncao;

  NodoArvore* raiz;

  int erros = 0;
  int errosSemanticos = 0;

  int stringIdx = 0;
  char codigoTac[1100];
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
%type <nodo> assignment assignment_or_null
%type <nodo> exp exp_or_null
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
      errosSemanticos++;
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

    if(!check) {
      snprintf(codigoTac, 1100, "%s %s_%d", lowerCase(s.tipo), s.corpo, s.escopo);
    }

    $$ = retornaNodo();
    strcpy($$->val, "var_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $$->tac = criarTac(NULL, NULL, NULL, NULL, -1);
    if(strcmp(s.tipo, "elem") != 0 && strcmp(s.tipo, "set") != 0 ){
      $$->tac->tabela = 1;
      $$->tac->instrucao = strdup(codigoTac);
    }
  }

function_declaration:
  type ID '(' {
    int check = checkDuplicado($2.corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of function", $2.corpo);
      errosSemanticos++;
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

    if(!errosSemanticos) {
      $$->tac = criarTac($2.corpo, NULL, NULL, NULL, 0);
    }
  }
  | type ID  '('{ 
    int check = checkDuplicado($2.corpo, 0, indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of function", $2.corpo);
      errosSemanticos++;
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

    
    if(!errosSemanticos) {
      $$->tac = criarTac($2.corpo, NULL, NULL, NULL, 0);
    }
  }

params_list:
 type ID ',' params_list {
    int check = checkDuplicado($2.corpo, listaEscopo[indiceEscopo], indiceTabela);
    if(check){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Redeclaration of variable", $2.corpo);
      errosSemanticos++;
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
      errosSemanticos++;
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
  | '{' '}' {
    $$ = retornaNodo();
    strcpy($$->val, "empty_brackets");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, "empty", 4);
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
    $$ = retornaNodo();
    
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
      if(strcmp($$->tipo, "FLOAT") == 0) $$->tac = criarTac("scanf", variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), NULL, NULL, 1);
      if(strcmp($$->tipo, "INT") == 0) $$->tac = criarTac("scani", variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), NULL, NULL, 1);
    }

    strcpy($$->val, "io_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }
  | OUTPUT '(' STRING ')' ';' {
    $$ = retornaNodo();
    strcpy($$->val, "io_stmt");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 1);

    snprintf(codigoTac, 1100, "string_%d", stringIdx);
    if(strcmp($1.corpo, "writeln") == 0) $$->tac = criarTac("println", codigoTac, NULL, NULL, 1);
    if(strcmp($1.corpo, "write") == 0) $$->tac = criarTac("print", codigoTac, NULL, NULL, 1);

    snprintf(codigoTac, 1100, "char string_%d [] = %s ", stringIdx, $3.corpo);
    $$->tac->tabela = 1;
    $$->tac->instrucao = strdup(codigoTac);

    stringIdx++;
  }
  | OUTPUT '(' exp ')' ';' {
    $$ = retornaNodo();
    strcpy($$->val, "io_stmt");
    $$->filho = $3;

    if(strcmp($1.corpo, "writeln") == 0) $$->tac = criarTac("println", $3->tac->res, NULL, NULL, 1);
    if(strcmp($1.corpo, "write") == 0) $$->tac = criarTac("print", $3->tac->res, NULL, NULL, 1);
  }

for_stmt:
  FOR '(' assignment_or_null ';' exp_or_null ';' assignment_or_null ')' stmt {
    $$ = retornaNodo();
    strcpy($$->val, "for_stmt");
    $$->filho = $3;
    $3->proximo = $5;
    $5->proximo = $7;
    $7->proximo = $9;
  }

assignment_or_null:
  assignment { $$ = $1; }
  | %empty {
    $$ = retornaNodo();
    strcpy($$->val, "empty_assignment");
    $$->simbolo = criarSimboloArvore(1, 1, "empty", 4);
  }

exp_or_null:
  exp { $$ = $1; }
  | %empty {
    $$ = retornaNodo();
    strcpy($$->val, "empty_exp");
    $$->simbolo = criarSimboloArvore(1, 1, "empty", 4);
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
  RETURN exp ';' {
    $$ = retornaNodo();
    int check = checkTipoRetorno(indiceTabela);
    if(!(~check)) {

    } else {
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
      forcaCast($$->tipo, $2, &errosSemanticos, $1.linha, $1.coluna);

      if(!errosSemanticos && strcmp(tabelaSimbolos[check].corpo, "main") != 0){

        char* aux;
        if($2->cast) {
          aux = strdup(getFreeRegTemp());
          $$->tac = criarTac("return", aux, NULL, NULL, 1);
          if(strcmp($2->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $2->tac->res, NULL, aux, 2);
          if(strcmp($2->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $2->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          $$->tac = criarTac("return", $2->tac->res, NULL, NULL, 1);
        }
      }
    }


    strcpy($$->val, "return_stmt");
    $$->filho = $2;
  }

set_stmt:
  FORALL '(' ID INFIX_OP or_exp ')' stmt {
    $$ = retornaNodo();
    
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
    }

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
    $$ = retornaNodo();
    
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
      forcaCast($$->tipo, $3, &errosSemanticos, $2.linha, $2.coluna);
      if(!errosSemanticos){

        char* aux;
        if($3->cast) {
          aux = strdup(getFreeRegTemp());
          $$->tac = criarTac("mov", aux, NULL, variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), 2);
          if(strcmp($3->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $3->tac->res, NULL, aux, 2);
          if(strcmp($3->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $3->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          $$->tac = criarTac("mov", $3->tac->res, NULL, variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), 2);
        }
      }
    }

    strcpy($$->val, "assignment");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->filho = $3;
  }

exp:
  or_exp {
    $$ = $1;
  }

set_exp:
  SET_OP1 '(' set_in_exp ')' {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
    $$->filho = $3;
    $$->tipo = strdup("SET");
  }
  | SET_OP2 '(' set_aux_exp ')' {
    $$ = retornaNodo();
    strcpy($$->val, "set_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
    $$->filho = $3;
    $$->tipo = strdup("ELEM");

  }

set_aux_exp:
  ID INFIX_OP or_exp {
    $$ = retornaNodo();
    
    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup("INT");
    }

    strcpy($$->val, "set_aux_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
    $$->proximo = $3;
  }

set_in_exp:
  or_exp INFIX_OP unary_exp {
    $$ = retornaNodo();
    
    if(!checkSet($3->tipo)) {
      printf("%-15s %d:%-3d - %s\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "'in' right operator only supports the type SET");
      errosSemanticos++;
    }
    $$->tipo = strdup("INT");

    strcpy($$->val, "set_in_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }

or_exp:
  or_exp OR and_exp {
    $$ = retornaNodo();
    strcpy($$->val, "or_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 3);
    $$->filho = $1;
    $1->proximo = $3;

    if($1->tipo){
      $$->tipo = strdup("INT");

      if(!errosSemanticos) {
        char* aux;
        if($1->cast) {
          aux = strdup(getFreeRegTemp());
          $$->tac = criarTac("or", aux, $3->tac->res, getFreeRegTemp(), 3);
          if(strcmp($1->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $1->tac->res, NULL, aux, 2);
          if(strcmp($1->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $1->tac->res, NULL, aux, 2);
          free(aux);
        }
        else if($3->cast){
          aux = strdup(getFreeRegTemp());
          $$->tac = criarTac("or", $1->tac->res, aux, getFreeRegTemp(), 3);
          if(strcmp($3->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $3->tac->res, NULL, aux, 2);
          if(strcmp($3->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $3->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          $$->tac = criarTac("or", $1->tac->res, $3->tac->res, getFreeRegTemp(), 3);
        }
      }
    } 
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

    if($1->tipo) {
      $$->tipo = strdup("INT");

      if(!errosSemanticos) {
        char* aux;
        if($1->cast) {
          aux = strdup(getFreeRegTemp());
          $$->tac = criarTac("or", aux, $3->tac->res, getFreeRegTemp(), 3);
          if(strcmp($1->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $1->tac->res, NULL, aux, 2);
          if(strcmp($1->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $1->tac->res, NULL, aux, 2);
          free(aux);
        }
        else if($3->cast){
          aux = strdup(getFreeRegTemp());
          $$->tac = criarTac("or", $1->tac->res, aux, getFreeRegTemp(), 3);
          if(strcmp($3->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $3->tac->res, NULL, aux, 2);
          if(strcmp($3->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $3->tac->res, NULL, aux, 2);
          free(aux);
        } 
        else {
          $$->tac = criarTac("and", $1->tac->res, $3->tac->res, getFreeRegTemp(), 3);
        }
      }
    
    }
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

    if(checkSet($1->tipo) || checkSet($3->tipo)) {
        printf("%-15s %d:%-3d - '%s' %s\n", "SEMANTIC ERROR", $2.linha, $2.coluna, $2.corpo, "operator do not supports the type SET");
        errosSemanticos++;
    }
    else{
      fazCast($1, $3, &errosSemanticos, $2.linha, $2.coluna);
      if($1->tipo) $$->tipo = strdup("INT");
    }
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

    if(checkSet($1->tipo) || checkSet($3->tipo)) {
        printf("%-15s %d:%-3d - '%s' %s\n", "SEMANTIC ERROR", $2.linha, $2.coluna, $2.corpo, "operator do not supports the type SET");
        errosSemanticos++;
    }
    else{
      fazCast($1, $3, &errosSemanticos, $2.linha, $2.coluna);
      if($1->tipo) {
        $$->tipo = strdup($1->tipo);

        if(!errosSemanticos) {
          char* aux;
          if($1->cast) {
            aux = strdup(getFreeRegTemp());
            if(strcmp($2.corpo, "+") == 0) $$->tac = criarTac("add", aux, $3->tac->res, getFreeRegTemp(), 3);
            if(strcmp($2.corpo, "-") == 0) $$->tac = criarTac("sub", aux, $3->tac->res, getFreeRegTemp(), 3);
            if(strcmp($1->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $1->tac->res, NULL, aux, 2);
            if(strcmp($1->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $1->tac->res, NULL, aux, 2);
            free(aux);
          }
          else if($3->cast){
            aux = strdup(getFreeRegTemp());
            if(strcmp($2.corpo, "+") == 0) $$->tac = criarTac("add", $1->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp($2.corpo, "-") == 0) $$->tac = criarTac("sub", $1->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp($3->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $3->tac->res, NULL, aux, 2);
            if(strcmp($3->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $3->tac->res, NULL, aux, 2);
            free(aux);
          } 
          else {
            if(strcmp($2.corpo, "+") == 0) $$->tac = criarTac("add", $1->tac->res, $3->tac->res, getFreeRegTemp(), 3);
            if(strcmp($2.corpo, "-") == 0) $$->tac = criarTac("sub", $1->tac->res, $3->tac->res, getFreeRegTemp(), 3);
          }
        }
      }
    }

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

    if(checkSet($1->tipo) || checkSet($3->tipo)) {
        printf("%-15s %d:%-3d - '%s' %s\n", "SEMANTIC ERROR", $2.linha, $2.coluna, $2.corpo, "operator do not supports the type SET");
        errosSemanticos++;
    } 
    else {
      fazCast($1, $3, &errosSemanticos, $2.linha, $2.coluna);
      if($1->tipo){
        $$->tipo = strdup($1->tipo);

        if(!errosSemanticos) {
          char* aux;
          if($1->cast) {
            aux = strdup(getFreeRegTemp());
            if(strcmp($2.corpo, "*") == 0) $$->tac = criarTac("mul", aux, $3->tac->res, getFreeRegTemp(), 3);
            if(strcmp($2.corpo, "/") == 0) $$->tac = criarTac("div", aux, $3->tac->res, getFreeRegTemp(), 3);
            if(strcmp($1->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $1->tac->res, NULL, aux, 2);
            if(strcmp($1->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $1->tac->res, NULL, aux, 2);
            free(aux);
          }
          else if($3->cast){
            aux = strdup(getFreeRegTemp());
            if(strcmp($2.corpo, "*") == 0) $$->tac = criarTac("mul", $1->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp($2.corpo, "/") == 0) $$->tac = criarTac("div", $1->tac->res, aux, getFreeRegTemp(), 3);
            if(strcmp($3->cast, "int2float") == 0) $$->tac->cast = criarTac("inttofl", $3->tac->res, NULL, aux, 2);
            if(strcmp($3->cast, "float2int") == 0) $$->tac->cast = criarTac("fltoint", $3->tac->res, NULL, aux, 2);
            free(aux);
          } 
          else {
            if(strcmp($2.corpo, "*") == 0) $$->tac = criarTac("mul", $1->tac->res, $3->tac->res, getFreeRegTemp(), 3);
            if(strcmp($2.corpo, "/") == 0) $$->tac = criarTac("div", $1->tac->res, $3->tac->res, getFreeRegTemp(), 3);
          }
        }
      } 
    }

  }
  | unary_exp {
    $$ = $1;
  }

unary_exp:
  primal_exp {
    $$ = $1;
  }
  | '!' primal_exp {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
    $$->filho = $2;
  }
  | ARITMETIC_OP1 primal_exp {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 3);
    $$->filho = $2;
  }
  | ARITMETIC_OP1 ID '(' ')' {
    $$ = retornaNodo();
    
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    indiceArg = 0;
    check = checkQuantidadeParametros($2.corpo, $2.linha, $2.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
  }
  | ARITMETIC_OP1 ID '(' {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, $2.corpo); 
    prevFuncao.linha = $2.linha;
    prevFuncao.coluna = $2.coluna;

  } arg_list ')' {
    $$ = retornaNodo();
    
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    
    check = checkQuantidadeParametros($2.corpo, $2.linha, $2.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }
    indiceArg = 0;

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $$->filho = $5;
  }
  | ID '(' {
      indiceArg = 0;
      strcpy(prevFuncao.corpo, $1.corpo); 
      prevFuncao.linha = $1.linha;
      prevFuncao.coluna = $1.coluna;

    } arg_list ')' {
      $$ = retornaNodo();
      int check = checkDeclarado($1.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
      if(!(~check)){
        printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared function", $1.corpo);
        errosSemanticos++;
      }
      else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
      }

      check = checkQuantidadeParametros($1.corpo, $1.linha, $1.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
      if(!check){
        errosSemanticos++;
      }
      indiceArg = 0;

      strcpy($$->val, "unary_exp");
      $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
      $$->filho = $4;
  }
  | ID '(' ')' {
    $$ = retornaNodo();
    
    int check = checkDeclarado($1.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared function", $1.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    indiceArg = 0;
    check = checkQuantidadeParametros($1.corpo, $1.linha, $1.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);
  }
  | '!' ID '(' {
    indiceArg = 0;
    strcpy(prevFuncao.corpo, $2.corpo); 
    prevFuncao.linha = $2.linha;
    prevFuncao.coluna = $2.coluna;
  } arg_list ')' {
    $$ = retornaNodo();
    
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
    }
    
    check = checkQuantidadeParametros($1.corpo, $1.linha, $1.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }
    indiceArg = 0;

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
    $$->filho = $5;
  }
  | '!' ID '(' ')' {
    $$ = retornaNodo();
    
    int check = checkDeclarado($2.corpo, 0, indiceTabela, 1, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $2.linha, $2.coluna, "Undeclared function", $2.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
    }

    indiceArg = 0;
    check = checkQuantidadeParametros($2.corpo, $2.linha, $2.coluna, 0, indiceTabela, listaEscopo, indiceEscopo, indiceArg);
    if(!check){
      errosSemanticos++;
    }

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($2.linha, $2.coluna, $2.corpo, 2);
  }
  | ISSET '(' ID ')' {
    $$ = retornaNodo();
    
    int check = checkDeclarado($3.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $3.linha, $3.coluna, "Undeclared variable", $3.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup("INT");
    }

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($3.linha, $3.coluna, $3.corpo, 2);
  }
  | ISSET '(' set_exp ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $3;
    $$->tipo = strdup("INT");
  }
  | '!' ISSET '(' ID ')'  {
    $$ = retornaNodo();
    
    int check = checkDeclarado($4.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $4.linha, $4.coluna, "Undeclared variable", $4.corpo);
      errosSemanticos++;
    }
    else{
      $$->tipo = strdup("INT");
    }

    strcpy($$->val, "unary_exp");
    $$->simbolo = criarSimboloArvore($4.linha, $4.coluna, $4.corpo, 2);
  }
  | '!' ISSET '(' set_exp ')'  {
    $$ = retornaNodo();
    strcpy($$->val, "unary_exp");
    $$->filho = $4;
    $$->tipo = strdup("INT");
  }



primal_exp:
  ID {
    $$ = retornaNodo();

    int check = checkDeclarado($1.corpo, listaEscopo[indiceEscopo], indiceTabela, 0, listaEscopo, indiceEscopo);
    if(!(~check)){
      printf("%-15s %d:%-3d - %s '%s'\n", "SEMANTIC ERROR", $1.linha, $1.coluna, "Undeclared variable", $1.corpo);
      errosSemanticos++;

    }
    else{
      $$->tipo = strdup(tabelaSimbolos[check].tipo);
      $$->tac = criarTac(NULL, NULL, NULL, variavel_escopo(tabelaSimbolos[check].corpo, tabelaSimbolos[check].escopo), -1);
    }
    strcpy($$->val, "primal_exp");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 2);

  }
  | const {
    $$ = $1;
  }
  | '(' exp ')' {
    $$ = $2;
  }
  | set_exp {
    $$ = $1;
  }

arg_list:
  exp ',' arg_list {
    indiceArg++;

    $$ = retornaNodo();
    strcpy($$->val, "arg_list");
    $$->filho = $1;
    $1->proximo = $3;

    char tipoParametro[10];
    strcpy(tipoParametro, checkTipoParametros(prevFuncao, $1->tipo,indiceTabela, listaEscopo, indiceEscopo, indiceArg-1));

    if(!checkErro(tipoParametro)) {
      forcaCast(tipoParametro, $1, &errosSemanticos, prevFuncao.linha, prevFuncao.coluna);
    }

  }
  | exp {
    indiceArg++;

    $$ = retornaNodo();
    strcpy($$->val, "arg_list");
    $$->filho = $1;

    char tipoParametro[10];
    strcpy(tipoParametro, checkTipoParametros(prevFuncao, $1->tipo,indiceTabela, listaEscopo, indiceEscopo, indiceArg-1));

    if(!checkErro(tipoParametro)) {
      forcaCast(tipoParametro, $1, &errosSemanticos, prevFuncao.linha, prevFuncao.coluna);
    }

    
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
    $$->tipo = strdup("INT");

    $$->tac = criarTac(NULL, NULL, NULL, $1.corpo, -1);
  }
  | FLOAT {
    $$ = retornaNodo();
    strcpy($$->val, "CONST");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 1);
    $$->tipo = strdup("FLOAT");

    $$->tac = criarTac(NULL, NULL, NULL, $1.corpo, -1);
  }
  | EMPTY {
    $$ = retornaNodo();
    strcpy($$->val, "CONST");
    $$->simbolo = criarSimboloArvore($1.linha, $1.coluna, $1.corpo, 1);
    $$->tipo = strdup("SET");

    $$->tac = criarTac(NULL, NULL, NULL, $1.corpo, -1);
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
      errosSemanticos++;
    }

    if (erros == 0) {
      printArvore(raiz, 0);
    }

    printTabela(indiceTabela);

    erros = erros + errosSemanticos;

    if (erros >= 1) {
      if(erros == 1) {
      printf("\n\n--> Paser finalizado com %d erro\n", erros);
      }
      else {
        printf("\n\n--> Paser finalizado com %d erros\n", erros);  
      }
    }
    else {
      escreveTac(raiz);
    }
    if(erros == 0) {
      freeArvore(raiz);
    }

    fclose(yyin);
    yylex_destroy();
    return 0;
}

