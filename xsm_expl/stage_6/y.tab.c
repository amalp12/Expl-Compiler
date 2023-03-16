/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "expr_tree.y"
  

#ifndef _STDIO_H
#define _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#define _STDLIB_H
#include <stdlib.h>
#endif

#ifndef _STRING_H
#define _STRING_H
#include <string.h>
#endif

#ifndef _CODEGEN_H
#define _CODEGEN_H
#include "codegen.h"
#endif

#ifndef _CODEGEN_C
#define _CODEGEN_C
#include "codegen.c"
#endif

#ifndef _EXPR_TREE_H
#define _EXPR_TREE_H
#include "expr_tree.h"
#endif

#ifndef _EXPR_TREE_C
#define _EXPR_TREE_C
#include "expr_tree.c"
#endif

#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include "symbolTable.h"
#endif

#ifndef _SYMBOL_TABLE_C
#define _SYMBOL_TABLE_C
#include "symbolTable.c"
#endif

#ifndef _DECLARATIONS_H
#define _DECLARATIONS_H
#include "declarations.h"
#endif

#ifndef _DECLARATIONS_C
#define _DECLARATIONS_C
#include "declarations.c"
#endif


#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include "typeTable.h"
#endif

#ifndef _TYPE_TABLE_C
#define _TYPE_TABLE_C
#include "typeTable.c"
#endif



void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
FILE * target_file ;
int _INIT_STATE ;

int yylex(void);


#line 151 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,                     /* INT  */
    MUL = 259,                     /* MUL  */
    DIV = 260,                     /* DIV  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    ID = 263,                      /* ID  */
    READ = 264,                    /* READ  */
    WRITE = 265,                   /* WRITE  */
    SEMICOLON = 266,               /* SEMICOLON  */
    START = 267,                   /* START  */
    END = 268,                     /* END  */
    EQUALS = 269,                  /* EQUALS  */
    STRING = 270,                  /* STRING  */
    MOD = 271,                     /* MOD  */
    GT = 272,                      /* GT  */
    LT = 273,                      /* LT  */
    GE = 274,                      /* GE  */
    LE = 275,                      /* LE  */
    NE = 276,                      /* NE  */
    EQ = 277,                      /* EQ  */
    IF = 278,                      /* IF  */
    THEN = 279,                    /* THEN  */
    ELSE = 280,                    /* ELSE  */
    ENDIF = 281,                   /* ENDIF  */
    WHILE = 282,                   /* WHILE  */
    DO = 283,                      /* DO  */
    ENDWHILE = 284,                /* ENDWHILE  */
    REPEAT = 285,                  /* REPEAT  */
    UNTIL = 286,                   /* UNTIL  */
    DECL = 287,                    /* DECL  */
    ENDDECL = 288,                 /* ENDDECL  */
    TYPE = 289,                    /* TYPE  */
    ENDTYPE = 290,                 /* ENDTYPE  */
    BREAK = 291,                   /* BREAK  */
    BREAKPOINT = 292,              /* BREAKPOINT  */
    CONTINUE = 293,                /* CONTINUE  */
    RETURN = 294,                  /* RETURN  */
    MAIN = 295,                    /* MAIN  */
    INITIALIZE = 296,              /* INITIALIZE  */
    ALLOC = 297,                   /* ALLOC  */
    FREE = 298,                    /* FREE  */
    NULLVAL = 299,                 /* NULLVAL  */
    AND = 300,                     /* AND  */
    OR = 301,                      /* OR  */
    NOT = 302                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define MUL 259
#define DIV 260
#define PLUS 261
#define MINUS 262
#define ID 263
#define READ 264
#define WRITE 265
#define SEMICOLON 266
#define START 267
#define END 268
#define EQUALS 269
#define STRING 270
#define MOD 271
#define GT 272
#define LT 273
#define GE 274
#define LE 275
#define NE 276
#define EQ 277
#define IF 278
#define THEN 279
#define ELSE 280
#define ENDIF 281
#define WHILE 282
#define DO 283
#define ENDWHILE 284
#define REPEAT 285
#define UNTIL 286
#define DECL 287
#define ENDDECL 288
#define TYPE 289
#define ENDTYPE 290
#define BREAK 291
#define BREAKPOINT 292
#define CONTINUE 293
#define RETURN 294
#define MAIN 295
#define INITIALIZE 296
#define ALLOC 297
#define FREE 298
#define NULLVAL 299
#define AND 300
#define OR 301
#define NOT 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 81 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct Fieldlist * typeField;

