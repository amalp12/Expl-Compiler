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
int _INIT_STATE ;

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   824

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  339

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
       0,   129,   129,   133,   137,   141,   146,   151,   156,   161,
     166,   171,   179,   209,   212,   219,   228,   237,   242,   250,
     255,   262,   270,   274,   281,   291,   297,   302,   308,   312,
     320,   329,   344,   359,   401,   443,   447,   457,   461,   462,
     466,   473,   478,   485,   494,   502,   515,   549,   557,   568,
     569,   573,   580,   584,   591,   592,   602,   608,   613,   618,
     622,   628,   635,   643,   651,   659,   670,   674,   680,   687,
     691,   695,   699,   703,   707,   719,   723,   730,   741,   746,
     753,   760,   766,   772,   780,   781,   786,   793,   794,   797,
     804,   809,   820,   825,   834,   835,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   855,
     859,   863,   870,   871,   873,   874,   877,   885,   888,   889,
     893,   896,   899,   902,   903,   906,   909,   912,   915,   918,
     921,   924,   925,   926,   927,   928,   929,   930,   931,   932,
     933,   934,   935,   936,   937,   938,   939,   940,   941,   942,
     943,   944
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

#define YYPACT_NINF (-249)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      96,  -249,    62,     9,    21,    52,  -249,    51,   126,    77,
      83,  -249,    65,  -249,   153,   108,    33,  -249,   116,     7,
    -249,   138,  -249,    77,  -249,    51,    77,    77,  -249,    17,
    -249,    77,   141,  -249,  -249,   -32,    -3,  -249,  -249,    77,
    -249,  -249,   192,  -249,  -249,   170,    77,   196,    77,  -249,
      77,  -249,  -249,   156,  -249,   173,    77,   106,  -249,   153,
       1,  -249,   222,  -249,    77,  -249,  -249,    77,  -249,    77,
     155,    78,  -249,   234,   168,   190,  -249,  -249,  -249,   241,
      77,  -249,   236,  -249,   104,  -249,   232,  -249,    77,  -249,
     199,   209,  -249,  -249,    92,  -249,   265,   263,   225,    77,
      94,   277,  -249,   121,   139,    77,  -249,   285,    38,  -249,
     232,  -249,   290,  -249,    98,  -249,   726,   243,   238,   244,
     246,   250,     2,  -249,   304,   264,    77,   277,  -249,     3,
    -249,  -249,    -9,   270,   271,   272,   274,   726,   726,   107,
     306,   319,   320,   458,   286,   287,   292,   311,   312,   280,
    -249,   308,   354,   726,  -249,  -249,   367,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,   333,   163,  -249,   334,  -249,
     380,   384,   495,    69,   495,   495,   495,   762,  -249,   618,
    -249,   124,  -249,   386,  -249,  -249,  -249,  -249,   218,  -249,
    -249,  -249,   495,   495,  -249,   546,   340,   341,   495,   389,
     390,   391,   392,   495,  -249,   393,  -249,    77,   394,    77,
    -249,  -249,   353,    14,   355,   331,   338,   357,   370,   371,
    -249,  -249,   351,  -249,    13,   212,   802,   397,   495,   495,
     495,   495,  -249,   495,   495,   495,   495,   495,   495,   495,
     495,   495,  -249,  -249,   416,   376,   395,   372,   399,   565,
    -249,   203,  -249,  -249,   242,   387,   435,   440,   430,   427,
     495,   495,  -249,   386,  -249,   221,   161,  -249,  -249,  -249,
     193,   193,  -249,   227,   227,   183,   183,   365,   365,   802,
     802,  -249,  -249,   445,   260,   279,  -249,   401,  -249,   233,
     495,  -249,  -249,   726,   726,   423,   475,  -249,  -249,   495,
    -249,  -249,   251,  -249,   261,   232,  -249,   219,   582,   654,
      68,   447,   161,  -249,  -249,   277,  -249,   726,   448,   449,
    -249,  -249,   405,   690,  -249,  -249,  -249,   452,  -249
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   117,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    48,     0,    50,     0,     0,     0,    39,    17,     0,
      15,     0,     1,     0,     8,     0,     0,     0,    76,     0,
      10,     0,     0,    47,    49,    59,     0,    53,    54,     0,
      37,    38,     0,    13,    14,     0,     0,     0,     0,     6,
       0,     7,    75,     0,     9,     0,    58,     0,    51,     0,
       0,    42,     0,    18,     0,     3,     4,     0,     5,    82,
       0,     0,    57,     0,     0,     0,    52,    40,    41,     0,
       0,    20,     0,     2,     0,    81,    86,    55,     0,    83,
      60,    65,    43,    19,     0,    23,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,    22,     0,     0,    21,
      86,    80,     0,    85,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    27,     0,    91,     0,
      84,    87,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    73,     0,     0,    95,   108,   107,   106,   101,   102,
     103,    99,   100,   104,   105,    96,    97,    98,    12,    61,
      63,    62,    64,    16,    28,     0,     0,    26,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     113,     0,   115,     0,   120,   122,   121,   137,    66,   111,
     139,   151,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,   107,    79,    82,     0,     0,
      77,    90,    45,     0,     0,     0,     0,     0,     0,     0,
     112,   114,    59,   119,     0,     0,   148,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,     0,     0,    46,    44,     0,
      78,     0,    24,    25,     0,    67,     0,     0,     0,     0,
       0,     0,   116,     0,   149,     0,    93,   136,   133,   134,
     131,   132,   135,   141,   140,   143,   142,   144,   145,   146,
     147,    71,    72,     0,     0,     0,   130,     0,    34,     0,
       0,   128,   129,     0,     0,     0,     0,   118,   150,     0,
     109,    32,     0,    36,     0,    86,    33,     0,     0,     0,
       0,     0,    92,    31,    35,     0,    68,     0,     0,     0,
     127,   126,     0,     0,   124,   125,    30,     0,   123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,    36,   456,  -249,   446,  -249,  -249,   396,  -249,
     378,  -249,  -249,   348,  -249,  -249,  -249,   461,  -249,   424,
    -249,   178,  -249,   471,  -249,   426,  -249,  -180,  -111,   112,
      70,  -124,   269,   -45,  -109,  -249,   373,  -249,  -248,  -131,
    -149,  -249,   -79,  -249,  -249,   297,     0,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,   -95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,     7,    19,    20,    21,    80,    81,    94,
      95,   176,   122,   123,   150,     8,    16,    17,    60,    61,
     151,     9,    12,    13,    36,    37,    71,    38,   204,    27,
      28,   117,    84,    85,   101,   114,   115,   129,   275,   153,
     154,   155,   188,   157,   191,   192,    29,   234,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   276
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   127,    14,   178,   214,   152,   187,   189,    58,     1,
       1,    72,    14,   233,   179,    18,   299,    15,   238,   239,
     240,   241,    56,    47,   272,    53,   152,   152,    57,    18,
     243,   244,   245,   246,   247,   248,   249,   156,   214,    62,
     214,    15,   152,   102,    24,    30,   312,   314,   205,   109,
     181,   182,    22,    43,   111,    59,    73,    32,    77,   173,
      62,   180,    49,    51,    82,   250,   251,    54,    40,    73,
       1,   273,   224,     1,   215,   265,   152,   132,   152,   330,
      96,   177,    65,     2,    66,     1,    68,   223,    73,   225,
     226,   227,   126,   307,   107,    11,   304,    52,    33,    73,
       1,    52,   112,    83,     1,   124,   112,   236,   237,    74,
     144,   145,   146,   254,    75,     1,    52,   147,   259,   149,
      52,    31,   124,    32,   118,   105,    73,   113,     2,   119,
       3,   130,     1,    87,     1,    46,    88,    52,    50,   193,
     190,     4,   120,   278,   279,   280,   281,   121,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   230,     2,    98,
      67,    35,    99,    42,    39,   238,   239,   240,   241,   214,
     214,     4,   318,   319,   263,   305,   306,   243,   244,   245,
     246,   247,   248,   249,   214,    23,    26,   238,   239,   240,
     241,   193,   152,   152,    45,    55,   333,   238,   239,   243,
      63,   332,    64,    48,    53,   317,   325,   152,   152,   243,
      69,    86,   250,   251,   322,   197,   152,    73,   218,    73,
     198,   219,   152,   238,   239,   240,   241,   200,    70,    90,
      79,   238,   239,   240,   241,   243,   244,   245,   246,   247,
     248,   249,    89,   243,    97,   197,   246,   247,   248,   249,
     198,    91,    92,   144,   145,   146,   201,   200,   297,   103,
     147,    99,   149,   197,   100,   202,   203,   274,   198,   104,
     250,   251,   235,   108,   109,   200,   308,   181,   182,   309,
     326,   110,   197,   144,   145,   146,   201,   198,   316,   116,
     147,   309,   149,   125,   200,   202,   203,   298,   128,   169,
     168,   144,   145,   146,   201,   170,   323,   171,   147,   309,
     149,   172,   175,   202,   203,   311,   324,   194,   126,   309,
     144,   145,   146,   201,   183,   184,   185,   147,   186,   149,
     195,   196,   202,   203,   313,   238,   239,   240,   241,   211,
     206,   207,   238,   239,   240,   241,   208,   243,   244,   245,
     246,   247,   248,   249,   243,   244,   245,   246,   247,   248,
     249,   238,   239,   240,   241,   209,   210,   212,   213,   238,
     239,   240,   241,   243,   244,   245,   246,   247,   248,   249,
     216,   243,   250,   251,   246,   247,   267,   217,   221,   250,
     251,   220,   222,   268,   232,   252,   253,   255,   256,   257,
     258,   238,   239,   240,   241,   262,   260,   264,   250,   251,
     266,    57,   269,   243,   244,   245,   246,   247,   248,   249,
     238,   239,   240,   241,   270,   271,   294,   238,   239,   240,
     241,   292,   243,   244,   245,   246,   247,   248,   249,   243,
     244,   245,   246,   247,   248,   249,   301,   300,   250,   251,
     293,   302,   277,   295,   303,   304,   310,   315,   331,   334,
     335,   197,   336,   338,    25,    44,   198,   250,   251,   199,
     174,   291,   106,   200,   250,   251,    93,    41,   320,   238,
     239,   240,   241,    34,    78,    76,   261,   131,   231,     0,
       0,   243,   244,   245,   246,   247,   248,   249,   197,   144,
     145,   146,   201,   198,     0,     0,   147,     0,   149,     0,
     200,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,     0,     0,
     321,     0,     0,     0,     0,     0,   144,   145,   146,   201,
       0,     0,     0,   147,     0,   149,     0,     0,   202,   203,
     238,   239,   240,   241,     0,     0,     0,   242,     0,     0,
       0,     0,   243,   244,   245,   246,   247,   248,   249,   238,
     239,   240,   241,     0,     0,     0,   296,     0,     0,     0,
       0,   243,   244,   245,   246,   247,   248,   249,     0,     0,
     132,   133,   134,     0,     0,     0,     0,   250,   251,     0,
       0,     0,     0,     0,     0,   135,     0,   327,   328,   136,
     137,     0,   138,     0,   139,     0,   250,   251,   140,   141,
     142,   143,     0,   144,   145,   146,   132,   133,   134,     0,
     147,   148,   149,     0,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,   136,   137,     0,   138,   229,
     139,     0,     0,     0,   140,   141,   142,   143,     0,   144,
     145,   146,   132,   133,   134,     0,   147,   148,   149,     0,
       0,     0,     0,     0,     0,     0,     0,   135,     0,     0,
       0,   136,   137,   329,   138,     0,   139,     0,     0,     0,
     140,   141,   142,   143,     0,   144,   145,   146,   132,   133,
     134,     0,   147,   148,   149,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   337,   136,   137,     0,
     138,     0,   139,     0,     0,     0,   140,   141,   142,   143,
       0,   144,   145,   146,   132,   133,   134,     0,   147,   148,
     149,     0,     0,     0,     0,     0,     0,     0,     0,   135,
       0,     0,     0,   136,   137,     0,   138,     0,   139,     0,
       0,     0,   140,   141,   142,   143,     0,   144,   145,   146,
     132,   133,   134,     0,   147,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   135,     0,     0,     0,   228,
     137,     0,   138,     0,   139,     0,     0,     0,   140,   141,
     142,   143,     0,   144,   145,   146,   238,   239,   240,   241,
     147,   148,   149,     0,     0,     0,     0,     0,   243,   244,
     245,   246,   247,   248,   249
};

