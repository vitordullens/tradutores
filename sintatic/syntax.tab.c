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
#line 16 "syntax.y"

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
  YYSYMBOL_30_ = 30,                       /* "{"  */
  YYSYMBOL_31_ = 31,                       /* "}"  */
  YYSYMBOL_32_forall_ = 32,                /* "forall"  */
  YYSYMBOL_33_in_ = 33,                    /* "in"  */
  YYSYMBOL_34_is_set_ = 34,                /* "is_set"  */
  YYSYMBOL_35_ = 35,                       /* "="  */
  YYSYMBOL_36_ = 36,                       /* "||"  */
  YYSYMBOL_37_ = 37,                       /* "&&"  */
  YYSYMBOL_38_ = 38,                       /* "-"  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_declaration_list = 41,          /* declaration_list  */
  YYSYMBOL_declaration = 42,               /* declaration  */
  YYSYMBOL_var_declaration = 43,           /* var_declaration  */
  YYSYMBOL_function_declaration = 44,      /* function_declaration  */
  YYSYMBOL_45_1 = 45,                      /* $@1  */
  YYSYMBOL_params_list = 46,               /* params_list  */
  YYSYMBOL_stmt = 47,                      /* stmt  */
  YYSYMBOL_brackets_stmt = 48,             /* brackets_stmt  */
  YYSYMBOL_io_stmt = 49,                   /* io_stmt  */
  YYSYMBOL_for_stmt = 50,                  /* for_stmt  */
  YYSYMBOL_if_else_stmt = 51,              /* if_else_stmt  */
  YYSYMBOL_return_stmt = 52,               /* return_stmt  */
  YYSYMBOL_set_stmt = 53,                  /* set_stmt  */
  YYSYMBOL_exp_stmt = 54,                  /* exp_stmt  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_exp = 56,                       /* exp  */
  YYSYMBOL_set_exp = 57,                   /* set_exp  */
  YYSYMBOL_set_in_exp = 58,                /* set_in_exp  */
  YYSYMBOL_or_exp = 59,                    /* or_exp  */
  YYSYMBOL_and_exp = 60,                   /* and_exp  */
  YYSYMBOL_relational_exp = 61,            /* relational_exp  */
  YYSYMBOL_sum_exp = 62,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 63,                   /* mul_exp  */
  YYSYMBOL_primal_exp = 64,                /* primal_exp  */
  YYSYMBOL_arg_list = 65,                  /* arg_list  */
  YYSYMBOL_type = 66                       /* type  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   1097

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  275

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    30,
      31,    32,    33,    34,    35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    96,    97,   100,   101,   104,   107,   107,
     111,   112,   115,   116,   117,   118,   119,   120,   121,   122,
     125,   128,   129,   130,   133,   136,   137,   140,   141,   144,
     145,   146,   149,   149,   153,   154,   155,   158,   161,   162,
     165,   166,   169,   170,   173,   174,   177,   178,   181,   182,
     183,   186,   187,   188,   189,   190,   193,   194,   197,   198,
     199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
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
  "';'", "','", "'{'", "'}'", "'('", "')'", "\"{\"", "\"}\"", "\"forall\"",
  "\"in\"", "\"is_set\"", "\"=\"", "\"||\"", "\"&&\"", "\"-\"", "$accept",
  "program", "declaration_list", "declaration", "var_declaration",
  "function_declaration", "$@1", "params_list", "stmt", "brackets_stmt",
  "io_stmt", "for_stmt", "if_else_stmt", "return_stmt", "set_stmt",
  "exp_stmt", "$@2", "exp", "set_exp", "set_in_exp", "or_exp", "and_exp",
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
     279,   280,   281,   282,   283,   284,   285,   286,   287
};
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     433,    36,    38,    43,     2,    15,   592,   602,   711,    44,
    -125,    52,    59,   725,   433,    78,    65,    51,    76,   672,
     557,   433,   216,   294,   112,   120,   143,   155,   182,    10,
      68,   190,   200,    16,   199,   210,   253,   276,   284,   307,
     347,   376,   387,   326,   396,   123,   183,   273,    13,   478,
     771,   429,   433,   401,    28,   178,    86,   438,    39,    68,
     178,   422,   436,   456,   487,   193,   470,   779,   747,   467,
     115,   115,   115,   115,    16,   468,   494,   782,   175,   471,
     499,   480,    87,   511,   512,   522,   529,   504,   788,   536,
     544,   546,   556,   372,   427,   226,   812,   818,   558,   205,
     821,   563,   360,   569,   572,   579,   590,   178,   593,   597,
     598,   601,   604,   609,   610,   612,   614,   616,   622,   -15,
     632,   636,   635,   643,   650,   651,    68,   672,   977,   657,
     661,   667,   672,   668,   672,   316,   437,   673,    68,    72,
     674,   254,   337,   118,   485,   801,   825,   375,   748,   692,
      68,   194,   697,   319,   219,   101,    55,   831,   842,   304,
     502,   693,    68,   333,   213,   232,   320,    -1,   855,   575,
     581,   509,   864,    68,   339,   686,   369,  1047,   873,   878,
     703,    86,   672,   672,   706,    50,   209,    86,   710,   618,
     867,   132,   132,   132,   132,    72,    57,    68,    86,   716,
     606,   908,   211,   211,   211,   211,   194,    70,   205,    86,
     717,   406,   660,   270,   270,   270,   270,   333,   113,   726,
     886,    86,    86,    86,   339,   768,   729,   738,   743,   916,
     749,   769,   770,   919,   421,   269,   516,   923,   926,   932,
     773,   784,   785,   956,   361,   446,   621,   962,   965,   699,
     794,   398,   814,   704,   615,   291,   971,   734,   739,   978,
     815,   995,   626,  1060,  1008,  1013,   170,  1069,  1016,   786,
    1025,   817,   757,   474,  1030
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,   841,  -125,    11,  -125,  -125,   832,  -124,   -12,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   475,   565,   -48,
     370,   363,   263,   173,    73,   -29,   -92,    12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    34,     8,    52,    15,    35,    36,
      37,    38,    39,    40,    41,    42,    92,    43,    44,    81,
      45,    46,    47,    48,    49,    50,    79,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   158,    10,   131,    67,    20,   125,   113,   133,   215,
     184,     7,     9,   135,   136,    -2,   -25,     7,     9,    66,
      23,    73,   137,   -45,   -43,   170,    16,   179,   -43,   158,
     158,   159,   160,    16,    61,   -43,   -43,   -45,   138,   -58,
     161,   -59,   147,   148,    30,    97,   -60,    12,   139,   -45,
     -45,   149,    -3,   159,   160,    84,   162,    77,   226,   227,
     159,   160,   161,   205,    76,   -45,   163,   150,    18,   161,
     170,   147,   148,   159,   160,   189,   136,   151,   162,   229,
     149,    19,   161,    13,   -45,   162,   239,    14,   163,   171,
     172,   -45,   -45,   230,   119,   163,   150,   158,   162,   249,
     138,    21,   145,   157,   240,   -11,   151,    17,   163,   158,
     190,   204,   128,   129,   173,   250,   159,   160,    66,    23,
     102,   158,   201,   181,   174,   161,   260,   169,   193,   178,
     -43,   157,   157,   158,   212,   189,   136,   -43,   -43,   232,
      56,   162,   259,    30,   158,   220,    96,   -35,    57,   -43,
     242,   163,   179,    33,   -43,   -43,   170,   146,   179,    70,
     138,   252,   146,   146,   146,   146,   238,   170,   158,   179,
     139,    58,   169,   158,   158,   158,   158,   248,   170,   170,
     179,    22,    23,    59,   170,   170,   170,   170,   258,   170,
      24,   -20,   179,   179,   179,   265,    90,   200,   148,   157,
      99,   -20,   144,   156,   -57,   149,    30,   -41,   159,   160,
      60,   157,   135,   136,   200,   148,    33,   161,    64,   -41,
      71,   137,   150,   157,   -51,   -51,   -51,   168,    65,   177,
     -19,   156,   156,   162,    73,   157,   -44,   138,   -36,   150,
     -51,    68,   -36,   163,    54,    95,   157,   139,   -41,   151,
     -44,    55,   -51,   -51,   178,   -41,   203,   -35,   169,   145,
     178,   -35,   -44,   -44,   145,   145,   145,   237,   213,   169,
     157,   178,   168,   211,   160,   157,   157,   157,   247,   193,
     169,   169,   178,    72,   -12,   -35,   169,   169,   169,   257,
     191,   169,   143,   155,   178,   178,   264,   -43,   162,   156,
     -42,   215,   -52,   -52,   -52,   -42,   -42,   -16,   163,   -43,
     -43,   156,   -51,   -51,   -51,   -13,   -42,   167,   -52,   176,
     -42,   155,   155,   156,   -51,   -51,   -51,   -42,   -42,   -51,
     -52,   -52,   207,   -51,    94,   156,   211,   160,   -14,   208,
     -51,   -51,   171,   172,   185,   -41,   156,   -51,   -35,   -41,
      69,   186,   -51,   -51,   177,   202,   -41,   214,   168,   144,
     177,   162,   167,   114,   144,   144,   236,   173,   -41,   168,
     156,   177,   149,   -41,   192,   156,   156,   246,   -15,   222,
     168,   168,   177,   -51,   -51,   -51,   168,   168,   256,   155,
     -40,   168,   142,   154,   177,   263,   -40,   -40,   203,   141,
     153,   155,   -43,   196,   -51,   -43,   -43,   -18,   -40,    71,
     197,   -51,   -51,   155,   -51,   -51,   -51,   166,   -17,   175,
     -36,   154,   154,   -34,   165,   155,    82,   -34,   153,   153,
     -10,   -51,    75,    93,   207,   -51,   155,    72,     1,     2,
       3,    83,   -51,   -51,   176,   -52,   -52,   -52,   167,   143,
     176,   -42,   -40,   -27,   143,   235,   204,   -40,   192,   167,
     155,   176,   166,   -42,   -42,   155,   245,   -28,   -52,   165,
     167,   167,   176,   -52,   -52,   -42,   167,   255,   -51,   -51,
     -51,   167,   -42,   -42,   262,    88,   -47,    74,   -47,   154,
      89,   -32,   180,   194,   -51,   -45,   153,    98,    54,   -37,
     100,   154,   -47,   -37,    62,    63,   -51,   -51,   153,   101,
     -52,   -52,   -52,   154,   -47,   -47,   -45,   -51,   -51,   -51,
     153,   -45,   -45,   -34,   194,   154,   -44,   -52,   107,    78,
      80,   -52,   153,    85,    86,    87,   154,   218,   -52,   -52,
     103,   104,   -51,   153,   225,   -51,   -51,   -44,   166,   142,
     175,   105,   -44,   -44,   234,   165,   141,    82,   106,   166,
     154,   175,    -8,    -8,    -8,   244,   165,   153,    82,   108,
     166,   166,   175,   109,    78,   110,   254,   165,   165,    82,
     111,   166,   120,   -47,   217,   -47,   112,   -37,   165,   -50,
     -50,   -50,    -4,   116,   140,   152,   117,     1,     2,     3,
     -47,   130,    -6,   118,   -47,   149,   -50,    -6,    -6,    -6,
     -50,   -47,   -47,   188,   -51,   -51,   -51,   -50,   -50,   164,
     182,   122,   123,   152,   152,   199,   -51,   -51,   -51,   205,
      91,   -44,   -33,   124,   196,   -51,   222,   210,   -56,   -39,
     -40,   -38,   -51,   -51,   -40,   -21,   185,   -22,   219,   -51,
     -44,   -40,   214,   -23,   -51,   -51,   126,   -44,   -44,   -42,
      78,   231,   -42,   -42,   164,   127,   -30,   115,   -49,   -49,
     -49,    78,   241,   121,   -31,    22,    23,     1,     2,     3,
     183,   134,    78,   251,    24,   -49,    25,    26,   -26,   -49,
     132,   152,    27,    78,    28,    29,   -49,   -49,   -29,   -24,
      30,   187,   134,   152,    31,   -36,    32,   -55,   -55,   -55,
      33,    -5,   -53,   -53,   -53,   152,    -5,    -5,    -5,   -41,
     198,   209,   -41,   221,   -55,    -7,   -36,   152,   -55,   -53,
      -7,    -7,    -7,   -53,    -7,   -55,   -55,   228,   152,   233,
     -53,   -53,   -46,   217,   -46,   243,   253,   -48,   -48,   -48,
     164,   140,   -20,   -20,   -20,   261,   -52,   -52,   -52,   -46,
     266,   164,   152,   -46,   -48,   -54,   -54,   -54,   -48,   267,
     -46,   -46,   164,   164,   -20,   -48,   -48,   -52,   268,   -50,
     -50,   -50,   -54,   164,   -52,   -52,   -54,   -49,   -49,   -49,
     -55,   -55,   -55,   -54,   -54,   -50,   -53,   -53,   -53,   269,
     -34,   -40,   270,   -49,   -40,   221,   -55,   -50,   -50,   -47,
     195,   -47,   -53,   -34,   271,   -49,   -49,   -37,   -55,   -55,
     -46,    74,   -46,   272,   -53,   -53,   -48,   -48,   -48,   -54,
     -54,   -54,   -47,   -50,   -50,   -50,   -46,   -47,   -47,   -47,
     206,   -47,   -48,   273,   274,   -54,   -37,    11,   -46,   -46,
     -50,   -50,   -50,    53,   -48,   -48,   -50,   -54,   -54,     0,
     -47,   -50,   -50,   216,     0,   -45,     0,   -47,   -47,     0,
       0,   -50,   -52,   -52,   -52,   -49,   -49,   -49,   -50,   -50,
     -45,   -47,   224,   -47,   -45,     0,   -50,   -50,   -50,     0,
       0,   -45,   -45,     0,   -49,   -49,   -49,   -52,   -49,     0,
     -52,   -52,     0,   -49,   -49,     0,   -47,     0,     0,   -47,
     -47,   -50,     0,     0,   -50,   -50,   -49,   -49,   -49,   -49,
       0,     0,   -49,   -49,   -55,   -55,   -55,   -53,   -53,   -53,
       0,   -46,   195,   -46,   -48,   -48,   -48,   -49,     0,     0,
     -55,   -55,   -55,     0,   -49,   -49,     0,   -55,     0,     0,
     -53,     0,   -55,   -55,   -46,   -53,   -53,   -48,     0,   -46,
     -46,   -55,   -48,   -48,   -53,   -53,   -53,     0,   -55,   -55,
     -46,   206,   -46,   -48,   -48,   -48,     0,    -9,     0,   216,
       0,   -44,    -9,    -9,    -9,   -53,   -55,   -55,   -55,     0,
       0,   -46,   -53,   -53,   -48,     0,   -44,     0,   -46,   -46,
     -44,   -48,   -48,   -53,   -53,   -53,     0,   -44,   -44,     0,
       0,   -55,     0,     0,   -55,   -55,   -46,   224,   -46,     0,
       0,   -48,   -48,   -48,   -54,   -54,   -54,     0,   -53,     0,
       0,   -53,   -53,   -54,   -54,   -54,     0,     0,   -54,   -54,
     -54,   -46,     0,     0,   -46,   -46,   -48,   -54,     0,   -48,
     -48,     0,   -54,   -54,   -54,   223,     0,   -45,     0,     0,
       0,   -54,   -54,   -54,     0,     0,   -54,   -54,   223,   -20,
     -44,     0,     0,     0,   -20,   -20,   -20,     0,     0,     0,
     -45,     0,     0,   -45,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,     0,     0,   -44,   -44
};

static const yytype_int16 yycheck[] =
{
      29,    30,     0,   127,    33,    17,    21,    99,   132,    10,
     134,     0,     0,     3,     4,     0,    31,     6,     6,     3,
       4,     8,    12,    10,    25,    54,    14,    56,    29,    58,
      59,     3,     4,    21,    24,    36,    37,    24,    28,     3,
      12,     3,     3,     4,    28,    74,     3,     3,    38,    36,
      37,    12,     0,     3,     4,    16,    28,    29,   182,   183,
       3,     4,    12,     8,    52,    10,    38,    28,     3,    12,
      99,     3,     4,     3,     4,     3,     4,    38,    28,    29,
      12,    30,    12,    24,    29,    28,    29,    28,    38,     3,
       4,    36,    37,   185,   106,    38,    28,   126,    28,    29,
      28,    25,    29,    30,   196,    29,    38,    29,    38,   138,
     139,    10,   124,   125,    28,   207,     3,     4,     3,     4,
      33,   150,   151,    36,    38,    12,   218,    54,    10,    56,
      29,    58,    59,   162,   163,     3,     4,    36,    37,   187,
      28,    28,    29,    28,   173,   174,    73,    24,    28,    31,
     198,    38,   181,    38,    36,    37,   185,   186,   187,    36,
      28,   209,   191,   192,   193,   194,   195,   196,   197,   198,
      38,    28,    99,   202,   203,   204,   205,   206,   207,   208,
     209,     3,     4,    28,   213,   214,   215,   216,   217,   218,
      12,    21,   221,   222,   223,   224,     3,     3,     4,   126,
      25,    31,    29,    30,    29,    12,    28,    24,     3,     4,
      28,   138,     3,     4,     3,     4,    38,    12,    28,    36,
      37,    12,    28,   150,     8,     9,    10,    54,    28,    56,
      31,    58,    59,    28,     8,   162,    10,    28,    25,    28,
      24,    31,    29,    38,    28,    72,   173,    38,    29,    38,
      24,    35,    36,    37,   181,    36,    37,    25,   185,   186,
     187,    29,    36,    37,   191,   192,   193,   194,    36,   196,
     197,   198,    99,     3,     4,   202,   203,   204,   205,    10,
     207,   208,   209,    10,    31,    31,   213,   214,   215,   216,
      36,   218,    29,    30,   221,   222,   223,    24,    28,   126,
      31,    10,     8,     9,    10,    36,    37,    31,    38,    36,
      37,   138,     8,     9,    10,    31,    25,    54,    24,    56,
      29,    58,    59,   150,     8,     9,    10,    36,    37,    25,
      36,    37,    28,    29,    71,   162,     3,     4,    31,    35,
      36,    37,     3,     4,    28,    25,   173,    31,    29,    29,
      24,    35,    36,    37,   181,    36,    36,    37,   185,   186,
     187,    28,    99,     3,   191,   192,   193,    28,    31,   196,
     197,   198,    12,    36,    37,   202,   203,   204,    31,    10,
     207,   208,   209,     8,     9,    10,   213,   214,   215,   126,
      29,   218,    29,    30,   221,   222,    24,    36,    37,    29,
      30,   138,    33,    28,    29,    36,    37,    31,    36,    37,
      35,    36,    37,   150,     8,     9,    10,    54,    31,    56,
      24,    58,    59,    25,    54,   162,    56,    29,    58,    59,
      29,    25,     3,    70,    28,    29,   173,    10,     5,     6,
       7,     3,    36,    37,   181,     8,     9,    10,   185,   186,
     187,    24,    31,    31,   191,   192,    10,    36,    37,   196,
     197,   198,    99,    36,    37,   202,   203,    31,    31,    99,
     207,   208,   209,    36,    37,    29,   213,   214,     8,     9,
      10,   218,    36,    37,   221,    29,     8,     9,    10,   126,
       3,    24,    24,     8,    24,    10,   126,     3,    28,    25,
      29,   138,    24,    29,    29,    30,    36,    37,   138,    29,
       8,     9,    10,   150,    36,    37,    31,     8,     9,    10,
     150,    36,    37,    24,     8,   162,    10,    25,    24,    54,
      55,    29,   162,    58,    59,    60,   173,    28,    36,    37,
      29,    29,    33,   173,   181,    36,    37,    31,   185,   186,
     187,    29,    36,    37,   191,   185,   186,   187,    29,   196,
     197,   198,     5,     6,     7,   202,   196,   197,   198,    33,
     207,   208,   209,    29,    99,    29,   213,   207,   208,   209,
      24,   218,   107,     8,     9,    10,    28,    24,   218,     8,
       9,    10,     0,    24,    29,    30,    24,     5,     6,     7,
      25,   126,     0,    24,    29,    12,    25,     5,     6,     7,
      29,    36,    37,   138,     8,     9,    10,    36,    37,    54,
      30,    24,    24,    58,    59,   150,     8,     9,    10,     8,
      65,    10,    31,    29,    28,    29,    10,   162,    29,    29,
      25,    29,    36,    37,    29,    31,    28,    31,   173,    31,
      29,    36,    37,    31,    36,    37,    24,    36,    37,    33,
     185,   186,    36,    37,    99,    29,    31,   102,     8,     9,
      10,   196,   197,   108,    31,     3,     4,     5,     6,     7,
      30,    30,   207,   208,    12,    25,    14,    15,    31,    29,
      29,   126,    20,   218,    22,    23,    36,    37,    31,    31,
      28,    28,    30,   138,    32,    31,    34,     8,     9,    10,
      38,     0,     8,     9,    10,   150,     5,     6,     7,    33,
      28,    28,    36,    37,    25,     0,    29,   162,    29,    25,
       5,     6,     7,    29,    31,    36,    37,    31,   173,    29,
      36,    37,     8,     9,    10,    29,    29,     8,     9,    10,
     185,   186,     5,     6,     7,    29,     8,     9,    10,    25,
      31,   196,   197,    29,    25,     8,     9,    10,    29,    31,
      36,    37,   207,   208,    31,    36,    37,    29,    29,     8,
       9,    10,    25,   218,    36,    37,    29,     8,     9,    10,
       8,     9,    10,    36,    37,    24,     8,     9,    10,    29,
      31,    33,    29,    24,    36,    37,    24,    36,    37,     8,
       9,    10,    24,    29,    29,    36,    37,    31,    36,    37,
       8,     9,    10,    29,    36,    37,     8,     9,    10,     8,
       9,    10,    31,     8,     9,    10,    24,    36,    37,     8,
       9,    10,    24,    29,    29,    24,    29,     6,    36,    37,
       8,     9,    10,    21,    36,    37,    31,    36,    37,    -1,
      29,    36,    37,     8,    -1,    10,    -1,    36,    37,    -1,
      -1,    29,     8,     9,    10,     8,     9,    10,    36,    37,
      25,     8,     9,    10,    29,    -1,     8,     9,    10,    -1,
      -1,    36,    37,    -1,     8,     9,    10,    33,    31,    -1,
      36,    37,    -1,    36,    37,    -1,    33,    -1,    -1,    36,
      37,    33,    -1,    -1,    36,    37,     8,     9,    10,    33,
      -1,    -1,    36,    37,     8,     9,    10,     8,     9,    10,
      -1,     8,     9,    10,     8,     9,    10,    29,    -1,    -1,
       8,     9,    10,    -1,    36,    37,    -1,    31,    -1,    -1,
      31,    -1,    36,    37,    31,    36,    37,    31,    -1,    36,
      37,    29,    36,    37,     8,     9,    10,    -1,    36,    37,
       8,     9,    10,     8,     9,    10,    -1,     0,    -1,     8,
      -1,    10,     5,     6,     7,    29,     8,     9,    10,    -1,
      -1,    29,    36,    37,    29,    -1,    25,    -1,    36,    37,
      29,    36,    37,     8,     9,    10,    -1,    36,    37,    -1,
      -1,    33,    -1,    -1,    36,    37,     8,     9,    10,    -1,
      -1,     8,     9,    10,     8,     9,    10,    -1,    33,    -1,
      -1,    36,    37,     8,     9,    10,    -1,    -1,     8,     9,
      10,    33,    -1,    -1,    36,    37,    33,    31,    -1,    36,
      37,    -1,    36,    37,    29,     8,    -1,    10,    -1,    -1,
      -1,    36,    37,    33,    -1,    -1,    36,    37,     8,     0,
      10,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,    40,    41,    42,    43,    44,    66,
       0,    41,     3,    24,    28,    46,    66,    29,     3,    30,
      48,    25,     3,     4,    12,    14,    15,    20,    22,    23,
      28,    32,    34,    38,    43,    47,    48,    49,    50,    51,
      52,    53,    54,    56,    57,    59,    60,    61,    62,    63,
      64,    66,    45,    46,    28,    35,    28,    28,    28,    28,
      28,    24,    56,    56,    28,    28,     3,    64,    31,    24,
      36,    37,    10,     8,     9,     3,    66,    29,    56,    65,
      56,    58,    59,     3,    16,    56,    56,    56,    29,     3,
       3,    57,    55,    60,    61,    62,    63,    64,     3,    25,
      29,    29,    33,    29,    29,    29,    29,    24,    33,    29,
      29,    24,    28,    65,     3,    57,    24,    24,    24,    48,
      56,    57,    24,    24,    29,    21,    24,    29,    48,    48,
      56,    47,    29,    47,    30,     3,     4,    12,    28,    38,
      57,    59,    60,    61,    62,    63,    64,     3,     4,    12,
      28,    38,    57,    59,    60,    61,    62,    63,    64,     3,
       4,    12,    28,    38,    57,    59,    60,    61,    62,    63,
      64,     3,     4,    28,    38,    60,    61,    62,    63,    64,
      24,    36,    30,    30,    47,    28,    35,    28,    56,     3,
      64,    36,    37,    10,     8,     9,    28,    35,    28,    56,
       3,    64,    36,    37,    10,     8,     9,    28,    35,    28,
      56,     3,    64,    36,    37,    10,     8,     9,    28,    56,
      64,    37,    10,     8,     9,    60,    47,    47,    31,    29,
      65,    56,    58,    29,    60,    61,    62,    63,    64,    29,
      65,    56,    58,    29,    60,    61,    62,    63,    64,    29,
      65,    56,    58,    29,    60,    61,    62,    63,    64,    29,
      65,    29,    61,    62,    63,    64,    31,    31,    29,    29,
      29,    29,    29,    29,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    45,    44,
      46,    46,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    49,    49,    49,    50,    51,    51,    52,    52,    53,
      53,    53,    55,    54,    56,    56,    56,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    64,    64,    64,    65,    65,    66,    66,
      66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     0,    12,
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
#line 93 "syntax.y"
                   {printf("SINTATICO -------- program -> declaration_list\n");}
#line 1464 "syntax.tab.c"
    break;

  case 3: /* declaration_list: declaration declaration_list  */
