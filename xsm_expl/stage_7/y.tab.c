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
    CLASS = 300,                   /* CLASS  */
    ENDCLASS = 301,                /* ENDCLASS  */
    EXTENDS = 302,                 /* EXTENDS  */
    NEW = 303,                     /* NEW  */
    DELETE = 304,                  /* DELETE  */
    SELF = 305,                    /* SELF  */
    AND = 306,                     /* AND  */
    OR = 307,                      /* OR  */
    NOT = 308                      /* NOT  */
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
#define CLASS 300
#define ENDCLASS 301
#define EXTENDS 302
#define NEW 303
#define DELETE 304
#define SELF 305
#define AND 306
#define OR 307
#define NOT 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 81 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;

#line 318 "y.tab.c"

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
  YYSYMBOL_CLASS = 45,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 46,                  /* ENDCLASS  */
  YYSYMBOL_EXTENDS = 47,                   /* EXTENDS  */
  YYSYMBOL_NEW = 48,                       /* NEW  */
  YYSYMBOL_DELETE = 49,                    /* DELETE  */
  YYSYMBOL_SELF = 50,                      /* SELF  */
  YYSYMBOL_AND = 51,                       /* AND  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_NOT = 53,                       /* NOT  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_61_ = 61,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_Program = 63,                   /* Program  */
  YYSYMBOL_MainBlock = 64,                 /* MainBlock  */
  YYSYMBOL_ClassDefBlock = 65,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 66,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 67,                  /* ClassDef  */
  YYSYMBOL_ClassName = 68,                 /* ClassName  */
  YYSYMBOL_ClassFieldLists = 69,           /* ClassFieldLists  */
  YYSYMBOL_ClassFieldDecl = 70,            /* ClassFieldDecl  */
  YYSYMBOL_ClassMethodDeclList = 71,       /* ClassMethodDeclList  */
  YYSYMBOL_ClassMethodDecl = 72,           /* ClassMethodDecl  */
  YYSYMBOL_ClassMethodDefns = 73,          /* ClassMethodDefns  */
  YYSYMBOL_ClassFunctionDef = 74,          /* ClassFunctionDef  */
  YYSYMBOL_ClassFunctionBody = 75,         /* ClassFunctionBody  */
  YYSYMBOL_ClassStmt = 76,                 /* ClassStmt  */
  YYSYMBOL_InsideClassStmt = 77,           /* InsideClassStmt  */
  YYSYMBOL_OutsideClassStmt = 78,          /* OutsideClassStmt  */
  YYSYMBOL_ClassField = 79,                /* ClassField  */
  YYSYMBOL_ClassFieldFunction = 80,        /* ClassFieldFunction  */
  YYSYMBOL_ClassArgList = 81,              /* ClassArgList  */
  YYSYMBOL_TypeDefBlock = 82,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 83,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 84,                   /* TypeDef  */
  YYSYMBOL_TypeFieldDeclList = 85,         /* TypeFieldDeclList  */
  YYSYMBOL_TypeFieldDecl = 86,             /* TypeFieldDecl  */
  YYSYMBOL_TypeField = 87,                 /* TypeField  */
  YYSYMBOL_GDeclBlock = 88,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 89,                 /* GDeclList  */
  YYSYMBOL_GDecl = 90,                     /* GDecl  */
  YYSYMBOL_GidList = 91,                   /* GidList  */
  YYSYMBOL_Gid = 92,                       /* Gid  */
  YYSYMBOL_GParamList = 93,                /* GParamList  */
  YYSYMBOL_identifierDecl = 94,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 95,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 96,                 /* FDefBlock  */
  YYSYMBOL_FDef = 97,                      /* FDef  */
  YYSYMBOL_Body = 98,                      /* Body  */
  YYSYMBOL_ParamList = 99,                 /* ParamList  */
  YYSYMBOL_Param = 100,                    /* Param  */
  YYSYMBOL_LDeclBlock = 101,               /* LDeclBlock  */
  YYSYMBOL_LDecList = 102,                 /* LDecList  */
  YYSYMBOL_LDecl = 103,                    /* LDecl  */
  YYSYMBOL_LIdList = 104,                  /* LIdList  */
  YYSYMBOL_ArgList = 105,                  /* ArgList  */
  YYSYMBOL_Slist = 106,                    /* Slist  */
  YYSYMBOL_Stmt = 107,                     /* Stmt  */
  YYSYMBOL_ReturnStmt = 108,               /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 109,                 /* DeclStmt  */
  YYSYMBOL_DeclList = 110,                 /* DeclList  */
  YYSYMBOL_Decl = 111,                     /* Decl  */
  YYSYMBOL_Type = 112,                     /* Type  */
  YYSYMBOL_VarList = 113,                  /* VarList  */
  YYSYMBOL_brkStmt = 114,                  /* brkStmt  */
  YYSYMBOL_contStmt = 115,                 /* contStmt  */
  YYSYMBOL_brkpointStmt = 116,             /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 117,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 118,                /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 119,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 120,              /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 121,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 122,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 123,                  /* AsgStmt  */
  YYSYMBOL_expr = 124                      /* expr  */
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
#define YYLAST   830

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      54,    55,     2,     2,    59,     2,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   113,   113,   117,   122,   127,   132,   137,   142,   147,
     155,   185,   188,   189,   193,   197,   198,   202,   203,   207,
     211,   212,   216,   220,   221,   226,   230,   231,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   253,   254,   255,   256,   260,   261,   265,   266,   270,
     271,   272,   276,   277,   281,   285,   286,   290,   297,   302,
     309,   318,   324,   373,   381,   392,   393,   397,   404,   408,
     415,   416,   426,   432,   437,   442,   446,   452,   459,   467,
     475,   483,   494,   498,   504,   511,   512,   516,   520,   532,
     536,   542,   553,   558,   566,   573,   579,   585,   593,   594,
     602,   603,   606,   613,   618,   629,   634,   642,   643,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   664,   668,   675,   676,   678,   679,   682,   690,
     693,   694,   698,   701,   704,   707,   708,   711,   714,   717,
     720,   723,   726,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751
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
  "RETURN", "MAIN", "INITIALIZE", "ALLOC", "FREE", "NULLVAL", "CLASS",
  "ENDCLASS", "EXTENDS", "NEW", "DELETE", "SELF", "AND", "OR", "NOT",
  "'('", "')'", "'{'", "'}'", "'.'", "','", "'['", "']'", "$accept",
  "Program", "MainBlock", "ClassDefBlock", "ClassDefList", "ClassDef",
  "ClassName", "ClassFieldLists", "ClassFieldDecl", "ClassMethodDeclList",
  "ClassMethodDecl", "ClassMethodDefns", "ClassFunctionDef",
  "ClassFunctionBody", "ClassStmt", "InsideClassStmt", "OutsideClassStmt",
  "ClassField", "ClassFieldFunction", "ClassArgList", "TypeDefBlock",
  "TypeDefList", "TypeDef", "TypeFieldDeclList", "TypeFieldDecl",
  "TypeField", "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid",
  "GParamList", "identifierDecl", "identifierUse", "FDefBlock", "FDef",
  "Body", "ParamList", "Param", "LDeclBlock", "LDecList", "LDecl",
  "LIdList", "ArgList", "Slist", "Stmt", "ReturnStmt", "DeclStmt",
  "DeclList", "Decl", "Type", "VarList", "brkStmt", "contStmt",
  "brkpointStmt", "Ifstmt", "Whilestmt", "RepeatStmt", "DoWhileStmt",
  "InputStmt", "OutputStmt", "AsgStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,  -193,    33,    27,    17,  -193,    45,    43,    52,  -193,
     102,  -193,    55,    74,    37,  -193,  -193,   181,  -193,   192,
      43,    43,  -193,    41,  -193,    43,   112,  -193,  -193,    53,
      23,  -193,  -193,    43,  -193,  -193,   156,    13,  -193,   179,
      43,  -193,    43,  -193,  -193,   183,  -193,   189,    43,    29,
    -193,    55,    11,  -193,   277,   278,  -193,  -193,   252,    43,
     279,  -193,    43,   243,   149,  -193,   298,   253,   254,  -193,
    -193,  -193,   332,  -193,    43,  -193,   271,  -193,   297,  -193,
      43,  -193,   285,   290,  -193,    43,  -193,   336,   324,    43,
     134,   363,  -193,   111,   173,  -193,   154,  -193,   374,   372,
     297,  -193,   380,  -193,   164,  -193,   743,   338,   328,   331,
     341,   343,    43,  -193,   388,     1,  -193,   363,  -193,    28,
    -193,  -193,   200,   349,   351,   352,   353,   743,   743,   177,
     397,   398,   410,    90,   369,   371,   377,   378,  -193,   370,
     421,   743,  -193,   420,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
      16,  -193,   429,   384,    43,   382,  -193,   432,   434,   449,
     153,   449,   449,   449,   768,  -193,   668,  -193,   190,  -193,
     435,  -193,  -193,  -193,  -193,   157,  -193,  -193,  -193,   386,
     449,   449,   389,  -193,  -193,   533,   395,   396,   449,   403,
     446,   376,  -193,   442,  -193,  -193,  -193,   402,   310,  -193,
    -193,  -193,     9,   404,   250,   257,   276,   411,   412,  -193,
    -193,   408,  -193,    32,   197,   450,   462,   808,   316,   463,
     449,   449,   449,   449,  -193,   449,   449,   449,   449,   449,
     449,   449,   449,   449,  -193,  -193,   335,   422,    48,  -193,
     424,   552,  -193,    43,   468,   425,   471,   473,   464,   461,
     449,   449,  -193,   435,  -193,   311,   590,   443,   444,  -193,
     447,  -193,  -193,    95,    95,  -193,   526,   526,   215,   215,
     284,   284,   808,   808,  -193,   492,   493,   497,   498,  -193,
     317,  -193,   449,  -193,  -193,   743,   743,   342,   394,  -193,
    -193,   449,   449,   449,   449,  -193,  -193,  -193,   452,   454,
     132,   643,   693,   171,   500,   590,   318,   590,   319,   326,
     501,   297,  -193,   743,   504,   506,  -193,  -193,  -193,   449,
    -193,  -193,  -193,   607,   718,  -193,  -193,   590,   465,   486,
    -193,  -193,     6,   494,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,   509,   403,  -193,  -193,
     419,   433,  -193,   158,   467,   571,   472,   523,   553,  -193,
     554,  -193,   505,   510,   530,   555,  -193,  -193
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   129,     0,     0,     0,     9,     0,     0,     0,    64,
       0,    66,     0,     0,     0,    56,     1,     0,     6,     0,
       0,     0,    90,     0,     8,     0,     0,    63,    65,    75,
       0,    69,    70,     0,    54,    55,    15,     0,    13,     0,
       0,     4,     0,     5,    89,     0,     7,     0,    74,     0,
      67,     0,     0,    59,     0,     0,    11,    12,     0,     0,
       0,     3,    96,     0,     0,    73,     0,     0,     0,    68,
      57,    58,     0,    16,     0,     2,     0,    95,     0,    71,
       0,    97,    76,    81,    60,     0,    18,     0,     0,     0,
       0,     0,    72,     0,     0,    17,     0,    21,     0,     0,
       0,    94,     0,    99,     0,   101,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    19,     0,   104,     0,
      98,   100,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,    85,
       0,     0,   108,   120,   119,   114,   115,   116,   112,   113,
     117,   118,   109,   110,   111,    10,    77,    79,    78,    80,
       0,    24,     0,     0,    96,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,   120,     0,   125,     0,   127,
       0,   132,   134,   133,   149,    82,   123,   151,   163,     0,
       0,     0,   164,   165,   150,     0,     0,     0,     0,     0,
       0,     0,   107,   120,    93,    14,    23,     0,     0,    91,
     103,    62,     0,     0,     0,     0,     0,     0,     0,   124,
     126,    75,   131,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,    61,
       0,     0,    92,    96,     0,    83,     0,     0,     0,     0,
       0,     0,   128,     0,   161,     0,   106,    62,    47,   148,
      48,   145,   146,   143,   144,   147,   153,   152,   155,   154,
     156,   157,   158,   159,    88,     0,     0,     0,     0,   142,
       0,    22,     0,   140,   141,     0,     0,     0,     0,   130,
     162,     0,     0,     0,     0,    47,    46,    48,     0,     0,
       0,     0,     0,     0,     0,   105,     0,    53,     0,     0,
       0,     0,    84,     0,     0,     0,   139,   138,    50,     0,
      49,    51,    45,     0,     0,   136,   137,    52,     0,     0,
      27,    40,     0,     0,    39,    38,    33,    34,    35,    31,
      32,    36,    37,    28,    29,    30,     0,     0,    25,    26,
       0,     0,   135,     0,     0,     0,     0,     0,     0,    41,
       0,    44,     0,     0,     0,     0,    42,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,   150,  -193,  -193,   527,  -193,  -193,   482,  -193,
     483,  -193,   423,  -193,   241,  -193,  -193,  -192,  -193,  -145,
    -193,  -193,   567,  -193,   534,  -193,    89,  -193,   588,  -193,
     548,  -193,  -169,  -105,   148,    25,   484,  -156,    -1,   -96,
    -193,   496,  -193,  -193,  -122,  -132,  -103,  -170,  -193,   427,
       0,  -193,  -107,  -106,   -91,   -90,   -74,   -26,   -23,   -22,
     -15,   -14,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,    19,    37,    38,    39,    85,    86,    96,
      97,   160,   161,   339,   340,   341,   138,   192,   193,   316,
       6,    14,    15,    52,    53,   139,     7,    10,    11,    30,
      31,    64,    32,   194,    21,    22,   107,    76,    77,    91,
     104,   105,   119,   265,   141,   142,   175,   144,   178,   179,
      23,   223,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   317
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   140,    12,   143,   117,   174,   176,   248,   208,   202,
      12,   222,   116,   230,   231,   232,   233,    16,   195,     1,
     360,    36,   140,   140,     1,   235,   236,   237,   238,   239,
     240,   241,    67,    54,    50,    13,   140,    68,   203,   166,
      60,     1,   202,   262,   202,    13,    44,    65,    66,    45,
      44,     1,    54,     1,   212,   164,   214,   215,   216,    56,
     242,   243,    66,    29,   287,   213,     9,    44,    70,   140,
     255,   140,    34,   205,    87,   227,   228,     2,     1,    92,
      66,    26,    51,   246,    44,    98,   251,   167,   101,    66,
      17,   263,    26,   184,   299,    20,   114,   290,   185,   230,
     231,   186,     2,   286,     3,   187,   287,    48,    40,   266,
       1,   235,   162,    49,   108,   271,   272,   273,   274,   109,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   180,
      33,   134,   135,   136,   188,    27,   230,   231,   232,   233,
     189,   342,   102,   190,   191,   297,   298,   342,   235,   236,
     237,   238,   239,   240,   241,    25,    18,    24,   318,   319,
     162,   122,     1,   345,    66,   363,    47,   103,    42,   345,
      41,    43,   102,   311,   312,    46,   110,   310,   180,   202,
     202,   111,   326,   242,   243,     1,   315,   112,    59,    36,
     140,   140,    61,   322,   134,   135,   136,   120,     1,   296,
     184,   334,   202,    55,    79,   185,   140,   140,    80,    75,
     177,   224,   187,   367,   337,   225,   287,   169,   140,   230,
     231,   232,   233,   219,     2,   333,   346,   347,   343,   140,
     344,   235,   346,   347,   343,    58,   344,    62,   134,   135,
     136,   188,   348,   349,    63,   365,   251,   189,   348,   349,
     190,   191,   264,    66,   230,   231,   232,   233,   168,   350,
     169,   230,   231,   232,   233,   350,   235,   236,   237,   238,
     239,   240,   241,   235,   236,   237,   238,   239,   240,   241,
     230,   231,   232,   233,    74,    72,    73,    45,   230,   231,
     232,   233,   235,   236,   237,   238,   239,   240,   241,    78,
     235,   242,   243,   238,   239,   257,    81,   351,   242,   243,
     352,   353,   258,   351,    82,    83,   352,   353,   354,   355,
     230,   231,   232,   233,   354,   355,    88,   242,   243,    90,
      89,   259,   235,   236,   237,   238,   239,   240,   241,   230,
     231,   232,   233,    84,    99,    93,   230,   231,   232,   233,
      94,   235,   236,   237,   238,   239,   240,   241,   235,   236,
     237,   238,   239,   240,   241,   254,   300,   242,   243,    89,
     301,   269,   309,   328,   330,   106,    89,   329,   329,   184,
     100,   331,   115,   116,   185,   329,   242,   243,   118,   156,
     284,   187,   157,   242,   243,   155,   163,   313,   230,   231,
     232,   233,   158,   170,   159,   171,   172,   173,   181,   182,
     235,   236,   237,   238,   239,   240,   241,   134,   135,   136,
     188,   183,   184,   196,   250,   197,   189,   185,   200,   190,
     191,   198,   199,   204,   187,   201,   184,   207,   164,   209,
     210,   185,   211,   221,   226,   242,   243,   229,   187,   314,
     244,   245,   184,   247,   249,   252,   253,   185,   267,   256,
     134,   135,   136,   188,   187,   260,   261,   364,    49,   189,
     268,   270,   190,   191,   134,   135,   136,   188,   288,   291,
     285,   366,   293,   189,   294,   292,   190,   191,   295,   296,
     134,   135,   136,   188,   122,   123,   124,   302,   303,   189,
     305,   304,   190,   191,   306,   307,   308,   320,   361,   125,
     321,   327,   332,   126,   127,   335,   128,   336,   129,   357,
     362,   368,   130,   131,   132,   133,   370,   134,   135,   136,
     230,   231,   232,   233,   371,   338,   247,   230,   231,   232,
     233,   376,   235,   358,   234,   238,   239,   240,   241,   235,
     236,   237,   238,   239,   240,   241,   230,   231,   232,   233,
     374,   372,   373,   289,    57,   375,   377,    95,   235,   236,
     237,   238,   239,   240,   241,   230,   231,   232,   233,   113,
     359,    35,   369,   206,   242,   243,    71,   235,   236,   237,
     238,   239,   240,   241,   230,   231,   232,   233,    28,    69,
     121,   165,     0,   242,   243,   220,   235,   236,   237,   238,
     239,   240,   241,     0,     0,   122,   123,   124,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,   126,   127,     0,   128,     0,   129,
       0,   242,   243,   130,   131,   132,   133,     0,   134,   135,
     136,   122,   123,   124,     0,     0,   338,   247,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,   323,   324,
     126,   127,     0,   128,     0,   129,   122,   123,   124,   130,
     131,   132,   133,     0,   134,   135,   136,     0,     0,     0,
       0,   125,   137,     0,     0,   126,   127,     0,   128,   218,
     129,   122,   123,   124,   130,   131,   132,   133,     0,   134,
     135,   136,     0,     0,     0,     0,   125,   137,     0,     0,
     126,   127,   325,   128,     0,   129,   122,   123,   124,   130,
     131,   132,   133,     0,   134,   135,   136,     0,     0,     0,
       0,   125,   137,     0,   356,   126,   127,     0,   128,     0,
     129,   122,   123,   124,   130,   131,   132,   133,     0,   134,
     135,   136,     0,     0,     0,     0,   125,   137,     0,     0,
     126,   127,     0,   128,     0,   129,   122,   123,   124,   130,
     131,   132,   133,     0,   134,   135,   136,     0,     0,     0,
       0,   125,   137,     0,     0,   217,   127,     0,   128,     0,
     129,     0,     0,     0,   130,   131,   132,   133,     0,   134,
     135,   136,   230,   231,   232,   233,     0,   137,     0,     0,
       0,     0,     0,     0,   235,   236,   237,   238,   239,   240,
     241
};

