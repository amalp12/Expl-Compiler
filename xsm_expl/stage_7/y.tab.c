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
int _INIT_STATE ;

int yylex(void);


#line 162 "y.tab.c"

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
#line 92 "expr_tree.y"

  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;

#line 329 "y.tab.c"

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
  YYSYMBOL_ClassDeleteStmt = 103,          /* ClassDeleteStmt  */
  YYSYMBOL_ReturnStmt = 104,               /* ReturnStmt  */
  YYSYMBOL_DeclStmt = 105,                 /* DeclStmt  */
  YYSYMBOL_DeclList = 106,                 /* DeclList  */
  YYSYMBOL_Decl = 107,                     /* Decl  */
  YYSYMBOL_Type = 108,                     /* Type  */
  YYSYMBOL_VarList = 109,                  /* VarList  */
  YYSYMBOL_brkStmt = 110,                  /* brkStmt  */
  YYSYMBOL_contStmt = 111,                 /* contStmt  */
  YYSYMBOL_brkpointStmt = 112,             /* brkpointStmt  */
  YYSYMBOL_Ifstmt = 113,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 114,                /* Whilestmt  */
  YYSYMBOL_RepeatStmt = 115,               /* RepeatStmt  */
  YYSYMBOL_DoWhileStmt = 116,              /* DoWhileStmt  */
  YYSYMBOL_InputStmt = 117,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 118,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 119,                  /* AsgStmt  */
  YYSYMBOL_expr = 120                      /* expr  */
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
#define YYLAST   766

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  331

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
       0,   124,   124,   128,   133,   138,   143,   148,   153,   158,
     166,   196,   199,   206,   215,   224,   229,   237,   242,   249,
     257,   261,   268,   278,   284,   289,   295,   299,   307,   355,
     360,   365,   375,   379,   380,   384,   391,   396,   403,   412,
     419,   424,   437,   471,   479,   490,   491,   495,   502,   506,
     513,   514,   524,   530,   535,   540,   544,   550,   557,   565,
     573,   581,   592,   596,   602,   609,   613,   617,   621,   625,
     637,   641,   648,   659,   664,   671,   678,   684,   690,   698,
     699,   704,   711,   712,   715,   722,   727,   738,   743,   751,
     752,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   772,   776,   780,   787,   788,   790,
     791,   794,   802,   805,   806,   810,   813,   816,   819,   820,
     823,   826,   829,   832,   835,   838,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861
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
  "ClassDeleteStmt", "ReturnStmt", "DeclStmt", "DeclList", "Decl", "Type",
  "VarList", "brkStmt", "contStmt", "brkpointStmt", "Ifstmt", "Whilestmt",
  "RepeatStmt", "DoWhileStmt", "InputStmt", "OutputStmt", "AsgStmt",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     117,  -176,   112,    14,    51,  -176,    79,    52,    43,  -176,
     127,  -176,    71,    62,    78,  -176,  -176,   111,  -176,    96,
      52,    52,  -176,    42,  -176,    52,    80,  -176,  -176,   -17,
       6,  -176,  -176,    52,  -176,  -176,   103,     8,  -176,   110,
      52,  -176,    52,  -176,  -176,   130,  -176,   131,    52,    31,
    -176,    71,     4,  -176,   174,   177,  -176,  -176,   155,    52,
     192,  -176,    52,   143,   125,  -176,   194,   148,   157,  -176,
    -176,  -176,   214,  -176,    52,  -176,   165,  -176,   200,  -176,
      52,  -176,   166,   202,  -176,    52,  -176,   242,   195,    52,
     128,   240,  -176,   144,   161,  -176,   129,  -176,   280,   256,
     200,  -176,   284,  -176,   132,  -176,   668,   236,   234,   235,
     241,   244,    52,  -176,   291,    18,  -176,   240,  -176,     9,
    -176,  -176,    39,   247,   254,   255,   258,   668,   668,   138,
     295,   302,   308,    73,   266,   267,   272,   292,   293,   286,
    -176,   289,   335,   668,  -176,  -176,   338,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,    16,  -176,   342,   298,    52,   303,  -176,
     353,   356,   416,   171,   416,   416,   416,   704,  -176,   560,
    -176,   160,  -176,   357,  -176,  -176,  -176,  -176,    41,  -176,
    -176,  -176,   416,   416,  -176,   467,   312,   313,   416,   363,
     364,   366,   367,   416,  -176,   365,  -176,  -176,  -176,   322,
     169,  -176,  -176,  -176,   323,    87,   324,   252,   259,   311,
     326,   331,  -176,  -176,   327,  -176,    20,    15,   744,   318,
     416,   416,   416,   416,  -176,   416,   416,   416,   416,   416,
     416,   416,   416,   416,  -176,  -176,   337,   336,   349,   332,
     351,   486,  -176,    52,   379,    52,   416,   346,   397,   398,
     383,   382,   416,   416,  -176,   357,  -176,   189,   494,  -176,
    -176,  -176,   238,   238,  -176,   433,   433,   199,   199,   278,
     278,   744,   744,  -176,  -176,   400,   416,   416,  -176,   190,
    -176,  -176,   191,   416,  -176,  -176,   668,   668,   377,   396,
    -176,  -176,   416,  -176,   231,   232,   369,  -176,   137,   524,
     596,    10,   409,   494,  -176,  -176,   200,  -176,   668,   410,
     411,  -176,  -176,   240,   632,  -176,  -176,   370,   412,  -176,
    -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   112,     0,     0,     0,     9,     0,     0,     0,    44,
       0,    46,     0,     0,     0,    34,     1,     0,     6,     0,
       0,     0,    71,     0,     8,     0,     0,    43,    45,    55,
       0,    49,    50,     0,    32,    33,    15,     0,    13,     0,
       0,     4,     0,     5,    70,     0,     7,     0,    54,     0,
      47,     0,     0,    37,     0,     0,    11,    12,     0,     0,
       0,     3,    77,     0,     0,    53,     0,     0,     0,    48,
      35,    36,     0,    16,     0,     2,     0,    76,    81,    51,
       0,    78,    56,    61,    38,     0,    18,     0,     0,     0,
       0,     0,    52,     0,     0,    17,     0,    21,     0,     0,
      81,    75,     0,    80,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    19,     0,    86,     0,
      79,    82,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    69,     0,     0,    90,   103,   102,   101,    96,    97,
      98,    94,    95,    99,   100,    91,    92,    93,    10,    57,
      59,    58,    60,     0,    27,     0,     0,    25,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     108,     0,   110,     0,   115,   117,   116,   132,    62,   106,
     134,   146,     0,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,   102,    74,    14,    26,     0,
       0,    24,    72,    85,    41,     0,     0,     0,     0,     0,
       0,     0,   107,   109,    55,   114,     0,     0,   143,     0,
       0,     0,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,     0,    42,
      39,     0,    73,    77,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,   111,     0,   144,     0,    88,   131,
     128,   129,   126,   127,   130,   136,   135,   138,   137,   139,
     140,   141,   142,    67,    68,     0,     0,     0,   125,     0,
      22,    23,     0,     0,   123,   124,     0,     0,     0,     0,
     113,   145,     0,   104,     0,     0,     0,    30,     0,     0,
       0,     0,     0,    87,    29,    31,    81,    64,     0,     0,
       0,   122,   121,     0,     0,   119,   120,     0,     0,    28,
     118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,     7,  -176,  -176,   389,  -176,  -176,   345,  -176,
     339,  -176,  -176,   270,  -176,  -176,  -176,   420,  -176,   384,
    -176,    36,  -176,   431,  -176,   391,  -176,  -175,  -102,    90,
      -6,  -112,   193,   -45,   -99,  -176,   340,  -176,  -154,  -121,
    -132,  -176,   -97,  -176,  -176,   262,     0,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,    -2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,    19,    37,    38,    39,    85,    86,    96,
      97,   210,   163,   164,   140,     6,    14,    15,    52,    53,
     141,     7,    10,    11,    30,    31,    64,    32,   194,    21,
      22,   107,    76,    77,    91,   104,   105,   119,   267,   143,
     144,   145,   178,   147,   181,   182,    23,   226,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   268
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   117,    12,    65,   142,   168,   177,   179,   225,   146,
      12,   204,     1,    18,    24,    44,    36,    50,   187,    44,
     169,   321,    13,   188,     1,   142,   142,    41,    43,   116,
     190,   264,    46,    54,    67,    92,    44,    48,   297,    68,
      60,   142,    20,    49,   101,   204,   205,   204,    66,    61,
      45,    16,    54,    44,    56,    40,   134,   135,   136,   191,
       1,    70,    66,   137,    51,   139,    75,   170,   192,   193,
     266,   216,   167,   207,    87,   142,   187,   142,   265,    29,
      66,   188,    26,    26,   189,    98,    13,     1,   190,    66,
     300,   230,   231,   232,   233,   227,   114,    25,   171,   172,
     171,   172,   292,   235,   236,   237,   238,   239,   240,   241,
      42,     2,   165,    34,   134,   135,   136,   191,    33,    36,
       1,   137,   211,   139,    17,     1,   192,   193,     2,   183,
      59,   195,   304,   305,    47,     1,   102,     1,   242,   243,
     102,   230,   231,   232,   233,     9,     1,   108,   257,     2,
      55,     3,   109,   235,   236,   237,   238,   239,   240,   241,
      27,   103,   112,   165,   110,   120,    58,    66,     1,   111,
     215,   180,   217,   218,   219,   309,   310,   204,   204,   122,
      79,   183,    72,    80,    62,    73,    63,    74,   242,   243,
     228,   229,   204,   222,   142,   142,   246,   324,   317,    78,
      45,   251,    81,   230,   231,   232,   233,   142,   142,    82,
     291,   327,   134,   135,   136,   235,   142,   323,    83,   137,
      88,   139,   142,    89,   254,    84,    93,   255,   270,   271,
     272,   273,    90,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   230,   231,   301,   306,   307,   302,    89,   302,
      99,   100,   106,    66,   235,    66,   230,   231,   232,   233,
     298,   299,    94,   230,   231,   232,   233,   116,   235,   236,
     237,   238,   239,   240,   241,   235,   236,   237,   238,   239,
     240,   241,   230,   231,   232,   233,   314,   315,   115,   302,
     302,   308,   118,   158,   235,   159,   160,   238,   239,   166,
     313,   173,   161,   242,   243,   162,   184,   259,   174,   175,
     242,   243,   176,   185,   260,   230,   231,   232,   233,   186,
     196,   197,   230,   231,   232,   233,   198,   235,   236,   237,
     238,   239,   240,   241,   235,   236,   237,   238,   239,   240,
     241,   230,   231,   232,   233,   201,   199,   200,   202,   203,
     209,   206,   167,   235,   236,   237,   238,   239,   240,   241,
     212,   213,   242,   243,   214,   224,   261,   244,   245,   242,
     243,   247,   248,   269,   249,   250,   253,   256,   252,   258,
     262,   230,   231,   232,   233,   263,   286,    49,   242,   243,
     290,   284,   283,   235,   236,   237,   238,   239,   240,   241,
     230,   231,   232,   233,   285,   287,   293,   296,   294,   295,
     297,   303,   235,   236,   237,   238,   239,   240,   241,   187,
     322,   325,   326,   330,   188,   316,    57,   329,   242,   243,
      95,   190,   311,   208,    35,   113,    71,   230,   231,   232,
     233,    28,    69,   223,   121,     0,   289,   242,   243,   235,
       0,   312,   238,   239,   240,   241,     0,   134,   135,   136,
     191,     0,     0,     0,   137,     0,   139,     0,     0,   192,
     193,   230,   231,   232,   233,     0,     0,     0,   234,     0,
       0,     0,     0,   235,   236,   237,   238,   239,   240,   241,
     230,   231,   232,   233,     0,     0,     0,   288,   230,   231,
     232,   233,   235,   236,   237,   238,   239,   240,   241,     0,
     235,   236,   237,   238,   239,   240,   241,     0,   242,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,     0,     0,   242,   243,     0,
       0,     0,     0,     0,     0,   242,   243,   125,     0,   318,
     319,   126,   127,     0,   128,     0,   129,     0,     0,     0,
     130,   131,   132,   133,     0,   134,   135,   136,   122,   123,
     124,     0,   137,   138,   139,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,   126,   127,     0,
     128,   221,   129,     0,     0,     0,   130,   131,   132,   133,
       0,   134,   135,   136,   122,   123,   124,     0,   137,   138,
     139,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,   126,   127,   320,   128,     0,   129,     0,
       0,     0,   130,   131,   132,   133,     0,   134,   135,   136,
     122,   123,   124,     0,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,   328,   126,
     127,     0,   128,     0,   129,     0,     0,     0,   130,   131,
     132,   133,     0,   134,   135,   136,   122,   123,   124,     0,
     137,   138,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,   126,   127,     0,   128,     0,
     129,     0,     0,     0,   130,   131,   132,   133,     0,   134,
     135,   136,   122,   123,   124,     0,   137,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,   220,   127,     0,   128,     0,   129,     0,     0,     0,
     130,   131,   132,   133,     0,   134,   135,   136,   230,   231,
     232,   233,   137,   138,   139,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241
};