#line 96 "syntax.y"
                               {printf("SINTATICO -------- declaration_list -> declaration declaration_list\n");}
#line 1470 "syntax.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 97 "syntax.y"
                {printf("SINTATICO -------- declaration_list -> declaration\n");}
#line 1476 "syntax.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 100 "syntax.y"
                       {printf("SINTATICO -------- declaration -> function_declaration\n");}
#line 1482 "syntax.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 101 "syntax.y"
                    {printf("SINTATICO -------- declaration -> var_declaration\n");}
#line 1488 "syntax.tab.c"
    break;

  case 7: /* var_declaration: type ID ';'  */
#line 104 "syntax.y"
              {printf("SINTATICO -------- var_declaration -> type ID\n");}
#line 1494 "syntax.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 107 "syntax.y"
                                            {printf("SINTATICO -------- function_declaration -> type ID ( params_list ) brackets_stmt\n");}
#line 1500 "syntax.tab.c"
    break;

  case 9: /* function_declaration: type ID '(' params_list ')' brackets_stmt $@1 type ID '(' ')' brackets_stmt  */
#line 108 "syntax.y"
                                {printf("SINTATICO -------- function_declaration -> type ID ( ) brackets_stmt\n");}
#line 1506 "syntax.tab.c"
    break;

  case 10: /* params_list: type ID ',' params_list  */