static const yytype_int16 yycheck[] =
{
       0,   106,     2,   106,   100,   127,   128,   199,   164,   141,
      10,   180,    11,     4,     5,     6,     7,     0,   133,     8,
      14,     8,   127,   128,     8,    16,    17,    18,    19,    20,
      21,    22,     3,    33,    11,     8,   141,     8,   141,    11,
      40,     8,   174,    11,   176,     8,    21,    48,    48,     8,
      25,     8,    52,     8,   169,    54,   171,   172,   173,    46,
      51,    52,    62,     8,    58,   170,    33,    42,    57,   174,
      61,   176,    35,    57,    74,   190,   191,    32,     8,    80,
      80,    40,    59,   198,    59,    85,   201,    59,    89,    89,
      45,    59,    40,     3,   263,     6,    96,   253,     8,     4,
       5,    11,    32,    55,    34,    15,    58,    54,    19,   224,
       8,    16,   112,    60,     3,   230,   231,   232,   233,     8,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   129,
      56,    41,    42,    43,    44,    33,     4,     5,     6,     7,
      50,   333,     8,    53,    54,   260,   261,   339,    16,    17,
      18,    19,    20,    21,    22,     7,     6,     7,   303,   304,
     160,     8,     8,   333,   164,   357,    54,    33,    20,   339,
      20,    21,     8,   295,   296,    25,     3,   292,   178,   311,
     312,     8,    11,    51,    52,     8,   301,    33,    40,     8,
     295,   296,    42,    61,    41,    42,    43,    33,     8,    28,
       3,   323,   334,    47,    55,     8,   311,   312,    59,    59,
      33,    54,    15,    55,   329,    58,    58,    60,   323,     4,
       5,     6,     7,    33,    32,   321,   333,   333,   333,   334,
     333,    16,   339,   339,   339,    56,   339,    54,    41,    42,
      43,    44,   333,   333,    55,   360,   361,    50,   339,   339,
      53,    54,    55,   253,     4,     5,     6,     7,    58,   333,
      60,     4,     5,     6,     7,   339,    16,    17,    18,    19,
      20,    21,    22,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    32,     8,     8,     8,     4,     5,
       6,     7,    16,    17,    18,    19,    20,    21,    22,    56,
      16,    51,    52,    19,    20,    55,     8,   333,    51,    52,
     333,   333,    55,   339,    61,    61,   339,   339,   333,   333,
       4,     5,     6,     7,   339,   339,    55,    51,    52,    32,
      59,    55,    16,    17,    18,    19,    20,    21,    22,     4,
       5,     6,     7,    11,     8,    60,     4,     5,     6,     7,
      60,    16,    17,    18,    19,    20,    21,    22,    16,    17,
      18,    19,    20,    21,    22,    55,    55,    51,    52,    59,
      59,    55,    55,    55,    55,    12,    59,    59,    59,     3,
      56,    55,     8,    11,     8,    59,    51,    52,     8,    61,
      55,    15,    61,    51,    52,    57,     8,    55,     4,     5,
       6,     7,    61,    54,    61,    54,    54,    54,    11,    11,
      16,    17,    18,    19,    20,    21,    22,    41,    42,    43,
      44,    11,     3,    54,    48,    54,    50,     8,    58,    53,
      54,    54,    54,    13,    15,    14,     3,     8,    54,    57,
       8,     8,     8,     8,    58,    51,    52,    58,    15,    55,
      55,    55,     3,    50,     8,    13,    54,     8,     8,    55,
      41,    42,    43,    44,    15,    54,    54,    48,    60,    50,
       8,     8,    53,    54,    41,    42,    43,    44,    54,    11,
      58,    48,    11,    50,    11,    60,    53,    54,    24,    28,
      41,    42,    43,    44,     8,     9,    10,    54,    54,    50,
       8,    54,    53,    54,    11,     8,     8,    55,    14,    23,
      56,    11,    11,    27,    28,    11,    30,    11,    32,    54,
      11,    54,    36,    37,    38,    39,    54,    41,    42,    43,
       4,     5,     6,     7,    11,    49,    50,     4,     5,     6,
       7,    11,    16,    57,    11,    19,    20,    21,    22,    16,
      17,    18,    19,    20,    21,    22,     4,     5,     6,     7,
      55,     8,     8,    11,    37,    55,    11,    85,    16,    17,
      18,    19,    20,    21,    22,     4,     5,     6,     7,    96,
     339,    14,    11,   160,    51,    52,    52,    16,    17,    18,
      19,    20,    21,    22,     4,     5,     6,     7,    10,    51,
     104,   117,    -1,    51,    52,   178,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    51,    52,    36,    37,    38,    39,    -1,    41,    42,
      43,     8,     9,    10,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    23,    49,    -1,    -1,    27,    28,    -1,    30,    31,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    23,    49,    -1,    -1,
      27,    28,    29,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    23,    49,    -1,    26,    27,    28,    -1,    30,    -1,
      32,     8,     9,    10,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    23,    49,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,     8,     9,    10,    36,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    23,    49,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,
      42,    43,     4,     5,     6,     7,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    63,    64,    82,    88,   112,    33,
      89,    90,   112,     8,    83,    84,     0,    45,    64,    65,
      88,    96,    97,   112,    64,    96,    40,    33,    90,     8,
      91,    92,    94,    56,    35,    84,     8,    66,    67,    68,
      88,    64,    96,    64,    97,     8,    64,    54,    54,    60,
      11,    59,    85,    86,   112,    47,    46,    67,    56,    96,
     112,    64,    54,    55,    93,   100,   112,     3,     8,    92,
      57,    86,     8,     8,    32,    64,    99,   100,    56,    55,
      59,     8,    61,    61,    11,    69,    70,   112,    55,    59,
      32,   101,   100,    60,    60,    70,    71,    72,   112,     8,
      56,   100,     8,    33,   102,   103,    12,    98,     3,     8,
       3,     8,    33,    72,   112,     8,    11,   101,     8,   104,
      33,   103,     8,     9,    10,    23,    27,    28,    30,    32,
      36,    37,    38,    39,    41,    42,    43,    49,    78,    87,
      95,   106,   107,   108,   109,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    57,    61,    61,    61,    61,
      73,    74,   112,     8,    54,    98,    11,    59,    58,    60,
      54,    54,    54,    54,   106,   108,   106,    33,   110,   111,
     112,    11,    11,    11,     3,     8,    11,    15,    44,    50,
      53,    54,    79,    80,    95,   124,    54,    54,    54,    54,
      58,    14,   107,   108,    13,    57,    74,     8,    99,    57,
       8,     8,   124,    95,   124,   124,   124,    27,    31,    33,
     111,     8,    94,   113,    54,    58,    58,   124,   124,    58,
       4,     5,     6,     7,    11,    16,    17,    18,    19,    20,
      21,    22,    51,    52,    55,    55,   124,    50,    79,     8,
      48,   124,    13,    54,    55,    61,    55,    55,    55,    55,
      54,    54,    11,    59,    55,   105,   124,     8,     8,    55,
       8,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,    55,    58,    55,    58,    54,    11,
      99,    11,    60,    11,    11,    24,    28,   124,   124,    94,
      55,    59,    54,    54,    54,     8,    11,     8,     8,    55,
     124,   106,   106,    55,    55,   124,    81,   124,    81,    81,
      55,    56,    61,    25,    26,    29,    11,    11,    55,    59,
      55,    55,    11,   101,   106,    11,    11,   124,    49,    75,
      76,    77,    79,    95,   108,   109,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    26,    54,    57,    76,
      14,    14,    11,    79,    48,   124,    48,    55,    54,    11,
      54,    11,     8,     8,    55,    55,    11,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    73,    73,    74,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    81,    81,    82,    83,    83,    84,    85,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    98,    98,    99,    99,    99,   100,   101,   101,
     102,   102,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   112,
     113,   113,   114,   115,   116,   117,   117,   118,   119,   120,
     121,   122,   123,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     2,     3,     2,     1,
       8,     3,     2,     1,     8,     1,     3,     2,     1,     3,
       2,     1,     6,     2,     1,     9,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     7,     7,     5,     7,     5,     3,     3,     6,
       6,     6,     3,     1,     3,     2,     1,     4,     2,     1,
       3,     3,     3,     3,     2,     2,     1,     3,     3,     1,
       1,     4,     3,     1,     0,     1,     4,     7,     7,     7,
       7,     4,     1,     4,     7,     1,     3,     3,     4,     2,
       1,     9,     4,     3,     3,     1,     0,     2,     3,     2,
       2,     1,     3,     3,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     2,     2,     1,     3,     1,
       3,     1,     2,     2,     2,    10,     8,     8,     7,     7,
       5,     5,     4,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     4,     1,     1,     1
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
  case 2: /* Program: TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 114 "expr_tree.y"
    {
      exit(1);
    }
#line 1770 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 118 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1779 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 123 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1788 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 128 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1797 "y.tab.c"
    break;

  case 6: /* Program: TypeDefBlock MainBlock  */
#line 133 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1806 "y.tab.c"
    break;

  case 7: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 138 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1815 "y.tab.c"
    break;

  case 8: /* Program: GDeclBlock MainBlock  */
#line 143 "expr_tree.y"
    {

      exit(1);
    }
#line 1824 "y.tab.c"
    break;

  case 9: /* Program: MainBlock  */
#line 148 "expr_tree.y"
    {
      exit(1);
    }
#line 1832 "y.tab.c"
    break;

  case 10: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 156 "expr_tree.y"
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
#line 1861 "y.tab.c"
    break;

  case 57: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 291 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 1869 "y.tab.c"
    break;

  case 58: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 298 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1878 "y.tab.c"
    break;

  case 59: /* TypeFieldDeclList: TypeFieldDecl  */
#line 303 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1886 "y.tab.c"
    break;

  case 60: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 310 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1894 "y.tab.c"
    break;

  case 61: /* TypeField: TypeField '.' ID  */
#line 319 "expr_tree.y"
    { 
      insertIntoFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);
      
    }
