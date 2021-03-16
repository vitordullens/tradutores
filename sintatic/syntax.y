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


%token <token> ID
%token <token> BASIC_TYPE
%token <token> SET_TYPE
%token <token> ELEM_TYPE
%token <token> ARITMETIC_OP1
%token <token> ARITMETIC_OP2
%token <token> RELATIONAL_OP
%token <token> LOGIC_OP
%token <token> SET_OP1
%token <token> SET_OP2
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
%token <token> ';'
%token <token> ','
%token <token> '{'
%token <token> '}'
%token <token> '('
%token <token> ')'
%token <token> '='



%start program

%%

program:
  declaration_list {printf("SINTATICO -------- program -> declaration_list\n");}
  | error {}

declaration_list:
  declaration_list declaration  {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
  | declaration {printf("SINTATICO -------- declaration_list -> declaration\n");}

declaration:
  function_declaration {printf("SINTATICO -------- declaration -> function_declaration\n");}
  | var_declaration {printf("SINTATICO -------- declaration -> var_declaration\n");}

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
  | brackets_stmt {}
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

io_stmt: 
  INPUT '(' ID ')' ';' {}
  | OUTPUT '(' STRING ')' ';' {}
  | OUTPUT '(' exp ')' ';' {}

for_stmt:
  FOR '(' assignment ';' exp ';' assignment ')' stmt {}

if_else_stmt:
  IF '(' exp ')' brackets_stmt {}
  | IF '(' exp ')' brackets_stmt ELSE brackets_stmt {}

return_stmt:
  RETURN ';' {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
  | RETURN exp ';' {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}

set_stmt:
  "forall" '(' ID INFIX_OP set_exp ')' stmt {}
  | "is_set" '(' ID ')' ';' {}
  | "is_set" '(' set_exp ')' ';' {}

exp_stmt:
  exp ';' {}
  ';' {}

assignment:
  ID '=' exp ';' {printf("SINTATICO -------- assignment -> %s = exp\n", $1.body);}

exp:
  or_exp {}
  | set_exp {}

set_exp:
  SET_OP1 '(' set_in_exp ')' {}

set_in_exp:
  or_exp INFIX_OP set_exp {}
  | or_exp INFIX_OP ID {}

or_exp:
  or_exp "||" and_exp {}
  | and_exp {}

and_exp:
  and_exp "&&" relational_exp {}
  | relational_exp {}

relational_exp:
  relational_exp RELATIONAL_OP sum_exp {}
  | sum_exp {}

sum_exp:
  sum_exp ARITMETIC_OP1 mul_exp {}
  | mul_exp {}

mul_exp:
  mul_exp ARITMETIC_OP2 primal_exp {}
  | "-" primal_exp {}
  | primal_exp {}

primal_exp:
  ID {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", $1.line, $1.column, $1.body);}
  | const {printf("SINTATICO -------- primal_exp -> const\n");}
  | ID '(' arg_list ')' {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", $1.line, $1.column, $1.body);}
  | ID '(' ')' {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", $1.line, $1.column, $1.body);}

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
  fprintf (stderr, "ERROR %d:%d - %s\n", yylval.token.line, yylval.token.column, msg);
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

