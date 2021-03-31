/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "syntax.y"

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

#line 99 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_INT_TYPE = 5,                   /* INT_TYPE  */
  YYSYMBOL_SET_TYPE = 6,                   /* SET_TYPE  */
  YYSYMBOL_ELEM_TYPE = 7,                  /* ELEM_TYPE  */
  YYSYMBOL_ARITMETIC_OP1 = 8,              /* ARITMETIC_OP1  */
  YYSYMBOL_ARITMETIC_OP2 = 9,              /* ARITMETIC_OP2  */
  YYSYMBOL_RELATIONAL_OP = 10,             /* RELATIONAL_OP  */
  YYSYMBOL_AND = 11,                       /* AND  */
  YYSYMBOL_OR = 12,                        /* OR  */
  YYSYMBOL_SET_OP1 = 13,                   /* SET_OP1  */
  YYSYMBOL_INPUT = 14,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 15,                    /* OUTPUT  */
  YYSYMBOL_INTEGER = 16,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_EMPTY = 19,                     /* EMPTY  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_THEN = 22,                      /* THEN  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_INFIX_OP = 25,                  /* INFIX_OP  */
  YYSYMBOL_FORALL = 26,                    /* FORALL  */
  YYSYMBOL_ISSET = 27,                     /* ISSET  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* '!'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* '}'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_declaration_list = 38,          /* declaration_list  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_var_declaration = 40,           /* var_declaration  */
  YYSYMBOL_function_declaration = 41,      /* function_declaration  */
  YYSYMBOL_params_list = 42,               /* params_list  */
  YYSYMBOL_brackets_stmt = 43,             /* brackets_stmt  */
  YYSYMBOL_stmts = 44,                     /* stmts  */
  YYSYMBOL_stmt = 45,                      /* stmt  */
  YYSYMBOL_io_stmt = 46,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 47,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 48,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 49,               /* return_stmt  */
  YYSYMBOL_set_stmt = 50,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 51,                  /* exp_stmt  */
  YYSYMBOL_assignment = 52,                /* assignment  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_set_exp = 54,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 55,                /* set_in_exp  */
  YYSYMBOL_or_exp = 56,                    /* or_exp  */
  YYSYMBOL_and_exp = 57,                   /* and_exp  */
  YYSYMBOL_relational_exp = 58,            /* relational_exp  */
  YYSYMBOL_sum_exp = 59,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 60,                   /* mul_exp  */
  YYSYMBOL_unary_exp = 61,                 /* unary_exp  */
  YYSYMBOL_primal_exp = 62,                /* primal_exp  */
  YYSYMBOL_arg_list = 63,                  /* arg_list  */
  YYSYMBOL_type = 64,                      /* type  */
  YYSYMBOL_const = 65                      /* const  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3933

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  486

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,     2,     2,     2,     2,     2,
      32,    31,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    33,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,   104,   110,   117,   122,   127,   130,   146,
     163,   181,   196,   212,   217,   220,   226,   233,   238,   243,
     248,   253,   258,   263,   268,   273,   280,   285,   290,   297,
     307,   313,   322,   326,   333,   340,   348,   355,   361,   369,
     374,   381,   386,   391,   396,   401,   408,   414,   420,   426,
     434,   440,   445,   452,   458,   465,   471,   478,   484,   491,
     497,   504,   509,   514,   519,   525,   530,   536,   545,   550,
     555,   562,   568,   575,   582,   589,   596,   605,   610,   615
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "FLOAT_TYPE",
  "INT_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
  "RELATIONAL_OP", "AND", "OR", "SET_OP1", "INPUT", "OUTPUT", "INTEGER",
  "FLOAT", "STRING", "EMPTY", "IF", "ELSE", "THEN", "FOR", "RETURN",
  "INFIX_OP", "FORALL", "ISSET", "';'", "'!'", "'='", "')'", "'('", "'}'",
  "'{'", "','", "$accept", "program", "declaration_list", "declaration",
  "var_declaration", "function_declaration", "params_list",
  "brackets_stmt", "stmts", "stmt", "io_stmt", "for_stmt", "if_else_stmt",
  "return_stmt", "set_stmt", "exp_stmt", "assignment", "exp", "set_exp",
  "set_in_exp", "or_exp", "and_exp", "relational_exp", "sum_exp",
  "mul_exp", "unary_exp", "primal_exp", "arg_list", "type", "const", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    59,    33,
      61,    41,    40,   125,   123,    44
};
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3364,  3409,    12,    23,    33,    35,    43,  3443,  3477,  3511,
    3545,    45,  -110,  3790,   132,  3818,   385,     5,   -26,    74,
    3846,  3085,  3874,     5,   160,  1399,   153,    26,    52,    73,
    3556,  3577,  3582,   107,   115,    66,   139,   190,    94,   656,
    1188,  2337,    63,  2371,  2405,  2439,  2473,  2507,  2541,  2575,
      78,   199,   104,    19,    76,   815,   881,  3737,  3587,  3608,
    3613,   244,  3618,  3902,   443,  1031,   149,  3639,  3644,  1064,
     260,   171,   656,   290,  3282,  2609,   278,   314,   146,  3307,
     205,  3649,   292,  3925,   308,  2643,  2677,   269,    99,   337,
      99,    99,    99,    99,   317,   325,   352,   368,  3670,   180,
     367,   375,    56,   123,   377,   390,   407,   409,   421,   432,
    2711,   430,   436,   448,   451,   201,   401,  3675,   174,   358,
     602,  1152,   574,   604,  1518,  3742,  3680,  3701,  1143,  3706,
     234,   458,   465,   466,  3117,  1317,   522,   248,   263,  3711,
     464,   479,   492,   499,  2745,  2779,  2813,   690,   478,   500,
     501,  3732,   288,   353,  3085,   476,  3085,  3085,  2847,   502,
    2881,  2915,  3085,  2949,  2983,  3085,  3312,   628,   504,  3352,
    3376,  3381,   525,   189,   656,    15,   211,   219,   130,  1237,
    1249,  3386,  3410,  3415,  3420,    10,   715,   528,  1175,  1242,
    1391,   529,   539,   656,   102,   105,   289,   272,     2,    55,
    1436,  1471,  1502,  1514,  3342,   725,   530,  3763,  3768,  3773,
     531,   598,   656,    64,  1530,   460,  3791,  3796,  3801,  3819,
     533,   536,   550,   555,   527,  3017,   796,   238,   805,   557,
    1555,   560,   566,   572,   579,   258,   581,  3085,  1589,  1623,
    1657,  1691,  1725,  1759,  1793,  1827,   491,   594,   621,   603,
     595,   302,  3444,  3449,  1064,   826,  3317,   608,  3454,   610,
     319,   319,   319,   319,   319,   484,  3144,  3149,  1064,   854,
     932,   619,  3156,   623,   869,   488,   876,   488,   488,   488,
     488,   521,  3824,  3829,  1064,   897,  3347,   634,  3847,   639,
     238,   238,   238,   238,  1064,   953,  1064,   978,   642,   277,
     647,   649,   662,   327,   757,    97,   332,   393,  1042,   697,
     556,   656,   290,  1861,   673,   712,   687,  1895,  1929,   702,
    1352,  3051,  3478,   714,   427,   717,   730,   904,  1075,  3483,
     787,   182,  1542,  3551,  3488,  3512,  3184,   731,   514,   732,
     750,   942,  1084,  3189,   318,   740,   751,   755,   763,   798,
     487,  1011,  1274,  1054,   627,  3196,  3224,  3852,   753,   651,
     756,   761,   981,  1087,  3857,  3160,  1452,  3875,  3880,   659,
     762,   769,   696,   789,   790,  1107,  1064,  1126,   799,   791,
     797,   811,   819,   827,   835,   808,  1963,   845,  1997,  2031,
    3271,   840,   842,  3517,    47,   119,   194,  3522,   856,   857,
     859,  3229,   372,   394,  1199,  3236,   866,   868,   870,  1064,
    1139,   853,  3885,   877,   883,   903,  3903,   891,   898,   901,
     906,   908,   916,   721,   902,   958,   917,   918,   739,   920,
     921,  1215,   923,   934,   948,   950,   951,  3117,  1317,  1279,
    3546,   209,   220,  3264,  1201,  1202,   766,   956,   968,  1284,
    3908,   989,   990,   960,  1029,   829,   965,   999,   986,   995,
    2065,  2099,  2133,  2167,  1000,   996,   998,  1292,  1307,  1316,
    1007,  1018,  1074,  1123,  3117,   476,  3117,  3117,  1328,  1362,
    2201,  1022,  2235,  2269,  3117,  2303
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  1049,     4,  -110,  1020,   -15,   -40,  -105,
    -109,  -100,   -75,   -42,   -31,   -20,   -64,   -11,   -16,  1174,
    1224,  1110,  1004,   847,   741,   584,   316,   -98,     0,   475
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    40,    10,    18,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    99,    52,    53,
      54,    55,    56,    57,    58,    59,    60,   100,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    96,    22,    84,     9,    23,    20,    11,    63,   109,
      51,     9,   278,   -54,   -54,   -74,    19,   140,   -68,   -68,
     -68,   -68,   -68,   175,    76,   240,   -73,   -54,    82,   147,
     143,   -52,    51,   -54,   241,   -68,   -75,   -54,   -76,    21,
     226,   -68,   265,    12,   -52,   -68,   -40,   -52,    14,   158,
     194,   160,   161,   101,    97,   175,   175,   163,    69,   242,
     106,   107,   114,   279,    19,   -56,   -56,   -56,   -52,    74,
     246,   119,   -41,   123,    26,   290,   -51,    24,   -41,    27,
     -56,   -52,    30,    31,    70,    32,   -56,   130,    88,   -51,
     -56,   159,   243,    37,    75,    38,    83,    79,    39,   194,
     142,    89,    74,   244,   -39,    71,    85,    26,   290,   -50,
      30,    31,   194,    32,   245,    30,    31,   -52,    32,   239,
     150,    80,   -50,   247,   148,   250,    39,   274,   120,    87,
     -52,    39,   -40,   -40,   248,   227,   -52,   -40,   238,    72,
     -52,   261,   -51,    51,   -42,    51,    51,    73,   228,   112,
     -42,    51,   185,   323,    51,   -51,    67,   186,   175,   220,
      15,   -51,   187,   259,    16,   188,   189,   337,   190,    30,
      31,    77,    32,   221,   166,   113,   191,   175,   192,   167,
      98,   193,   273,   358,   168,    39,   -49,   169,   170,   105,
     171,   -12,   256,   261,   -50,    64,   175,   316,   172,   -49,
     173,   289,   -49,   174,   185,   169,   170,   -50,   171,   186,
     303,   -72,   307,   -50,   187,   128,   257,   188,   189,   -43,
     190,   174,    78,   -52,   314,   -43,    51,    86,   191,   398,
     192,   260,   139,   193,   -44,   194,   -52,   116,   101,   326,
     -44,   204,   -52,   406,   228,   -45,   205,    94,   385,   194,
     -39,   -45,   101,   340,   207,   208,   391,   209,   348,   -41,
     352,    74,   -41,   104,   417,   194,    26,   304,   101,   361,
     212,    27,   118,   -42,    30,    31,   -42,    32,   101,   371,
     101,   374,   222,   277,   -51,    37,   313,    38,   -43,   -49,
      39,   -43,   380,   108,   175,   175,   223,   -51,   224,   383,
     384,   275,   -49,   -51,   175,   185,   110,   -51,   -49,   392,
     186,   194,   400,   -44,   276,   187,   -44,   111,   188,   189,
     -39,   190,   166,   117,   -39,   194,   408,   167,   240,   191,
     -49,   192,   463,   322,   193,   169,   170,   241,   171,   -48,
     122,   -15,    68,   -49,   -46,   225,   194,   419,   330,   -49,
     222,   174,   -48,   -49,    81,   183,   -11,   -46,   -48,   427,
     101,   430,   242,   -46,   223,   240,   224,   240,   240,   480,
     -48,   482,   483,   246,   241,   240,   241,   241,   -45,   485,
     -38,   -45,   202,   -48,   241,   218,   -48,   183,   183,     2,
       3,     4,     5,   101,   448,   243,   -37,   -41,   129,   242,
     226,   242,   242,   -41,   141,   -47,   244,   -41,   131,   242,
     246,   481,   246,   246,   220,   459,    17,   245,   -47,   -42,
     246,   132,   239,   466,   -47,   -42,   247,   464,   221,   -42,
     113,   202,   243,   471,   243,   243,    81,   248,   133,   -52,
     134,   238,   243,   244,   202,   244,   244,     2,     3,     4,
       5,    65,   -52,   244,   245,   136,   245,   245,   394,   239,
     135,   239,   239,   247,   245,   247,   247,   137,   292,   239,
     -56,   -56,   -56,   247,   248,   229,   248,   248,   238,   249,
     238,   238,   138,   253,   248,   -56,   144,   185,   238,   258,
     183,   185,   186,   145,   146,   151,   186,   187,   277,   -50,
     188,   189,   267,   190,   188,   189,   155,   190,   272,   183,
     152,   191,   -50,   192,   184,   336,   193,   349,   -50,   317,
     193,   283,   -50,   153,   185,   149,   -52,   288,   183,   186,
     -71,   156,   157,   162,   187,   220,   254,   188,   189,   -52,
     190,   203,   270,   218,   219,   402,   184,   184,   191,   221,
     192,   113,   357,   193,   298,   188,   189,   255,   190,   166,
     268,   269,   284,   285,   167,   294,   271,   202,   295,   168,
     218,   193,   169,   170,   382,   171,   183,   183,   183,   183,
     183,   202,   296,   172,   218,   173,   -46,   297,   174,   308,
     203,   202,   309,   202,   202,   202,   202,   202,   310,   -46,
     218,   286,   -46,   203,   311,    79,   218,   218,   218,   218,
     218,   312,   218,   315,   207,   208,   -47,   209,    30,    31,
     288,    32,   318,   182,   319,   287,   183,   183,   321,   -47,
     212,   252,   -47,   320,    39,   279,   183,   -55,   -55,   -55,
     328,   329,   184,   202,   169,   170,   258,   171,   184,   184,
     201,   342,   -55,   217,   343,   182,   182,   202,   -55,   166,
     174,   203,   -55,   -52,   167,   272,   363,   203,   184,   168,
     364,   -52,   169,   170,   375,   171,   -52,   127,   202,   376,
     219,   377,   413,   172,   -52,   173,   219,   184,   174,   378,
     420,   -30,   218,   -30,   -30,   -30,   -30,   -30,   -30,   201,
     381,   386,   219,   -30,   -30,   -30,   -30,   -30,   -52,   -30,
     -30,   154,   201,   -30,   -30,   387,   -30,   -30,   266,   -30,
     388,   -52,   -30,   -30,   -30,   218,   203,   423,   282,   219,
     389,   188,   189,   -41,   190,   184,   184,   184,   184,   184,
     203,   207,   208,   219,   209,   393,   -41,   193,   395,   -41,
     203,   -52,   203,   203,   203,   203,   203,   212,   182,   219,
     286,   396,   401,   403,   -52,   219,   219,   219,   219,   219,
     455,   219,   409,   207,   208,   -48,   209,   182,   -52,   219,
     181,   404,   411,   410,   412,   184,   184,   414,   -48,   212,
     256,   -52,   415,   421,   -48,   184,   182,   467,   -48,   299,
     422,   270,   203,   169,   170,   184,   171,   200,   306,   300,
     216,   217,   181,   181,   188,   189,   203,   190,   300,   174,
     424,   425,   432,   301,   203,   302,    90,   -51,   433,   325,
     193,   431,   301,   126,   302,   201,   438,   203,   217,   220,
     -51,   -41,   434,   -51,   182,   182,   182,   182,   335,   201,
     435,   219,   217,   221,   -41,   113,   200,   339,   436,   201,
     -41,   201,   201,   201,   356,   201,   437,   220,   217,   200,
     439,   -38,   344,   -37,   217,   217,   217,   368,   217,   351,
     217,   221,   345,   113,   219,   449,   180,   440,   441,   345,
     442,    91,   -54,   -54,   182,   182,   346,   443,   347,   444,
     360,   445,   -41,   346,   182,   347,   -54,   185,   -42,   -54,
     220,   201,   186,   199,   -42,   181,   215,   187,   180,   180,
     188,   189,   450,   190,   221,   201,   113,   -42,   -43,   451,
     -42,   191,   452,   192,   181,   397,   193,   -41,   125,   -42,
     -68,   -68,   -68,   -68,   -68,   185,   201,   -43,   453,   454,
     186,   456,   457,   181,   -44,   187,   370,   -68,   188,   189,
     217,   190,   199,   -68,   341,   -45,   220,   -68,   216,   191,
     -43,   192,   -44,   405,   193,   199,   460,   -42,   461,   462,
     221,   373,   113,   -43,   185,   -44,   -43,   468,   -44,   186,
     -42,   220,   200,   217,   187,   216,   -42,   188,   189,   469,
     190,   181,   181,   181,   334,   221,   200,   113,   191,   216,
     192,   -43,   416,   193,   -44,   -45,   200,   472,   200,   200,
     355,   180,   200,   -46,   -43,   216,   473,   476,   475,   477,
     -43,   216,   216,   367,    25,   216,   -46,   216,   478,    26,
     180,   -45,   -46,   179,    27,   379,   -46,    30,    31,   479,
      32,   181,   181,   484,   -45,   220,    13,   -45,    37,   180,
      38,   181,     0,    39,   278,   -53,   -53,   204,   200,   221,
     198,   113,   205,   214,   215,   179,   179,   206,   399,   -53,
     207,   208,   200,   209,    95,   -53,   -44,   407,   220,   -53,
     418,   210,     0,   211,   124,     0,   212,   220,   199,   -44,
     220,   215,   221,   200,   113,   -44,     0,   180,   180,   333,
     426,   221,   199,   113,   221,   215,   113,   216,     0,   198,
     220,     0,   199,     0,   199,   354,     0,     0,   199,   429,
       0,   215,   198,     0,   221,   -45,   113,   215,   366,   220,
       0,   215,   447,   215,     0,     0,   185,     0,   -45,   178,
     216,   186,   220,   221,   -45,   113,   187,   180,   180,   188,
     189,     0,   190,    90,   -50,     0,   221,   180,   113,     0,
     191,     0,   192,     0,   199,   193,   197,   -50,   179,   213,
     -50,   178,   178,   -77,   -77,   -77,   -77,   -77,   199,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,   179,   121,     0,
     -77,   -23,   -23,   -23,   -23,   -23,   -77,   -23,   -23,   199,
     -77,   -23,   -23,   176,   -23,   -23,   179,   -23,   458,     0,
     -23,   -23,   -23,   215,   -43,   197,   -44,   -45,   220,     0,
     -43,   214,   -44,   -45,   -43,     0,   -44,   -45,   197,     0,
     195,     0,   221,   102,   113,   176,   176,   262,   -54,   -54,
     -78,   -78,   -78,   -78,   -78,   198,   215,   263,   214,   -56,
     -56,   -56,   -54,   177,   179,   332,     0,   -78,   -54,   198,
       0,     0,   214,   -78,   -56,     0,     0,   -78,     0,   198,
     -56,   353,   465,     0,   178,   198,   -47,   470,   214,   195,
     196,     0,   220,   103,   365,   177,   177,   220,   214,   -47,
     214,     0,   195,   178,   -41,   -47,   221,     0,   113,   -47,
       0,   221,     0,   113,   179,   179,     0,   -41,     0,   -42,
      74,     0,   178,   -41,   179,    26,     0,   -41,   -43,     0,
      27,   198,   -42,    30,    31,     0,    32,   305,   -42,   196,
     -44,   -43,   -42,     0,    37,   198,    38,   -43,   176,    39,
       0,   -43,   196,   -44,     0,   390,     0,     0,     0,   -44,
     167,   197,     0,   -44,   213,   168,   198,   176,   169,   170,
     331,   171,     0,     0,   -45,   197,     0,     0,   213,   172,
     214,   173,     0,     0,   174,   350,   176,   -45,     0,     0,
       0,   197,     0,   -45,   213,     0,     0,   -45,   177,   -79,
     -79,   -79,   -79,   -79,   213,     0,   213,   -68,   -68,   -68,
     -68,   -68,     0,   214,     0,     0,   -79,   177,     0,     0,
     178,   178,   -79,     0,   -68,   195,   -79,   -68,   324,    65,
     178,    66,     0,     0,     0,     0,   177,   197,     0,   195,
       0,     0,   338,     0,   -58,   280,   -58,   -58,   -58,     0,
       0,   197,     0,     0,     0,   195,     0,     0,   359,     0,
     292,   -58,   -55,   -55,   -55,     0,     0,   -58,   369,     0,
     372,   -58,   197,     0,     0,   196,     0,   -55,   103,   -60,
     -60,   -60,   -60,   -60,   176,   176,   213,     0,     0,   196,
       0,     0,   103,     0,   176,     0,   -60,     0,     0,     0,
       0,   195,   -60,     0,     0,   196,   -60,     0,   103,     0,
     -61,   -61,   -61,   -61,   -61,   195,     0,     0,   103,   213,
     103,     0,   -69,   -69,   -69,   -69,   -69,   -61,    91,   -53,
     -53,     0,     0,   -61,   177,   177,   195,   -61,     0,   -69,
     291,   -54,   -54,   -53,   177,   -69,   -53,     0,     0,   -69,
     428,   196,   262,   -53,   -53,   -54,   -14,     0,   -14,   -14,
     -14,   -14,   -14,   -14,     0,   196,     0,   -53,   -14,   -14,
     -14,   -14,   -14,   -53,   -14,   -14,   -14,     0,   -14,   -14,
       0,   -14,   -14,   446,   -14,     0,   196,   -14,   -14,   -14,
     -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     103,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,     0,   -23,   -23,     0,   -23,   -23,     0,   -23,     0,
       0,   -23,   -23,   -23,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   103,     0,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,   -25,
     -25,     0,   -25,     0,     0,   -25,   -25,   -25,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,
     -20,   -20,     0,   -20,   -20,     0,   -20,     0,     0,   -20,
     -20,   -20,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -17,     0,
     -17,     0,     0,   -17,   -17,   -17,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,     0,   -18,   -18,
       0,   -18,   -18,     0,   -18,     0,     0,   -18,   -18,   -18,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
     -19,     0,   -19,   -19,     0,   -19,   -19,     0,   -19,     0,
       0,   -19,   -19,   -19,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,     0,   -22,     0,     0,   -22,   -22,   -22,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,
     -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,   -21,
     -21,   -21,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
     -32,     0,     0,   -32,   -32,   -32,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,
       0,   -24,   -24,     0,   -24,     0,     0,   -24,   -24,   -24,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,     0,   -36,   -36,     0,   -36,     0,
       0,   -36,   -36,   -36,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,     0,     0,   -33,   -33,   -33,   -13,     0,
     -13,   -13,   -13,   -13,   -13,   -13,     0,     0,     0,     0,
     -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,   -13,     0,
     -13,   -13,     0,   -13,   -13,     0,   -13,     0,     0,   -13,
     -13,   -13,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,
      -8,     0,     0,    -8,    -8,    -8,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
       0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,   -26,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,     0,
       0,   -27,   -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,   -28,
     -28,     0,   -28,     0,     0,   -28,   -28,   -28,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   474,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,     0,     0,   -30,
     -30,   -30,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,     0,     0,   -31,   -31,   -31,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,
       0,   -35,   -35,     0,   -35,     0,     0,   -35,   -35,   -35,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,     0,
       0,   -34,   -34,   -34,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,     0,     0,   -29,   -29,   -29,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,
     -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,   -25,
     -25,   -25,   164,     0,    25,     2,     3,     4,     5,    26,
       0,     0,     0,     0,    27,    28,    29,    30,    31,     0,
      32,    33,     0,     0,    34,    35,     0,    36,    37,     0,
      38,     0,     0,    39,   -16,   165,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,     0,     0,   -20,   -20,
       0,   -20,   -20,     0,   -20,     0,     0,   -20,   -20,   -20,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,
       0,     0,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,
       0,   -17,   -17,   -17,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,   -18,   -18,   -18,   -18,
     -18,     0,   -18,   -18,     0,     0,   -18,   -18,     0,   -18,
     -18,     0,   -18,     0,     0,   -18,   -18,   -18,   -19,     0,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,     0,     0,
     -19,   -19,     0,   -19,   -19,     0,   -19,     0,     0,   -19,
     -19,   -19,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,     0,
     -22,     0,     0,   -22,   -22,   -22,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,     0,     0,   -21,   -21,
       0,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,   -21,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,     0,
       0,   -32,   -32,   -32,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,     0,     0,   -24,   -24,     0,   -24,
     -24,     0,   -24,     0,     0,   -24,   -24,   -24,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,
     -36,   -36,     0,   -36,   -36,     0,   -36,     0,     0,   -36,
     -36,   -36,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,   -33,   -33,     0,   -33,   -33,     0,
     -33,     0,     0,   -33,   -33,   -33,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
       0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,   -26,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
       0,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,     0,
       0,   -27,   -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,     0,   -28,
     -28,     0,   -28,     0,     0,   -28,   -28,   -28,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,
     -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,   -31,
     -31,   -31,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,     0,
     -35,     0,     0,   -35,   -35,   -35,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,   -34,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
       0,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,
       0,   -29,   -29,   -29,   -14,     0,   -14,   -14,   -14,   -14,
     -14,   -14,     0,     0,     0,     0,   -14,   -14,   -14,   -14,
     -14,     0,   -14,   -14,     0,     0,   -14,   -14,     0,   -14,
     -14,     0,   -14,     0,     0,   -14,   -14,   -14,    -8,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,
      -8,    -8,     0,    -8,    -8,     0,    -8,     0,     0,    -8,
      -8,    -8,   -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,     0,     0,   -13,   -13,     0,   -13,   -13,     0,
     -13,     0,     0,   -13,   -13,   -13,   164,     0,    25,     2,
       3,     4,     5,    26,     0,     0,     0,     0,    27,    28,
      29,    30,    31,     0,    32,    33,     0,     0,    34,    35,
       0,    36,    37,     0,    38,     0,     0,    39,   230,   165,
      25,     2,     3,     4,     5,    26,     0,     0,     0,     0,
      27,   231,   232,    30,    31,     0,    32,   233,     0,     0,
     234,   235,     0,   236,    37,     0,    38,     0,     0,    39,
       0,   237,   -68,   -68,   -68,   -68,   -68,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -62,   -62,   -62,   -62,   -62,   -68,
     291,   -53,   -53,     0,   -63,   -68,     0,     0,     0,   -68,
     -63,   -62,     0,     0,   -63,   -53,     0,   -62,     0,     0,
       0,   -62,   -65,   -65,   -65,   -65,   -65,   -70,   -70,   -70,
     -70,   -70,     0,     0,   -57,   280,   -57,   -57,   -57,   -65,
       0,     0,     0,     0,   -70,   -65,     0,     0,     0,   -65,
     -70,   -57,     0,     0,   -70,     0,     0,   -57,     0,     0,
       0,   -57,   -59,   -59,   -59,   -59,   -59,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -67,   -67,   -67,   -67,   -67,   -59,
       0,     0,     0,     0,   -64,   -59,     0,     0,     0,   -59,
     -64,   -67,     0,     0,   -64,     0,     0,   -67,     0,     0,
       0,   -67,   -66,   -66,   -66,   -66,   -66,     0,     0,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,   -66,
     -68,   -68,   -68,   -68,   -68,   -66,   -68,     0,     0,   -66,
       0,   320,   -68,   251,     0,     0,     0,   -68,     0,     0,
     -68,     0,     0,     0,    66,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -68,     0,     0,   -68,     0,   -68,     0,   115,
       0,     0,   -68,   -68,   251,     0,     0,     0,   -68,   327,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -77,   -77,   -77,   -77,   -77,     1,     0,   -68,     2,     3,
       4,     5,   -68,     0,   281,     0,     0,   -77,     0,   362,
       0,     0,     0,   -77,   -78,   -78,   -78,   -78,   -78,   -79,
     -79,   -79,   -79,   -79,   -58,   264,   -58,   -58,   -58,     0,
       0,   -78,     0,     0,     0,     0,   -79,   -78,     0,    -7,
      -7,   -58,   -79,    -7,    -7,    -7,    -7,   -58,   -60,   -60,
     -60,   -60,   -60,   -61,   -61,   -61,   -61,   -61,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -60,     0,     0,     0,     0,
     -61,   -60,     0,    -2,     1,   -69,   -61,     2,     3,     4,
       5,   -69,   -68,   -68,   -68,   -68,   -68,   -63,   -63,   -63,
     -63,   -63,   -62,   -62,   -62,   -62,   -62,     0,     0,   -68,
       0,     0,     0,     0,   -63,   -68,     0,    -4,    -4,   -62,
     -63,    -4,    -4,    -4,    -4,   -62,   -65,   -65,   -65,   -65,
     -65,   -70,   -70,   -70,   -70,   -70,   -57,   264,   -57,   -57,
     -57,     0,     0,   -65,     0,     0,     0,     0,   -70,   -65,
       0,    -6,    -6,   -57,   -70,    -6,    -6,    -6,    -6,   -57,
     -59,   -59,   -59,   -59,   -59,   -64,   -64,   -64,   -64,   -64,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -59,     0,     0,
       0,     0,   -64,   -59,     0,    -5,    -5,   -67,   -64,    -5,
      -5,    -5,    -5,   -67,   -66,   -66,   -66,   -66,   -66,   263,
       0,   -55,   -55,   -55,   -77,   -77,   -77,   -77,   -77,     0,
       0,   -66,     0,     0,     0,     0,   -55,   -66,     0,     0,
       0,   -77,   -55,     0,   -77,   -78,   -78,   -78,   -78,   -78,
     -79,   -79,   -79,   -79,   -79,   -58,    93,   -58,   -58,   -58,
       0,     0,   -78,     0,     0,   -78,     0,   -79,     0,     0,
     -79,     0,   -58,     0,     0,   -58,   -60,   -60,   -60,   -60,
     -60,   -61,   -61,   -61,   -61,   -61,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -60,     0,     0,   -60,     0,   -61,     0,
       0,   -61,     0,   -69,     0,     0,   -69,   -68,   -68,   -68,
     -68,   -68,   -63,   -63,   -63,   -63,   -63,   -62,   -62,   -62,
     -62,   -62,     0,     0,   -68,     0,     0,   -68,     0,   -63,
       0,     0,   -63,     0,   -62,     0,     0,   -62,   -65,   -65,
     -65,   -65,   -65,   -70,   -70,   -70,   -70,   -70,   -57,    93,
     -57,   -57,   -57,     0,     0,   -65,     0,     0,   -65,     0,
     -70,     0,     0,   -70,     0,   -57,     0,     0,   -57,   -59,
     -59,   -59,   -59,   -59,   -64,   -64,   -64,   -64,   -64,   -67,
     -67,   -67,   -67,   -67,     0,     0,   -59,     0,     0,   -59,
       0,   -64,     0,     0,   -64,     0,   -67,     0,     0,   -67,
     -66,   -66,   -66,   -66,   -66,    92,     0,   -56,   -56,   -56,
      92,     0,   -55,   -55,   -55,     0,     0,   -66,     0,     0,
     -66,     0,   -56,     0,     0,   -56,     0,   -55,     0,     0,
     -55,   -77,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,
     -78,   -79,   -79,   -79,   -79,   -79,     0,     0,   -77,     0,
      -3,    -3,     0,   -78,    -3,    -3,    -3,    -3,   -79,   -58,
     293,   -58,   -58,   -58,   -60,   -60,   -60,   -60,   -60,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -58,     0,    -8,    -8,
       0,   -60,    -8,    -8,    -8,    -8,   -61,   -69,   -69,   -69,
     -69,   -69,   -68,   -68,   -68,   -68,   -68,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -69,     0,   -14,   -14,     0,   -68,
     -14,   -14,   -14,   -14,   -63,   -62,   -62,   -62,   -62,   -62,
     -65,   -65,   -65,   -65,   -65,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -62,     0,   -10,   -10,     0,   -65,   -10,   -10,
     -10,   -10,   -70,   -57,   293,   -57,   -57,   -57,   -59,   -59,
     -59,   -59,   -59,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -57,     0,    -9,    -9,     0,   -59,    -9,    -9,    -9,    -9,
     -64,   -67,   -67,   -67,   -67,   -67,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,   -13,   -13,     0,   -67,   -13,
     -13,   -13,   -13,   -66
};

static const yytype_int16 yycheck[] =
{
       0,    65,    17,    43,     0,    31,     1,     7,    23,    73,
      21,     7,    10,    11,    12,     3,    16,   115,     8,     9,
      10,    11,    12,    39,    35,   134,     3,    25,    39,   134,
     128,    12,    43,    31,   134,    25,     3,    35,     3,    34,
      25,    31,    32,     0,    25,    35,    31,    28,     3,   154,
      66,   156,   157,    69,    65,    71,    72,   162,    32,   134,
      71,    72,    78,     8,    64,    10,    11,    12,    12,     3,
     134,    87,    25,    89,     8,    11,    12,     3,    31,    13,
      25,    25,    16,    17,    32,    19,    31,    31,    12,    25,
      35,   155,   134,    27,    28,    29,    33,     3,    32,   115,
     116,    25,     3,   134,    28,    32,    28,     8,    11,    12,
      16,    17,   128,    19,   134,    16,    17,    12,    19,   134,
     136,    27,    25,   134,   135,   165,    32,    25,    29,    25,
      25,    32,    28,    31,   134,    12,    31,    35,   134,    32,
      35,    11,    12,   154,    25,   156,   157,    32,    25,     3,
      31,   162,     3,   251,   165,    25,     3,     8,   174,    13,
      28,    31,    13,   174,    32,    16,    17,   265,    19,    16,
      17,    32,    19,    27,     3,    29,    27,   193,    29,     8,
      31,    32,   193,   281,    13,    32,    12,    16,    17,    18,
      19,    31,     3,    11,    12,    35,   212,   237,    27,    25,
      29,   212,    28,    32,     3,    16,    17,    25,    19,     8,
     226,    31,   228,    31,    13,    35,    27,    16,    17,    25,
      19,    32,    32,    12,   235,    31,   237,    28,    27,   327,
      29,    12,    31,    32,    25,   251,    25,    32,   254,   255,
      31,     3,    31,   341,    25,    25,     8,     3,   312,   265,
      31,    31,   268,   269,    16,    17,   320,    19,   274,    25,
     276,     3,    28,     3,   362,   281,     8,    29,   284,   285,
      32,    13,     3,    25,    16,    17,    28,    19,   294,   295,
     296,   297,    13,    11,    12,    27,    28,    29,    25,    12,
      32,    28,   308,     3,   310,   311,    27,    25,    29,   310,
     311,    12,    25,    31,   320,     3,    28,    35,    31,   320,
       8,   327,   328,    25,    25,    13,    28,     3,    16,    17,
      31,    19,     3,    31,    35,   341,   342,     8,   437,    27,
      12,    29,   437,    31,    32,    16,    17,   437,    19,    12,
       3,    33,    26,    25,    12,    28,   362,   363,    29,    31,
      13,    32,    25,    35,    38,    39,    31,    25,    31,   375,
     376,   377,   437,    31,    27,   474,    29,   476,   477,   474,
      12,   476,   477,   437,   474,   484,   476,   477,    25,   484,
      28,    28,    66,    25,   484,    69,    28,    71,    72,     4,
       5,     6,     7,   409,   410,   437,    28,    25,    31,   474,
      25,   476,   477,    31,     3,    12,   437,    35,    31,   484,
     474,   475,   476,   477,    13,   431,    31,   437,    25,    25,
     484,    31,   437,   439,    31,    31,   437,   438,    27,    35,
      29,   115,   474,   449,   476,   477,   120,   437,    31,    12,
      31,   437,   484,   474,   128,   476,   477,     4,     5,     6,
       7,    30,    25,   484,   474,    25,   476,   477,    31,   474,
      28,   476,   477,   474,   484,   476,   477,    31,     8,   484,
      10,    11,    12,   484,   474,    27,   476,   477,   474,     3,
     476,   477,    31,   167,   484,    25,    28,     3,   484,   173,
     174,     3,     8,    28,    28,    31,     8,    13,    11,    12,
      16,    17,   186,    19,    16,    17,    28,    19,   192,   193,
      31,    27,    25,    29,    39,    31,    32,    29,    31,    28,
      32,   205,    35,    31,     3,     3,    12,   211,   212,     8,
      31,    31,    31,    31,    13,    13,    32,    16,    17,    25,
      19,    66,     3,   227,    69,    31,    71,    72,    27,    27,
      29,    29,    31,    32,    27,    16,    17,    32,    19,     3,
      32,    32,    32,    32,     8,    32,    27,   251,    32,    13,
     254,    32,    16,    17,    18,    19,   260,   261,   262,   263,
     264,   265,    32,    27,   268,    29,    12,    32,    32,    32,
     115,   275,    32,   277,   278,   279,   280,   281,    32,    25,
     284,     3,    28,   128,    32,     3,   290,   291,   292,   293,
     294,    32,   296,    32,    16,    17,    12,    19,    16,    17,
     304,    19,    28,    39,     3,    27,   310,   311,    33,    25,
      32,     3,    28,    30,    32,     8,   320,    10,    11,    12,
      32,    31,   167,   327,    16,    17,   330,    19,   173,   174,
      66,    32,    25,    69,    31,    71,    72,   341,    31,     3,
      32,   186,    35,    12,     8,   349,    32,   192,   193,    13,
      31,    12,    16,    17,    32,    19,    25,    93,   362,    32,
     205,    32,    31,    27,    25,    29,   211,   212,    32,    27,
      31,     1,   376,     3,     4,     5,     6,     7,     8,   115,
       3,    28,   227,    13,    14,    15,    16,    17,    12,    19,
      20,    21,   128,    23,    24,     3,    26,    27,     3,    29,
      33,    25,    32,    33,    34,   409,   251,    31,     3,   254,
      28,    16,    17,    12,    19,   260,   261,   262,   263,   264,
     265,    16,    17,   268,    19,    31,    25,    32,    31,    28,
     275,    12,   277,   278,   279,   280,   281,    32,   174,   284,
       3,    31,    31,    31,    25,   290,   291,   292,   293,   294,
      31,   296,    32,    16,    17,    12,    19,   193,    12,   304,
      39,    31,    27,    32,    31,   310,   311,    31,    25,    32,
       3,    25,    31,    31,    31,   320,   212,    31,    35,     3,
      31,     3,   327,    16,    17,   330,    19,    66,     3,    13,
      69,   227,    71,    72,    16,    17,   341,    19,    13,    32,
      31,    31,    31,    27,   349,    29,    11,    12,    31,     3,
      32,    32,    27,    92,    29,   251,    28,   362,   254,    13,
      25,    12,    31,    28,   260,   261,   262,   263,   264,   265,
      31,   376,   268,    27,    25,    29,   115,     3,    31,   275,
      31,   277,   278,   279,   280,   281,    31,    13,   284,   128,
      25,    31,     3,    31,   290,   291,   292,   293,   294,     3,
     296,    27,    13,    29,   409,    32,    39,    31,    31,    13,
      31,    10,    11,    12,   310,   311,    27,    31,    29,    31,
       3,    31,    25,    27,   320,    29,    25,     3,    25,    28,
      13,   327,     8,    66,    12,   174,    69,    13,    71,    72,
      16,    17,    31,    19,    27,   341,    29,    25,    25,    31,
      28,    27,    31,    29,   193,    31,    32,    31,    91,    31,
       8,     9,    10,    11,    12,     3,   362,    31,    31,    31,
       8,    31,    31,   212,    31,    13,     3,    25,    16,    17,
     376,    19,   115,    31,    32,    31,    13,    35,   227,    27,
      12,    29,    12,    31,    32,   128,    28,    12,    28,    28,
      27,     3,    29,    25,     3,    25,    28,    31,    28,     8,
      25,    13,   251,   409,    13,   254,    31,    16,    17,    31,
      19,   260,   261,   262,   263,    27,   265,    29,    27,   268,
      29,    12,    31,    32,    25,    25,   275,    31,   277,   278,
     279,   174,   281,    12,    25,   284,    31,    31,    28,    31,
      31,   290,   291,   292,     3,   294,    25,   296,    31,     8,
     193,    12,    31,    39,    13,     3,    35,    16,    17,    31,
      19,   310,   311,    31,    25,    13,     7,    28,    27,   212,
      29,   320,    -1,    32,    10,    11,    12,     3,   327,    27,
      66,    29,     8,    69,   227,    71,    72,    13,     3,    25,
      16,    17,   341,    19,    64,    31,    12,     3,    13,    35,
       3,    27,    -1,    29,    90,    -1,    32,    13,   251,    25,
      13,   254,    27,   362,    29,    31,    -1,   260,   261,   262,
       3,    27,   265,    29,    27,   268,    29,   376,    -1,   115,
      13,    -1,   275,    -1,   277,   278,    -1,    -1,   281,     3,
      -1,   284,   128,    -1,    27,    12,    29,   290,   291,    13,
      -1,   294,     3,   296,    -1,    -1,     3,    -1,    25,    39,
     409,     8,    13,    27,    31,    29,    13,   310,   311,    16,
      17,    -1,    19,    11,    12,    -1,    27,   320,    29,    -1,
      27,    -1,    29,    -1,   327,    32,    66,    25,   174,    69,
      28,    71,    72,     8,     9,    10,    11,    12,   341,     1,
      -1,     3,     4,     5,     6,     7,     8,   193,    88,    -1,
      25,    13,    14,    15,    16,    17,    31,    19,    20,   362,
      35,    23,    24,    39,    26,    27,   212,    29,     3,    -1,
      32,    33,    34,   376,    25,   115,    25,    25,    13,    -1,
      31,   227,    31,    31,    35,    -1,    35,    35,   128,    -1,
      66,    -1,    27,    69,    29,    71,    72,    10,    11,    12,
       8,     9,    10,    11,    12,   251,   409,     8,   254,    10,
      11,    12,    25,    39,   260,   261,    -1,    25,    31,   265,
      -1,    -1,   268,    31,    25,    -1,    -1,    35,    -1,   275,
      31,   277,     3,    -1,   174,   281,    12,     3,   284,   115,
      66,    -1,    13,    69,   290,    71,    72,    13,   294,    25,
     296,    -1,   128,   193,    12,    31,    27,    -1,    29,    35,
      -1,    27,    -1,    29,   310,   311,    -1,    25,    -1,    12,
       3,    -1,   212,    31,   320,     8,    -1,    35,    12,    -1,
      13,   327,    25,    16,    17,    -1,    19,   227,    31,   115,
      12,    25,    35,    -1,    27,   341,    29,    31,   174,    32,
      -1,    35,   128,    25,    -1,     3,    -1,    -1,    -1,    31,
       8,   251,    -1,    35,   254,    13,   362,   193,    16,    17,
     260,    19,    -1,    -1,    12,   265,    -1,    -1,   268,    27,
     376,    29,    -1,    -1,    32,   275,   212,    25,    -1,    -1,
      -1,   281,    -1,    31,   284,    -1,    -1,    35,   174,     8,
       9,    10,    11,    12,   294,    -1,   296,     8,     9,    10,
      11,    12,    -1,   409,    -1,    -1,    25,   193,    -1,    -1,
     310,   311,    31,    -1,    25,   251,    35,    28,   254,    30,
     320,    32,    -1,    -1,    -1,    -1,   212,   327,    -1,   265,
      -1,    -1,   268,    -1,     8,     9,    10,    11,    12,    -1,
      -1,   341,    -1,    -1,    -1,   281,    -1,    -1,   284,    -1,
       8,    25,    10,    11,    12,    -1,    -1,    31,   294,    -1,
     296,    35,   362,    -1,    -1,   251,    -1,    25,   254,     8,
       9,    10,    11,    12,   310,   311,   376,    -1,    -1,   265,
      -1,    -1,   268,    -1,   320,    -1,    25,    -1,    -1,    -1,
      -1,   327,    31,    -1,    -1,   281,    35,    -1,   284,    -1,
       8,     9,    10,    11,    12,   341,    -1,    -1,   294,   409,
     296,    -1,     8,     9,    10,    11,    12,    25,    10,    11,
      12,    -1,    -1,    31,   310,   311,   362,    35,    -1,    25,
      10,    11,    12,    25,   320,    31,    28,    -1,    -1,    35,
     376,   327,    10,    11,    12,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,   341,    -1,    25,    13,    14,
      15,    16,    17,    31,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,   409,    29,    -1,   362,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
     376,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,   409,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    32,     1,    34,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      -1,    34,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,    25,
      10,    11,    12,    -1,    25,    31,    -1,    -1,    -1,    35,
      31,    25,    -1,    -1,    35,    25,    -1,    31,    -1,    -1,
      -1,    35,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,    25,
      -1,    -1,    -1,    -1,    25,    31,    -1,    -1,    -1,    35,
      31,    25,    -1,    -1,    35,    -1,    -1,    31,    -1,    -1,
      -1,    35,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,     8,     9,    10,    11,    12,    25,
      -1,    -1,    -1,    -1,    25,    31,    -1,    -1,    -1,    35,
      31,    25,    -1,    -1,    35,    -1,    -1,    31,    -1,    -1,
      -1,    35,     8,     9,    10,    11,    12,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    25,
       8,     9,    10,    11,    12,    31,    25,    -1,    -1,    35,
      -1,    30,    31,    32,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    32,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    32,
      -1,    -1,    25,    31,    32,    -1,    -1,    -1,    31,    32,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     1,    -1,    25,     4,     5,
       6,     7,    25,    -1,    32,    -1,    -1,    25,    -1,    32,
      -1,    -1,    -1,    31,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,     0,
       1,    25,    31,     4,     5,     6,     7,    31,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      25,    31,    -1,     0,     1,    25,    31,     4,     5,     6,
       7,    31,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    25,    31,    -1,     0,     1,    25,
      31,     4,     5,     6,     7,    31,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,    -1,    -1,    -1,    25,    31,
      -1,     0,     1,    25,    31,     4,     5,     6,     7,    31,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    25,    31,    -1,     0,     1,    25,    31,     4,
       5,     6,     7,    31,     8,     9,    10,    11,    12,     8,
      -1,    10,    11,    12,     8,     9,    10,    11,    12,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    25,    31,    -1,    -1,
      -1,    25,    31,    -1,    28,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,
      28,    -1,    25,    -1,    -1,    28,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,
      -1,    28,    -1,    25,    -1,    -1,    28,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,    -1,    28,    -1,    25,
      -1,    -1,    28,    -1,    25,    -1,    -1,    28,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,    -1,    -1,    25,    -1,    -1,    28,    -1,
      25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    25,    -1,    -1,    28,
      -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,    28,
       8,     9,    10,    11,    12,     8,    -1,    10,    11,    12,
       8,    -1,    10,    11,    12,    -1,    -1,    25,    -1,    -1,
      28,    -1,    25,    -1,    -1,    28,    -1,    25,    -1,    -1,
      28,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,     8,     9,    10,    11,    12,    -1,    -1,    25,    -1,
       0,     1,    -1,    25,     4,     5,     6,     7,    25,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,     8,
       9,    10,    11,    12,    -1,    -1,    25,    -1,     0,     1,
      -1,    25,     4,     5,     6,     7,    25,     8,     9,    10,
      11,    12,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    -1,    -1,    25,    -1,     0,     1,    -1,    25,
       4,     5,     6,     7,    25,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    12,
      -1,    -1,    25,    -1,     0,     1,    -1,    25,     4,     5,
       6,     7,    25,     8,     9,    10,    11,    12,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,    -1,    -1,
      25,    -1,     0,     1,    -1,    25,     4,     5,     6,     7,
      25,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,     0,     1,    -1,    25,     4,
       5,     6,     7,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    37,    38,    39,    40,
      41,    64,     0,    39,     3,    28,    32,    31,    42,    64,
       1,    34,    43,    31,     3,     3,     8,    13,    14,    15,
      16,    17,    19,    20,    23,    24,    26,    27,    29,    32,
      40,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    64,    65,    43,    35,    30,    32,     3,    62,    32,
      32,    32,    32,    32,     3,    28,    53,    32,    32,     3,
      27,    62,    53,    33,    44,    28,    28,    25,    12,    25,
      11,    10,     8,     9,     3,    42,    52,    53,    31,    53,
      63,    54,    55,    56,     3,    18,    53,    53,     3,    52,
      28,     3,     3,    29,    54,    32,    32,    31,     3,    54,
      29,    57,     3,    54,    58,    59,    60,    61,    35,    31,
      31,    31,    31,    31,    31,    28,    25,    31,    31,    31,
      63,     3,    54,    63,    28,    28,    28,    45,    53,     3,
      54,    31,    31,    31,    21,    28,    31,    31,    45,    52,
      45,    45,    31,    45,     1,    34,     3,     8,    13,    16,
      17,    19,    27,    29,    32,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    65,     3,     8,    13,    16,    17,
      19,    27,    29,    32,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    65,     3,     8,    13,    16,    17,    19,
      27,    29,    32,    57,    58,    59,    60,    61,    62,    65,
      13,    27,    13,    27,    29,    28,    25,    12,    25,    27,
       1,    14,    15,    20,    23,    24,    26,    34,    40,    43,
      46,    47,    48,    49,    50,    51,    52,    53,    64,     3,
      44,    32,     3,    62,    32,    32,     3,    27,    62,    53,
      12,    11,    10,     8,     9,    32,     3,    62,    32,    32,
       3,    27,    62,    53,    25,    12,    25,    11,    10,     8,
       9,    32,     3,    62,    32,    32,     3,    27,    62,    53,
      11,    10,     8,     9,    32,    32,    32,    32,    27,     3,
      13,    27,    29,    54,    29,    57,     3,    54,    32,    32,
      32,    32,    32,    28,    53,    32,    44,    28,    28,     3,
      30,    33,    31,    63,    55,     3,    54,    32,    32,    31,
      29,    57,    58,    59,    60,    61,    31,    63,    55,     3,
      54,    32,    32,    31,     3,    13,    27,    29,    54,    29,
      57,     3,    54,    58,    59,    60,    61,    31,    63,    55,
       3,    54,    32,    32,    31,    58,    59,    60,    61,    55,
       3,    54,    55,     3,    54,    32,    32,    32,    27,     3,
      54,     3,    18,    53,    53,    52,    28,     3,    33,    28,
       3,    52,    53,    31,    31,    31,    31,    31,    63,     3,
      54,    31,    31,    31,    31,    31,    63,     3,    54,    32,
      32,    27,    31,    31,    31,    31,    31,    63,     3,    54,
      31,    31,    31,    31,    31,    31,     3,    54,    55,     3,
      54,    32,    31,    31,    31,    31,    31,    31,    28,    25,
      31,    31,    31,    31,    31,    31,    55,     3,    54,    32,
      31,    31,    31,    31,    31,    31,    31,    31,     3,    54,
      28,    28,    28,    45,    53,     3,    54,    31,    31,    31,
       3,    54,    31,    31,    21,    28,    31,    31,    31,    31,
      45,    52,    45,    45,    31,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    47,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      62,    63,    63,    64,    64,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     5,     5,     9,
       5,     7,     2,     3,     7,     7,     2,     3,     3,     1,
       1,     4,     4,     4,     5,     5,     3,     3,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     3,     5,     4,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declaration_list  */
