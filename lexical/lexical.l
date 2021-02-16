%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>

    int lines = 1, columns = 1, errors = 0;
%}

DIGIT [0-9]

ID  [[a-zA-Z_][a-z0-9A-Z]*]

BASIC_TYPE int|float

SET set

ELEM elem

EMPTY EMPTY

BASIC_OP  if|else|for|return

ARITMETIC_OP  "+"|"-"|"*"|"/"

RELATIONAL_OP >|<|">="|"<="|"!="

LOGIC_OP !|&&|"||"

SET_OP  add|remove|forall|is_set|exists

INFIX_OP in

INPUT  read

OUTPUT write|writeln


%%



%%

int main() {
    yylex();
}