static const yytype_int16 yycheck[] =
{
       0,   100,     2,    48,   106,   117,   127,   128,   183,   106,
      10,   143,     8,     6,     7,    21,     8,    11,     3,    25,
      11,    11,     8,     8,     8,   127,   128,    20,    21,    11,
      15,    11,    25,    33,     3,    80,    42,    54,    28,     8,
      40,   143,     6,    60,    89,   177,   143,   179,    48,    42,
       8,     0,    52,    59,    46,    19,    41,    42,    43,    44,
       8,    57,    62,    48,    58,    50,    59,    58,    53,    54,
      55,   173,    54,    57,    74,   177,     3,   179,    58,     8,
      80,     8,    40,    40,    11,    85,     8,     8,    15,    89,
     265,     4,     5,     6,     7,    54,    96,     7,    59,    60,
      59,    60,   256,    16,    17,    18,    19,    20,    21,    22,
      20,    32,   112,    35,    41,    42,    43,    44,    56,     8,
       8,    48,   167,    50,    45,     8,    53,    54,    32,   129,
      40,   133,   286,   287,    54,     8,     8,     8,    51,    52,
       8,     4,     5,     6,     7,    33,     8,     3,    61,    32,
      47,    34,     8,    16,    17,    18,    19,    20,    21,    22,
      33,    33,    33,   163,     3,    33,    56,   167,     8,     8,
     172,    33,   174,   175,   176,   296,   297,   309,   310,     8,
      55,   181,     8,    58,    54,     8,    55,    32,    51,    52,
     192,   193,   324,    33,   296,   297,   198,   318,    61,    56,
       8,   203,     8,     4,     5,     6,     7,   309,   310,    61,
     255,   323,    41,    42,    43,    16,   318,   316,    61,    48,
      55,    50,   324,    58,    55,    11,    60,    58,   230,   231,
     232,   233,    32,   235,   236,   237,   238,   239,   240,   241,
     242,   243,     4,     5,    55,    55,    55,    58,    58,    58,
       8,    56,    12,   253,    16,   255,     4,     5,     6,     7,
     262,   263,    60,     4,     5,     6,     7,    11,    16,    17,
      18,    19,    20,    21,    22,    16,    17,    18,    19,    20,
      21,    22,     4,     5,     6,     7,    55,    55,     8,    58,
      58,   293,     8,    57,    16,    61,    61,    19,    20,     8,
     302,    54,    61,    51,    52,    61,    11,    55,    54,    54,
      51,    52,    54,    11,    55,     4,     5,     6,     7,    11,
      54,    54,     4,     5,     6,     7,    54,    16,    17,    18,
      19,    20,    21,    22,    16,    17,    18,    19,    20,    21,
      22,     4,     5,     6,     7,    59,    54,    54,    59,    14,
       8,    13,    54,    16,    17,    18,    19,    20,    21,    22,
      57,     8,    51,    52,     8,     8,    55,    55,    55,    51,
      52,     8,     8,    55,     8,     8,    54,    54,    13,    55,
      54,     4,     5,     6,     7,    54,    54,    60,    51,    52,
      11,    55,    55,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    55,    54,    60,    24,    11,    11,
      28,    11,    16,    17,    18,    19,    20,    21,    22,     3,
      11,    11,    11,    11,     8,    56,    37,    57,    51,    52,
      85,    15,    55,   163,    14,    96,    52,     4,     5,     6,
       7,    10,    51,   181,   104,    -1,   253,    51,    52,    16,
      -1,    55,    19,    20,    21,    22,    -1,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    53,
      54,     4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    -1,    -1,    -1,    11,     4,     5,
       6,     7,    16,    17,    18,    19,    20,    21,    22,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    23,    -1,    25,
      26,    27,    28,    -1,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    -1,    41,    42,    43,     8,     9,
      10,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,     8,     9,    10,    -1,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,    41,    42,    43,
       8,     9,    10,    -1,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    -1,    41,    42,    43,     8,     9,    10,    -1,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,
      42,    43,     8,     9,    10,    -1,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    -1,    41,    42,    43,     4,     5,
       6,     7,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    63,    64,    77,    83,   108,    33,
      84,    85,   108,     8,    78,    79,     0,    45,    64,    65,
      83,    91,    92,   108,    64,    91,    40,    33,    85,     8,
      86,    87,    89,    56,    35,    79,     8,    66,    67,    68,
      83,    64,    91,    64,    92,     8,    64,    54,    54,    60,
      11,    58,    80,    81,   108,    47,    46,    67,    56,    91,
     108,    64,    54,    55,    88,    95,   108,     3,     8,    87,
      57,    81,     8,     8,    32,    64,    94,    95,    56,    55,
      58,     8,    61,    61,    11,    69,    70,   108,    55,    58,
      32,    96,    95,    60,    60,    70,    71,    72,   108,     8,
      56,    95,     8,    33,    97,    98,    12,    93,     3,     8,
       3,     8,    33,    72,   108,     8,    11,    96,     8,    99,
      33,    98,     8,     9,    10,    23,    27,    28,    30,    32,
      36,    37,    38,    39,    41,    42,    43,    48,    49,    50,
      76,    82,    90,   101,   102,   103,   104,   105,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    57,    61,
      61,    61,    61,    74,    75,   108,     8,    54,    93,    11,
      58,    59,    60,    54,    54,    54,    54,   101,   104,   101,
      33,   106,   107,   108,    11,    11,    11,     3,     8,    11,
      15,    44,    53,    54,    90,   120,    54,    54,    54,    54,
      54,    59,    59,    14,   102,   104,    13,    57,    75,     8,
      73,    95,    57,     8,     8,   120,    90,   120,   120,   120,
      27,    31,    33,   107,     8,    89,   109,    54,   120,   120,
       4,     5,     6,     7,    11,    16,    17,    18,    19,    20,
      21,    22,    51,    52,    55,    55,   120,     8,     8,     8,
       8,   120,    13,    54,    55,    58,    54,    61,    55,    55,
      55,    55,    54,    54,    11,    58,    55,   100,   120,    55,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,    55,    55,    55,    54,    54,    11,    94,
      11,    95,   100,    60,    11,    11,    24,    28,   120,   120,
      89,    55,    58,    11,   100,   100,    55,    55,   120,   101,
     101,    55,    55,   120,    55,    55,    56,    61,    25,    26,
      29,    11,    11,    96,   101,    11,    11,    93,    26,    57,
      11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    73,    73,    73,    74,    74,    75,    76,
      76,    76,    77,    78,    78,    79,    80,    80,    81,    82,
      82,    82,    82,    83,    83,    84,    84,    85,    86,    86,
      87,    87,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    92,    93,    93,    94,    94,    94,    95,    96,
      96,    96,    97,    97,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   104,   104,   105,   105,   106,
     106,   107,   108,   109,   109,   110,   111,   112,   113,   113,
     114,   115,   116,   117,   118,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     2,     3,     2,     1,
       8,     3,     2,     1,     8,     1,     3,     2,     1,     3,
       2,     1,     6,     3,     1,     0,     2,     1,     9,     6,
       6,     6,     3,     2,     1,     4,     2,     1,     3,     3,
       1,     3,     3,     3,     2,     2,     1,     3,     3,     1,
       1,     4,     3,     1,     0,     1,     4,     7,     7,     7,
       7,     4,     1,     4,     7,     3,     3,     4,     4,     1,
       2,     1,     9,     4,     3,     3,     1,     0,     2,     3,
       2,     0,     2,     1,     3,     3,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     3,     2,     3,     2,     2,
       1,     3,     1,     3,     1,     2,     2,     2,    10,     8,
       8,     7,     7,     5,     5,     4,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     1
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
#line 125 "expr_tree.y"
    {
      exit(1);
    }
#line 1742 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 129 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1751 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 134 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1760 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 139 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1769 "y.tab.c"
    break;

  case 6: /* Program: TypeDefBlock MainBlock  */
#line 144 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1778 "y.tab.c"
    break;

  case 7: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 149 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1787 "y.tab.c"
    break;

  case 8: /* Program: GDeclBlock MainBlock  */
#line 154 "expr_tree.y"
    {

      exit(1);
    }
#line 1796 "y.tab.c"
    break;

  case 9: /* Program: MainBlock  */
#line 159 "expr_tree.y"
    {
      exit(1);
    }
#line 1804 "y.tab.c"
    break;

  case 10: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 167 "expr_tree.y"
    {
  

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
#line 1833 "y.tab.c"
    break;

  case 12: /* ClassDefList: ClassDefList ClassDef  */
#line 200 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
      // reset 
      resetCurrentClassBeingDefined();

    }
#line 1844 "y.tab.c"
    break;

  case 13: /* ClassDefList: ClassDef  */
#line 207 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
      // reset
      resetCurrentClassBeingDefined();
    }