static const yytype_int16 yycheck[] =
{
       0,   110,     2,   127,   153,   116,   137,   138,    11,     8,
       8,    56,    12,   193,    11,     8,   264,     8,     4,     5,
       6,     7,    54,    23,    11,     8,   137,   138,    60,     8,
      16,    17,    18,    19,    20,    21,    22,   116,   187,    39,
     189,     8,   153,    88,     8,     9,   294,   295,   143,    11,
      59,    60,     0,    46,    99,    58,    56,    40,    57,    57,
      60,    58,    26,    27,    64,    51,    52,    31,    35,    69,
       8,    58,   183,     8,   153,    61,   187,     8,   189,    11,
      80,   126,    46,    32,    48,     8,    50,   182,    88,   184,
     185,   186,    54,   273,    94,    33,    28,    27,    33,    99,
       8,    31,     8,    67,     8,   105,     8,   202,   203,     3,
      41,    42,    43,   208,     8,     8,    46,    48,   213,    50,
      50,     9,   122,    40,     3,    33,   126,    33,    32,     8,
      34,    33,     8,    55,     8,    23,    58,    67,    26,   139,
      33,    45,     3,   238,   239,   240,   241,     8,   243,   244,
     245,   246,   247,   248,   249,   250,   251,    33,    32,    55,
      48,     8,    58,    47,    56,     4,     5,     6,     7,   318,
     319,    45,   303,   304,   219,   270,   271,    16,    17,    18,
      19,    20,    21,    22,   333,     7,     8,     4,     5,     6,
       7,   191,   303,   304,    56,    54,   327,     4,     5,    16,
       8,   325,    32,    25,     8,   300,   315,   318,   319,    16,
      54,    56,    51,    52,   309,     3,   327,   217,    55,   219,
       8,    58,   333,     4,     5,     6,     7,    15,    55,    61,
       8,     4,     5,     6,     7,    16,    17,    18,    19,    20,
      21,    22,     8,    16,     8,     3,    19,    20,    21,    22,
       8,    61,    11,    41,    42,    43,    44,    15,    55,    60,
      48,    58,    50,     3,    32,    53,    54,    55,     8,    60,
      51,    52,    54,     8,    11,    15,    55,    59,    60,    58,
      61,    56,     3,    41,    42,    43,    44,     8,    55,    12,
      48,    58,    50,     8,    15,    53,    54,    55,     8,    61,
      57,    41,    42,    43,    44,    61,    55,    61,    48,    58,
      50,    61,     8,    53,    54,    55,    55,    11,    54,    58,
      41,    42,    43,    44,    54,    54,    54,    48,    54,    50,
      11,    11,    53,    54,    55,     4,     5,     6,     7,    59,
      54,    54,     4,     5,     6,     7,    54,    16,    17,    18,
      19,    20,    21,    22,    16,    17,    18,    19,    20,    21,
      22,     4,     5,     6,     7,    54,    54,    59,    14,     4,
       5,     6,     7,    16,    17,    18,    19,    20,    21,    22,
      13,    16,    51,    52,    19,    20,    55,    54,     8,    51,
      52,    57,     8,    55,     8,    55,    55,     8,     8,     8,
       8,     4,     5,     6,     7,    11,    13,    54,    51,    52,
      55,    60,    55,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    54,    54,    54,     4,     5,     6,
       7,    55,    16,    17,    18,    19,    20,    21,    22,    16,
      17,    18,    19,    20,    21,    22,    11,    60,    51,    52,
      55,    11,    55,    54,    24,    28,    11,    56,    11,    11,
      11,     3,    57,    11,     8,    19,     8,    51,    52,    11,
     122,    55,    94,    15,    51,    52,    80,    16,    55,     4,
       5,     6,     7,    12,    60,    59,   217,   114,   191,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,     3,    41,
      42,    43,    44,     8,    -1,    -1,    48,    -1,    50,    -1,
      15,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    53,    54,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    51,    52,    36,    37,
      38,    39,    -1,    41,    42,    43,     8,     9,    10,    -1,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    41,
      42,    43,     8,     9,    10,    -1,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    -1,    41,    42,    43,     8,     9,
      10,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,     8,     9,    10,    -1,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,    41,    42,    43,
       8,     9,    10,    -1,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    -1,    41,    42,    43,     4,     5,     6,     7,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    32,    34,    45,    63,    64,    65,    77,    83,
     108,    33,    84,    85,   108,     8,    78,    79,     8,    66,
      67,    68,     0,    83,    64,    65,    83,    91,    92,   108,
      64,    91,    40,    33,    85,     8,    86,    87,    89,    56,
      35,    79,    47,    46,    67,    56,    91,   108,    83,    64,
      91,    64,    92,     8,    64,    54,    54,    60,    11,    58,
      80,    81,   108,     8,    32,    64,    64,    91,    64,    54,
      55,    88,    95,   108,     3,     8,    87,    57,    81,     8,
      69,    70,   108,    64,    94,    95,    56,    55,    58,     8,
      61,    61,    11,    70,    71,    72,   108,     8,    55,    58,
      32,    96,    95,    60,    60,    33,    72,   108,     8,    11,
      56,    95,     8,    33,    97,    98,    12,    93,     3,     8,
       3,     8,    74,    75,   108,     8,    54,    96,     8,    99,
      33,    98,     8,     9,    10,    23,    27,    28,    30,    32,
      36,    37,    38,    39,    41,    42,    43,    48,    49,    50,
      76,    82,    90,   101,   102,   103,   104,   105,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    57,    61,
      61,    61,    61,    57,    75,     8,    73,    95,    93,    11,
      58,    59,    60,    54,    54,    54,    54,   101,   104,   101,
      33,   106,   107,   108,    11,    11,    11,     3,     8,    11,
      15,    44,    53,    54,    90,   120,    54,    54,    54,    54,
      54,    59,    59,    14,   102,   104,    13,    54,    55,    58,
      57,     8,     8,   120,    90,   120,   120,   120,    27,    31,
      33,   107,     8,    89,   109,    54,   120,   120,     4,     5,
       6,     7,    11,    16,    17,    18,    19,    20,    21,    22,
      51,    52,    55,    55,   120,     8,     8,     8,     8,   120,
      13,    94,    11,    95,    54,    61,    55,    55,    55,    55,
      54,    54,    11,    58,    55,   100,   120,    55,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,    55,    55,    55,    54,    54,    11,    55,    55,   100,
      60,    11,    11,    24,    28,   120,   120,    89,    55,    58,
      11,    55,   100,    55,   100,    56,    55,   120,   101,   101,
      55,    55,   120,    55,    55,    96,    61,    25,    26,    29,
      11,    11,    93,   101,    11,    11,    57,    26,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    65,    66,    66,    67,    68,    68,    69,
      69,    70,    71,    71,    72,    73,    73,    73,    74,    74,
      75,    76,    76,    76,    76,    76,    76,    77,    78,    78,
      79,    80,    80,    81,    82,    82,    82,    83,    83,    84,
      84,    85,    86,    86,    87,    87,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    93,    93,
      94,    94,    94,    95,    96,    96,    96,    97,    97,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     104,   104,   105,   105,   106,   106,   107,   108,   109,   109,
     110,   111,   112,   113,   113,   114,   115,   116,   117,   118,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     4,     4,     3,     3,     2,     3,
       2,     1,     8,     3,     2,     1,     8,     1,     3,     2,
       1,     3,     2,     1,     6,     3,     1,     0,     2,     1,
       9,     6,     5,     6,     5,     6,     5,     3,     2,     1,
       4,     2,     1,     3,     3,     3,     3,     3,     2,     2,
       1,     3,     3,     1,     1,     4,     3,     1,     0,     1,
       4,     7,     7,     7,     7,     4,     1,     4,     7,     3,
       3,     4,     4,     1,     1,     2,     1,     9,     4,     3,
       3,     1,     0,     2,     3,     2,     0,     2,     1,     3,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     2,     3,     2,     2,     1,     3,     1,     3,     1,
       2,     2,     2,    10,     8,     8,     7,     7,     5,     5,
       4,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       4,     1
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
    {
      exit(1);
    }
#line 1762 "y.tab.c"
    break;

  case 3: /* Program: ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 134 "expr_tree.y"
    {
      exit(1);
    }
#line 1770 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock ClassDefBlock GDeclBlock MainBlock  */
#line 138 "expr_tree.y"
    {
      exit(1);
    }
#line 1778 "y.tab.c"
    break;

  case 5: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 142 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1787 "y.tab.c"
    break;

  case 6: /* Program: TypeDefBlock GDeclBlock MainBlock  */
#line 147 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1796 "y.tab.c"
    break;

  case 7: /* Program: TypeDefBlock FDefBlock MainBlock  */
#line 152 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1805 "y.tab.c"
    break;

  case 8: /* Program: TypeDefBlock MainBlock  */
#line 157 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1814 "y.tab.c"
    break;

  case 9: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 162 "expr_tree.y"
    {
    
      exit(1);
    }
#line 1823 "y.tab.c"
    break;

  case 10: /* Program: GDeclBlock MainBlock  */
#line 167 "expr_tree.y"
    {

      exit(1);
    }
#line 1832 "y.tab.c"
    break;

  case 11: /* Program: MainBlock  */
#line 172 "expr_tree.y"
    {
      exit(1);
    }
#line 1840 "y.tab.c"
    break;

  case 12: /* MainBlock: Type MAIN '(' ')' '{' LDeclBlock Body '}'  */
#line 180 "expr_tree.y"
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
#line 1869 "y.tab.c"
    break;

  case 14: /* ClassDefList: ClassDefList ClassDef  */
#line 213 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
      // reset 
      resetCurrentClassBeingDefined();

    }