#line 1904 "y.tab.c"
    break;

  case 62: /* TypeField: ID '.' ID  */
#line 325 "expr_tree.y"
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode((yyvsp[-2].string),rightFieldNode,NULL);

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
        }
        else
        {
          // error
          printf("Error: Variable %s not declared \n", (yyvsp[-2].string));
          exit(1);
        }
      } 
      // get the type of the right field node
      struct FieldList * rightType = typeFieldLookup(leftFieldNode->type, (yyvsp[0].string));
      // if right type is null throw error
      if(rightType == NULL)
      {
        printf("Error: Field %s not found in type %s \n", (yyvsp[0].string), leftFieldNode->type->name);
        exit(1);
      }
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      (yyval.node) = leftFieldNode;


    }
#line 1954 "y.tab.c"
    break;

  case 63: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 374 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1966 "y.tab.c"
    break;

  case 64: /* GDeclBlock: DECL ENDDECL  */
#line 382 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 1978 "y.tab.c"
    break;

  case 67: /* GDecl: Type GidList SEMICOLON  */
#line 398 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 1986 "y.tab.c"
    break;

  case 68: /* GidList: GidList ',' Gid  */
#line 405 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 1994 "y.tab.c"
    break;

  case 69: /* GidList: Gid  */
#line 409 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2002 "y.tab.c"
    break;

  case 70: /* Gid: identifierDecl  */