#line 1854 "y.tab.c"
    break;

  case 14: /* ClassDef: ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'  */
#line 216 "expr_tree.y"
    {
      
      // class name, class fields, class methods declarations, class methods definitions
      (yyval.node) = makeClassNode((yyvsp[-7].string), (yyvsp[-4].typeField), (yyvsp[-1].node));
    }
#line 1864 "y.tab.c"
    break;

  case 15: /* ClassName: ID  */
#line 225 "expr_tree.y"
    {
      classInstall((yyvsp[0].string),NULL);
      (yyval.string) = (yyvsp[0].string);
    }
#line 1873 "y.tab.c"
    break;

  case 16: /* ClassName: ID EXTENDS ID  */
#line 230 "expr_tree.y"
    {
      classInstall((yyvsp[-2].string),(yyvsp[0].string));
      (yyval.string) = (yyvsp[-2].string);
    }
#line 1882 "y.tab.c"
    break;

  case 17: /* ClassFieldLists: ClassFieldLists ClassFieldDecl  */
#line 238 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1891 "y.tab.c"
    break;

  case 18: /* ClassFieldLists: ClassFieldDecl  */
#line 243 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1899 "y.tab.c"
    break;

  case 19: /* ClassFieldDecl: Type ID SEMICOLON  */
#line 250 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
      classFieldInstall(getCurrentClassBeingDefined(), (yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1908 "y.tab.c"
    break;

  case 20: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 258 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1916 "y.tab.c"
    break;

  case 21: /* ClassMethodDeclList: ClassMethodDecl  */
#line 262 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1924 "y.tab.c"
    break;

  case 22: /* ClassMethodDecl: Type ID '(' ClassParamList ')' SEMICOLON  */
#line 269 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-4].string), NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = (yyvsp[-2].node);
    idNode->type = typeLookup((yyvsp[-5].string));
    (yyval.node) = idNode; 
  }
#line 1936 "y.tab.c"
    break;

  case 23: /* ClassParamList: ClassParamList ',' Param  */
#line 279 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1946 "y.tab.c"
    break;

  case 24: /* ClassParamList: Param  */
#line 285 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1954 "y.tab.c"
    break;

  case 25: /* ClassParamList: %empty  */
#line 289 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1962 "y.tab.c"
    break;

  case 26: /* ClassMethodDefns: ClassMethodDefns ClassFunctionDef  */
#line 296 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
#line 1970 "y.tab.c"
    break;

  case 27: /* ClassMethodDefns: ClassFunctionDef  */
#line 300 "expr_tree.y"
  {
    popAllLocalDeclarationsAndCreateEntry(NULL);
  }
#line 1978 "y.tab.c"
    break;

  case 28: /* ClassFunctionDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 308 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeMethodDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
    }
#line 1987 "y.tab.c"
    break;

  case 29: /* ClassFieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 356 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), makeIdNode("self"), (yyvsp[-1].node));

  }
#line 1996 "y.tab.c"
    break;

  case 30: /* ClassFieldFunction: ID '.' ID '(' ArgList ')'  */
#line 361 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), makeIdNode((yyvsp[-5].string)), (yyvsp[-1].node));

  }
