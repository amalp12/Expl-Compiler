#ifndef _TYPEDEF_H
#define _TYPEDEF_H
#include "typedef.h"
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include "functions.h"
#endif

struct GlobalSymbolTable {
    char* name;         // name of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct TypeTable *type;   //pointer to the Typetable entry of variable type/return type of the function
    int rows, cols;   // for arrays
    struct GlobalSymbolTable * next;
    struct parameter_node * paramList;
    int functionLabelNumber;

};

struct LocalSymbolTable
{
    char *name; // name of the variable  
    int binding; // binding of the variable relative to BP
    struct TypeTable *type;   //pointer to the Typetable entry of variable type
    int size; // size of the type of the variable
    int rows, cols;   // for arrays
    struct LocalSymbolTable *next; // pointer to the next variable in the list
};

struct GlobalSymbolTable * _GLOBAL_SYMBOL_TABLE = NULL; // Global Symbol Table
struct  LocalSymbolTable * _LOCAL_SYMBOL_TABLE = NULL; // Local Symbol Table

struct GlobalSymbolTable * GSTLookup(char * name); // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

struct LocalSymbolTable * LSTLookup(char * name); // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

int max(int a, int  b);

int min(int a, int b);


void GSTInstall(char * varname,struct TypeTable * type,int nodetype, int offset, int rows, int cols);   // Creates a symbol table entry.

void LSTInstall(char * varname, struct TypeTable * type, int offset, int rows, int cols) ;  // Creates a symbol table entry.

void clearLST(); // Clears the local symbol table


void printGSTNode(struct GlobalSymbolTable * gst_node);

void printGST();

int getLSTLength();