#line 415 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2008 "y.tab.c"
    break;

  case 71: /* Gid: ID '(' GParamList ')'  */
#line 417 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2019 "y.tab.c"
    break;

  case 72: /* GParamList: GParamList ',' Param  */
#line 427 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2029 "y.tab.c"
    break;

  case 73: /* GParamList: Param  */
#line 433 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2037 "y.tab.c"
    break;

  case 74: /* GParamList: %empty  */
#line 437 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2045 "y.tab.c"
    break;

  case 75: /* identifierDecl: ID  */
#line 443 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2053 "y.tab.c"
    break;

  case 76: /* identifierDecl: ID '[' INT ']'  */
#line 447 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2063 "y.tab.c"
    break;

  case 77: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 453 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2074 "y.tab.c"
    break;

  case 78: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 460 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2086 "y.tab.c"
    break;

  case 79: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 468 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2098 "y.tab.c"
    break;

  case 80: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 476 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2110 "y.tab.c"
    break;

  case 81: /* identifierDecl: ID '[' ID ']'  */
#line 484 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2120 "y.tab.c"
    break;

  case 82: /* identifierUse: ID  */
#line 495 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2128 "y.tab.c"
    break;

  case 83: /* identifierUse: ID '[' expr ']'  */
#line 499 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2138 "y.tab.c"
    break;

  case 84: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 505 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2149 "y.tab.c"
    break;

  case 85: /* identifierUse: TypeField  */
