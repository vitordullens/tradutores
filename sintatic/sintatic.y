%defines
%define lr.type canonical-lr
%{

  #include <stdio.h>
  #include <stdlib.h>

  typedef struct Token Token;

  struct Token {
    int column, line;
    char *lex;
  };

  extern int yylex();

%}

%union {
  Token token;
}

%type program
%type declaration_list
%type declaration
%type var_declaration
%type function_declaration
%type params_list
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


%token <token> ID
%token <token> CONST
%token <token> BASIC_TYPE
%token <token> SET_TYPE
%token <token> ELEM_TYPE
%token <token> ARITMETIC_OP1
%token <token> ARITMETIC_OP2
%token <token> RELATIONAL_OP
%token <token> LOGIC_OP
%token <token> SET_OP1
%token <token> INPUT
%token <token> OUTPUT
%token <token> STRING
%token <token> INTEGER
%token <token> FLOAT
%token <token> EMPTY

%start program

%%

program:
  declaration_list {}

declaration_list:
  declaration declaration_list {}
  | declaration {}

declaration:
  function_declaration {}
  | var_declaration {}

var_declaration:
  type ID ";"

function_declaration:
  type ID "(" params_list ")" brackets_stmt {}
  type ID "(" ")" brackets_stmt {}

params_list:
 type ID "," params_list {}
 | type ID {}

stmt:
  brackets_stmt {}
  | for_stmt {}
  | if_else_stmt {}
  | return_stmt {}
  | io_stmt {}
  | exp_stmt {}
  | set_stmt {}
  | var_declaration {}

brackets_stmt:
  "{" stmt "}" {}

io_stmt: 
  INPUT "(" ID ")" ";" {}
  | OUTPUT "(" STRING ")" ";" {}
  | OUTPUT "(" exp ")" ";" {}

for_stmt:
  "for" "(" exp ";" exp ";" exp ")" stmt {}

if_else_stmt:
  "if" "(" exp ")" brackets_stmt {}
  | "if" "(" exp ")" brackets_stmt "else" brackets_stmt {}

return_stmt:
  "return" ";" {}
  | "return" exp {}

set_stmt:
  "forall" "(" ID "in" set_exp ")"  stmt {}
  | "is_set" "(" ID ")" {}
  | "is_set" "(" set_exp ")" {}

exp_stmt:
  exp ";" {}
  ";" {}

exp:
  ID "=" exp {}
  | or_exp {}
  | set_exp {}
  | %empty {}

set_exp:
  SET_OP1 "(" set_in_exp ")" {printf("alo");}

set_in_exp:
  or_exp "in" set_exp {}

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
  ID {}
  | CONST {}
  | "(" exp ")" {}
  | ID "(" arg_list ")" {}
  | ID "(" ")" {}

arg_list:
  exp "," arg_list {}
  | exp {}

type:
  BASIC_TYPE {}
  | SET_TYPE {}
  | ELEM_TYPE {}