#line 1880 "y.tab.c"
    break;

  case 15: /* ClassDefList: ClassDef  */
#line 220 "expr_tree.y"
    {
      defineClass((yyvsp[0].node), target_file);
      // reset
      resetCurrentClassBeingDefined();
    }
#line 1890 "y.tab.c"
    break;

  case 16: /* ClassDef: ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'  */
#line 229 "expr_tree.y"
    {
      
      // class name, class fields, class methods declarations, class methods definitions
      (yyval.node) = makeClassNode((yyvsp[-7].string), (yyvsp[-4].typeField), (yyvsp[-1].node));
    }
#line 1900 "y.tab.c"
    break;

  case 17: /* ClassName: ID  */
#line 238 "expr_tree.y"
    {
      classInstall((yyvsp[0].string),NULL);
      (yyval.string) = (yyvsp[0].string);
    }
#line 1909 "y.tab.c"
    break;

  case 18: /* ClassName: ID EXTENDS ID  */
#line 243 "expr_tree.y"
    {
      classInstall((yyvsp[-2].string),(yyvsp[0].string));
      (yyval.string) = (yyvsp[-2].string);
    }
#line 1918 "y.tab.c"
    break;

  case 19: /* ClassFieldLists: ClassFieldLists ClassFieldDecl  */