#line 511 "expr_tree.y"
              {(yyval.node) = (yyvsp[0].node);}
#line 2155 "y.tab.c"
    break;

  case 86: /* identifierUse: INITIALIZE '(' ')'  */
#line 513 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2163 "y.tab.c"
    break;

  case 87: /* identifierUse: ALLOC '(' ')'  */
#line 517 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2171 "y.tab.c"
    break;

  case 88: /* identifierUse: FREE '(' expr ')'  */
#line 521 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2179 "y.tab.c"
    break;

  case 89: /* FDefBlock: FDefBlock FDef  */
#line 533 "expr_tree.y"
      {

      }
#line 2187 "y.tab.c"
    break;

  case 90: /* FDefBlock: FDef  */
#line 537 "expr_tree.y"
      {
      }
#line 2194 "y.tab.c"
    break;

  case 91: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 543 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2204 "y.tab.c"
    break;

  case 92: /* Body: START Slist ReturnStmt END  */
#line 554 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2213 "y.tab.c"
    break;

  case 93: /* Body: START ReturnStmt END  */
#line 559 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[0].node),NULL);
      (yyval.node) = NULL;
    }
#line 2222 "y.tab.c"
    break;

  case 94: /* ParamList: ParamList ',' Param  */
#line 567 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2233 "y.tab.c"
    break;

  case 95: /* ParamList: Param  */