#line 306 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_MUL = 4,                        /* MUL  */
  YYSYMBOL_DIV = 5,                        /* DIV  */
  YYSYMBOL_PLUS = 6,                       /* PLUS  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_WRITE = 10,                     /* WRITE  */
  YYSYMBOL_SEMICOLON = 11,                 /* SEMICOLON  */
  YYSYMBOL_START = 12,                     /* START  */
  YYSYMBOL_END = 13,                       /* END  */
  YYSYMBOL_EQUALS = 14,                    /* EQUALS  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_MOD = 16,                       /* MOD  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_NE = 21,                        /* NE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_THEN = 24,                      /* THEN  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_ENDIF = 26,                     /* ENDIF  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_DO = 28,                        /* DO  */
  YYSYMBOL_ENDWHILE = 29,                  /* ENDWHILE  */
  YYSYMBOL_REPEAT = 30,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 31,                     /* UNTIL  */
  YYSYMBOL_DECL = 32,                      /* DECL  */
  YYSYMBOL_ENDDECL = 33,                   /* ENDDECL  */
  YYSYMBOL_TYPE = 34,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 35,                   /* ENDTYPE  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_BREAKPOINT = 37,                /* BREAKPOINT  */
  YYSYMBOL_CONTINUE = 38,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_MAIN = 40,                      /* MAIN  */
  YYSYMBOL_INITIALIZE = 41,                /* INITIALIZE  */
  YYSYMBOL_ALLOC = 42,                     /* ALLOC  */
  YYSYMBOL_FREE = 43,                      /* FREE  */
  YYSYMBOL_NULLVAL = 44,                   /* NULLVAL  */
  YYSYMBOL_AND = 45,                       /* AND  */
  YYSYMBOL_OR = 46,                        /* OR  */
  YYSYMBOL_NOT = 47,                       /* NOT  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* '.'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_Program = 57,                   /* Program  */
  YYSYMBOL_MainBlock = 58,                 /* MainBlock  */
  YYSYMBOL_TypeDefBlock = 59,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 60,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 61,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 62,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 63,                 /* FieldDecl  */
  YYSYMBOL_Field = 64,                     /* Field  */
  YYSYMBOL_GDeclBlock = 65,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 66,                 /* GDeclList  */
  YYSYMBOL_GDecl = 67,                     /* GDecl  */
  YYSYMBOL_GidList = 68,                   /* GidList  */
  YYSYMBOL_Gid = 69,                       /* Gid  */
  YYSYMBOL_GParamList = 70,                /* GParamList  */
  YYSYMBOL_identifierDecl = 71,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 72,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 73,                 /* FDefBlock  */
  YYSYMBOL_FDef = 74,                      /* FDef  */
  YYSYMBOL_Body = 75,                      /* Body  */
  YYSYMBOL_ParamList = 76,                 /* ParamList  */
  YYSYMBOL_Param = 77,                     /* Param  */
  YYSYMBOL_LDeclBlock = 78,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 79,                  /* LDecList  */
  YYSYMBOL_LDecl = 80,                     /* LDecl  */
  YYSYMBOL_LIdList = 81,                   /* LIdList  */
  YYSYMBOL_ArgList = 82,                   /* ArgList  */
  YYSYMBOL_Slist = 83,                     /* Slist  */
  YYSYMBOL_Stmt = 84,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 85,                /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 86,                  /* DeclStmt  */
  YYSYMBOL_DeclList = 87,                  /* DeclList  */
  YYSYMBOL_Decl = 88,                      /* Decl  */
  YYSYMBOL_Type = 89,                      /* Type  */
  YYSYMBOL_VarList = 90,                   /* VarList  */
  YYSYMBOL_brkStmt = 91,                   /* brkStmt  */
  YYSYMBOL_contStmt = 92,                  /* contStmt  */
  YYSYMBOL_brkpointStmt = 93,              /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 94,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 95,                 /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 96,                /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 97,               /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 98,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 99,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 100,                  /* AsgStmt  */
  YYSYMBOL_expr = 101                      /* expr  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   617

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  258

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      48,    49,     2,     2,    53,     2,    52,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   112,   112,   117,   122,   127,   132,   137,   142,   150,
     179,   183,   184,   188,   195,   200,   207,   216,   222,   275,
     283,   294,   295,   299,   306,   310,   317,   318,   328,   334,
     339,   344,   348,   354,   361,   369,   377,   385,   396,   400,
     406,   413,   414,   418,   422,   434,   438,   444,   455,   460,
     468,   475,   481,   487,   495,   496,   498,   505,   506,   509,
     516,   521,   532,   537,   545,   546,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   564,   568,
     575,   576,   578,   579,   582,   590,   593,   594,   598,   601,
     604,   607,   608,   611,   614,   617,   620,   623,   626,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "MUL", "DIV",
  "PLUS", "MINUS", "ID", "READ", "WRITE", "SEMICOLON", "START", "END",
  "EQUALS", "STRING", "MOD", "GT", "LT", "GE", "LE", "NE", "EQ", "IF",
  "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT", "UNTIL",
  "DECL", "ENDDECL", "TYPE", "ENDTYPE", "BREAK", "BREAKPOINT", "CONTINUE",
  "RETURN", "MAIN", "INITIALIZE", "ALLOC", "FREE", "NULLVAL", "AND", "OR",
  "NOT", "'('", "')'", "'{'", "'}'", "'.'", "','", "'['", "']'", "$accept",
  "Program", "MainBlock", "TypeDefBlock", "TypeDefList", "TypeDef",
  "FieldDeclList", "FieldDecl", "Field", "GDeclBlock", "GDeclList",
  "GDecl", "GidList", "Gid", "GParamList", "identifierDecl",
  "identifierUse", "FDefBlock", "FDef", "Body", "ParamList", "Param",
  "LDeclBlock", "LDecList", "LDecl", "LIdList", "ArgList", "Slist", "Stmt",
  "ReturnStmt", "DeclStmt", "DeclList", "Decl", "Type", "VarList",
  "brkStmt", "contStmt", "brkpointStmt", "Ifstmt", "Whilestmt",
  "RepeatStmt", "DoWhileStmt", "InputStmt", "OutputStmt", "AsgStmt",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,  -127,    37,     4,    29,  -127,    27,    24,    51,  -127,
      57,  -127,    36,    58,    22,  -127,  -127,  -127,    24,    24,
    -127,     3,  -127,    24,    70,  -127,  -127,    55,     2,  -127,
    -127,    24,  -127,  -127,  -127,    24,  -127,  -127,    76,  -127,
      92,    24,    19,  -127,    36,     0,  -127,   136,  -127,    24,
     109,   -39,  -127,   159,   115,   131,  -127,  -127,  -127,   161,
      14,  -127,   155,  -127,    24,  -127,   134,   148,  -127,   156,
      24,    87,   195,  -127,   140,   147,   155,  -127,   201,  -127,
      96,  -127,   523,   160,   164,   165,   166,   169,   195,  -127,
       8,  -127,  -127,    73,   162,   194,   206,   214,   523,   523,
      98,   203,   232,   252,   197,   216,   218,   219,   173,   258,
     523,  -127,   260,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   223,
    -127,   269,   270,   250,    -4,   250,   250,   250,   548,  -127,
     448,  -127,    99,  -127,   287,  -127,  -127,  -127,  -127,   207,
    -127,  -127,  -127,   250,   250,  -127,   372,   247,   257,   250,
     299,   250,  -127,   295,  -127,  -127,  -127,  -127,    94,   262,
     177,   211,   230,   266,   271,  -127,  -127,   272,  -127,     9,
      45,   588,   264,   250,   250,   250,   250,  -127,   250,   250,
     250,   250,   250,   250,   250,   250,   250,  -127,  -127,   283,
    -127,   391,  -127,   290,   301,   309,   321,   297,   250,   250,
    -127,   287,  -127,   105,   422,  -127,  -127,  -127,   117,   117,
    -127,   595,   595,   185,   185,   311,   311,   588,   588,  -127,
    -127,   250,  -127,  -127,   523,   523,   317,   336,  -127,  -127,
     250,   158,   423,   473,    -2,   335,   422,  -127,   523,   337,
     338,  -127,  -127,   498,  -127,  -127,   339,  -127
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    85,     0,     0,     0,     8,     0,     0,     0,    20,
       0,    22,     0,     0,     0,    12,     1,     5,     0,     0,
      46,     0,     7,     0,     0,    19,    21,    31,     0,    25,
      26,     0,    10,    11,     3,     0,     4,    45,     0,     6,
       0,    30,     0,    23,     0,     0,    15,     0,     2,    52,
       0,     0,    29,     0,     0,     0,    24,    13,    14,     0,
       0,    51,    56,    27,     0,    53,    32,    37,    16,     0,
       0,     0,     0,    28,     0,     0,    56,    50,     0,    55,
       0,    58,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    54,    57,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,    65,    77,    76,    71,    72,    73,    69,    70,    74,
      75,    66,    67,    68,     9,    33,    35,    34,    36,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,    81,     0,    83,     0,    88,    90,    89,   105,    38,
      79,   107,   119,     0,     0,   106,     0,     0,     0,     0,
       0,     0,    64,    77,    49,    47,    60,    18,     0,     0,
       0,     0,     0,     0,     0,    80,    82,    31,    87,     0,
       0,   116,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,     0,
      17,     0,    48,    39,     0,     0,     0,     0,     0,     0,
      84,     0,   117,     0,    63,   104,   101,   102,    99,   100,
     103,   109,   108,   111,   110,   112,   113,   114,   115,    44,
      98,     0,    96,    97,     0,     0,     0,     0,    86,   118,
       0,     0,     0,     0,     0,     0,    62,    40,     0,     0,
       0,    95,    94,     0,    92,    93,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,   150,  -127,  -127,   333,  -127,   306,  -127,   353,
    -127,   350,  -127,   320,  -127,  -126,   -82,   127,   107,   273,
    -127,    53,   289,  -127,   288,  -127,  -127,   -97,  -107,   -76,
    -127,  -127,   225,     5,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    14,    15,    45,    46,   108,     7,
      10,    11,    28,    29,    51,    30,   155,    19,    20,    83,
      60,    52,    72,    80,    81,    90,   213,   110,   111,   139,
     113,   142,   143,    21,   179,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   156
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,   138,   140,   162,    93,     8,   112,    12,     1,   251,
      63,    38,    13,    43,    64,    12,   109,   109,   178,   130,
     210,   168,    54,   170,   171,   172,   235,    55,   109,    16,
      13,   162,     1,   162,   163,     1,    47,   105,   106,   107,
       1,   181,   182,    24,    27,     1,    53,   199,   148,   201,
      47,    57,   169,   149,    53,    44,   109,    32,   109,     2,
     151,   131,   211,    69,     2,     1,     3,    70,   214,    53,
       9,   216,   217,   218,   219,    53,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   238,   105,   106,   107,   152,
      25,    24,   153,   154,   212,    78,   236,   237,   183,   184,
     185,   186,    61,    41,    78,   144,     1,     1,    31,    42,
     188,   189,   190,   191,   192,   193,   194,    73,    40,   241,
      79,   183,   184,    77,    49,   132,    37,   133,   246,    91,
      37,   141,   175,   188,    23,   162,   162,   242,   243,   195,
     196,    50,    37,    84,    59,    35,   162,   144,    85,   203,
      86,   253,   109,   109,   239,    87,    17,    22,   240,    62,
     109,   109,   183,   184,   185,   186,   109,    65,    34,    36,
      66,   109,    68,    39,   188,   189,   190,   191,   192,   193,
     194,   183,   184,   185,   186,    48,    67,    71,    74,   183,
     184,   185,   186,   188,   189,   190,   191,   192,   193,   194,
     148,   188,    75,   195,   196,   149,    76,    82,   150,    89,
     134,   124,   151,   247,   145,   183,   184,   185,   186,   125,
     126,   127,   195,   196,   128,   160,   205,   188,   189,   190,
     191,   192,   193,   194,   183,   184,   185,   186,   105,   106,
     107,   152,   135,   146,   153,   154,   188,   189,   190,   191,
     192,   193,   194,   148,   136,   180,   195,   196,   149,   132,
     206,   133,   137,   147,   157,   151,   158,   159,   183,   184,
     185,   186,   161,   164,   165,   195,   196,   166,   167,   207,
     188,   189,   190,   191,   192,   193,   194,   183,   184,   185,
     186,   105,   106,   107,   152,   177,   197,   153,   154,   188,
     189,   190,   191,   192,   193,   194,   198,   200,   202,   195,
     196,   204,   232,   215,   208,   183,   184,   185,   186,   209,
     233,   183,   184,   185,   186,   235,    42,   188,   195,   196,
     191,   192,   229,   188,   189,   190,   191,   192,   193,   194,
     183,   184,   185,   186,   231,   234,   252,    33,   254,   255,
     257,    58,   188,   189,   190,   191,   192,   193,   194,    18,
      26,   129,   195,   196,    56,    88,   244,   176,    92,     0,
       0,     0,     0,     0,     0,     0,   183,   184,   185,   186,
       0,   195,   196,   187,     0,   245,     0,     0,   188,   189,
     190,   191,   192,   193,   194,   183,   184,   185,   186,     0,
       0,     0,   230,     0,     0,     0,     0,   188,   189,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   196,     0,
       0,     0,     0,     0,     0,     0,   183,   184,   185,   186,
       0,    93,    94,    95,     0,     0,   195,   196,   188,   189,
     190,   191,   192,   193,   194,     0,    96,     0,   248,   249,
      97,    98,     0,    99,     0,   100,    93,    94,    95,   101,
     102,   103,   104,     0,   105,   106,   107,   195,   196,     0,
       0,    96,     0,     0,     0,    97,    98,     0,    99,   174,
     100,    93,    94,    95,   101,   102,   103,   104,     0,   105,
     106,   107,     0,     0,     0,     0,    96,     0,     0,     0,
      97,    98,   250,    99,     0,   100,    93,    94,    95,   101,
     102,   103,   104,     0,   105,   106,   107,     0,     0,     0,
       0,    96,     0,     0,   256,    97,    98,     0,    99,     0,
     100,    93,    94,    95,   101,   102,   103,   104,     0,   105,
     106,   107,     0,     0,     0,     0,    96,     0,     0,     0,
      97,    98,     0,    99,     0,   100,    93,    94,    95,   101,
     102,   103,   104,     0,   105,   106,   107,     0,     0,     0,
       0,    96,     0,     0,     0,   173,    98,     0,    99,     0,
     100,     0,     0,     0,   101,   102,   103,   104,     0,   105,
     106,   107,   183,   184,   185,   186,     0,     0,     0,   183,
     184,   185,   186,     0,   188,   189,   190,   191,   192,   193,
     194,   188,     0,     0,   191,   192,   193,   194
};

static const yytype_int16 yycheck[] =
{
      82,    98,    99,   110,     8,     0,    82,     2,     8,    11,
      49,     8,     8,    11,    53,    10,    98,    99,   144,    11,
      11,   133,     3,   135,   136,   137,    28,     8,   110,     0,
       8,   138,     8,   140,   110,     8,    31,    41,    42,    43,
       8,   153,   154,    40,     8,     8,    41,   159,     3,   161,
      45,    51,   134,     8,    49,    53,   138,    35,   140,    32,
      15,    53,    53,    49,    32,     8,    34,    53,   180,    64,
      33,   183,   184,   185,   186,    70,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   211,    41,    42,    43,    44,
      33,    40,    47,    48,    49,     8,   208,   209,     4,     5,
       6,     7,    49,    48,     8,   100,     8,     8,    50,    54,
      16,    17,    18,    19,    20,    21,    22,    64,    48,   231,
      33,     4,     5,    70,    48,    52,    19,    54,   240,    33,
      23,    33,    33,    16,     7,   242,   243,   234,   235,    45,
      46,    49,    35,     3,     8,    18,   253,   142,     8,    55,
       3,   248,   234,   235,    49,     8,     6,     7,    53,    50,
     242,   243,     4,     5,     6,     7,   248,     8,    18,    19,
      55,   253,    11,    23,    16,    17,    18,    19,    20,    21,
      22,     4,     5,     6,     7,    35,    55,    32,    54,     4,
       5,     6,     7,    16,    17,    18,    19,    20,    21,    22,
       3,    16,    54,    45,    46,     8,    50,    12,    11,     8,
      48,    51,    15,    55,    11,     4,     5,     6,     7,    55,
      55,    55,    45,    46,    55,    52,    49,    16,    17,    18,
      19,    20,    21,    22,     4,     5,     6,     7,    41,    42,
      43,    44,    48,    11,    47,    48,    16,    17,    18,    19,
      20,    21,    22,     3,    48,    48,    45,    46,     8,    52,
      49,    54,    48,    11,    48,    15,    48,    48,     4,     5,
       6,     7,    14,    13,    51,    45,    46,     8,     8,    49,
      16,    17,    18,    19,    20,    21,    22,     4,     5,     6,
       7,    41,    42,    43,    44,     8,    49,    47,    48,    16,
      17,    18,    19,    20,    21,    22,    49,     8,    13,    45,
      46,    49,    11,    49,    48,     4,     5,     6,     7,    48,
      11,     4,     5,     6,     7,    28,    54,    16,    45,    46,
      19,    20,    49,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    54,    24,    11,    14,    11,    11,
      11,    45,    16,    17,    18,    19,    20,    21,    22,     6,
      10,    88,    45,    46,    44,    76,    49,   142,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
      -1,    45,    46,    11,    -1,    49,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
      -1,     8,     9,    10,    -1,    -1,    45,    46,    16,    17,
      18,    19,    20,    21,    22,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    41,    42,    43,    45,    46,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    31,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    28,    -1,    30,    -1,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,
      42,    43,     4,     5,     6,     7,    -1,    -1,    -1,     4,
       5,     6,     7,    -1,    16,    17,    18,    19,    20,    21,
      22,    16,    -1,    -1,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    57,    58,    59,    65,    89,    33,
      66,    67,    89,     8,    60,    61,     0,    58,    65,    73,
      74,    89,    58,    73,    40,    33,    67,     8,    68,    69,
      71,    50,    35,    61,    58,    73,    58,    74,     8,    58,
      48,    48,    54,    11,    53,    62,    63,    89,    58,    48,
      49,    70,    77,    89,     3,     8,    69,    51,    63,     8,
      76,    77,    50,    49,    53,     8,    55,    55,    11,    49,
      53,    32,    78,    77,    54,    54,    50,    77,     8,    33,
      79,    80,    12,    75,     3,     8,     3,     8,    78,     8,
      81,    33,    80,     8,     9,    10,    23,    27,    28,    30,
      32,    36,    37,    38,    39,    41,    42,    43,    64,    72,
      83,    84,    85,    86,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    51,    55,    55,    55,    55,    75,
      11,    53,    52,    54,    48,    48,    48,    48,    83,    85,
      83,    33,    87,    88,    89,    11,    11,    11,     3,     8,
      11,    15,    44,    47,    48,    72,   101,    48,    48,    48,
      52,    14,    84,    85,    13,    51,     8,     8,   101,    72,
     101,   101,   101,    27,    31,    33,    88,     8,    71,    90,
      48,   101,   101,     4,     5,     6,     7,    11,    16,    17,
      18,    19,    20,    21,    22,    45,    46,    49,    49,   101,
       8,   101,    13,    55,    49,    49,    49,    49,    48,    48,
      11,    53,    49,    82,   101,    49,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,    49,
      11,    54,    11,    11,    24,    28,   101,   101,    71,    49,
      53,   101,    83,    83,    49,    49,   101,    55,    25,    26,
      29,    11,    11,    83,    11,    11,    26,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    57,    57,    57,    58,
      59,    60,    60,    61,    62,    62,    63,    64,    64,    65,
      65,    66,    66,    67,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    74,    75,    75,
      76,    76,    76,    77,    78,    78,    78,    79,    79,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    89,    90,    90,    91,    92,
      93,    94,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     3,     2,     1,     8,
       3,     2,     1,     4,     2,     1,     3,     3,     3,     3,
       2,     2,     1,     3,     3,     1,     1,     4,     3,     1,
       0,     1,     4,     7,     7,     7,     7,     4,     1,     4,
       7,     1,     3,     3,     4,     2,     1,     9,     4,     3,
       3,     1,     0,     2,     3,     2,     0,     2,     1,     3,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     2,     2,     1,     3,     1,     3,     1,     2,     2,
       2,    10,     8,     8,     7,     7,     5,     5,     4,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 113 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1632 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 118 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1641 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 123 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1650 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock MainBlock  */
