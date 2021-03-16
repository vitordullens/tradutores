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
#line 17 "syntax.y"

  #include <stdio.h>
  #include <stdlib.h>

  extern FILE *yyin;
  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *);


#line 82 "syntax.tab.c"

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
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_BASIC_TYPE = 5,                 /* BASIC_TYPE  */
  YYSYMBOL_SET_TYPE = 6,                   /* SET_TYPE  */
  YYSYMBOL_ELEM_TYPE = 7,                  /* ELEM_TYPE  */
  YYSYMBOL_ARITMETIC_OP1 = 8,              /* ARITMETIC_OP1  */
  YYSYMBOL_ARITMETIC_OP2 = 9,              /* ARITMETIC_OP2  */
  YYSYMBOL_RELATIONAL_OP = 10,             /* RELATIONAL_OP  */
  YYSYMBOL_LOGIC_OP = 11,                  /* LOGIC_OP  */
  YYSYMBOL_SET_OP1 = 12,                   /* SET_OP1  */
  YYSYMBOL_SET_OP2 = 13,                   /* SET_OP2  */
  YYSYMBOL_INPUT = 14,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 15,                    /* OUTPUT  */
  YYSYMBOL_STRING = 16,                    /* STRING  */
  YYSYMBOL_INTEGER = 17,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_EMPTY = 19,                     /* EMPTY  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_24_ = 24,                       /* ';'  */
  YYSYMBOL_25_ = 25,                       /* ','  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_forall_ = 31,                /* "forall"  */
  YYSYMBOL_32_in_ = 32,                    /* "in"  */
  YYSYMBOL_33_is_set_ = 33,                /* "is_set"  */
  YYSYMBOL_34_ = 34,                       /* "="  */
  YYSYMBOL_35_ = 35,                       /* "||"  */
  YYSYMBOL_36_ = 36,                       /* "&&"  */
  YYSYMBOL_37_ = 37,                       /* "-"  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_declaration_list = 40,          /* declaration_list  */
  YYSYMBOL_declaration = 41,               /* declaration  */
  YYSYMBOL_var_declaration = 42,           /* var_declaration  */
  YYSYMBOL_function_declaration = 43,      /* function_declaration  */
  YYSYMBOL_params_list = 44,               /* params_list  */
  YYSYMBOL_stmt = 45,                      /* stmt  */
  YYSYMBOL_brackets_stmt = 46,             /* brackets_stmt  */
  YYSYMBOL_io_stmt = 47,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 48,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 49,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 50,               /* return_stmt  */
  YYSYMBOL_set_stmt = 51,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 52,                  /* exp_stmt  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_exp = 54,                       /* exp  */
  YYSYMBOL_set_exp = 55,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 56,                /* set_in_exp  */
  YYSYMBOL_or_exp = 57,                    /* or_exp  */
  YYSYMBOL_and_exp = 58,                   /* and_exp  */
  YYSYMBOL_relational_exp = 59,            /* relational_exp  */
  YYSYMBOL_sum_exp = 60,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 61,                   /* mul_exp  */
  YYSYMBOL_primal_exp = 62,                /* primal_exp  */
  YYSYMBOL_arg_list = 63,                  /* arg_list  */
  YYSYMBOL_type = 64                       /* type  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,     2,     2,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    31,
      32,    33,    34,    35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    95,    95,    98,    99,   102,   103,   106,   109,   110,
     113,   114,   117,   118,   119,   120,   121,   122,   123,   124,
     127,   130,   131,   132,   135,   138,   139,   142,   143,   146,
     147,   148,   151,   151,   155,   156,   157,   160,   163,   164,
     167,   168,   171,   172,   175,   176,   179,   180,   183,   184,
     185,   188,   189,   190,   191,   192,   195,   196,   199,   200,
     201
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "CONST",
  "BASIC_TYPE", "SET_TYPE", "ELEM_TYPE", "ARITMETIC_OP1", "ARITMETIC_OP2",
  "RELATIONAL_OP", "LOGIC_OP", "SET_OP1", "SET_OP2", "INPUT", "OUTPUT",
  "STRING", "INTEGER", "FLOAT", "EMPTY", "IF", "ELSE", "FOR", "RETURN",
  "';'", "','", "'{'", "'}'", "'('", "')'", "'='", "\"forall\"", "\"in\"",
  "\"is_set\"", "\"=\"", "\"||\"", "\"&&\"", "\"-\"", "$accept", "program",
  "declaration_list", "declaration", "var_declaration",
  "function_declaration", "params_list", "stmt", "brackets_stmt",
  "io_stmt", "for_stmt", "if_else_stmt", "return_stmt", "set_stmt",
  "exp_stmt", "$@1", "exp", "set_exp", "set_in_exp", "or_exp", "and_exp",
  "relational_exp", "sum_exp", "mul_exp", "primal_exp", "arg_list", "type", YY_NULLPTR
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
     275,   276,   277,   278,    59,    44,   123,   125,    40,    41,
      61,   279,   280,   281,   282,   283,   284,   285
};
#endif

#define YYPACT_NINF (-121)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     304,    15,    30,    44,    49,    84,   697,   742,   771,    60,
    -121,    85,   -15,  1083,   338,    81,    79,   115,    67,  1094,
      81,    36,   380,   751,    97,   123,   154,   168,   169,    20,
      23,   179,   187,    18,   217,   232,   235,   271,   285,   293,
     295,   315,   333,   353,   359,    10,    40,     4,    -5,   757,
     764,   227,  1098,   304,    74,   130,    93,   382,    13,    23,
     130,   335,   360,   376,   409,   128,   494,   774,  1102,   397,
     151,   151,   151,   151,    18,   398,   402,   781,   149,   403,
     414,   404,   210,   411,   413,   419,   424,   431,   787,   381,
     429,   439,   436,   188,   358,    91,   794,   804,   213,   811,
     451,   228,   453,   464,   470,   401,   130,   486,   477,   485,
     493,   492,   497,   499,   508,   514,   516,   231,   521,   523,
     528,   534,   536,    23,    67,   541,   545,   550,    67,   552,
      67,   457,   265,   535,    23,    63,   563,   108,   364,   427,
    1037,   297,   798,   471,   828,   548,    23,   133,   565,   318,
     447,    33,   971,   833,   841,   259,   502,   573,    23,   310,
     204,   121,  1017,   203,   515,   524,   579,   619,   846,    23,
     312,   522,   247,   642,   851,   857,   576,    93,    67,   578,
     110,   223,    93,   581,   630,   863,   206,   206,   206,   206,
      63,   116,    23,    93,   583,   635,   886,   233,   233,   233,
     233,   133,   120,   213,    93,   584,   461,   651,   252,   252,
     252,   252,   310,   177,   588,   892,    93,    93,    93,   312,
     549,   591,   596,   896,   597,   603,   604,   899,   384,   529,
    1041,   902,   909,   931,   605,   612,   620,   939,   479,   388,
    1046,   942,   947,   659,   624,   256,   627,   681,  1049,   261,
     955,   704,   716,   977,   633,   984,   683,  1061,   989,   994,
     328,  1023,   645,  1026,   644,   728,   302,  1031
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,   669,  -121,   363,  -121,   626,  -120,   -13,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,   577,   518,   -17,   418,
     389,   248,   193,   148,   -18,   -97,     6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    34,     8,    16,    35,    36,    37,
      38,    39,    40,    41,    42,    92,    78,   148,    81,   149,
     150,   151,   152,   153,   154,    79,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   111,    19,    73,   127,   -45,     9,    52,   129,    13,
     179,   142,     9,    14,    72,    67,   143,   144,   -58,   -45,
      17,    66,    23,   131,   132,   145,   143,   144,   -43,    84,
     -45,   -45,   133,   -59,   -35,   145,   166,    50,   175,   -43,
     -43,   146,    50,   199,    61,    70,    30,   -60,   134,    10,
     147,   146,    50,    50,    50,    50,    97,   135,   221,    17,
     147,    53,   -43,    12,   -41,   -11,   184,   132,   -43,   -43,
      22,    23,     1,     2,     3,   -41,    71,   155,   156,    24,
     166,    25,    26,   224,    -2,    -3,   157,    27,    50,    28,
      29,   134,   117,   130,   234,    30,   167,   168,    31,    73,
      32,   -44,   158,    77,    33,   244,    50,    18,    20,   125,
      50,   159,    50,   155,   156,   -44,   254,   185,    21,   155,
     156,   169,   157,   155,   156,    56,   -44,   -44,   157,   196,
     170,    90,   157,    22,    23,   -35,   195,   144,   158,   223,
     145,   207,    24,   186,   158,   233,   -35,   159,   158,   243,
     -35,    57,   215,   159,    66,    23,   208,   159,    30,   175,
      50,   146,   166,   142,   175,   226,    49,    33,   142,   142,
     142,   142,   232,   166,    98,   175,   236,   141,   -57,    30,
     155,   156,    58,   242,   166,   166,   175,   246,    33,   157,
     166,   166,   166,   166,   252,   166,    59,    60,   175,   175,
     175,   259,   165,    49,   174,   158,   253,    64,    49,   184,
     132,    48,   -40,   210,   159,    65,   155,   156,    49,    49,
      49,    96,   140,   -40,    71,   157,   131,   132,   -43,   -36,
      75,   112,   -43,   -36,   134,   133,   195,   144,   -43,   -43,
     145,   158,   101,   135,   -19,   177,   165,   164,    48,   173,
     159,   134,   122,    48,    49,   206,   156,   217,   -25,    68,
     135,   146,   -12,    48,    48,    95,    47,   -51,   -51,   -51,
     147,   210,    49,   -52,   -52,   -52,    49,   139,    49,   -43,
     158,   -34,   -43,   -43,   -51,   -34,   -42,   202,   -51,   159,
     -42,   164,   -52,   203,   -51,   -51,   -42,   -42,   -16,    48,
     -52,   -52,   163,    47,   172,   -47,   190,   -47,    47,     1,
       2,     3,   -13,   206,   156,   167,   168,    48,    47,    94,
     -14,    48,   -15,    48,   -47,   174,    49,   -37,   165,   141,
     174,   -37,   -47,   -47,   141,   141,   141,   231,   158,   165,
     169,   174,   -18,     1,     2,     3,   163,   -35,   241,   -20,
     165,   165,   174,   197,    47,   -20,   165,   165,   165,   251,
     -17,   165,   -27,     7,   174,   174,   258,    15,    72,     7,
     173,    48,    47,   164,   140,   173,    47,    69,    47,   140,
     140,   230,   -42,   -36,   164,    83,   173,   -28,   -51,   -51,
     -51,   -41,   240,   -42,   -42,   164,   164,   173,   199,   -41,
     187,   164,   164,   250,   -51,    88,   164,    46,    54,   173,
     257,   -40,    89,   107,    55,   -51,   -51,   -42,   138,   -40,
     187,   -32,   176,   -42,   -42,   172,    47,   178,   163,   139,
     172,   -10,    99,   100,   139,   229,    45,   188,   -34,   163,
     102,   172,   103,   162,    46,   171,   239,   137,   104,    46,
     163,   163,   172,   105,   -43,   106,   163,   249,   108,    93,
     110,   163,   -43,   -43,   256,   -51,   -51,   -51,   109,   -51,
     -51,   -51,   161,    45,    82,   -37,   -41,   114,    45,   -51,
     -51,   -51,   -41,   198,   -51,   180,   -51,   162,   115,   202,
     -51,   181,   -51,   -51,   116,    46,   -51,   -51,   145,   191,
     -51,   120,   -51,   -51,   -51,   192,   -51,   -51,   -40,   121,
     -52,   -52,   -52,    46,   -40,   198,   161,    46,   -51,    46,
     -33,   -56,    54,   211,    45,   -45,   -39,   -52,   -38,   -51,
     -51,   -52,   -47,   212,   -47,   -21,    44,   -52,   -52,   188,
     -45,   -22,    45,   -23,   -45,   123,    45,   136,    45,   -47,
     -45,   -45,   124,   -47,   -41,   -30,   -42,   -41,   216,   -47,
     -47,   -31,   130,   182,   -42,   -42,   220,    46,   -26,   162,
     138,   171,   160,    44,   128,   228,   193,   -29,    44,   -24,
     162,   -40,   171,    91,   -40,   216,   238,   -50,   -50,   -50,
     -36,   162,   162,   171,   -36,    43,    45,   248,   161,   137,
      82,   204,   162,    -7,   -50,   222,    62,    63,   -50,   161,
     227,    82,   237,   247,   -50,   -50,   160,   255,   260,   113,
     161,   161,    82,   -20,    44,   119,   261,   -51,   -51,   -51,
     -34,   161,    80,   262,   263,    85,    86,    87,   -51,   -51,
     -51,   -34,    44,   -51,   -51,   -51,    44,   213,    44,   264,
     218,   -51,   -45,   265,   -51,   -51,   266,   -51,   180,   -49,
     -49,   -49,   267,   191,   -51,   -51,   -51,   -55,   -55,   -55,
     -51,   -51,   -37,   -37,   -45,    11,   -49,   -45,   -45,    76,
     -49,     0,     0,   118,   -55,     0,   -49,   -49,   -55,   -53,
     -53,   -53,     0,   217,   -55,   -55,    44,    -4,   160,   136,
     126,    43,     1,     2,     3,    43,   -53,    43,     0,   160,
     -53,   183,   -46,   212,   -46,   -42,   -53,   -53,   -42,   -42,
     160,   160,     0,   194,   -48,   -48,   -48,     0,     0,   -46,
       0,   160,     0,   -46,     0,   205,   -54,   -54,   -54,   -46,
     -46,   -48,    -6,     0,     0,   -48,   214,    -6,    -6,    -6,
       0,   -48,   -48,   -54,     0,    43,     0,   -54,   225,   -52,
     -52,   -52,     0,   -54,   -54,   -47,    74,   -47,     0,   235,
       0,    -5,   -50,   -50,   -50,   -52,    -5,    -5,    -5,     0,
     245,   -47,   -49,   -49,   -49,     0,   -52,   -52,   -50,   -55,
     -55,   -55,   -47,   -47,     0,   -53,   -53,   -53,   -49,   -50,
     -50,     0,   -46,    74,   -46,   -55,   -50,   -50,   -50,   -49,
     -49,   -53,   -48,   -48,   -48,     0,   -55,   -55,   -46,   -54,
     -54,   -54,   -53,   -53,     0,   -50,     0,     0,   -48,   -46,
     -46,     0,     0,   -50,   -50,   -54,   -52,   -52,   -52,   -48,
     -48,   -47,   201,   -47,     0,     0,   -54,   -54,     0,   -50,
     -50,   -50,     0,     0,   -52,   -52,   -52,   -52,     0,   -47,
     219,   -47,   -47,   -52,   -52,   -50,   -50,   -50,   -47,   -47,
     -50,   -49,   -49,   -49,     0,     0,   -50,   -50,   -52,     0,
       0,   -52,   -52,   -47,     0,     0,   -47,   -47,     0,   -50,
     -49,     0,   -50,   -50,   -49,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,     0,   -55,   -55,   -55,   -53,   -53,   -53,
     -46,   190,   -46,     0,     0,   -49,     0,   -48,   -48,   -48,
       0,   -49,   -49,   -55,   -49,     0,   -53,   -49,   -49,   -46,
       0,   -55,   -55,     0,   -53,   -53,   -48,   -46,   -46,   -55,
     -55,   -55,     0,     0,   -48,   -48,     0,   -53,   -53,   -53,
     -46,   201,   -46,     0,     0,   -48,   -48,   -48,     0,     0,
     -55,     0,     0,   211,     0,   -44,   -55,   -55,   -53,     0,
       0,   -46,     0,     0,   -53,   -53,   -48,   -46,   -46,   200,
     -44,   -45,   -48,   -48,   -44,   -55,   -55,   -55,     0,     0,
     -44,   -44,   -53,   -53,   -53,     0,     0,   -46,   219,   -46,
     -45,     0,   -48,   -48,   -48,     0,   -45,   -45,     0,   -55,
       0,     0,   -55,   -55,     0,     0,   -53,     0,     0,   -53,
     -53,   -46,     0,     0,   -46,   -46,   -48,     0,     0,   -48,
     -48,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,   -54,
     -54,   -54,   -41,     0,     0,   189,   -41,   -45,     0,   189,
     -54,   -44,   -41,   209,   200,   -54,   -44,     0,   -54,   -54,
       0,   -54,   -54,   -54,   -45,     0,   -54,   -54,   -44,   218,
       0,   -44,   -45,   -45,   -40,   -44,   -44,   -44,   -40,     0,
       0,   -44,   -44,    -7,   -40,   209,     0,     0,    -7,    -7,
      -7,     0,     0,   -44,    -9,     0,   -44,   -44,    -8,    -9,
      -9,    -9,   -20,    -8,    -8,    -8,     0,   -20,   -20,   -20
};

static const yytype_int16 yycheck[] =
{
      18,    98,    15,     8,   124,    10,     0,    20,   128,    24,
     130,    29,     6,    28,    10,    33,     3,     4,     3,    24,
      14,     3,     4,     3,     4,    12,     3,     4,    24,    16,
      35,    36,    12,     3,    24,    12,    54,    55,    56,    35,
      36,    28,    60,    10,    24,    35,    28,     3,    28,     0,
      37,    28,    70,    71,    72,    73,    74,    37,   178,    53,
      37,    25,    29,     3,    24,    29,     3,     4,    35,    36,
       3,     4,     5,     6,     7,    35,    36,     3,     4,    12,
      98,    14,    15,   180,     0,     0,    12,    20,   106,    22,
      23,    28,   105,    26,   191,    28,     3,     4,    31,     8,
      33,    10,    28,    29,    37,   202,   124,    26,    29,   122,
     128,    37,   130,     3,     4,    24,   213,   135,     3,     3,
       4,    28,    12,     3,     4,    28,    35,    36,    12,   147,
      37,     3,    12,     3,     4,    27,     3,     4,    28,    29,
      12,   159,    12,    35,    28,    29,    25,    37,    28,    29,
      29,    28,   170,    37,     3,     4,    35,    37,    28,   177,
     178,    28,   180,   181,   182,   182,    18,    37,   186,   187,
     188,   189,   190,   191,    25,   193,   193,    29,    29,    28,
       3,     4,    28,   201,   202,   203,   204,   204,    37,    12,
     208,   209,   210,   211,   212,   213,    28,    28,   216,   217,
     218,   219,    54,    55,    56,    28,    29,    28,    60,     3,
       4,    18,    24,    10,    37,    28,     3,     4,    70,    71,
      72,    73,    29,    35,    36,    12,     3,     4,    25,    25,
       3,     3,    29,    29,    28,    12,     3,     4,    35,    36,
      12,    28,    32,    37,    27,    35,    98,    54,    55,    56,
      37,    28,    21,    60,   106,     3,     4,    10,    27,    27,
      37,    28,    27,    70,    71,    72,    18,     8,     9,    10,
      37,    10,   124,     8,     9,    10,   128,    29,   130,    32,
      28,    25,    35,    36,    25,    29,    25,    28,    29,    37,
      29,    98,    27,    34,    35,    36,    35,    36,    27,   106,
      35,    36,    54,    55,    56,     8,     9,    10,    60,     5,
       6,     7,    27,     3,     4,     3,     4,   124,    70,    71,
      27,   128,    27,   130,    27,   177,   178,    25,   180,   181,
     182,    29,    35,    36,   186,   187,   188,   189,    28,   191,
      28,   193,    27,     5,     6,     7,    98,    29,   200,    21,
     202,   203,   204,    35,   106,    27,   208,   209,   210,   211,
      27,   213,    27,     0,   216,   217,   218,    29,    10,     6,
     177,   178,   124,   180,   181,   182,   128,    24,   130,   186,
     187,   188,    24,    24,   191,     3,   193,    27,     8,     9,
      10,    27,   199,    35,    36,   202,   203,   204,    10,    35,
      36,   208,   209,   210,    24,    29,   213,    18,    28,   216,
     217,    27,     3,    32,    34,    35,    36,    29,    29,    35,
      36,    24,    24,    35,    36,   177,   178,    26,   180,   181,
     182,    29,    29,    29,   186,   187,    18,    10,    24,   191,
      29,   193,    29,    54,    55,    56,   198,    29,    29,    60,
     202,   203,   204,    29,    27,    24,   208,   209,    29,    70,
      24,   213,    35,    36,   216,     8,     9,    10,    29,     8,
       9,    10,    54,    55,    56,    24,    29,    24,    60,     8,
       9,    10,    35,    36,    27,    28,    25,    98,    24,    28,
      29,    34,    35,    36,    24,   106,    35,    36,    12,    28,
      29,    24,     8,     9,    10,    34,    35,    36,    29,    24,
       8,     9,    10,   124,    35,    36,    98,   128,    24,   130,
      27,    29,    28,     8,   106,    10,    29,    25,    29,    35,
      36,    29,     8,     9,    10,    27,    18,    35,    36,    10,
      25,    27,   124,    27,    29,    24,   128,    29,   130,    25,
      35,    36,    29,    29,    32,    27,    27,    35,    36,    35,
      36,    27,    26,    28,    35,    36,   177,   178,    27,   180,
     181,   182,    54,    55,    29,   186,    28,    27,    60,    27,
     191,    32,   193,    65,    35,    36,   197,     8,     9,    10,
      27,   202,   203,   204,    29,    18,   178,   208,   180,   181,
     182,    28,   213,    27,    25,    27,    29,    30,    29,   191,
      29,   193,    29,    29,    35,    36,    98,    29,    27,   101,
     202,   203,   204,    27,   106,   107,    29,     8,     9,    10,
      27,   213,    55,    29,    29,    58,    59,    60,     8,     9,
      10,    29,   124,     8,     9,    10,   128,    28,   130,    29,
       8,    32,    10,    29,    35,    36,    29,    27,    28,     8,
       9,    10,    29,    28,    29,    35,    36,     8,     9,    10,
      35,    36,    27,    29,    32,     6,    25,    35,    36,    53,
      29,    -1,    -1,   106,    25,    -1,    35,    36,    29,     8,
       9,    10,    -1,    10,    35,    36,   178,     0,   180,   181,
     123,   124,     5,     6,     7,   128,    25,   130,    -1,   191,
      29,   134,     8,     9,    10,    32,    35,    36,    35,    36,
     202,   203,    -1,   146,     8,     9,    10,    -1,    -1,    25,
      -1,   213,    -1,    29,    -1,   158,     8,     9,    10,    35,
      36,    25,     0,    -1,    -1,    29,   169,     5,     6,     7,
      -1,    35,    36,    25,    -1,   178,    -1,    29,   181,     8,
       9,    10,    -1,    35,    36,     8,     9,    10,    -1,   192,
      -1,     0,     8,     9,    10,    24,     5,     6,     7,    -1,
     203,    24,     8,     9,    10,    -1,    35,    36,    24,     8,
       9,    10,    35,    36,    -1,     8,     9,    10,    24,    35,
      36,    -1,     8,     9,    10,    24,     8,     9,    10,    35,
      36,    24,     8,     9,    10,    -1,    35,    36,    24,     8,
       9,    10,    35,    36,    -1,    27,    -1,    -1,    24,    35,
      36,    -1,    -1,    35,    36,    24,     8,     9,    10,    35,
      36,     8,     9,    10,    -1,    -1,    35,    36,    -1,     8,
       9,    10,    -1,    -1,     8,     9,    10,    29,    -1,     8,
       9,    10,    29,    35,    36,     8,     9,    10,    35,    36,
      29,     8,     9,    10,    -1,    -1,    35,    36,    32,    -1,
      -1,    35,    36,    32,    -1,    -1,    35,    36,    -1,    32,
      27,    -1,    35,    36,     8,     9,    10,    -1,    35,    36,
       8,     9,    10,    -1,     8,     9,    10,     8,     9,    10,
       8,     9,    10,    -1,    -1,    29,    -1,     8,     9,    10,
      -1,    35,    36,    27,    32,    -1,    27,    35,    36,    27,
      -1,    35,    36,    -1,    35,    36,    27,    35,    36,     8,
       9,    10,    -1,    -1,    35,    36,    -1,     8,     9,    10,
       8,     9,    10,    -1,    -1,     8,     9,    10,    -1,    -1,
      29,    -1,    -1,     8,    -1,    10,    35,    36,    29,    -1,
      -1,    29,    -1,    -1,    35,    36,    29,    35,    36,     8,
      25,    10,    35,    36,    29,     8,     9,    10,    -1,    -1,
      35,    36,     8,     9,    10,    -1,    -1,     8,     9,    10,
      29,    -1,     8,     9,    10,    -1,    35,    36,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    32,    -1,    -1,    35,
      36,    32,    -1,    -1,    35,    36,    32,    -1,    -1,    35,
      36,     8,     9,    10,     8,     9,    10,    -1,    -1,     8,
       9,    10,    25,    -1,    -1,     8,    29,    10,    -1,     8,
      27,    10,    35,    36,     8,    29,    10,    -1,    35,    36,
      -1,    35,    36,    32,    27,    -1,    35,    36,    27,     8,
      -1,    10,    35,    36,    25,    29,    35,    36,    29,    -1,
      -1,    35,    36,     0,    35,    36,    -1,    -1,     5,     6,
       7,    -1,    -1,    32,     0,    -1,    35,    36,     0,     5,
       6,     7,     0,     5,     6,     7,    -1,     5,     6,     7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,    39,    40,    41,    42,    43,    64,
       0,    40,     3,    24,    28,    29,    44,    64,    26,    46,
      29,     3,     3,     4,    12,    14,    15,    20,    22,    23,
      28,    31,    33,    37,    42,    45,    46,    47,    48,    49,
      50,    51,    52,    54,    55,    57,    58,    59,    60,    61,
      62,    64,    46,    25,    28,    34,    28,    28,    28,    28,
      28,    24,    54,    54,    28,    28,     3,    62,    27,    24,
      35,    36,    10,     8,     9,     3,    44,    29,    54,    63,
      54,    56,    57,     3,    16,    54,    54,    54,    29,     3,
       3,    55,    53,    58,    59,    60,    61,    62,    25,    29,
      29,    32,    29,    29,    29,    29,    24,    32,    29,    29,
      24,    63,     3,    55,    24,    24,    24,    46,    54,    55,
      24,    24,    21,    24,    29,    46,    54,    45,    29,    45,
      26,     3,     4,    12,    28,    37,    55,    57,    58,    59,
      60,    61,    62,     3,     4,    12,    28,    37,    55,    57,
      58,    59,    60,    61,    62,     3,     4,    12,    28,    37,
      55,    57,    58,    59,    60,    61,    62,     3,     4,    28,
      37,    58,    59,    60,    61,    62,    24,    35,    26,    45,
      28,    34,    28,    54,     3,    62,    35,    36,    10,     8,
       9,    28,    34,    28,    54,     3,    62,    35,    36,    10,
       8,     9,    28,    34,    28,    54,     3,    62,    35,    36,
      10,     8,     9,    28,    54,    62,    36,    10,     8,     9,
      58,    45,    27,    29,    63,    54,    56,    29,    58,    59,
      60,    61,    62,    29,    63,    54,    56,    29,    58,    59,
      60,    61,    62,    29,    63,    54,    56,    29,    58,    59,
      60,    61,    62,    29,    63,    29,    59,    60,    61,    62,
      27,    29,    29,    29,    29,    29,    29,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    43,    43,
      44,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    47,    47,    47,    48,    49,    49,    50,    50,    51,
      51,    51,    53,    52,    54,    54,    54,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     5,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     5,     5,     9,     5,     7,     2,     2,     7,
       5,     5,     0,     4,     3,     1,     1,     4,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     2,
       1,     1,     1,     3,     4,     3,     3,     1,     1,     1,
       1
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
#line 95 "syntax.y"
                   {printf("SINTATICO -------- program -> declaration_list\n");}
#line 1731 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration declaration_list  */
#line 98 "syntax.y"
                               {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
#line 1737 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 99 "syntax.y"
                {printf("SINTATICO -------- declaration_list -> declaration\n");}
#line 1743 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 102 "syntax.y"
                       {printf("SINTATICO -------- declaration -> function_declaration\n");}
#line 1749 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 103 "syntax.y"
                    {printf("SINTATICO -------- declaration -> var_declaration\n");}
#line 1755 "syntax.tab.c"
    break;

  case 7: /* var_declaration: type ID ';'  */
#line 106 "syntax.y"
              {printf("SINTATICO -------- var_declaration -> type ID\n");}
#line 1761 "syntax.tab.c"
    break;

  case 8: /* function_declaration: type ID '(' params_list ')' brackets_stmt  */
#line 109 "syntax.y"
                                            {printf("SINTATICO -------- function_declaration -> type ID ( params_list ) brackets_stmt\n");}
#line 1767 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' ')' brackets_stmt  */
#line 110 "syntax.y"
                                  {printf("SINTATICO -------- function_declaration -> type ID ( ) brackets_stmt\n");}
#line 1773 "syntax.tab.c"
    break;

  case 10: /* params_list: type ID ',' params_list  */
#line 113 "syntax.y"
                         {}
#line 1779 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID  */
#line 114 "syntax.y"
           {}
#line 1785 "syntax.tab.c"
    break;

  case 12: /* stmt: brackets_stmt  */
#line 117 "syntax.y"
                {}
#line 1791 "syntax.tab.c"
    break;

  case 13: /* stmt: for_stmt  */
#line 118 "syntax.y"
             {}
#line 1797 "syntax.tab.c"
    break;

  case 14: /* stmt: if_else_stmt  */
#line 119 "syntax.y"
                 {}
#line 1803 "syntax.tab.c"
    break;

  case 15: /* stmt: return_stmt  */
#line 120 "syntax.y"
                {}
#line 1809 "syntax.tab.c"
    break;

  case 16: /* stmt: io_stmt  */
#line 121 "syntax.y"
            {}
#line 1815 "syntax.tab.c"
    break;

  case 17: /* stmt: exp_stmt  */
#line 122 "syntax.y"
             {}
#line 1821 "syntax.tab.c"
    break;

  case 18: /* stmt: set_stmt  */
#line 123 "syntax.y"
             {}
#line 1827 "syntax.tab.c"
    break;

  case 19: /* stmt: var_declaration  */
#line 124 "syntax.y"
                    {}
#line 1833 "syntax.tab.c"
    break;

  case 20: /* brackets_stmt: '{' stmt '}'  */
#line 127 "syntax.y"
               {printf("SINTATICO -------- brackets_stmt -> stmt ;\n");}
#line 1839 "syntax.tab.c"
    break;

  case 21: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 130 "syntax.y"
                       {}
#line 1845 "syntax.tab.c"
    break;

  case 22: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 131 "syntax.y"
                              {}
#line 1851 "syntax.tab.c"
    break;

  case 23: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 132 "syntax.y"
                           {}
#line 1857 "syntax.tab.c"
    break;

  case 24: /* for_stmt: FOR '(' exp ';' exp ';' exp ')' stmt  */
#line 135 "syntax.y"
                                       {}
#line 1863 "syntax.tab.c"
    break;

  case 25: /* if_else_stmt: IF '(' exp ')' brackets_stmt  */
#line 138 "syntax.y"
                               {}
#line 1869 "syntax.tab.c"
    break;

  case 26: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE brackets_stmt  */
#line 139 "syntax.y"
                                                    {}
#line 1875 "syntax.tab.c"
    break;

  case 27: /* return_stmt: RETURN ';'  */
#line 142 "syntax.y"
             {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
#line 1881 "syntax.tab.c"
    break;

  case 28: /* return_stmt: RETURN exp  */
#line 143 "syntax.y"
               {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 1887 "syntax.tab.c"
    break;

  case 29: /* set_stmt: "forall" '(' ID "in" set_exp ')' stmt  */
#line 146 "syntax.y"
                                        {}
#line 1893 "syntax.tab.c"
    break;

  case 30: /* set_stmt: "is_set" '(' ID ')' ';'  */
#line 147 "syntax.y"
                            {}
#line 1899 "syntax.tab.c"
    break;

  case 31: /* set_stmt: "is_set" '(' set_exp ')' ';'  */
#line 148 "syntax.y"
                                 {}
#line 1905 "syntax.tab.c"
    break;

  case 32: /* $@1: %empty  */
#line 151 "syntax.y"
          {}
#line 1911 "syntax.tab.c"
    break;

  case 33: /* exp_stmt: exp ';' $@1 ';'  */
#line 152 "syntax.y"
      {}
#line 1917 "syntax.tab.c"
    break;

  case 34: /* exp: ID "=" exp  */
#line 155 "syntax.y"
             {}
#line 1923 "syntax.tab.c"
    break;

  case 35: /* exp: or_exp  */
#line 156 "syntax.y"
           {}
#line 1929 "syntax.tab.c"
    break;

  case 36: /* exp: set_exp  */
#line 157 "syntax.y"
            {}
#line 1935 "syntax.tab.c"
    break;

  case 37: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 160 "syntax.y"
                             {}
#line 1941 "syntax.tab.c"
    break;

  case 38: /* set_in_exp: or_exp "in" set_exp  */
#line 163 "syntax.y"
                      {}
#line 1947 "syntax.tab.c"
    break;

  case 39: /* set_in_exp: or_exp "in" ID  */
#line 164 "syntax.y"
                   {}
#line 1953 "syntax.tab.c"
    break;

  case 40: /* or_exp: or_exp "||" and_exp  */
#line 167 "syntax.y"
                      {}
#line 1959 "syntax.tab.c"
    break;

  case 41: /* or_exp: and_exp  */
#line 168 "syntax.y"
            {}
#line 1965 "syntax.tab.c"
    break;

  case 42: /* and_exp: and_exp "&&" relational_exp  */
#line 171 "syntax.y"
                              {}
#line 1971 "syntax.tab.c"
    break;

  case 43: /* and_exp: relational_exp  */
#line 172 "syntax.y"
                   {}
#line 1977 "syntax.tab.c"
    break;

  case 44: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 175 "syntax.y"
                                       {}
#line 1983 "syntax.tab.c"
    break;

  case 45: /* relational_exp: sum_exp  */
#line 176 "syntax.y"
            {}
#line 1989 "syntax.tab.c"
    break;

  case 46: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 179 "syntax.y"
                                {}
#line 1995 "syntax.tab.c"
    break;

  case 47: /* sum_exp: mul_exp  */
#line 180 "syntax.y"
            {}
#line 2001 "syntax.tab.c"
    break;

  case 48: /* mul_exp: mul_exp ARITMETIC_OP2 primal_exp  */
#line 183 "syntax.y"
                                   {}
#line 2007 "syntax.tab.c"
    break;

  case 49: /* mul_exp: "-" primal_exp  */
#line 184 "syntax.y"
                   {}
#line 2013 "syntax.tab.c"
    break;

  case 50: /* mul_exp: primal_exp  */
#line 185 "syntax.y"
               {}
#line 2019 "syntax.tab.c"
    break;

  case 51: /* primal_exp: ID  */
#line 188 "syntax.y"
     {}
#line 2025 "syntax.tab.c"
    break;

  case 52: /* primal_exp: CONST  */
#line 189 "syntax.y"
          {}
#line 2031 "syntax.tab.c"
    break;

  case 53: /* primal_exp: '(' exp ')'  */
#line 190 "syntax.y"
                {}
#line 2037 "syntax.tab.c"
    break;

  case 54: /* primal_exp: ID '(' arg_list ')'  */
#line 191 "syntax.y"
                        {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).lex);}
#line 2043 "syntax.tab.c"
    break;

  case 55: /* primal_exp: ID '(' ')'  */
#line 192 "syntax.y"
               {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).lex);}
#line 2049 "syntax.tab.c"
    break;

  case 56: /* arg_list: exp ',' arg_list  */
#line 195 "syntax.y"
                   {}
#line 2055 "syntax.tab.c"
    break;

  case 57: /* arg_list: exp  */
#line 196 "syntax.y"
        {}
#line 2061 "syntax.tab.c"
    break;

  case 58: /* type: BASIC_TYPE  */
#line 199 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).lex);}
#line 2067 "syntax.tab.c"
    break;

  case 59: /* type: SET_TYPE  */
#line 200 "syntax.y"
             {}
#line 2073 "syntax.tab.c"
    break;

  case 60: /* type: ELEM_TYPE  */
#line 201 "syntax.y"
              {}
#line 2079 "syntax.tab.c"
    break;


#line 2083 "syntax.tab.c"

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

#line 203 "syntax.y"


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
    printf("\n");
    yyparse();
    fclose(yyin);
    yylex_destroy();
    return 0;
}