#line 96 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "program");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
    raiz = (yyval.nodo);
  }
#line 2389 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 104 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2400 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 110 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2410 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 117 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2420 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 122 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "declaration");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2430 "syntax.tab.c"
    break;

  case 7: /* declaration: error  */
#line 127 "syntax.y"
          {}
#line 2436 "syntax.tab.c"
    break;

  case 8: /* var_declaration: type ID ';'  */
#line 130 "syntax.y"
              {
    Simbolo s = criarSimbolo((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "var_declaration");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2455 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 146 "syntax.y"
                                            {
    Simbolo s = criarSimbolo((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-5].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyvsp[-5].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2477 "syntax.tab.c"
    break;

  case 10: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 163 "syntax.y"
                                  {
    Simbolo s = criarSimbolo((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo);
    s.escopo = escopo;
    escopo++;
    s.ehFuncao = 1;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "function_declaration");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyvsp[-4].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2498 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID ',' params_list  */
#line 181 "syntax.y"
                         {
   Simbolo s = criarSimbolo((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-3].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyvsp[-3].nodo)->proximo = (yyvsp[0].nodo);
 }
#line 2518 "syntax.tab.c"
    break;

  case 12: /* params_list: type ID  */
#line 196 "syntax.y"
           {
    Simbolo s = criarSimbolo((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo);
    s.escopo = escopo;
    s.ehFuncao = 0;
    indiceTipo--;
    strcpy(s.tipo, tipo[indiceTipo]);
    indiceTabela++;
    tabelaSimbolos[indiceTabela] = s;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "params_list");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
 }
#line 2537 "syntax.tab.c"
    break;

  case 13: /* brackets_stmt: '{' stmts '}'  */
#line 212 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "brackets_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2547 "syntax.tab.c"
    break;

  case 14: /* brackets_stmt: error  */
#line 217 "syntax.y"
          {}
#line 2553 "syntax.tab.c"
    break;

  case 15: /* stmts: stmt stmts  */
#line 220 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2564 "syntax.tab.c"
    break;

  case 16: /* stmts: stmt  */
#line 226 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmts");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2574 "syntax.tab.c"
    break;

  case 17: /* stmt: for_stmt  */
#line 233 "syntax.y"
           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2584 "syntax.tab.c"
    break;

  case 18: /* stmt: if_else_stmt  */
#line 238 "syntax.y"
                 {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2594 "syntax.tab.c"
    break;

  case 19: /* stmt: return_stmt  */
#line 243 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2604 "syntax.tab.c"
    break;

  case 20: /* stmt: io_stmt  */
#line 248 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2614 "syntax.tab.c"
    break;

  case 21: /* stmt: exp_stmt  */
#line 253 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2624 "syntax.tab.c"
    break;

  case 22: /* stmt: set_stmt  */
#line 258 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2634 "syntax.tab.c"
    break;

  case 23: /* stmt: var_declaration  */
#line 263 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2644 "syntax.tab.c"
    break;

  case 24: /* stmt: assignment ';'  */
#line 268 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2654 "syntax.tab.c"
    break;

  case 25: /* stmt: brackets_stmt  */
#line 273 "syntax.y"
                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "stmt");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2664 "syntax.tab.c"
    break;

  case 26: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 280 "syntax.y"
                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 2674 "syntax.tab.c"
    break;

  case 27: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 285 "syntax.y"
                              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 1);
  }
#line 2684 "syntax.tab.c"
    break;

  case 28: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 290 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "io_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
  }
#line 2694 "syntax.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' assignment ';' exp ';' assignment ')' stmt  */
#line 297 "syntax.y"
                                                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "for_stmt");
    (yyval.nodo)->filho = (yyvsp[-6].nodo);
    (yyvsp[-6].nodo)->proximo = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2707 "syntax.tab.c"
    break;

  case 30: /* if_else_stmt: IF '(' exp ')' stmt  */
#line 307 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2718 "syntax.tab.c"
    break;

  case 31: /* if_else_stmt: IF '(' exp ')' stmt ELSE stmt  */
#line 313 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "if_else_stmt");
    (yyval.nodo)->filho = (yyvsp[-4].nodo);
    (yyvsp[-4].nodo)->proximo = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2730 "syntax.tab.c"
    break;

  case 32: /* return_stmt: RETURN ';'  */
#line 322 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
  }