#line 128 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1659 "y.tab.c"
    break;

  case 6: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 133 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1668 "y.tab.c"
    break;

  case 7: /* Program: GDeclBlock MainBlock  */
#line 138 "expr_tree.y"
    {

      exit(1);
    }
#line 1677 "y.tab.c"
    break;

  case 8: /* Program: MainBlock  */
#line 143 "expr_tree.y"
    {
      exit(1);
    }
#line 1685 "y.tab.c"
    break;

  case 9: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 151 "expr_tree.y"
    {
  
      // printGST();
      // declare main function
      printf("Generating Assembly Code... \n");
      declareMain();
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-7].string), "main", NULL, (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;

    
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);


    
    }
#line 1714 "y.tab.c"
    break;

  case 13: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 189 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 1722 "y.tab.c"
    break;

  case 14: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 196 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1731 "y.tab.c"
    break;

  case 15: /* FieldDeclList: FieldDecl  */
#line 201 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1739 "y.tab.c"
    break;

  case 16: /* FieldDecl: Type ID SEMICOLON  */
#line 208 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1747 "y.tab.c"
    break;

  case 17: /* Field: Field '.' ID  */
#line 217 "expr_tree.y"
    { 
      insertIntoFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);
      
    }
#line 1757 "y.tab.c"
    break;

  case 18: /* Field: ID '.' ID  */