#line 574 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2242 "y.tab.c"
    break;

  case 96: /* ParamList: %empty  */
#line 579 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2250 "y.tab.c"
    break;

  case 97: /* Param: Type ID  */
#line 586 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2258 "y.tab.c"
    break;

  case 99: /* LDeclBlock: DECL ENDDECL  */
#line 595 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL);
  }
#line 2266 "y.tab.c"
    break;

  case 102: /* LDecl: ID LIdList SEMICOLON  */
#line 607 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2274 "y.tab.c"
    break;

  case 103: /* LIdList: LIdList ',' ID  */
#line 614 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2283 "y.tab.c"
    break;

  case 104: /* LIdList: ID  */
#line 619 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2292 "y.tab.c"
    break;

  case 105: /* ArgList: ArgList ',' expr  */
#line 630 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2301 "y.tab.c"
    break;

  case 106: /* ArgList: expr  */
#line 635 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2309 "y.tab.c"
    break;

  case 107: /* Slist: Slist Stmt  */
#line 642 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2315 "y.tab.c"
    break;

  case 108: /* Slist: Stmt  */
#line 643 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2321 "y.tab.c"
    break;

  case 122: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 665 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2329 "y.tab.c"
    break;

  case 123: /* ReturnStmt: RETURN SEMICOLON  */