#line 251 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1927 "y.tab.c"
    break;

  case 20: /* ClassFieldLists: ClassFieldDecl  */
#line 256 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 1935 "y.tab.c"
    break;

  case 21: /* ClassFieldDecl: Type ID SEMICOLON  */
#line 263 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
      classFieldInstall(getCurrentClassBeingDefined(), (yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 1944 "y.tab.c"
    break;

  case 22: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 271 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1952 "y.tab.c"
    break;

  case 23: /* ClassMethodDeclList: ClassMethodDecl  */
#line 275 "expr_tree.y"
    {
      declareMethod((yyvsp[0].node));
    }
#line 1960 "y.tab.c"
    break;

  case 24: /* ClassMethodDecl: Type ID '(' ClassParamList ')' SEMICOLON  */
#line 282 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-4].string), NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = (yyvsp[-2].node);
    idNode->type = typeLookup((yyvsp[-5].string));
    (yyval.node) = idNode; 
  }
#line 1972 "y.tab.c"
    break;

  case 25: /* ClassParamList: ClassParamList ',' Param  */
#line 292 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 1982 "y.tab.c"
    break;

  case 26: /* ClassParamList: Param  */
#line 298 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 1990 "y.tab.c"
    break;

  case 27: /* ClassParamList: %empty  */
#line 302 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 1998 "y.tab.c"
    break;

  case 28: /* ClassMethodDefns: ClassMethodDefns ClassFunctionDef  */
#line 309 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
#line 2006 "y.tab.c"
    break;

  case 29: /* ClassMethodDefns: ClassFunctionDef  */
#line 313 "expr_tree.y"
  {
    popAllLocalDeclarationsAndCreateEntry(NULL);
  }
#line 2014 "y.tab.c"
    break;

  case 30: /* ClassFunctionDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 321 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeMethodDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
    }
#line 2023 "y.tab.c"
    break;

  case 31: /* ClassFieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 330 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode("self");
    // get current class being defined
    struct ClassTable * currentClass = getCurrentClassBeingDefined();
    // if current class is null
    if(currentClass == NULL)
    {
      yyerror("Self can only be used inside a class \n");
      exit(1);
    }
    idNode->classType = currentClass;
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string),idNode , (yyvsp[-1].node));

  }
#line 2042 "y.tab.c"
    break;

  case 32: /* ClassFieldFunction: SELF '.' ID '(' ')'  */
#line 345 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode("self");
    // get current class being defined
    struct ClassTable * currentClass = getCurrentClassBeingDefined();
    // if current class is null
    if(currentClass == NULL)
    {
      printf("Self can only be used inside a class \n");
      exit(1);
    }
    idNode->classType = currentClass;
    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), idNode, NULL);

  }