#line 223 "expr_tree.y"
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * finalTypeNode = makeFieldNode("finalType",NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode((yyvsp[-2].string),rightFieldNode,finalTypeNode);

      // get the LST entry for the variable
      struct LocalSymbolTable * lstEntry = LSTLookup((yyvsp[-2].string));
      // if lst entry is not null
      if(lstEntry != NULL)
      {
        // set the type of the left field node
        leftFieldNode->type = lstEntry->type;
      }
      else
      {
        // get the GST entry for the variable
        struct GlobalSymbolTable * gstEntry = GSTLookup((yyvsp[-2].string));
        // if gst entry is not null
        if(gstEntry != NULL)
        {
          // set the type of the left field node
          leftFieldNode->type = gstEntry->type;
          leftFieldNode->GSTEntry = gstEntry;
        }
        else
        {
          // error
          printf("Error: Variable %s not declared \n", (yyvsp[-2].string));
          exit(1);
        }
      } 
      // get the type of the right field node
      struct Fieldlist * rightType = typeFieldLookup(leftFieldNode->type, (yyvsp[0].string));
      // if right type is null throw error
      if(rightType == NULL)
      {
        printf("Error: Field %s not found in type %s \n", (yyvsp[0].string), leftFieldNode->type->name);
        exit(1);
      }
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      // set the finalTypeNode 's type to rightType's type
      finalTypeNode->type = rightFieldNode->type;
      (yyval.node) = leftFieldNode;


    }