#line 111 "syntax.y"
                         {}
#line 1512 "syntax.tab.c"
    break;

  case 11: /* params_list: type ID  */
#line 112 "syntax.y"
           {}
#line 1518 "syntax.tab.c"
    break;

  case 12: /* stmt: brackets_stmt  */
#line 115 "syntax.y"
                {}
#line 1524 "syntax.tab.c"
    break;

  case 13: /* stmt: for_stmt  */
#line 116 "syntax.y"
             {}
#line 1530 "syntax.tab.c"
    break;

  case 14: /* stmt: if_else_stmt  */
#line 117 "syntax.y"
                 {}
#line 1536 "syntax.tab.c"
    break;

  case 15: /* stmt: return_stmt  */
#line 118 "syntax.y"
                {}
#line 1542 "syntax.tab.c"
    break;

  case 16: /* stmt: io_stmt  */
#line 119 "syntax.y"
            {}
#line 1548 "syntax.tab.c"
    break;

  case 17: /* stmt: exp_stmt  */
#line 120 "syntax.y"
             {}
#line 1554 "syntax.tab.c"
    break;

  case 18: /* stmt: set_stmt  */
#line 121 "syntax.y"
             {}
#line 1560 "syntax.tab.c"
    break;

  case 19: /* stmt: var_declaration  */
