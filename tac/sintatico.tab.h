/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    FLOAT_TYPE = 259,              /* FLOAT_TYPE  */
    INT_TYPE = 260,                /* INT_TYPE  */
    SET_TYPE = 261,                /* SET_TYPE  */
    ELEM_TYPE = 262,               /* ELEM_TYPE  */
    ARITMETIC_OP1 = 263,           /* ARITMETIC_OP1  */
    ARITMETIC_OP2 = 264,           /* ARITMETIC_OP2  */
    RELATIONAL_OP = 265,           /* RELATIONAL_OP  */
    AND = 266,                     /* AND  */
    OR = 267,                      /* OR  */
    SET_OP1 = 268,                 /* SET_OP1  */
    SET_OP2 = 269,                 /* SET_OP2  */
    INPUT = 270,                   /* INPUT  */
    OUTPUT = 271,                  /* OUTPUT  */
    INTEGER = 272,                 /* INTEGER  */
    FLOAT = 273,                   /* FLOAT  */
    STRING = 274,                  /* STRING  */
    EMPTY = 275,                   /* EMPTY  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    THEN = 278,                    /* THEN  */
    FOR = 279,                     /* FOR  */
    RETURN = 280,                  /* RETURN  */
    INFIX_OP = 281,                /* INFIX_OP  */
    FORALL = 282,                  /* FORALL  */
    ISSET = 283                    /* ISSET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "sintatico.y"

  struct Lexema {
    int coluna, linha, escopo;
    char corpo[100];
  } lexema;

  struct NodoArvore* nodo;

#line 101 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