#line 2061 "y.tab.c"
    break;

  case 33: /* ClassFieldFunction: ID '.' ID '(' ArgList ')'  */
#line 360 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode((yyvsp[-5].string));
    // search the id in the local symbol table
    struct LocalSymbolTable * LSTEntry = LSTLookup(idNode->varname);

    // search the id in the global symbol table
    struct GlobalSymbolTable * GSTEntry = GSTLookup(idNode->varname);

    // if both not found
    if(GSTEntry == NULL && LSTEntry == NULL)
    {
      printf("Variable %s not declared \n", idNode->varname);
      exit(1);
    }
    // if found in local symbol table
    if(LSTEntry != NULL)
    {
      idNode->classType = LSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }    
    // if found in global symbol table
    if(GSTEntry != NULL)
    {
      idNode->classType = GSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }


    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), idNode, (yyvsp[-1].node));

  }
#line 2107 "y.tab.c"
    break;

  case 34: /* ClassFieldFunction: ID '.' ID '(' ')'  */
#line 402 "expr_tree.y"
  {
    struct expr_tree_node * idNode = makeIdNode((yyvsp[-4].string));
    // search the id in the local symbol table
    struct LocalSymbolTable * LSTEntry = LSTLookup(idNode->varname);

    // search the id in the global symbol table
    struct GlobalSymbolTable * GSTEntry = GSTLookup(idNode->varname);

    // if both not found
    if(GSTEntry == NULL && LSTEntry == NULL)
    {
      printf("Variable %s not declared \n", idNode->varname);
      exit(1);
    }
    // if found in local symbol table
    if(LSTEntry != NULL)
    {
      idNode->classType = LSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }    
    // if found in global symbol table
    if(GSTEntry != NULL)
    {
      idNode->classType = GSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }


    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), idNode, NULL);

  }
#line 2153 "y.tab.c"
    break;

  case 35: /* ClassFieldFunction: Field '.' ID '(' ArgList ')'  */
#line 444 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-3].string), (yyvsp[-5].node), (yyvsp[-1].node));
  }
#line 2161 "y.tab.c"
    break;

  case 36: /* ClassFieldFunction: Field '.' ID '(' ')'  */
#line 448 "expr_tree.y"
  {
    (yyval.node) = makeMethodCallNode((yyvsp[-2].string), (yyvsp[-4].node), NULL);
  }
#line 2169 "y.tab.c"
    break;

  case 40: /* TypeDef: ID '{' TypeFieldDeclList '}'  */
#line 467 "expr_tree.y"
    { 
        typeInstall((yyvsp[-3].string), (yyvsp[-1].typeField)); 
    }