#line 122 "syntax.y"
                    {}
#line 1566 "syntax.tab.c"
    break;

  case 20: /* brackets_stmt: "{" stmt "}"  */
#line 125 "syntax.y"
               {printf("SINTATICO -------- brackets_stmt -> stmt ;\n");}
#line 1572 "syntax.tab.c"
    break;

  case 21: /* io_stmt: INPUT '(' ID ')' ';'  */
#line 128 "syntax.y"
                       {}
#line 1578 "syntax.tab.c"
    break;

  case 22: /* io_stmt: OUTPUT '(' STRING ')' ';'  */
#line 129 "syntax.y"
                              {}
#line 1584 "syntax.tab.c"
    break;

  case 23: /* io_stmt: OUTPUT '(' exp ')' ';'  */
#line 130 "syntax.y"
                           {}
#line 1590 "syntax.tab.c"
    break;

  case 24: /* for_stmt: FOR '(' exp ';' exp ';' exp ')' stmt  */
#line 133 "syntax.y"
                                       {}
#line 1596 "syntax.tab.c"
    break;

  case 25: /* if_else_stmt: IF '(' exp ')' brackets_stmt  */
#line 136 "syntax.y"
                               {}
#line 1602 "syntax.tab.c"
    break;

  case 26: /* if_else_stmt: IF '(' exp ')' brackets_stmt ELSE brackets_stmt  */