#line 2005 "y.tab.c"
    break;

  case 31: /* ClassFieldFunction: Field '.' ID '(' ArgList ')'  */
#line 366 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), (yyvsp[-5].node), (yyvsp[-1].node));
  }
#line 2013 "y.tab.c"
    break;

  case 35: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 385 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 2021 "y.tab.c"
    break;

  case 36: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 392 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2030 "y.tab.c"
    break;

  case 37: /* TypeFieldDeclList: TypeFieldDecl  */
#line 397 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2038 "y.tab.c"
    break;

  case 38: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 404 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 2046 "y.tab.c"
    break;

  case 39: /* Field: Field '.' ID  */
#line 413 "expr_tree.y"
    { 
      insertIntoClassFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);

      
    }
#line 2057 "y.tab.c"
    break;

  case 40: /* Field: ClassFieldFunction  */
#line 420 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2065 "y.tab.c"
    break;

  case 41: /* Field: ID '.' ID  */
#line 425 "expr_tree.y"
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode((yyvsp[-2].string),rightFieldNode,NULL);

      fieldCall(leftFieldNode,rightFieldNode);

      (yyval.node) = leftFieldNode;


    }
#line 2082 "y.tab.c"
    break;

  case 42: /* Field: SELF '.' ID  */
#line 438 "expr_tree.y"
    {
      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode("self",rightFieldNode,NULL);
      leftFieldNode->classType = getCurrentClassBeingDefined();

      // if left class type is null
      if(leftFieldNode->classType == NULL)
      {
        yyerror("Self not declared. Self can only be used inside classes.\n");
        exit(1);
      }

      
 
      // get the type of the right field node
      struct FieldList * rightType = classFieldLookup(leftFieldNode->classType, rightFieldNode->varname);
      // if right type is null
      if(rightType == NULL)
      {
        yyerror("Field not found in class \n");
        exit(1);
      }
     
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      (yyval.node) = leftFieldNode;


    }