#line 1811 "y.tab.c"
    break;

  case 19: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 276 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1823 "y.tab.c"
    break;

  case 20: /* GDeclBlock: DECL ENDDECL  */
#line 284 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1835 "y.tab.c"
    break;

  case 23: /* GDecl: Type GidList SEMICOLON  */
#line 300 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 1843 "y.tab.c"
    break;

  case 24: /* GidList: GidList ',' Gid  */
#line 307 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1851 "y.tab.c"
    break;

  case 25: /* GidList: Gid  */
#line 311 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1859 "y.tab.c"
    break;

  case 26: /* Gid: identifierDecl  */
#line 317 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 1865 "y.tab.c"
    break;

  case 27: /* Gid: ID '(' GParamList ')'  */
#line 319 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 1876 "y.tab.c"
    break;

  case 28: /* GParamList: GParamList ',' Param  */
#line 329 "expr_tree.y"
    {

      insertIntoTree((yyvsp[-2].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1886 "y.tab.c"
    break;

  case 29: /* GParamList: Param  */
#line 335 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1894 "y.tab.c"
    break;

  case 30: /* GParamList: %empty  */
#line 339 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1902 "y.tab.c"
    break;

  case 31: /* identifierDecl: ID  */
#line 345 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 1910 "y.tab.c"
    break;

  case 32: /* identifierDecl: ID '[' INT ']'  */
#line 349 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 1920 "y.tab.c"
    break;

  case 33: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 355 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1931 "y.tab.c"
    break;

  case 34: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 362 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1943 "y.tab.c"
    break;

  case 35: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 370 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1955 "y.tab.c"
    break;

  case 36: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 378 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1967 "y.tab.c"
    break;

  case 37: /* identifierDecl: ID '[' ID ']'  */
#line 386 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 1977 "y.tab.c"
    break;

  case 38: /* identifierUse: ID  */
#line 397 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 1985 "y.tab.c"
    break;

  case 39: /* identifierUse: ID '[' expr ']'  */
#line 401 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 1995 "y.tab.c"
    break;

  case 40: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 407 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2006 "y.tab.c"
    break;

  case 41: /* identifierUse: Field  */
#line 413 "expr_tree.y"
          {(yyval.node) = (yyvsp[0].node);}
#line 2012 "y.tab.c"
    break;

  case 42: /* identifierUse: INITIALIZE '(' ')'  */
#line 415 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2020 "y.tab.c"
    break;

  case 43: /* identifierUse: ALLOC '(' ')'  */
#line 419 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2028 "y.tab.c"
    break;

  case 44: /* identifierUse: FREE '(' expr ')'  */
#line 423 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2036 "y.tab.c"
    break;

  case 45: /* FDefBlock: FDefBlock FDef  */
#line 435 "expr_tree.y"
      {

      }
#line 2044 "y.tab.c"
    break;

  case 46: /* FDefBlock: FDef  */
#line 439 "expr_tree.y"
      {
      }
#line 2051 "y.tab.c"
    break;

  case 47: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 445 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2061 "y.tab.c"
    break;

  case 48: /* Body: START Slist ReturnStmt END  */
#line 456 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2070 "y.tab.c"
    break;

  case 49: /* Body: START ReturnStmt END  */
#line 461 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 2079 "y.tab.c"
    break;

  case 50: /* ParamList: ParamList ',' Param  */
#line 469 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      insertIntoTree((yyvsp[-2].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2090 "y.tab.c"
    break;

  case 51: /* ParamList: Param  */
#line 476 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2099 "y.tab.c"
    break;

  case 52: /* ParamList: %empty  */
#line 481 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2107 "y.tab.c"
    break;

  case 53: /* Param: Type ID  */
#line 488 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2115 "y.tab.c"
    break;

  case 56: /* LDeclBlock: %empty  */
#line 498 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL);
  }
#line 2123 "y.tab.c"
    break;

  case 59: /* LDecl: ID LIdList SEMICOLON  */
#line 510 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2131 "y.tab.c"
    break;

  case 60: /* LIdList: LIdList ',' ID  */
#line 517 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2140 "y.tab.c"
    break;

  case 61: /* LIdList: ID  */
#line 522 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2149 "y.tab.c"
    break;

  case 62: /* ArgList: ArgList ',' expr  */
#line 533 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2158 "y.tab.c"
    break;

  case 63: /* ArgList: expr  */
#line 538 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2166 "y.tab.c"
    break;

  case 64: /* Slist: Slist Stmt  */
#line 545 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2172 "y.tab.c"
    break;

  case 65: /* Slist: Stmt  */
#line 546 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2178 "y.tab.c"
    break;

  case 78: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 565 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2186 "y.tab.c"
    break;

  case 79: /* ReturnStmt: RETURN SEMICOLON  */
#line 569 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2194 "y.tab.c"
    break;

  case 84: /* Decl: Type VarList SEMICOLON  */
#line 583 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2204 "y.tab.c"
    break;

  case 86: /* VarList: VarList ',' identifierDecl  */
#line 593 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2210 "y.tab.c"
    break;

  case 87: /* VarList: identifierDecl  */
#line 594 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2216 "y.tab.c"
    break;

  case 88: /* brkStmt: BREAK SEMICOLON  */
#line 598 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2222 "y.tab.c"
    break;

  case 89: /* contStmt: CONTINUE SEMICOLON  */
#line 601 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2228 "y.tab.c"
    break;

  case 90: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 604 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2234 "y.tab.c"
    break;

  case 91: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 607 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2240 "y.tab.c"
    break;

  case 92: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 608 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2246 "y.tab.c"
    break;

  case 93: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 611 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2252 "y.tab.c"
    break;

  case 94: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 614 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2258 "y.tab.c"
    break;

  case 95: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 617 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2264 "y.tab.c"
    break;

  case 96: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 620 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2270 "y.tab.c"
    break;

  case 97: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 623 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2276 "y.tab.c"
    break;

  case 98: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 626 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2282 "y.tab.c"
    break;

  case 99: /* expr: expr PLUS expr  */
#line 629 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2288 "y.tab.c"
    break;

  case 100: /* expr: expr MINUS expr  */
#line 630 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2294 "y.tab.c"
    break;

  case 101: /* expr: expr MUL expr  */
#line 631 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2300 "y.tab.c"
    break;

  case 102: /* expr: expr DIV expr  */
#line 632 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2306 "y.tab.c"
    break;

  case 103: /* expr: expr MOD expr  */
#line 633 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2312 "y.tab.c"
    break;

  case 104: /* expr: '(' expr ')'  */
#line 634 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2318 "y.tab.c"
    break;

  case 105: /* expr: INT  */
#line 635 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2324 "y.tab.c"
    break;

  case 106: /* expr: identifierUse  */
#line 636 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2330 "y.tab.c"
    break;

  case 107: /* expr: STRING  */
#line 637 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2336 "y.tab.c"
    break;

  case 108: /* expr: expr LT expr  */
#line 638 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2342 "y.tab.c"
    break;

  case 109: /* expr: expr GT expr  */
#line 639 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2348 "y.tab.c"
    break;

  case 110: /* expr: expr LE expr  */
#line 640 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2354 "y.tab.c"
    break;

  case 111: /* expr: expr GE expr  */
#line 641 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2360 "y.tab.c"
    break;

  case 112: /* expr: expr NE expr  */
#line 642 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2366 "y.tab.c"
    break;

  case 113: /* expr: expr EQ expr  */
#line 643 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2372 "y.tab.c"
    break;

  case 114: /* expr: expr AND expr  */
#line 644 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2378 "y.tab.c"
    break;

  case 115: /* expr: expr OR expr  */
#line 645 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2384 "y.tab.c"
    break;

  case 116: /* expr: NOT expr  */
#line 646 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2390 "y.tab.c"
    break;

  case 117: /* expr: ID '(' ')'  */
#line 647 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2396 "y.tab.c"
    break;

  case 118: /* expr: ID '(' ArgList ')'  */
#line 648 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2402 "y.tab.c"
    break;

  case 119: /* expr: NULLVAL  */
#line 649 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2408 "y.tab.c"
    break;


#line 2412 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 653 "expr_tree.y"


void yyerror(char const *s)
{
    printf("yyerror %s : %s\n",s, yytext);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w");
  // Initializing Type Table
  typeTableCreate();
  _INIT_STATE = _FALSE;
  // stack
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  // heap
  _HEAP_POINTER = _INITIAL_HEAP_POINTER;
  // initializing current line number
  _CURRENT_LINE =2;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