#line 137 "syntax.y"
                                                    {}
#line 1608 "syntax.tab.c"
    break;

  case 27: /* return_stmt: RETURN ';'  */
#line 140 "syntax.y"
             {printf("SINTATICO -------- return_stmt -> RETURN ;\n");}
#line 1614 "syntax.tab.c"
    break;

  case 28: /* return_stmt: RETURN exp  */
#line 141 "syntax.y"
               {printf("SINTATICO -------- return_stmt -> RETURN exp\n");}
#line 1620 "syntax.tab.c"
    break;

  case 29: /* set_stmt: "forall" '(' ID "in" set_exp ')' stmt  */
#line 144 "syntax.y"
                                        {}
#line 1626 "syntax.tab.c"
    break;

  case 30: /* set_stmt: "is_set" '(' ID ')' ';'  */
#line 145 "syntax.y"
                            {}
#line 1632 "syntax.tab.c"
    break;

  case 31: /* set_stmt: "is_set" '(' set_exp ')' ';'  */
#line 146 "syntax.y"
                                 {}
#line 1638 "syntax.tab.c"
    break;

  case 32: /* $@2: %empty  */
#line 149 "syntax.y"
          {}
#line 1644 "syntax.tab.c"
    break;

  case 33: /* exp_stmt: exp ';' $@2 ';'  */