#line 2739 "syntax.tab.c"
    break;

  case 33: /* return_stmt: RETURN exp ';'  */
#line 326 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "return_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2749 "syntax.tab.c"
    break;

  case 34: /* set_stmt: FORALL '(' ID INFIX_OP set_exp ')' stmt  */
#line 333 "syntax.y"
                                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2761 "syntax.tab.c"
    break;

  case 35: /* set_stmt: FORALL '(' ID INFIX_OP ID ')' stmt  */
#line 340 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_stmt");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, (yyvsp[-4].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2772 "syntax.tab.c"
    break;

  case 36: /* exp_stmt: exp ';'  */
#line 348 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp_stmt");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2782 "syntax.tab.c"
    break;

  case 37: /* assignment: ID '=' exp  */
#line 355 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2793 "syntax.tab.c"
    break;

  case 38: /* assignment: ID '=' assignment  */
#line 361 "syntax.y"
                      {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "assignment");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2804 "syntax.tab.c"
    break;

  case 39: /* exp: or_exp  */
#line 369 "syntax.y"
         {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2814 "syntax.tab.c"
    break;

  case 40: /* exp: set_exp  */
#line 374 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2824 "syntax.tab.c"
    break;

  case 41: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 381 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2834 "syntax.tab.c"
    break;

  case 42: /* set_exp: ISSET '(' ID ')'  */
#line 386 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2844 "syntax.tab.c"
    break;

  case 43: /* set_exp: ISSET '(' set_exp ')'  */
#line 391 "syntax.y"
                           {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2854 "syntax.tab.c"
    break;

  case 44: /* set_exp: '!' ISSET '(' ID ')'  */
#line 396 "syntax.y"
                          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, (yyvsp[-1].token).corpo, 2);
  }
