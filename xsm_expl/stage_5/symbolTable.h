#ifndef TYPEDEF_H
#define TYPE_DEF_H
#include "typedef.h"
#endif

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "functions.h"
#include "functions.c"
#endif

struct GlobalSymbolTable {
    char* name;         // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    int rows, cols;   // for arrays
    struct GlobalSymbolTable *next;
    struct parameterNode * paramList;
    int functionLabelNumber;

};

struct LocalSymbolTable
{
    char *name; // name of the variable  
    int type; // type of the variable
    int binding; // binding of the variable relative to BP
    int rows, cols;   // for arrays
    struct LocalSymbolTable *next; // pointer to the next variable in the list
};

struct GlobalSymbolTable *_GLOBAL_SYMBOL_TABLE = NULL; // Global Symbol Table
struct  LocalSymbolTable *_LOCAL_SYMBOL_TABLE = NULL; // Local Symbol Table



struct GlobalSymbolTable * GSTLookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

void GSTInstall(struct expr_tree_node * node, int type, int offset);   // Creates a symbol table entry.

int max(int a, int  b);

int min(int a, int b);



struct LocalSymbolTable * LSTLookup(char * name); // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

void LSTInstall(struct expr_tree_node * node, int type, int offset);   // Creates a symbol table entry.

void clearLST(); // Clears the local symbol table