#line 150 "syntax.y"
      {}
#line 1650 "syntax.tab.c"
    break;

  case 34: /* exp: ID "=" exp  */
#line 153 "syntax.y"
             {}
#line 1656 "syntax.tab.c"
    break;

  case 35: /* exp: or_exp  */
#line 154 "syntax.y"
           {}
#line 1662 "syntax.tab.c"
    break;

  case 36: /* exp: set_exp  */
#line 155 "syntax.y"
            {}
#line 1668 "syntax.tab.c"
    break;

  case 37: /* set_exp: SET_OP1 '(' set_in_exp ')'  */
#line 158 "syntax.y"
                             {}
#line 1674 "syntax.tab.c"
    break;

  case 38: /* set_in_exp: or_exp "in" set_exp  */
#line 161 "syntax.y"
                      {}
#line 1680 "syntax.tab.c"
    break;

  case 39: /* set_in_exp: or_exp "in" ID  */
#line 162 "syntax.y"
                   {}
#line 1686 "syntax.tab.c"
    break;

  case 40: /* or_exp: or_exp "||" and_exp  */
#line 165 "syntax.y"
                      {}
#line 1692 "syntax.tab.c"
    break;

  case 41: /* or_exp: and_exp  */
#line 166 "syntax.y"
            {}