#line 2177 "y.tab.c"
    break;

  case 41: /* TypeFieldDeclList: TypeFieldDeclList TypeFieldDecl  */
#line 474 "expr_tree.y"
    {
      (yyvsp[0].typeField)->next = (yyvsp[-1].typeField);
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2186 "y.tab.c"
    break;

  case 42: /* TypeFieldDeclList: TypeFieldDecl  */
#line 479 "expr_tree.y"
    {
      (yyval.typeField) = (yyvsp[0].typeField);
    }
#line 2194 "y.tab.c"
    break;

  case 43: /* TypeFieldDecl: Type ID SEMICOLON  */
#line 486 "expr_tree.y"
    {
      (yyval.typeField) = createField((yyvsp[-2].string), (yyvsp[-1].string));
    }
#line 2202 "y.tab.c"
    break;

  case 44: /* Field: Field '.' ID  */
#line 495 "expr_tree.y"
    { 
      insertIntoClassFieldTree((yyvsp[-2].node), makeFieldNode((yyvsp[0].string), NULL, NULL));
      (yyval.node) = (yyvsp[-2].node);

      
    }
#line 2213 "y.tab.c"
    break;

  case 45: /* Field: ID '.' ID  */
#line 503 "expr_tree.y"
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode((yyvsp[0].string), NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode((yyvsp[-2].string),rightFieldNode,NULL);

      fieldCall(leftFieldNode,rightFieldNode);

      (yyval.node) = leftFieldNode;


    }
#line 2230 "y.tab.c"
    break;

  case 46: /* Field: SELF '.' ID  */
#line 516 "expr_tree.y"
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
#line 2265 "y.tab.c"
    break;

  case 47: /* GDeclBlock: DECL GDeclList ENDDECL  */
#line 550 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2277 "y.tab.c"
    break;

  case 48: /* GDeclBlock: DECL ENDDECL  */
#line 558 "expr_tree.y"
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
#line 2289 "y.tab.c"
    break;

  case 51: /* GDecl: Type GidList SEMICOLON  */
#line 574 "expr_tree.y"
    {
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string)); // sending in type as arguement 
    }
#line 2297 "y.tab.c"
    break;

  case 52: /* GidList: GidList ',' Gid  */
#line 581 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2305 "y.tab.c"
    break;

  case 53: /* GidList: Gid  */
#line 585 "expr_tree.y"
    {
      pushGlobalDeclaration((yyvsp[0].node));
    }
#line 2313 "y.tab.c"
    break;

  case 54: /* Gid: identifierDecl  */
#line 591 "expr_tree.y"
                   {(yyval.node) = (yyvsp[0].node);}
#line 2319 "y.tab.c"
    break;

  case 55: /* Gid: ID '(' GParamList ')'  */
#line 593 "expr_tree.y"
    {
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = (yyvsp[-1].node);
      (yyval.node) = idNode; 
    }
#line 2330 "y.tab.c"
    break;

  case 56: /* GParamList: GParamList ',' Param  */
#line 603 "expr_tree.y"
    {

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2340 "y.tab.c"
    break;

  case 57: /* GParamList: Param  */
#line 609 "expr_tree.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2348 "y.tab.c"
    break;

  case 58: /* GParamList: %empty  */
#line 613 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2356 "y.tab.c"
    break;

  case 59: /* identifierDecl: ID  */
#line 619 "expr_tree.y"
    {
      (yyval.node) = makeDeclareIdNode((yyvsp[0].string), NULL);
    }
#line 2364 "y.tab.c"
    break;

  case 60: /* identifierDecl: ID '[' INT ']'  */
#line 623 "expr_tree.y"
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2374 "y.tab.c"
    break;

  case 61: /* identifierDecl: ID '[' INT ']' '[' INT ']'  */
#line 629 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2385 "y.tab.c"
    break;

  case 62: /* identifierDecl: ID '[' ID ']' '[' INT ']'  */
#line 636 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2397 "y.tab.c"
    break;

  case 63: /* identifierDecl: ID '[' INT ']' '[' ID ']'  */
#line 644 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2409 "y.tab.c"
    break;

  case 64: /* identifierDecl: ID '[' ID ']' '[' ID ']'  */
#line 652 "expr_tree.y"
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-6].string), NULL);
      idNode->left = (yyvsp[-4].node); 
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2421 "y.tab.c"
    break;

  case 65: /* identifierDecl: ID '[' ID ']'  */
#line 660 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode((yyvsp[-3].string), NULL);
      idNode->left = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2431 "y.tab.c"
    break;

  case 66: /* identifierUse: ID  */
#line 671 "expr_tree.y"
    {
      (yyval.node) = makeIdNode((yyvsp[0].string));
    }
#line 2439 "y.tab.c"
    break;

  case 67: /* identifierUse: ID '[' expr ']'  */
#line 675 "expr_tree.y"
    {
        struct expr_tree_node * idNode = makeIdNode((yyvsp[-3].string));
        idNode->left = (yyvsp[-1].node);
        (yyval.node) = idNode;
    }
#line 2449 "y.tab.c"
    break;

  case 68: /* identifierUse: ID '[' expr ']' '[' expr ']'  */
#line 681 "expr_tree.y"
    { 
      struct expr_tree_node * idNode = makeIdNode((yyvsp[-6].string));
      idNode->left = (yyvsp[-4].node);
      idNode->right = (yyvsp[-1].node); 
      (yyval.node) = idNode;
    }
#line 2460 "y.tab.c"
    break;

  case 69: /* identifierUse: INITIALIZE '(' ')'  */
#line 688 "expr_tree.y"
    {
      (yyval.node) = makeHeapInitNode();
    }
#line 2468 "y.tab.c"
    break;

  case 70: /* identifierUse: ALLOC '(' ')'  */
#line 692 "expr_tree.y"
    {
      (yyval.node) = makeHeapAllocateNode();
    }
