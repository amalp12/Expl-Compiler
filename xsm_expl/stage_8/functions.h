#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include "typeTable.h"
#endif

struct ParameterNode {
    char *name; // name of the parameter
    struct TypeTable * type; // type of the parameter
    int rows, cols;   // for arrays
    struct ClassTable * classType; // if the parameter is a class variable
    struct ParameterNode *next; // pointer to the next parameter in the list
    struct ParameterNode *prev; // pointer to the previous parameter in the list
};



int _LAST_USED_FUNCTION_LABEL = 0;
// Creates a new parameter list with the given parameter as head if the list is empty
// if the list is not empty, it adds the parameter to the end of the list
struct ParameterNode * addToParameterList(struct ParameterNode * parameter_list, char * varname, struct TypeTable * type, struct ClassTable * classType, int rows, int cols);
// Creates a new parameter node with the given name and type and returns it 
struct ParameterNode * createParameterNode(char * name, struct TypeTable *  type, struct ClassTable* classType);

// Gets a new function label Number for the function
int getNewFunctionLabel();