#line 2117 "y.tab.c"
    break;

  case 43: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 472 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2129 "y.tab.c"
    break;

  case 44: /* GDeclBlock: DECL ENDDECL  */
#line 480 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2141 "y.tab.c"
    break;

  case 47: /* GDecl: Type GidList SEMICOLON  */
#line 496 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 2149 "y.tab.c"
    break;

  case 48: /* GidList: GidList ',' Gid  */
#line 503 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2157 "y.tab.c"
    break;

  case 49: /* GidList: Gid  */
#line 507 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2165 "y.tab.c"
    break;

  case 50: /* Gid: identifierDecl  */
#line 513 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2171 "y.tab.c"
    break;

  case 51: /* Gid: ID '(' GParamList ')'  */
#line 515 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2182 "y.tab.c"
    break;

  case 52: /* GParamList: GParamList ',' Param  */
#line 525 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2192 "y.tab.c"
    break;

  case 53: /* GParamList: Param  */
#line 531 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2200 "y.tab.c"
    break;

  case 54: /* GParamList: %empty  */
#line 535 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2208 "y.tab.c"
    break;

  case 55: /* identifierDecl: ID  */
#line 541 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2216 "y.tab.c"
    break;

  case 56: /* identifierDecl: ID '[' INT ']'  */
#line 545 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2226 "y.tab.c"
    break;

  case 57: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 551 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2237 "y.tab.c"
    break;

  case 58: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 558 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2249 "y.tab.c"
    break;

  case 59: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 566 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2261 "y.tab.c"
    break;

  case 60: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 574 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2273 "y.tab.c"
    break;

  case 61: /* identifierDecl: ID '[' ID ']'  */
