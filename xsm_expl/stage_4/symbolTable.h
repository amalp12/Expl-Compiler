#ifndef TYPEDEF_H
#define TYPE_DEF_H
#include "typedef.h"
#endif


struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    int rows, cols;   // for arrays
    struct Gsymbol *next;
};
struct Gsymbol *_GLOBAL_SYMBOL_TABLE = NULL; // Global Symbol Table

struct Gsymbol * GSTLookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

void GSTInstall(char *name, int type, int offset, int rows, int cols);   // Creates a symbol table entry.

int max(int a, int  b);

int min(int a, int b);