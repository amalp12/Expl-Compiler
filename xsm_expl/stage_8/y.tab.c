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

#ifndef _UNISTD_H
#define _UNISTD_H
#include <unistd.h>
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

#ifndef _CLASS_H
#define _CLASS_H
#include "class.h"
#endif

#ifndef _CLASS_C
#define _CLASS_C
#include "class.c"
#endif



void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
extern int yylineno; 
FILE * target_file ;


int yylex(void);


#line 167 "y.tab.c"

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
#line 97 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;

#line 334 "y.tab.c"

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
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
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
  YYSYMBOL_ClassParamList = 73,            /* ClassParamList  */
  YYSYMBOL_ClassMethodDefns = 74,          /* ClassMethodDefns  */
  YYSYMBOL_ClassFunctionDef = 75,          /* ClassFunctionDef  */
  YYSYMBOL_ClassFieldFunction = 76,        /* ClassFieldFunction  */
  YYSYMBOL_TypeDefBlock = 77,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 78,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 79,                   /* TypeDef  */
  YYSYMBOL_TypeFieldDeclList = 80,         /* TypeFieldDeclList  */
  YYSYMBOL_TypeFieldDecl = 81,             /* TypeFieldDecl  */
  YYSYMBOL_Field = 82,                     /* Field  */
  YYSYMBOL_GDeclBlock = 83,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 84,                 /* GDeclList  */
  YYSYMBOL_GDecl = 85,                     /* GDecl  */
  YYSYMBOL_GidList = 86,                   /* GidList  */
  YYSYMBOL_Gid = 87,                       /* Gid  */
  YYSYMBOL_GParamList = 88,                /* GParamList  */
  YYSYMBOL_identifierDecl = 89,            /* identifierDecl  */
  YYSYMBOL_identifierUse = 90,             /* identifierUse  */
  YYSYMBOL_FDefBlock = 91,                 /* FDefBlock  */
  YYSYMBOL_FDef = 92,                      /* FDef  */
  YYSYMBOL_Body = 93,                      /* Body  */
  YYSYMBOL_ParamList = 94,                 /* ParamList  */
  YYSYMBOL_Param = 95,                     /* Param  */
  YYSYMBOL_LDeclBlock = 96,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 97,                  /* LDecList  */
  YYSYMBOL_LDecl = 98,                     /* LDecl  */
  YYSYMBOL_LIdList = 99,                   /* LIdList  */
  YYSYMBOL_ArgList = 100,                  /* ArgList  */
  YYSYMBOL_Slist = 101,                    /* Slist  */
  YYSYMBOL_Stmt = 102,                     /* Stmt  */
  YYSYMBOL_ReturnStmt = 103,               /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 104,                 /* DeclStmt  */
  YYSYMBOL_DeclList = 105,                 /* DeclList  */
  YYSYMBOL_Decl = 106,                     /* Decl  */
  YYSYMBOL_Type = 107,                     /* Type  */
  YYSYMBOL_VarList = 108,                  /* VarList  */
  YYSYMBOL_brkStmt = 109,                  /* brkStmt  */
  YYSYMBOL_contStmt = 110,                 /* contStmt  */
  YYSYMBOL_brkpointStmt = 111,             /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 112,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 113,                /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 114,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 115,              /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 116,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 117,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 118,                  /* AsgStmt  */
  YYSYMBOL_expr = 119                      /* expr  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   793

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

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
      54,    55,     2,     2,    58,     2,    59,     2,     2,     2,
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
       0,   130,   130,   131,   136,   148,   149,   152,   158,   166,
     171,   176,   184,   190,   197,   205,   209,   216,   224,   230,
     235,   242,   246,   254,   263,   267,   271,   278,   283,   287,
     297,   298,   302,   303,   307,   314,   319,   326,   334,   340,
     345,   352,   358,   363,   367,   368,   372,   379,   383,   390,
     391,   401,   407,   412,   417,   421,   427,   434,   442,   450,
     458,   469,   473,   479,   486,   490,   494,   498,   502,   506,
     510,   522,   524,   529,   540,   545,   552,   559,   565,   571,
     579,   580,   585,   592,   593,   596,   603,   608,   619,   624,
     633,   634,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   655,   659,   666,   667,   669,   670,
     673,   679,   682,   683,   687,   690,   693,   696,   697,   700,
     703,   706,   709,   712,   715,   718,   719,   720,   721,   722,
     723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   738
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
  "'('", "')'", "'{'", "'}'", "','", "'.'", "'['", "']'", "$accept",
  "Program", "MainBlock", "ClassDefBlock", "ClassDefList", "ClassDef",
  "ClassName", "ClassFieldLists", "ClassFieldDecl", "ClassMethodDeclList",
  "ClassMethodDecl", "ClassParamList", "ClassMethodDefns",
  "ClassFunctionDef", "ClassFieldFunction", "TypeDefBlock", "TypeDefList",
  "TypeDef", "TypeFieldDeclList", "TypeFieldDecl", "Field", "GDeclBlock",
  "GDeclList", "GDecl", "GidList", "Gid", "GParamList", "identifierDecl",
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

#define YYPACT_NINF (-233)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    68,    84,    48,    41,    19,  -233,  -233,    91,    73,
     112,  -233,  -233,    83,     3,  -233,    81,     9,   112,  -233,
      -4,  -233,   156,   161,  -233,  -233,   107,  -233,    39,  -233,
     177,  -233,   112,  -233,    26,  -233,  -233,   133,  -233,   112,
    -233,  -233,   -29,    -2,  -233,  -233,  -233,  -233,   160,   162,
    -233,   112,  -233,   213,   112,    80,  -233,   177,   112,   176,
    -233,    59,  -233,   224,   222,   113,  -233,   226,   175,   179,
    -233,   124,  -233,   181,   112,  -233,   233,     7,  -233,  -233,
     112,  -233,   183,   184,   189,   112,   214,     0,  -233,   239,
     195,   112,  -233,    87,   118,   214,  -233,    63,   238,  -233,
    -233,   197,   131,  -233,   191,   196,   198,   202,   238,   250,
    -233,    65,  -233,   695,   207,   112,   261,   112,  -233,  -233,
    -233,  -233,   216,  -233,     1,  -233,  -233,    94,   220,   225,
     234,   235,   695,   695,    67,   267,   276,   283,   406,   259,
     260,   262,   274,   281,   256,  -233,   277,   325,   695,  -233,
     327,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,   140,  -233,  -233,  -233,  -233,   334,   335,
     443,   117,   443,   443,   443,   731,  -233,   587,  -233,    86,
    -233,   336,  -233,  -233,  -233,  -233,    27,  -233,  -233,  -233,
     443,   443,  -233,   494,   290,   291,   443,   339,   117,   340,
     346,   443,  -233,   342,  -233,   297,  -233,   304,   129,   317,
     279,   286,   305,   319,   320,  -233,  -233,   299,  -233,     2,
      74,   771,   345,   443,   443,   443,   443,  -233,   443,   443,
     443,   443,   443,   443,   443,   443,   443,  -233,  -233,   364,
     324,   343,   341,   347,   513,  -233,   214,   169,   344,   383,
     388,   378,   375,   443,   443,  -233,   336,  -233,   142,   521,
    -233,  -233,  -233,    25,    25,  -233,   460,   460,   136,   136,
     313,   313,   771,   771,  -233,  -233,  -233,   212,   227,  -233,
     238,  -233,   144,   443,  -233,  -233,   695,   695,   371,   423,
    -233,  -233,   443,  -233,   170,  -233,   171,   348,  -233,   187,
     551,   623,    12,   395,   521,  -233,  -233,  -233,  -233,   695,
     396,   397,  -233,  -233,   659,  -233,  -233,   399,  -233
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      31,     0,     0,     6,     0,     0,    33,     1,     0,    43,
       0,    30,    32,    10,     0,     8,     0,     0,     0,   111,
       0,    36,     0,     0,     5,     7,     0,    42,     0,    45,
       0,     3,     0,    72,     0,    34,    35,     0,    11,     0,
      41,    44,    54,     0,    48,    49,     2,    71,     0,     0,
      37,     0,    13,     0,    53,     0,    46,     0,    78,     0,
      12,     0,    16,     0,     0,     0,    52,     0,     0,     0,
      47,     0,    77,     0,     0,    15,     0,     0,    14,    50,
       0,    79,    55,    60,     0,     0,    82,     0,    22,     0,
       0,    20,    51,     0,     0,    82,    76,     0,     0,     9,
      21,     0,     0,    19,     0,     0,     0,     0,     0,     0,
      81,     0,    84,     0,     0,    78,     0,     0,    56,    58,
      57,    59,     0,    87,     0,    80,    83,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    69,     0,     0,    91,
     103,   102,    97,    98,    99,    95,    96,   100,   101,    92,
      93,    94,     4,     0,    17,    18,    73,    85,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,   107,     0,
     109,     0,   114,   116,   115,   131,    61,   105,   133,   145,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,   103,    75,     0,    86,    39,     0,     0,
       0,     0,     0,     0,     0,   106,   108,    54,   113,     0,
       0,   142,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,     0,    40,    38,     0,    74,    82,     0,    62,     0,
       0,     0,     0,     0,     0,   110,     0,   143,     0,    89,
     130,   127,   128,   125,   126,   129,   135,   134,   137,   136,
     138,   139,   140,   141,    66,    67,    68,     0,     0,   124,
       0,    27,     0,     0,   122,   123,     0,     0,     0,     0,
     112,   144,     0,    25,     0,    29,     0,     0,    26,     0,
       0,     0,     0,     0,    88,    24,    28,    23,    63,     0,
       0,     0,   121,   120,     0,   118,   119,     0,   117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,   379,  -233,  -233,   398,  -233,  -233,   362,  -233,
     357,  -233,  -233,   333,  -233,  -233,  -233,   419,  -233,   405,
    -233,  -233,  -233,   403,  -233,   376,  -233,  -176,  -113,  -233,
     400,  -105,   321,   -47,   -89,  -233,   323,  -233,  -232,  -131,
    -138,   -85,  -233,  -233,   258,     4,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,  -233,  -233,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    31,     9,    14,    15,    16,    51,    52,    61,
      62,   102,    87,    88,   145,     3,     5,     6,    20,    21,
     146,    18,    28,    29,    43,    44,    65,    45,   192,    32,
      33,   114,    71,    72,    98,   111,   112,   124,   258,   148,
     149,   176,   151,   179,   180,    67,   219,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   259
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     147,   175,   177,   122,    19,   218,   108,    66,    19,    56,
     202,    13,   167,   255,    22,   282,   193,    19,    78,   147,
     147,    30,    34,   312,    22,    54,     1,     4,   150,   223,
     224,    55,    30,    92,    48,   147,    34,   202,    96,   202,
     287,   228,    27,    53,   103,   294,   296,    19,   208,    24,
     210,   211,   212,    35,    11,    63,    57,    99,   209,   168,
     256,    91,   147,   203,   147,    76,    49,    19,   221,   222,
     165,   109,    40,   109,   239,    19,     4,   185,    89,   244,
     290,   220,   186,    68,     7,   241,   169,   170,    69,   188,
     104,    89,    74,     8,    19,   105,   110,    10,   125,    13,
     178,   261,   262,   263,   264,    17,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   139,   140,   141,   189,   215,
      19,   106,   142,   143,   144,   127,   107,   190,   191,   257,
      23,   288,   289,   223,   224,   225,   226,    26,   181,    39,
     223,   224,   225,   226,    50,   228,   229,   230,   231,   232,
     233,   234,   228,   169,   170,   300,   301,   280,   139,   140,
     141,   299,   202,   202,    37,   142,   143,   144,    79,    38,
     304,    80,   185,   147,   147,   297,   202,   186,   314,    84,
     235,   236,    85,   181,   188,    42,   116,   147,   147,   117,
     248,   223,   224,   225,   226,   205,   147,   291,    85,   298,
     292,   147,   292,   228,   229,   230,   231,   232,   233,   234,
     139,   140,   141,   189,    58,   185,    59,   142,   143,   144,
     186,    64,   190,   191,   281,   305,   306,   188,   292,   292,
     185,    73,    77,    78,    81,   186,    82,    86,   235,   236,
      83,    90,   188,    93,    94,    95,    97,   101,   308,    91,
     113,   115,   118,   139,   140,   141,   189,   119,   123,   120,
     142,   143,   144,   121,   162,   190,   191,   293,   139,   140,
     141,   189,   164,   166,   171,   142,   143,   144,   182,   172,
     190,   191,   295,   223,   224,   225,   226,   183,   173,   174,
     223,   224,   225,   226,   184,   228,   229,   230,   231,   232,
     233,   234,   228,   229,   230,   231,   232,   233,   234,   223,
     224,   225,   226,   194,   195,   199,   196,   223,   224,   225,
     226,   228,   229,   230,   231,   232,   233,   234,   197,   228,
     235,   236,   231,   232,   250,   198,   200,   235,   236,   201,
     204,   251,   206,   207,   217,   237,   238,   240,   242,   223,
     224,   225,   226,   246,   243,   245,   235,   236,   247,    55,
     252,   228,   229,   230,   231,   232,   233,   234,   223,   224,
     225,   226,   249,   253,   254,   223,   224,   225,   226,   275,
     228,   229,   230,   231,   232,   233,   234,   228,   229,   230,
     231,   232,   233,   234,   284,   277,   235,   236,   276,   285,
     260,   278,   286,   287,   283,   307,   313,   315,   316,   185,
     318,    46,    25,    60,   186,   235,   236,   187,    75,   274,
     100,   188,   235,   236,    12,    36,   302,   223,   224,   225,
     226,    41,    47,    70,   126,     0,   163,   216,     0,   228,
     229,   230,   231,   232,   233,   234,   185,   139,   140,   141,
     189,   186,     0,     0,   142,   143,   144,     0,   188,   190,
     191,     0,     0,     0,   223,   224,   225,   226,     0,     0,
       0,     0,     0,     0,   235,   236,   228,     0,   303,   231,
     232,   233,   234,     0,   139,   140,   141,   189,     0,     0,
       0,   142,   143,   144,     0,     0,   190,   191,   223,   224,
     225,   226,     0,     0,     0,   227,     0,     0,     0,     0,
     228,   229,   230,   231,   232,   233,   234,   223,   224,   225,
     226,     0,     0,     0,   279,   223,   224,   225,   226,   228,
     229,   230,   231,   232,   233,   234,     0,   228,   229,   230,
     231,   232,   233,   234,     0,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
     128,   129,     0,     0,   235,   236,     0,     0,     0,     0,
       0,     0,   235,   236,   130,     0,   309,   310,   131,   132,
       0,   133,     0,   134,     0,     0,     0,   135,   136,   137,
     138,     0,   139,   140,   141,   127,   128,   129,     0,   142,
     143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,   131,   132,     0,   133,   214,   134,
       0,     0,     0,   135,   136,   137,   138,     0,   139,   140,
     141,   127,   128,   129,     0,   142,   143,   144,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
     131,   132,   311,   133,     0,   134,     0,     0,     0,   135,
     136,   137,   138,     0,   139,   140,   141,   127,   128,   129,
       0,   142,   143,   144,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,     0,   317,   131,   132,     0,   133,
       0,   134,     0,     0,     0,   135,   136,   137,   138,     0,
     139,   140,   141,   127,   128,   129,     0,   142,   143,   144,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,     0,   131,   132,     0,   133,     0,   134,     0,     0,
       0,   135,   136,   137,   138,     0,   139,   140,   141,   127,
     128,   129,     0,   142,   143,   144,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,     0,     0,   213,   132,
       0,   133,     0,   134,     0,     0,     0,   135,   136,   137,
     138,     0,   139,   140,   141,   223,   224,   225,   226,   142,
     143,   144,     0,     0,     0,     0,     0,   228,   229,   230,
     231,   232,   233,   234
};

static const yytype_int16 yycheck[] =
{
     113,   132,   133,   108,     8,   181,    95,    54,     8,    11,
     148,     8,    11,    11,    10,   247,   138,     8,    11,   132,
     133,    17,    18,    11,    20,    54,    34,     8,   113,     4,
       5,    60,    28,    80,     8,   148,    32,   175,    85,   177,
      28,    16,    33,    39,    91,   277,   278,     8,   170,    46,
     172,   173,   174,    57,    35,    51,    58,    57,   171,    58,
      58,    54,   175,   148,   177,    61,    40,     8,   190,   191,
     117,     8,    33,     8,   196,     8,     8,     3,    74,   201,
     256,    54,     8,     3,     0,   198,    59,    60,     8,    15,
       3,    87,    33,    45,     8,     8,    33,    56,    33,     8,
      33,   223,   224,   225,   226,    32,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    41,    42,    43,    44,    33,
       8,     3,    48,    49,    50,     8,     8,    53,    54,    55,
      47,   253,   254,     4,     5,     6,     7,    56,   134,    32,
       4,     5,     6,     7,    11,    16,    17,    18,    19,    20,
      21,    22,    16,    59,    60,   286,   287,   246,    41,    42,
      43,   283,   300,   301,     8,    48,    49,    50,    55,     8,
     292,    58,     3,   286,   287,   280,   314,     8,   309,    55,
      51,    52,    58,   179,    15,     8,    55,   300,   301,    58,
      61,     4,     5,     6,     7,    55,   309,    55,    58,    55,
      58,   314,    58,    16,    17,    18,    19,    20,    21,    22,
      41,    42,    43,    44,    54,     3,    54,    48,    49,    50,
       8,     8,    53,    54,    55,    55,    55,    15,    58,    58,
       3,    55,     8,    11,     8,     8,    61,    56,    51,    52,
      61,     8,    15,    60,    60,    56,    32,     8,    61,    54,
      12,    54,    61,    41,    42,    43,    44,    61,     8,    61,
      48,    49,    50,    61,    57,    53,    54,    55,    41,    42,
      43,    44,    11,    57,    54,    48,    49,    50,    11,    54,
      53,    54,    55,     4,     5,     6,     7,    11,    54,    54,
       4,     5,     6,     7,    11,    16,    17,    18,    19,    20,
      21,    22,    16,    17,    18,    19,    20,    21,    22,     4,
       5,     6,     7,    54,    54,    59,    54,     4,     5,     6,
       7,    16,    17,    18,    19,    20,    21,    22,    54,    16,
      51,    52,    19,    20,    55,    54,    59,    51,    52,    14,
      13,    55,     8,     8,     8,    55,    55,     8,     8,     4,
       5,     6,     7,    56,     8,    13,    51,    52,    54,    60,
      55,    16,    17,    18,    19,    20,    21,    22,     4,     5,
       6,     7,    55,    54,    54,     4,     5,     6,     7,    55,
      16,    17,    18,    19,    20,    21,    22,    16,    17,    18,
      19,    20,    21,    22,    11,    54,    51,    52,    55,    11,
      55,    54,    24,    28,    60,    57,    11,    11,    11,     3,
      11,    32,    14,    51,     8,    51,    52,    11,    61,    55,
      87,    15,    51,    52,     5,    20,    55,     4,     5,     6,
       7,    28,    32,    57,   111,    -1,   115,   179,    -1,    16,
      17,    18,    19,    20,    21,    22,     3,    41,    42,    43,
      44,     8,    -1,    -1,    48,    49,    50,    -1,    15,    53,
      54,    -1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    16,    -1,    55,    19,
      20,    21,    22,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    53,    54,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,     4,     5,     6,
       7,    -1,    -1,    -1,    11,     4,     5,     6,     7,    16,
      17,    18,    19,    20,    21,    22,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    23,    -1,    25,    26,    27,    28,
      -1,    30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    -1,    41,    42,    43,     8,     9,    10,    -1,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,    42,
      43,     8,     9,    10,    -1,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    -1,    41,    42,    43,     8,     9,    10,
      -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,
      41,    42,    43,     8,     9,    10,    -1,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    -1,    41,    42,    43,     8,
       9,    10,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    -1,    41,    42,    43,     4,     5,     6,     7,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    63,    77,     8,    78,    79,     0,    45,    65,
      56,    35,    79,     8,    66,    67,    68,    32,    83,     8,
      80,    81,   107,    47,    46,    67,    56,    33,    84,    85,
     107,    64,    91,    92,   107,    57,    81,     8,     8,    32,
      33,    85,     8,    86,    87,    89,    64,    92,     8,    40,
      11,    69,    70,   107,    54,    60,    11,    58,    54,    54,
      70,    71,    72,   107,     8,    88,    95,   107,     3,     8,
      87,    94,    95,    55,    33,    72,   107,     8,    11,    55,
      58,     8,    61,    61,    55,    58,    56,    74,    75,   107,
       8,    54,    95,    60,    60,    56,    95,    32,    96,    57,
      75,     8,    73,    95,     3,     8,     3,     8,    96,     8,
      33,    97,    98,    12,    93,    54,    55,    58,    61,    61,
      61,    61,    93,     8,    99,    33,    98,     8,     9,    10,
      23,    27,    28,    30,    32,    36,    37,    38,    39,    41,
      42,    43,    48,    49,    50,    76,    82,    90,   101,   102,
     103,   104,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    57,    94,    11,    95,    57,    11,    58,    59,
      60,    54,    54,    54,    54,   101,   103,   101,    33,   105,
     106,   107,    11,    11,    11,     3,     8,    11,    15,    44,
      53,    54,    90,   119,    54,    54,    54,    54,    54,    59,
      59,    14,   102,   103,    13,    55,     8,     8,   119,    90,
     119,   119,   119,    27,    31,    33,   106,     8,    89,   108,
      54,   119,   119,     4,     5,     6,     7,    11,    16,    17,
      18,    19,    20,    21,    22,    51,    52,    55,    55,   119,
       8,    90,     8,     8,   119,    13,    56,    54,    61,    55,
      55,    55,    55,    54,    54,    11,    58,    55,   100,   119,
      55,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,    55,    55,    55,    54,    54,    11,
      96,    55,   100,    60,    11,    11,    24,    28,   119,   119,
      89,    55,    58,    55,   100,    55,   100,    93,    55,   119,
     101,   101,    55,    55,   119,    55,    55,    57,    61,    25,
      26,    29,    11,    11,   101,    11,    11,    26,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    64,    65,    65,    66,    66,    67,
      68,    68,    69,    69,    70,    71,    71,    72,    73,    73,
      73,    74,    74,    75,    76,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    80,    80,    81,    82,    82,
      82,    83,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    94,    95,
      96,    96,    96,    97,    97,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   107,   108,   108,   109,   110,   111,   112,   112,   113,
     114,   115,   116,   117,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     8,     3,     0,     2,     1,     8,
       1,     3,     2,     1,     3,     2,     1,     6,     3,     1,
       0,     2,     1,     9,     6,     5,     6,     5,     6,     5,
       3,     0,     2,     1,     4,     2,     1,     3,     3,     3,
       3,     3,     2,     0,     2,     1,     3,     3,     1,     1,
       4,     3,     1,     0,     1,     4,     7,     7,     7,     7,
       4,     1,     4,     7,     3,     3,     4,     4,     4,     1,
       1,     2,     1,     9,     4,     3,     3,     1,     0,     2,
       3,     2,     0,     2,     1,     3,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     2,     2,     1,
       3,     1,     3,     1,     2,     2,     2,    10,     8,     8,
       7,     7,     5,     5,     4,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     1
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
#line 130 "expr_tree.y"
                                                              {}
#line 1744 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 131 "expr_tree.y"
                                                      {}
#line 1750 "y.tab.c"
    break;

  case 4: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 137 "expr_tree.y"
    {

      // declare main function
      (yyval.node) =  declareAndDefineMain((yyvsp[-7].string), (yyvsp[-1].node), target_file);

    }
#line 1761 "y.tab.c"
    break;

  case 7: /* ClassDefList: ClassDefList ClassDef  */
