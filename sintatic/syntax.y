%define lr.type canonical-lr
%define parse.error verbose
%defines

%{

  #include <stdio.h>
  #include <stdlib.h>

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);
  
  extern FILE *yyin;
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
%token <token> BASIC_TYPE
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
  declaration_list {printf("SINTATICO -------- program -> declaration_list\n");}

declaration_list:
  declaration_list declaration  {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
  | declaration {printf("SINTATICO -------- declaration_list -> declaration\n");}

declaration:
  function_declaration {printf("SINTATICO -------- declaration -> function_declaration\n");}
  | var_declaration {printf("SINTATICO -------- declaration -> var_declaration\n");}
  | error {}

var_declaration:
  type ID ';' {printf("SINTATICO -------- var_declaration -> type %s\n", $2.body);}

function_declaration:
  type ID '(' params_list ')' brackets_stmt {printf("SINTATICO -------- function_declaration -> type ID ( params_list ) brackets_stmt\n");}
  | type ID '(' ')' brackets_stmt {printf("SINTATICO -------- function_declaration -> type ID ( ) brackets_stmt\n");}

params_list:
 type ID ',' params_list {}
 | type ID {}

brackets_stmt:
  '{' stmts '}' {printf("SINTATICO -------- brackets_stmt -> stmt\n");}

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
  INPUT '(' ID ')' ';' {printf("SINTATICO -------- io_stmt -> %s ( %s )\n", $1.body, $3.body);}
  | OUTPUT '(' STRING ')' ';' {printf("SINTATICO -------- io_stmt -> %s ( %s )\n", $1.body, $3.body);}
  | OUTPUT '(' exp ')' ';' {printf("SINTATICO -------- io_stmt -> %s ( exp )\n", $1.body);}

for_stmt:
  FOR '(' assignment ';' exp ';' assignment ')' stmt {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}

if_else_stmt:
  IF '(' exp ')' stmt {printf("SINTATICO -------- if_else_stmt -> IF ( exp ) brackets_stmt\n");}
  | IF '(' exp ')' brackets_stmt ELSE stmt {printf("SINTATICO -------- if_else_stmt -> IF ( exp ) brackets_stmt ELSE stmt\n");}

return_stmt:
  RETURN ';' {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
  | RETURN exp ';' {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}

set_stmt:
  FORALL '(' ID INFIX_OP set_exp ')' stmt {printf("SINTATICO -------- set_stmt -> FORALL\n");}
  | FORALL '(' ID INFIX_OP ID ')' stmt {printf("SINTATICO -------- set_stmt -> FORALL\n");}
  | ISSET '(' ID ')' ';' {printf("SINTATICO -------- set_stmt -> ISSET ( %s )\n", $3.body);}
  | ISSET '(' set_exp ')' ';' {printf("SINTATICO -------- set_stmt -> ISSET ( set_exp )\n");}

exp_stmt:
  exp ';' {}

assignment:
  ID '=' exp ';' {printf("SINTATICO -------- assignment -> %s = exp\n", $1.body);}

exp:
  or_exp {printf("SINTATICO -------- exp -> or_exp\n");}
  | set_exp {}

set_exp:
  SET_OP1 '(' set_in_exp ')' {printf("SINTATICO -------- set_exp -> %s ( set_in_exp )\n", $1.body);}

set_in_exp:
  or_exp INFIX_OP ID {printf("SINTATICO -------- set_in_exp -> or_exp %s %s\n", $2.body, $3.body);}
  | or_exp INFIX_OP set_exp {printf("SINTATICO -------- set_in_exp -> or_exp %s set_exp\n", $2.body);}

or_exp:
  or_exp OR and_exp {printf("SINTATICO -------- or_exp -> or_exp %s and_exp\n", $2.body);}
  | and_exp {}
  | set_in_exp {}

and_exp:
  and_exp AND relational_exp {printf("SINTATICO -------- and_exp -> and_exp %s relational_exp\n", $2.body);}
  | relational_exp {}

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {printf("SINTATICO -------- relational_exp -> relational_exp %s sum_exp\n", $2.body);}
  | sum_exp {}

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {printf("SINTATICO -------- sum_exp -> sum_exp %s mul_exp\n", $2.body);}
  | mul_exp {}

mul_exp:
  mul_exp ARITMETIC_OP2 unary_exp {printf("SINTATICO -------- mul_exp -> mul_exp %s unary_exp\n", $2.body);}
  | unary_exp {}

unary_exp:
  primal_exp {}
  | '!' primal_exp {}
  | ARITMETIC_OP1 primal_exp {printf("SINTATICO -------- unary_exp -> %s primal_exp\n", $1.body);}
  | ID '(' arg_list ')' {printf("SINTATICO %d:%d-------- primal_exp -> %s ( arg_list )\n", $1.line, $1.column, $1.body);}
  | ID '(' ')' {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", $1.line, $1.column, $1.body);}


primal_exp:
  ID {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", $1.line, $1.column, $1.body);}
  | const {printf("SINTATICO -------- primal_exp -> const\n");}
  | '(' exp ')' {}

arg_list:
  exp ',' arg_list {printf("SINTATICO -------- arg_list -> exp , arg_list\n");}
  | exp {printf("SINTATICO -------- arg_list -> exp\n");}

type:
  BASIC_TYPE {printf("SINTATICO %d:%d-------- type -> %s\n", $1.line, $1.column, $1.body);}
  | SET_TYPE {printf("SINTATICO %d:%d-------- type -> %s\n", $1.line, $1.column, $1.body);}
  | ELEM_TYPE {printf("SINTATICO %d:%d-------- type -> %s\n", $1.line, $1.column, $1.body);}

const:
  INTEGER {printf("SINTATICO %d:%d-------- const -> %s\n", $1.line, $1.column, $1.body);}
  | FLOAT {printf("SINTATICO %d:%d-------- const -> %s\n", $1.line, $1.column, $1.body);}
  | EMPTY {printf("SINTATICO %d:%d-------- const -> %s\n", $1.line, $1.column, $1.body);}

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
    yyparse();
    fclose(yyin);
    yylex_destroy();
    return 0;
}