#line 2476 "y.tab.c"
    break;

  case 71: /* identifierUse: FREE '(' expr ')'  */
#line 696 "expr_tree.y"
    {
      (yyval.node) = makeHeapFreeNode((yyvsp[-1].node));
    }
#line 2484 "y.tab.c"
    break;

  case 72: /* identifierUse: NEW '(' ID ')'  */
#line 700 "expr_tree.y"
  {
    (yyval.node) = makeNewNode((yyvsp[-1].string));
  }
#line 2492 "y.tab.c"
    break;

  case 73: /* identifierUse: Field  */
#line 704 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2500 "y.tab.c"
    break;

  case 74: /* identifierUse: ClassFieldFunction  */
#line 708 "expr_tree.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2508 "y.tab.c"
    break;

  case 75: /* FDefBlock: FDefBlock FDef  */
#line 720 "expr_tree.y"
      {

      }
#line 2516 "y.tab.c"
    break;

  case 76: /* FDefBlock: FDef  */
#line 724 "expr_tree.y"
      {
      }
#line 2523 "y.tab.c"
    break;

  case 77: /* FDef: Type ID '(' ParamList ')' '{' LDeclBlock Body '}'  */
#line 731 "expr_tree.y"
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode((yyvsp[-8].string), (yyvsp[-7].string), (yyvsp[-5].node), (yyvsp[-1].node));
      defineFunction(funcNode, target_file);
      (yyval.node) = funcNode;
    }
#line 2533 "y.tab.c"
    break;

  case 78: /* Body: START Slist ReturnStmt END  */
#line 742 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[-2].node));

    }
#line 2542 "y.tab.c"
    break;

  case 79: /* Body: START ReturnStmt END  */
#line 747 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-1].node),NULL);
    }
#line 2550 "y.tab.c"
    break;

  case 80: /* ParamList: ParamList ',' Param  */
#line 754 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));

      (yyvsp[-2].node)->left = (yyvsp[0].node);
      (yyval.node) = (yyvsp[-2].node);
    }
#line 2561 "y.tab.c"
    break;

  case 81: /* ParamList: Param  */
#line 761 "expr_tree.y"
    {
      pushLocalDeclaration((yyvsp[0].node));
      (yyval.node) = (yyvsp[0].node);
    }
#line 2570 "y.tab.c"
    break;

  case 82: /* ParamList: %empty  */
#line 766 "expr_tree.y"
    {
      (yyval.node) = NULL;
    }
#line 2578 "y.tab.c"
    break;

  case 83: /* Param: Type ID  */
#line 773 "expr_tree.y"
  {
    (yyval.node) = makeParameterNode((yyvsp[-1].string), (yyvsp[0].string));
  }
#line 2586 "y.tab.c"
    break;

  case 85: /* LDeclBlock: DECL ENDDECL  */
#line 782 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2594 "y.tab.c"
    break;

  case 86: /* LDeclBlock: %empty  */
#line 786 "expr_tree.y"
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
#line 2602 "y.tab.c"
    break;

  case 89: /* LDecl: ID LIdList SEMICOLON  */
#line 798 "expr_tree.y"
    {
      popAllLocalDeclarationsAndCreateEntry((yyvsp[-2].string));
    }
#line 2610 "y.tab.c"
    break;

  case 90: /* LIdList: LIdList ',' ID  */
#line 805 "expr_tree.y"
    {
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
      
    }
#line 2619 "y.tab.c"
    break;

  case 91: /* LIdList: ID  */
#line 810 "expr_tree.y"
    {
    
      pushLocalDeclaration( makeLocalIdNode((yyvsp[0].string)));
    }
#line 2628 "y.tab.c"
    break;

  case 92: /* ArgList: ArgList ',' expr  */
#line 821 "expr_tree.y"
    {
      (yyval.node) = makeConnectorNode((yyvsp[-2].node),(yyvsp[0].node));

    }
#line 2637 "y.tab.c"
    break;

  case 93: /* ArgList: expr  */
#line 826 "expr_tree.y"
    {
      (yyval.node) =makeConnectorNode(NULL,(yyvsp[0].node));
    }
#line 2645 "y.tab.c"
    break;

  case 94: /* Slist: Slist Stmt  */
#line 834 "expr_tree.y"
               {(yyval.node) = makeConnectorNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2651 "y.tab.c"
    break;

  case 95: /* Slist: Stmt  */
#line 835 "expr_tree.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 2657 "y.tab.c"
    break;

  case 110: /* ReturnStmt: RETURN expr SEMICOLON  */
#line 860 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode((yyvsp[-1].node));
    }
#line 2665 "y.tab.c"
    break;

  case 111: /* ReturnStmt: RETURN SEMICOLON  */
#line 864 "expr_tree.y"
    {
      (yyval.node) = makeReturnNode(NULL);
    }
#line 2673 "y.tab.c"
    break;

  case 116: /* Decl: Type VarList SEMICOLON  */
#line 878 "expr_tree.y"
    {
      
      popAllGlobalDeclarationsAndCreateEntry((yyvsp[-2].string));
     
    }
#line 2683 "y.tab.c"
    break;

  case 118: /* VarList: VarList ',' identifierDecl  */
#line 888 "expr_tree.y"
                               {pushGlobalDeclaration((yyvsp[0].node));}
#line 2689 "y.tab.c"
    break;

  case 119: /* VarList: identifierDecl  */
#line 889 "expr_tree.y"
                   {pushGlobalDeclaration((yyvsp[0].node));}
#line 2695 "y.tab.c"
    break;

  case 120: /* brkStmt: BREAK SEMICOLON  */
#line 893 "expr_tree.y"
                    {(yyval.node) = makeBreakNode();}
#line 2701 "y.tab.c"
    break;

  case 121: /* contStmt: CONTINUE SEMICOLON  */
