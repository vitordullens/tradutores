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

  char tipo[1000][100];

  int indiceTipo = 0;

  int indiceTabela = -1;

  int escopo = 0;

  NodoArvore* raiz;

  int error = 0;
%}

%union {
  struct Token {
    int column, line;
    char body[100];
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
  declaration_list declaration  {
    $$ = criarNodo("declaration_list");
    $$->filho = $1;
    $1->proximo = $2;
  }
  | declaration {
    $$ = criarNodo("declaration_list");
    $$->filho = $1;
  }

declaration:
  function_declaration {
    $$ = criarNodo("declaration");
    $$->filho = $1;
  }
  | var_declaration {
    $$ = criarNodo("declaration");
    $$->filho = $1;
  }
  | error {}

var_declaration:
  type ID ';' {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = criarNodo("var_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.line, $2.column, $2.body);
  }

function_declaration:
  type ID '(' params_list ')' brackets_stmt {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = criarNodo("function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.line, $2.column, $2.body);
    $1->proximo = $4;
    $4->proximo = $6;
  }
  | type ID '(' ')' brackets_stmt {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = criarNodo("function_declaration");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.line, $2.column, $2.body);
    $1->proximo = $5;
  }

params_list:
 type ID ',' params_list {
   Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = criarNodo("params_list");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.line, $2.column, $2.body);
    $1->proximo = $4;
 }
 | type ID {
    Simbolo s = criarSimbolo($2.line, $2.column, $2.body);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    $$ = criarNodo("params_list");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($2.line, $2.column, $2.body);
 }

brackets_stmt:
  '{' stmts '}' {
    $$ = criarNodo("brackets_stmt");
    $$->filho = $2;
  }
  | error {}

stmts:
  stmt stmts {
    $$ = criarNodo("stmts");
    $$->filho = $1;
    $$->proximo = $2;
  }
  | stmt {
    $$ = criarNodo("stmts");
    $$->filho = $1;
  }

stmt:
  for_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | if_else_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | return_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | io_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | exp_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | set_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | var_declaration {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | assignment ';'{
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }
  | brackets_stmt {
    $$ = criarNodo("stmt");
    $$->filho = $1;
  }

io_stmt: 
  INPUT '(' ID ')' ';' {
    $$ = criarNodo("io_stmt");
    $$->simbolo = criarSimboloArvore($3.line, $3.column, $3.body);
  }
  | OUTPUT '(' STRING ')' ';' {
    $$ = criarNodo("io_stmt");
    $$->simbolo = criarSimboloArvore($3.line, $3.column, $3.body);
  }
  | OUTPUT '(' exp ')' ';' {
    $$ = criarNodo("io_stmt");
    $$->filho = $3;
  }

for_stmt:
  FOR '(' assignment ';' exp ';' assignment ')' stmt {
    $$ = criarNodo("for_stmt");
    $$->filho = $3;
    $3->proximo = $5;
    $5->proximo = $7;
    $7->proximo = $9;
  }

if_else_stmt:
  IF '(' exp ')' stmt {
    $$ = criarNodo("if_else_stmt");
    $$->filho = $3;
    $3->proximo = $5;
  }
  | IF '(' exp ')' brackets_stmt ELSE stmt {
    $$ = criarNodo("if_else_stmt");
    $$->filho = $3;
    $3->proximo = $5;
    $5->proximo = $7;
  }

return_stmt:
  RETURN ';' {
    $$ = criarNodo("return_stmt");
  }
  | RETURN exp ';' {
    $$ = criarNodo("return_stmt");
    $$->filho = $2;
  }

set_stmt:
  FORALL '(' ID INFIX_OP set_exp ')' stmt {
    $$ = criarNodo("set_stmt");
    $$->simbolo = criarSimboloArvore($3.line, $3.column, $3.body);
    $$->filho = $5;
    $5->proximo = $7;
  }
  | FORALL '(' ID INFIX_OP ID ')' stmt {
    $$ = criarNodo("set_stmt");
    $$->simbolo = criarSimboloArvore($3.line, $3.column, $3.body);
    $$->filho = $7;
  }

exp_stmt:
  exp ';' {
    $$ = criarNodo("exp_stmt");
    $$->filho = $1;
  }

assignment:
  ID '=' exp {
    $$ = criarNodo("assignment");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
    $$->filho = $3;
  }

exp:
  or_exp {
    $$ = criarNodo("exp");
    $$->filho = $1;
  }
  | set_exp {
    $$ = criarNodo("exp");
    $$->filho = $1;
  }

set_exp:
  SET_OP1 '(' set_in_exp ')' {
    $$ = criarNodo("set_exp");
    $$->filho = $3;
  }
  | ISSET '(' ID ')' {
    $$ = criarNodo("set_exp");
    $$->simbolo = criarSimboloArvore($3.line, $3.column, $3.body);
  }
  | ISSET '(' set_exp ')'  {
    $$ = criarNodo("set_exp");
    $$->filho = $3;
  }
  | '!' ISSET '(' ID ')'  {
    $$ = criarNodo("set_exp");
    $$->simbolo = criarSimboloArvore($4.line, $4.column, $4.body);
  }
  | '!' ISSET '(' set_exp ')'  {
    $$ = criarNodo("set_exp");
    $$->filho = $4;
  }

set_in_exp:
  or_exp INFIX_OP ID {
    $$ = criarNodo("set_in_exp");
    $$->filho = $1;
    $$->simbolo = criarSimboloArvore($3.line, $3.column, $3.body);
  }
  | or_exp INFIX_OP set_exp {
    $$ = criarNodo("set_in_exp");
    $$->filho = $1;
    $1->proximo = $3;

  }

or_exp:
  or_exp OR and_exp {
    $$ = criarNodo("or_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | and_exp {
    $$ = criarNodo("or_exp");
    $$->filho = $1;
  }
  | set_in_exp {
    $$ = criarNodo("or_exp");
    $$->filho = $1;
  }

and_exp:
  and_exp AND relational_exp {
    $$ = criarNodo("and_exp");
    $$->filho = $1;
    $$->proximo = $3;
  }
  | relational_exp {
    $$ = criarNodo("and_exp");
    $$->filho = $1;
  }

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {
    $$ = criarNodo("relatorional_exp");
    $$->filho = $1;
    $$->proximo = $3;
  }
  | sum_exp {
    $$ = criarNodo("relatorional_exp");
    $$->filho = $1;
  }

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {
    $$ = criarNodo("sum_exp");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | mul_exp {
    $$ = criarNodo("sum_exp");
    $$->filho = $1;
  }

mul_exp:
  mul_exp ARITMETIC_OP2 unary_exp {
    $$ = criarNodo("mul_exp");
    $$->filho = $1;
    $$->proximo = $3;
  }
  | unary_exp {
    $$ = criarNodo("mul_exp");
    $$->filho = $1;
  }

unary_exp:
  primal_exp {
    $$ = criarNodo("unary_exp");
    $$->filho = $1;
  }
  | '!' primal_exp {
    $$ = criarNodo("unary_exp");
    $$->filho = $2;
  }
  | ARITMETIC_OP1 primal_exp {
    $$ = criarNodo("unary_exp");
    $$->filho = $2;
  }
  | ID '(' arg_list ')' {
    $$ = criarNodo("unary_exp");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
    $$->filho = $3;
  }
  | ID '(' ')' {
    $$ = criarNodo("unary_exp");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }


primal_exp:
  ID {
    $$ = criarNodo("primal_exp");
    $$->simbolo = criarSimboloArvore($1.line, $1.column, $1.body);
  }
  | const {
    $$ = criarNodo("primal_exp");
    $$->filho = $1;
  }
  | '(' exp ')' {
    $$ = criarNodo("arg_list");
    $$->filho = $2;
  }

arg_list:
  exp ',' arg_list {
    $$ = criarNodo("arg_list");
    $$->filho = $1;
    $1->proximo = $3;
  }
  | exp {
    $$ = criarNodo("arg_list");
    $$->filho = $1;
  }

type:
  INT_TYPE {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;
    $$ = criarNodo("INT_TYPE");
  }
  | FLOAT_TYPE {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;
    $$ = criarNodo("FLOAT_TYPE");
  }
  | SET_TYPE {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;
    $$ = criarNodo("SET_TYPE");
  }
  | ELEM_TYPE {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;
    $$ = criarNodo("ELEM_TYPE");
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
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.line, yylval.token.column, msg);
  error++;
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

    if (error) return 0;

    printArvore(raiz, 0);
    freeArvore(raiz);

    fclose(yyin);
    yylex_destroy();
    return 0;
}