#line 153 "expr_tree.y"
    {
      // reset 
      resetCurrentClassBeingDefined();

    }
#line 1771 "y.tab.c"
    break;

  case 8: /* ClassDefList: ClassDef  */
#line 159 "expr_tree.y"
    {
      // reset
      resetCurrentClassBeingDefined();
    }
#line 1780 "y.tab.c"
    break;

  case 10: /* ClassName: ID  */
#line 172 "expr_tree.y"
    {
      classInstall((yyvsp[0].string),NULL);
      (yyval.string) = (yyvsp[0].string);
    }
#line 1789 "y.tab.c"
    break;

  case 11: /* ClassName: ID EXTENDS ID  */
#line 177 "expr_tree.y"
    {
      classInstall((yyvsp[-2].string),(yyvsp[0].string));
      (yyval.string) = (yyvsp[-2].string);
    }
#line 1798 "y.tab.c"
    break;

  case 12: /* ClassFieldLists: ClassFieldLists ClassFieldDecl  */
#line 185 "expr_tree.y"
    {
      // make a linked list of fields
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1808 "y.tab.c"
    break;

  case 13: /* ClassFieldLists: ClassFieldDecl  */
#line 191 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1816 "y.tab.c"
    break;

  case 14: /* ClassFieldDecl: Type ID SEMICOLON  */
#line 198 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
      classFieldInstall(getCurrentClassBeingDefined(), (yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1825 "y.tab.c"
    break;

  case 15: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 206 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1833 "y.tab.c"
    break;

  case 16: /* ClassMethodDeclList: ClassMethodDecl  */
#line 210 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1841 "y.tab.c"
    break;

  case 17: /* ClassMethodDecl: Type ID '(' ClassParamList ')' SEMICOLON  */
#line 217 "expr_tree.y"
  {
    
    (yyval.node) = makeMethodDeclareNode((yyvsp[-4].string), (yyvsp[-5].string), (yyvsp[-2].node));

  }
#line 1851 "y.tab.c"
    break;

  case 18: /* ClassParamList: ClassParamList ',' Param  */
#line 225 "expr_tree.y"
    {
      // make a tree of params such the left most is the first param
      insertIntoTree((yyvsp[-2].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1861 "y.tab.c"
    break;

  case 19: /* ClassParamList: Param  */
#line 231 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1869 "y.tab.c"
    break;

  case 20: /* ClassParamList: %empty  */
#line 235 "expr_tree.y"
    {
      // paramters can also be empty
      (yyval.node) = NULL;
    }
#line 1878 "y.tab.c"
    break;

  case 21: /* ClassMethodDefns: ClassMethodDefns ClassFunctionDef  */
#line 243 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
#line 1886 "y.tab.c"
    break;

  case 22: /* ClassMethodDefns: ClassFunctionDef  */
#line 247 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
#line 1894 "y.tab.c"
    break;

  case 23: /* ClassFunctionDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 255 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeMethodDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
    }
#line 1903 "y.tab.c"
    break;

  case 24: /* ClassFieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 264 "expr_tree.y"
  {
    (yyval.node) = makeSelfDotFunctionNode((yyvsp[-3].string), (yyvsp[-1].node));
  }
#line 1911 "y.tab.c"
    break;

  case 25: /* ClassFieldFunction: SELF '.' ID '(' ')'  */
#line 268 "expr_tree.y"
  {
    (yyval.node) = makeSelfDotFunctionNode((yyvsp[-2].string), NULL);
  }
#line 1919 "y.tab.c"
    break;

  case 26: /* ClassFieldFunction: ID '.' ID '(' ArgList ')'  */
#line 272 "expr_tree.y"
  {
    

    (yyval.node) = makeIdDotFunctionNode((yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[-1].node));

  }
#line 1930 "y.tab.c"
    break;

  case 27: /* ClassFieldFunction: ID '.' ID '(' ')'  */
#line 279 "expr_tree.y"
  {
    (yyval.node) = makeIdDotFunctionNode((yyvsp[-4].string), (yyvsp[-2].string), NULL);

  }
#line 1939 "y.tab.c"
    break;

  case 28: /* ClassFieldFunction: Field '.' ID '(' ArgList ')'  */
#line 284 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), (yyvsp[-5].node), (yyvsp[-1].node));
  }
#line 1947 "y.tab.c"
    break;

  case 29: /* ClassFieldFunction: Field '.' ID '(' ')'  */
#line 288 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), (yyvsp[-4].node), NULL);
  }
#line 1955 "y.tab.c"
    break;

  case 34: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 308 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 1963 "y.tab.c"
    break;

  case 35: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 315 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1972 "y.tab.c"
    break;

  case 36: /* TypeFieldDeclList: TypeFieldDecl  */
#line 320 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1980 "y.tab.c"
    break;

  case 37: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 327 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1988 "y.tab.c"
    break;

  case 38: /* Field: Field '.' ID  */
#line 335 "expr_tree.y"
    { 
      insertIntoFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1997 "y.tab.c"
    break;

  case 39: /* Field: ID '.' ID  */
#line 341 "expr_tree.y"
    { 
      // set up the types of the nodes
      (yyval.node) =  makeIdDotIdFieldNode((yyvsp[-2].string), (yyvsp[0].string));
    }
#line 2006 "y.tab.c"
    break;

  case 40: /* Field: SELF '.' ID  */
#line 346 "expr_tree.y"
    {
      (yyval.node) = makeSelfDotIdFieldNode((yyvsp[0].string));
    }
#line 2014 "y.tab.c"
    break;

  case 41: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 353 "expr_tree.y"
    {

      compilerInit(target_file); // set up header and init code

    }
#line 2024 "y.tab.c"
    break;

  case 42: /* GDeclBlock: DECL ENDDECL  */
#line 359 "expr_tree.y"
    {
      compilerInit(target_file); // set up header and init code

    }
#line 2033 "y.tab.c"
    break;

  case 46: /* GDecl: Type GidList SEMICOLON  */
#line 373 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 2041 "y.tab.c"
    break;

  case 47: /* GidList: GidList ',' Gid  */
#line 380 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2049 "y.tab.c"
    break;

  case 48: /* GidList: Gid  */
#line 384 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2057 "y.tab.c"
    break;

  case 49: /* Gid: identifierDecl  */
#line 390 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2063 "y.tab.c"
    break;

  case 50: /* Gid: ID '(' GParamList ')'  */
#line 392 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2074 "y.tab.c"
    break;

  case 51: /* GParamList: GParamList ',' Param  */
#line 402 "expr_tree.y"
    {

      insertIntoTree((yyvsp[-2].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2084 "y.tab.c"
    break;

  case 52: /* GParamList: Param  */
#line 408 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2092 "y.tab.c"
    break;

  case 53: /* GParamList: %empty  */
#line 412 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2100 "y.tab.c"
    break;

  case 54: /* identifierDecl: ID  */
#line 418 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2108 "y.tab.c"
    break;

  case 55: /* identifierDecl: ID '[' INT ']'  */
#line 422 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2118 "y.tab.c"
    break;

  case 56: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 428 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2129 "y.tab.c"
    break;

  case 57: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 435 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2141 "y.tab.c"
    break;

  case 58: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 443 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2153 "y.tab.c"
    break;

  case 59: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 451 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2165 "y.tab.c"
    break;

  case 60: /* identifierDecl: ID '[' ID ']'  */
#line 459 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2175 "y.tab.c"
    break;

  case 61: /* identifierUse: ID  */
#line 470 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2183 "y.tab.c"
    break;

  case 62: /* identifierUse: ID '[' expr ']'  */
#line 474 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2193 "y.tab.c"
    break;

  case 63: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 480 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2204 "y.tab.c"
    break;

  case 64: /* identifierUse: INITIALIZE '(' ')'  */
#line 487 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2212 "y.tab.c"
    break;

  case 65: /* identifierUse: ALLOC '(' ')'  */
#line 491 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2220 "y.tab.c"
    break;

  case 66: /* identifierUse: FREE '(' expr ')'  */
#line 495 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2228 "y.tab.c"
    break;

  case 67: /* identifierUse: NEW '(' ID ')'  */
#line 499 "expr_tree.y"
  {
    (yyval.node) = makeNewNode((yyvsp[-1].string));
  }
#line 2236 "y.tab.c"
    break;

  case 68: /* identifierUse: DELETE '(' identifierUse ')'  */
#line 503 "expr_tree.y"
  {
    (yyval.node) = makeDeleteNode((yyvsp[-1].node));
  }
#line 2244 "y.tab.c"
    break;

  case 69: /* identifierUse: Field  */
#line 507 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2252 "y.tab.c"
    break;

  case 70: /* identifierUse: ClassFieldFunction  */
#line 511 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2260 "y.tab.c"
    break;

  case 73: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 530 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2270 "y.tab.c"
    break;

  case 74: /* Body: START Slist ReturnStmt END  */
#line 541 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2279 "y.tab.c"
    break;

  case 75: /* Body: START ReturnStmt END  */
#line 546 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),NULL);
    }
#line 2287 "y.tab.c"
    break;

  case 76: /* ParamList: ParamList ',' Param  */
#line 553 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      insertIntoTree((yyvsp[-2].node), (yyvsp[0].node));
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2298 "y.tab.c"
    break;

  case 77: /* ParamList: Param  */
#line 560 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2307 "y.tab.c"
    break;

  case 78: /* ParamList: %empty  */
#line 565 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2315 "y.tab.c"
    break;

  case 79: /* Param: Type ID  */
#line 572 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2323 "y.tab.c"
    break;

  case 81: /* LDeclBlock: DECL ENDDECL  */
#line 581 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2331 "y.tab.c"
    break;

  case 82: /* LDeclBlock: %empty  */
#line 585 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2339 "y.tab.c"
    break;

  case 85: /* LDecl: ID LIdList SEMICOLON  */
#line 597 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2347 "y.tab.c"
    break;

  case 86: /* LIdList: LIdList ',' ID  */
#line 604 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2356 "y.tab.c"
    break;

  case 87: /* LIdList: ID  */
#line 609 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2365 "y.tab.c"
    break;

  case 88: /* ArgList: ArgList ',' expr  */
#line 620 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2374 "y.tab.c"
    break;

  case 89: /* ArgList: expr  */
#line 625 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2382 "y.tab.c"
    break;

  case 90: /* Slist: Slist Stmt  */
#line 633 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2388 "y.tab.c"
    break;

  case 91: /* Slist: Stmt  */
#line 634 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2394 "y.tab.c"
    break;

  case 104: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 656 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2402 "y.tab.c"
    break;

  case 105: /* ReturnStmt: RETURN SEMICOLON  */
#line 660 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2410 "y.tab.c"
    break;

  case 110: /* Decl: Type VarList SEMICOLON  */
#line 674 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2418 "y.tab.c"
    break;

  case 112: /* VarList: VarList ',' identifierDecl  */
#line 682 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2424 "y.tab.c"
    break;

  case 113: /* VarList: identifierDecl  */
#line 683 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2430 "y.tab.c"
    break;

  case 114: /* brkStmt: BREAK SEMICOLON  */
#line 687 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2436 "y.tab.c"
    break;

  case 115: /* contStmt: CONTINUE SEMICOLON  */
#line 690 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2442 "y.tab.c"
    break;

  case 116: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 693 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2448 "y.tab.c"
    break;

  case 117: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 696 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2454 "y.tab.c"
    break;

  case 118: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 697 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2460 "y.tab.c"
    break;

  case 119: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 700 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2466 "y.tab.c"
    break;

  case 120: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 703 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2472 "y.tab.c"
    break;

  case 121: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 706 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2478 "y.tab.c"
    break;

  case 122: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 709 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2484 "y.tab.c"
    break;

  case 123: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 712 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2490 "y.tab.c"
    break;

  case 124: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 715 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2496 "y.tab.c"
    break;

  case 125: /* expr: expr PLUS expr  */
#line 718 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2502 "y.tab.c"
    break;

  case 126: /* expr: expr MINUS expr  */
#line 719 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2508 "y.tab.c"
    break;

  case 127: /* expr: expr MUL expr  */
#line 720 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2514 "y.tab.c"
    break;

  case 128: /* expr: expr DIV expr  */
#line 721 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2520 "y.tab.c"
    break;

  case 129: /* expr: expr MOD expr  */
#line 722 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2526 "y.tab.c"
    break;

  case 130: /* expr: '(' expr ')'  */
#line 723 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2532 "y.tab.c"
    break;

  case 131: /* expr: INT  */
#line 724 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2538 "y.tab.c"
    break;

  case 132: /* expr: identifierUse  */
#line 725 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2544 "y.tab.c"
    break;

  case 133: /* expr: STRING  */
#line 726 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2550 "y.tab.c"
    break;

  case 134: /* expr: expr LT expr  */
#line 727 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2556 "y.tab.c"
    break;

  case 135: /* expr: expr GT expr  */
#line 728 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2562 "y.tab.c"
    break;

  case 136: /* expr: expr LE expr  */
#line 729 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2568 "y.tab.c"
    break;

  case 137: /* expr: expr GE expr  */
#line 730 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2574 "y.tab.c"
    break;

  case 138: /* expr: expr NE expr  */
#line 731 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2580 "y.tab.c"
    break;

  case 139: /* expr: expr EQ expr  */
#line 732 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2586 "y.tab.c"
    break;

  case 140: /* expr: expr AND expr  */
#line 733 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2592 "y.tab.c"
    break;

  case 141: /* expr: expr OR expr  */
#line 734 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2598 "y.tab.c"
    break;

  case 142: /* expr: NOT expr  */
#line 735 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2604 "y.tab.c"
    break;

  case 143: /* expr: ID '(' ')'  */
#line 736 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2610 "y.tab.c"
    break;

  case 144: /* expr: ID '(' ArgList ')'  */
#line 737 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2616 "y.tab.c"
    break;

  case 145: /* expr: NULLVAL  */
#line 738 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2622 "y.tab.c"
    break;


#line 2626 "y.tab.c"

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

#line 742 "expr_tree.y"


void yyerror(char const *s)
{
    // print error and line number
    printf("yyerror %s : %s at line number %d\n",s, yytext, yylineno);
    exit(1);
}

int main(int argc, char **argv)
{
 

  FILE * input_file=fopen(argv[1],"r");
  // if input file not found
  if(input_file==NULL)
  {
    printf("Input file %s not found\n",argv[1]);
    exit(1);
  }

  target_file = fopen("untranslated_assembly.xsm","w+");
  // Initializing Type Table
  typeTableCreate();
  _INIT_STATE = _FALSE;
  // stack
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  // heap
  _HEAP_POINTER = _INITIAL_HEAP_POINTER;
  // currentline
  _CURRENT_LINE = 1;
  // counting classes
  _GLOBAL_CLASS_COUNTER = 0;

  yyin = input_file; 
  yyparse(); 
  fclose(input_file);  
  exit(0);
}