#line 896 "expr_tree.y"
                       {(yyval.node) = makeContinueNode();}
#line 2707 "y.tab.c"
    break;

  case 122: /* brkpointStmt: BREAKPOINT SEMICOLON  */
#line 899 "expr_tree.y"
                         {(yyval.node) = makeBreakpointNode();}
#line 2713 "y.tab.c"
    break;

  case 123: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF SEMICOLON  */
#line 902 "expr_tree.y"
                                                        {(yyval.node) = makeIfElseNode((yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2719 "y.tab.c"
    break;

  case 124: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF SEMICOLON  */
#line 903 "expr_tree.y"
                                             {(yyval.node) = makeIfElseNode((yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2725 "y.tab.c"
    break;

  case 125: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE SEMICOLON  */
#line 906 "expr_tree.y"
                                                {(yyval.node) = makeWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2731 "y.tab.c"
    break;

  case 126: /* RepeatStmt: REPEAT Slist UNTIL '(' expr ')' SEMICOLON  */
#line 909 "expr_tree.y"
                                            {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2737 "y.tab.c"
    break;

  case 127: /* DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON  */
#line 912 "expr_tree.y"
                                        {(yyval.node) = makeDoWhileNode((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2743 "y.tab.c"
    break;

  case 128: /* InputStmt: READ '(' identifierUse ')' SEMICOLON  */
#line 915 "expr_tree.y"
                                         {(yyval.node) = makeReadNode((yyvsp[-2].node));}
#line 2749 "y.tab.c"
    break;

  case 129: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 918 "expr_tree.y"
                                 {(yyval.node) = makeWriteNode((yyvsp[-2].node));}
#line 2755 "y.tab.c"
    break;

  case 130: /* AsgStmt: identifierUse EQUALS expr SEMICOLON  */
#line 921 "expr_tree.y"
                                        {(yyval.node) = makeOperatorNode(_NODE_TYPE_EQUALS,(yyvsp[-3].node),(yyvsp[-1].node)) ;}
#line 2761 "y.tab.c"
    break;

  case 131: /* expr: expr PLUS expr  */
#line 924 "expr_tree.y"
                    {(yyval.node) = makeOperatorNode(_NODE_TYPE_PLUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2767 "y.tab.c"
    break;

  case 132: /* expr: expr MINUS expr  */
#line 925 "expr_tree.y"
                     { (yyval.node) = makeOperatorNode(_NODE_TYPE_MINUS,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2773 "y.tab.c"
    break;

  case 133: /* expr: expr MUL expr  */
#line 926 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MUL,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2779 "y.tab.c"
    break;

  case 134: /* expr: expr DIV expr  */
#line 927 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_DIV,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2785 "y.tab.c"
    break;

  case 135: /* expr: expr MOD expr  */
#line 928 "expr_tree.y"
                  {(yyval.node) = makeOperatorNode(_NODE_TYPE_MOD,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2791 "y.tab.c"
    break;

  case 136: /* expr: '(' expr ')'  */
#line 929 "expr_tree.y"
                {(yyval.node) = (yyvsp[-1].node);}
#line 2797 "y.tab.c"
    break;

  case 137: /* expr: INT  */
#line 930 "expr_tree.y"
        {(yyval.node) = (yyvsp[0].node);}
#line 2803 "y.tab.c"
    break;

  case 138: /* expr: identifierUse  */
#line 931 "expr_tree.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 2809 "y.tab.c"
    break;

  case 139: /* expr: STRING  */
#line 932 "expr_tree.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 2815 "y.tab.c"
    break;

  case 140: /* expr: expr LT expr  */
#line 933 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_LT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2821 "y.tab.c"
    break;

  case 141: /* expr: expr GT expr  */
#line 934 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GT,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2827 "y.tab.c"
    break;

  case 142: /* expr: expr LE expr  */
#line 935 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_LE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2833 "y.tab.c"
    break;

  case 143: /* expr: expr GE expr  */
#line 936 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_GE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2839 "y.tab.c"
    break;

  case 144: /* expr: expr NE expr  */
#line 937 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_NE,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2845 "y.tab.c"
    break;

  case 145: /* expr: expr EQ expr  */
#line 938 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_EQ,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2851 "y.tab.c"
    break;

  case 146: /* expr: expr AND expr  */
#line 939 "expr_tree.y"
                  {(yyval.node) = makeRelopNode(_NODE_TYPE_AND,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2857 "y.tab.c"
    break;

  case 147: /* expr: expr OR expr  */
#line 940 "expr_tree.y"
                 {(yyval.node) = makeRelopNode(_NODE_TYPE_OR,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2863 "y.tab.c"
    break;

  case 148: /* expr: NOT expr  */
#line 941 "expr_tree.y"
             {(yyval.node) = makeRelopNode(_NODE_TYPE_NOT,(yyvsp[0].node),NULL);}
#line 2869 "y.tab.c"
    break;

  case 149: /* expr: ID '(' ')'  */
#line 942 "expr_tree.y"
               {(yyval.node) = makeFunctionCallNode((yyvsp[-2].string),NULL);}
#line 2875 "y.tab.c"
    break;

  case 150: /* expr: ID '(' ArgList ')'  */
#line 943 "expr_tree.y"
                       {(yyval.node) = makeFunctionCallNode((yyvsp[-3].string),(yyvsp[-1].node));}
#line 2881 "y.tab.c"
    break;

  case 151: /* expr: NULLVAL  */
#line 944 "expr_tree.y"
             {(yyval.node) = makeNullNode();}
#line 2887 "y.tab.c"
    break;


#line 2891 "y.tab.c"

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

#line 948 "expr_tree.y"


void yyerror(char const *s)
{
    // print error and line number
    printf("yyerror %s : %s at line number %d\n",s, yytext, yylineno);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w+");
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