#line 582 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2283 "y.tab.c"
    break;

  case 62: /* identifierUse: ID  */
#line 593 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2291 "y.tab.c"
    break;

  case 63: /* identifierUse: ID '[' expr ']'  */
#line 597 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2301 "y.tab.c"
    break;

  case 64: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 603 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2312 "y.tab.c"
    break;

  case 65: /* identifierUse: INITIALIZE '(' ')'  */
#line 610 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2320 "y.tab.c"
    break;

  case 66: /* identifierUse: ALLOC '(' ')'  */
#line 614 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2328 "y.tab.c"
    break;

  case 67: /* identifierUse: FREE '(' expr ')'  */
#line 618 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2336 "y.tab.c"
    break;

  case 68: /* identifierUse: NEW '(' ID ')'  */
#line 622 "expr_tree.y"
  {
    (yyval.node) = makeNewNode((yyvsp[-1].string));
  }
#line 2344 "y.tab.c"
    break;

  case 69: /* identifierUse: Field  */
#line 626 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2352 "y.tab.c"
    break;

  case 70: /* FDefBlock: FDefBlock FDef  */
#line 638 "expr_tree.y"
      {

      }
#line 2360 "y.tab.c"
    break;

  case 71: /* FDefBlock: FDef  */
#line 642 "expr_tree.y"
      {
      }