#line 669 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2337 "y.tab.c"
    break;

  case 128: /* Decl: Type VarList SEMICOLON  */
#line 683 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2347 "y.tab.c"
    break;

  case 130: /* VarList: VarList ',' identifierDecl  */
#line 693 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2353 "y.tab.c"
    break;

  case 131: /* VarList: identifierDecl  */
#line 694 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2359 "y.tab.c"
    break;

  case 132: /* brkStmt: BREAK SEMICOLON  */
#line 698 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2365 "y.tab.c"
    break;

  case 133: /* contStmt: CONTINUE SEMICOLON  */
#line 701 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2371 "y.tab.c"
    break;

  case 134: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 704 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2377 "y.tab.c"
    break;

  case 135: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 707 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2383 "y.tab.c"
    break;

  case 136: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 708 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2389 "y.tab.c"
    break;

  case 137: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 711 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2395 "y.tab.c"
    break;

  case 138: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 714 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2401 "y.tab.c"
    break;

  case 139: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 717 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2407 "y.tab.c"
    break;

  case 140: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 720 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2413 "y.tab.c"
    break;

  case 141: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 723 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2419 "y.tab.c"
    break;

  case 142: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 726 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2425 "y.tab.c"
    break;

  case 143: /* expr: expr PLUS expr  */