#line 1698 "syntax.tab.c"
    break;

  case 42: /* and_exp: and_exp "&&" relational_exp  */
#line 169 "syntax.y"
                              {}
#line 1704 "syntax.tab.c"
    break;

  case 43: /* and_exp: relational_exp  */
#line 170 "syntax.y"
                   {}
#line 1710 "syntax.tab.c"
    break;

  case 44: /* relational_exp: relational_exp RELATIONAL_OP sum_exp  */
#line 173 "syntax.y"
                                       {}
#line 1716 "syntax.tab.c"
    break;

  case 45: /* relational_exp: sum_exp  */
#line 174 "syntax.y"
            {}
#line 1722 "syntax.tab.c"
    break;

  case 46: /* sum_exp: sum_exp ARITMETIC_OP1 mul_exp  */
#line 177 "syntax.y"
                                {}
#line 1728 "syntax.tab.c"
    break;

  case 47: /* sum_exp: mul_exp  */
#line 178 "syntax.y"
            {}
#line 1734 "syntax.tab.c"
    break;

  case 48: /* mul_exp: mul_exp ARITMETIC_OP2 primal_exp  */
#line 181 "syntax.y"
                                   {}
#line 1740 "syntax.tab.c"
    break;

  case 49: /* mul_exp: "-" primal_exp  */