#line 2367 "y.tab.c"
    break;

  case 72: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 649 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2377 "y.tab.c"
    break;

  case 73: /* Body: START Slist ReturnStmt END  */
#line 660 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2386 "y.tab.c"
    break;

  case 74: /* Body: START ReturnStmt END  */
#line 665 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),NULL);
    }
#line 2394 "y.tab.c"
    break;

  case 75: /* ParamList: ParamList ',' Param  */
#line 672 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2405 "y.tab.c"
    break;

  case 76: /* ParamList: Param  */
#line 679 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2414 "y.tab.c"
    break;

  case 77: /* ParamList: %empty  */
#line 684 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2422 "y.tab.c"
    break;

  case 78: /* Param: Type ID  */
#line 691 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2430 "y.tab.c"
    break;

  case 80: /* LDeclBlock: DECL ENDDECL  */
#line 700 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2438 "y.tab.c"
    break;

  case 81: /* LDeclBlock: %empty  */
#line 704 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2446 "y.tab.c"
    break;

  case 84: /* LDecl: ID LIdList SEMICOLON  */
#line 716 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2454 "y.tab.c"
    break;

  case 85: /* LIdList: LIdList ',' ID  */
#line 723 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2463 "y.tab.c"
    break;

  case 86: /* LIdList: ID  */