#line 2864 "syntax.tab.c"
    break;

  case 45: /* set_exp: '!' ISSET '(' set_exp ')'  */
#line 401 "syntax.y"
                               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 2874 "syntax.tab.c"
    break;

  case 46: /* set_in_exp: or_exp INFIX_OP ID  */
#line 408 "syntax.y"
                     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2885 "syntax.tab.c"
    break;

  case 47: /* set_in_exp: or_exp INFIX_OP set_exp  */
#line 414 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2896 "syntax.tab.c"
    break;

  case 48: /* set_in_exp: set_exp INFIX_OP set_exp  */
#line 420 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2907 "syntax.tab.c"
    break;

  case 49: /* set_in_exp: set_exp INFIX_OP ID  */
#line 426 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "set_in_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 2918 "syntax.tab.c"
    break;

  case 50: /* or_exp: or_exp OR and_exp  */
#line 434 "syntax.y"
                    {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2929 "syntax.tab.c"
    break;

  case 51: /* or_exp: and_exp  */
#line 440 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2939 "syntax.tab.c"
    break;

  case 52: /* or_exp: set_in_exp  */
#line 445 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "or_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2949 "syntax.tab.c"
    break;

  case 53: /* and_exp: and_exp AND relational_exp  */
#line 452 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2960 "syntax.tab.c"
    break;

  case 54: /* and_exp: relational_exp  */
#line 458 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "and_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2970 "syntax.tab.c"
    break;

  case 55: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 465 "syntax.y"
                                       {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 2981 "syntax.tab.c"
    break;

  case 56: /* relational_exp: sum_exp  */
#line 471 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "relatorional_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 2991 "syntax.tab.c"
    break;

  case 57: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 478 "syntax.y"
                                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3002 "syntax.tab.c"
    break;

  case 58: /* sum_exp: mul_exp  */
#line 484 "syntax.y"
            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "sum_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3012 "syntax.tab.c"
    break;

  case 59: /* mul_exp: mul_exp ARITMETIC_OP2 unary_exp  */
#line 491 "syntax.y"
                                  {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyval.nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3023 "syntax.tab.c"
    break;

  case 60: /* mul_exp: unary_exp  */
#line 497 "syntax.y"
              {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "mul_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3033 "syntax.tab.c"
    break;

  case 61: /* unary_exp: primal_exp  */
#line 504 "syntax.y"
             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3043 "syntax.tab.c"
    break;

  case 62: /* unary_exp: '!' primal_exp  */
#line 509 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3053 "syntax.tab.c"
    break;

  case 63: /* unary_exp: ARITMETIC_OP1 primal_exp  */
#line 514 "syntax.y"
                             {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3063 "syntax.tab.c"
    break;

  case 64: /* unary_exp: ID '(' arg_list ')'  */
#line 519 "syntax.y"
                        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3074 "syntax.tab.c"
    break;

  case 65: /* unary_exp: ID '(' ')'  */
#line 525 "syntax.y"
               {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 3084 "syntax.tab.c"
    break;

  case 66: /* unary_exp: '!' ID '(' arg_list ')'  */
#line 530 "syntax.y"
                            {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).corpo, 2);
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3095 "syntax.tab.c"
    break;

  case 67: /* unary_exp: '!' ID '(' ')'  */
#line 536 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "unary_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).corpo, 2);
  }
#line 3105 "syntax.tab.c"
    break;

  case 68: /* primal_exp: ID  */
#line 545 "syntax.y"
     {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 2);
  }
#line 3115 "syntax.tab.c"
    break;

  case 69: /* primal_exp: const  */
#line 550 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3125 "syntax.tab.c"
    break;

  case 70: /* primal_exp: '(' exp ')'  */
#line 555 "syntax.y"
                {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "primal_exp");
    (yyval.nodo)->filho = (yyvsp[-1].nodo);
  }
#line 3135 "syntax.tab.c"
    break;

  case 71: /* arg_list: exp ',' arg_list  */
#line 562 "syntax.y"
                   {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->proximo = (yyvsp[0].nodo);
  }
#line 3146 "syntax.tab.c"
    break;

  case 72: /* arg_list: exp  */
#line 568 "syntax.y"
        {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "arg_list");
    (yyval.nodo)->filho = (yyvsp[0].nodo);
  }
#line 3156 "syntax.tab.c"
    break;

  case 73: /* type: INT_TYPE  */
#line 575 "syntax.y"
           {
    strcpy(tipo[indiceTipo], "INT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "INT_TYPE");
  }
#line 3168 "syntax.tab.c"
    break;

  case 74: /* type: FLOAT_TYPE  */
#line 582 "syntax.y"
               {
    strcpy(tipo[indiceTipo], "FLOAT");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "FLOAT_TYPE");
  }
#line 3180 "syntax.tab.c"
    break;

  case 75: /* type: SET_TYPE  */
#line 589 "syntax.y"
             {
    strcpy(tipo[indiceTipo], "SET");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "SET_TYPE");
  }
#line 3192 "syntax.tab.c"
    break;

  case 76: /* type: ELEM_TYPE  */
#line 596 "syntax.y"
              {
    strcpy(tipo[indiceTipo],"ELEM");
    indiceTipo++;

    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "ELEM_TYPE");
  }
#line 3204 "syntax.tab.c"
    break;

  case 77: /* const: INTEGER  */
#line 605 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3214 "syntax.tab.c"
    break;

  case 78: /* const: FLOAT  */
#line 610 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3224 "syntax.tab.c"
    break;

  case 79: /* const: EMPTY  */
#line 615 "syntax.y"
          {
    (yyval.nodo) = retornaNodo();
    strcpy((yyval.nodo)->val, "CONST");
    (yyval.nodo)->simbolo = criarSimboloArvore((yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).corpo, 1);
  }
#line 3234 "syntax.tab.c"
    break;


#line 3238 "syntax.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 621 "syntax.y"


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