#line 729 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2431 "y.tab.c"
    break;

  case 144: /* expr: expr MINUS expr  */
#line 730 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2437 "y.tab.c"
    break;

  case 145: /* expr: expr MUL expr  */
#line 731 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2443 "y.tab.c"
    break;

  case 146: /* expr: expr DIV expr  */
#line 732 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2449 "y.tab.c"
    break;

  case 147: /* expr: expr MOD expr  */
#line 733 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2455 "y.tab.c"
    break;

  case 148: /* expr: '(' expr ')'  */
#line 734 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2461 "y.tab.c"
    break;

  case 149: /* expr: INT  */
#line 735 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2467 "y.tab.c"
    break;

  case 150: /* expr: identifierUse  */
#line 736 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2473 "y.tab.c"
    break;

  case 151: /* expr: STRING  */
#line 737 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2479 "y.tab.c"
    break;

  case 152: /* expr: expr LT expr  */
#line 738 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2485 "y.tab.c"
    break;

  case 153: /* expr: expr GT expr  */
#line 739 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2491 "y.tab.c"
    break;

  case 154: /* expr: expr LE expr  */
#line 740 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2497 "y.tab.c"
    break;

  case 155: /* expr: expr GE expr  */
#line 741 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2503 "y.tab.c"
    break;

  case 156: /* expr: expr NE expr  */
#line 742 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2509 "y.tab.c"
    break;

  case 157: /* expr: expr EQ expr  */
#line 743 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2515 "y.tab.c"
    break;

  case 158: /* expr: expr AND expr  */
#line 744 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2521 "y.tab.c"
    break;

  case 159: /* expr: expr OR expr  */
#line 745 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2527 "y.tab.c"
    break;

  case 160: /* expr: NOT expr  */
#line 746 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2533 "y.tab.c"
    break;

  case 161: /* expr: ID '(' ')'  */
#line 747 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2539 "y.tab.c"
    break;

  case 162: /* expr: ID '(' ArgList ')'  */
#line 748 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2545 "y.tab.c"
    break;

  case 163: /* expr: NULLVAL  */
#line 749 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2551 "y.tab.c"
    break;

  case 164: /* expr: ClassField  */
#line 750 "expr_tree.y"
               {}
#line 2557 "y.tab.c"
    break;

  case 165: /* expr: ClassFieldFunction  */
#line 751 "expr_tree.y"
                       {}
#line 2563 "y.tab.c"
    break;


#line 2567 "y.tab.c"

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

#line 755 "expr_tree.y"


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
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}