#line 728 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2472 "y.tab.c"
    break;

  case 87: /* ArgList: ArgList ',' expr  */
#line 739 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2481 "y.tab.c"
    break;

  case 88: /* ArgList: expr  */
#line 744 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2489 "y.tab.c"
    break;

  case 89: /* Slist: Slist Stmt  */
#line 751 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2495 "y.tab.c"
    break;

  case 90: /* Slist: Stmt  */
#line 752 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2501 "y.tab.c"
    break;

  case 105: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 777 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2509 "y.tab.c"
    break;

  case 106: /* ReturnStmt: RETURN SEMICOLON  */
#line 781 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2517 "y.tab.c"
    break;

  case 111: /* Decl: Type VarList SEMICOLON  */
#line 795 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2527 "y.tab.c"
    break;

  case 113: /* VarList: VarList ',' identifierDecl  */
#line 805 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2533 "y.tab.c"
    break;

  case 114: /* VarList: identifierDecl  */
#line 806 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2539 "y.tab.c"
    break;

  case 115: /* brkStmt: BREAK SEMICOLON  */
#line 810 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2545 "y.tab.c"
    break;

  case 116: /* contStmt: CONTINUE SEMICOLON  */
#line 813 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2551 "y.tab.c"
    break;

  case 117: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 816 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2557 "y.tab.c"
    break;

  case 118: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 819 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2563 "y.tab.c"
    break;

  case 119: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 820 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2569 "y.tab.c"
    break;

  case 120: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 823 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2575 "y.tab.c"
    break;

  case 121: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 826 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2581 "y.tab.c"
    break;

  case 122: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 829 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2587 "y.tab.c"
    break;

  case 123: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 832 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2593 "y.tab.c"
    break;

  case 124: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 835 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2599 "y.tab.c"
    break;

  case 125: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 838 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2605 "y.tab.c"
    break;

  case 126: /* expr: expr PLUS expr  */
#line 841 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2611 "y.tab.c"
    break;

  case 127: /* expr: expr MINUS expr  */
#line 842 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2617 "y.tab.c"
    break;

  case 128: /* expr: expr MUL expr  */
#line 843 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2623 "y.tab.c"
    break;

  case 129: /* expr: expr DIV expr  */
#line 844 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2629 "y.tab.c"
    break;

  case 130: /* expr: expr MOD expr  */
#line 845 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2635 "y.tab.c"
    break;

  case 131: /* expr: '(' expr ')'  */
#line 846 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2641 "y.tab.c"
    break;

  case 132: /* expr: INT  */
#line 847 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2647 "y.tab.c"
    break;

  case 133: /* expr: identifierUse  */
#line 848 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2653 "y.tab.c"
    break;

  case 134: /* expr: STRING  */
#line 849 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2659 "y.tab.c"
    break;

  case 135: /* expr: expr LT expr  */
#line 850 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2665 "y.tab.c"
    break;

  case 136: /* expr: expr GT expr  */
#line 851 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2671 "y.tab.c"
    break;

  case 137: /* expr: expr LE expr  */
#line 852 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2677 "y.tab.c"
    break;

  case 138: /* expr: expr GE expr  */
#line 853 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2683 "y.tab.c"
    break;

  case 139: /* expr: expr NE expr  */
#line 854 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2689 "y.tab.c"
    break;

  case 140: /* expr: expr EQ expr  */
#line 855 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2695 "y.tab.c"
    break;

  case 141: /* expr: expr AND expr  */
#line 856 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2701 "y.tab.c"
    break;

  case 142: /* expr: expr OR expr  */
#line 857 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2707 "y.tab.c"
    break;

  case 143: /* expr: NOT expr  */
#line 858 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2713 "y.tab.c"
    break;

  case 144: /* expr: ID '(' ')'  */
#line 859 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2719 "y.tab.c"
    break;

  case 145: /* expr: ID '(' ArgList ')'  */
#line 860 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2725 "y.tab.c"
    break;

  case 146: /* expr: NULLVAL  */
#line 861 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2731 "y.tab.c"
    break;


#line 2735 "y.tab.c"

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

#line 865 "expr_tree.y"


void yyerror(char const *s)
{
    // print error and line number
    printf("yyerror %s : %s at line number %d\n",s, yytext, yylineno);
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