#line 182 "syntax.y"
                   {}
#line 1746 "syntax.tab.c"
    break;

  case 50: /* mul_exp: primal_exp  */
#line 183 "syntax.y"
               {}
#line 1752 "syntax.tab.c"
    break;

  case 51: /* primal_exp: ID  */
#line 186 "syntax.y"
     {}
#line 1758 "syntax.tab.c"
    break;

  case 52: /* primal_exp: CONST  */
#line 187 "syntax.y"
          {}
#line 1764 "syntax.tab.c"
    break;

  case 53: /* primal_exp: '(' exp ')'  */
#line 188 "syntax.y"
                {}
#line 1770 "syntax.tab.c"
    break;

  case 54: /* primal_exp: ID '(' arg_list ')'  */
#line 189 "syntax.y"
                        {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-3].token).lex);}
#line 1776 "syntax.tab.c"
    break;

  case 55: /* primal_exp: ID '(' ')'  */
#line 190 "syntax.y"
               {printf("SINTATICO %d:%d-------- primal_exp -> %s\n", (yyvsp[-2].token).line, (yyvsp[-2].token).column, (yyvsp[-2].token).lex);}
#line 1782 "syntax.tab.c"
    break;

  case 56: /* arg_list: exp ',' arg_list  */
#line 193 "syntax.y"
                   {}
#line 1788 "syntax.tab.c"
    break;

  case 57: /* arg_list: exp  */
#line 194 "syntax.y"
        {}
#line 1794 "syntax.tab.c"
    break;

  case 58: /* type: BASIC_TYPE  */
#line 197 "syntax.y"
             {printf("SINTATICO %d:%d-------- type -> %s\n", (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[0].token).lex);}
#line 1800 "syntax.tab.c"
    break;

  case 59: /* type: SET_TYPE  */
#line 198 "syntax.y"
             {}
#line 1806 "syntax.tab.c"
    break;

  case 60: /* type: ELEM_TYPE  */
#line 199 "syntax.y"
              {}
#line 1812 "syntax.tab.c"
    break;


#line 1816 "syntax.tab.c"

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
      yyerror (YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 201 "syntax.y"


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

