#ifndef _TYPEDEF_H
#define _TYPEDEF_H
#include "typedef.h"
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include "functions.h"
#endif

struct IndexNode {
    int index;
    struct IndexNode * next;
};

struct GlobalSymbolTable {
    char* name;         // name of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct TypeTable *type;   //pointer to the Typetable entry of variable type/return type of the function
    int rows, cols;   // for arrays
    struct GlobalSymbolTable * next;
    struct ParameterNode * paramList;
    int functionLabelNumber;
    struct ClassTable *classType;  //THIS FIELD IS REQUIRED ONLY FOR OEXPL
     struct IndexNode * indexList; // for array


};

struct LocalSymbolTable
{
    char *name; // name of the variable  
    int binding; // binding of the variable relative to BP
    struct TypeTable *type;   //pointer to the Typetable entry of variable type
    int size; // size of the type of the variable
    int rows, cols;   // for arrays
    struct LocalSymbolTable *next; // pointer to the next variable in the list
    int functionLabelNumber;
    struct ParameterNode * paramList;
    struct ClassTable *classType;  //THIS FIELD IS REQUIRED ONLY FOR OEXPL
     struct IndexNode * indexList; // for array

};

struct GlobalSymbolTable * _GLOBAL_SYMBOL_TABLE = NULL; // Global Symbol Table
struct  LocalSymbolTable * _LOCAL_SYMBOL_TABLE = NULL; // Local Symbol Table

struct GlobalSymbolTable * GSTLookup(char * name); // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

struct LocalSymbolTable * LSTLookup(char * name); // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.

int max(int a, int  b);

int min(int a, int b);


void GSTInstall(char * varname,struct TypeTable * type, struct ClassTable * classType,int nodetype, int offset, struct IndexNode * indexList);   // Creates a symbol table entry.

void LSTInstall(char * varname, struct TypeTable * type, int offset, struct IndexNode * indexList) ;  // Creates a symbol table entry.

void clearLST(); // Clears the local symbol table


void printGSTNode(struct GlobalSymbolTable * gst_node);

void printGST();

int getLSTLength();

struct IndexNode * createIndexNode(int index);
