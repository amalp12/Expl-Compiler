#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include "typeTable.h"
#endif

struct ClassTable {
    char *name;                           //name of the class
    struct FieldList *memberFields;        //pointer to FieldList
    struct ClassMemberFunctionList *memberFunctionList;      //pointer to ClassMemberFunctionList
    struct ClassTable *parent;         //pointer to the parent's class table
    int classIndex;                      //position of the class in the virtual function table
    int fieldCount;                       //count of fields
    int methodCount;                      //count of methods
    struct ClassTable *next;              //pointer to next class table entry
};

struct ClassMemberFunctionList {
    char * name;                      //name of the member function in the class
    struct TypeTable *type;          //pointer to typetable
    struct ParameterNode *paramList;   //pointer to the head of the formal parameter list
    int functionPosition;                //position of the function in the class table
    int functionLabel;                      //A label for identifying the starting address of the function's code in the memory
    struct ClassMemberFunctionList *next;     //pointer to next ClassMemberFunctionList entry
};

// class table head
struct ClassTable * _CLASS_TABLE_HEAD = NULL;
struct ClassTable * _CURRENT_CLASS_BEING_DEFINED = NULL;
// class label counter
int _LAST_USED_CLASS_LABEL = 0;
/*
The following scope rules must be carefully checked to ensure correct semantic analysis:

1.    Methods of a class variable are accessed as self.method_name(..args..). (If a member is of a previously class, self.field_name.method_name(..args..)).

2.    A member field in a class shall be accessed only within a method of the same class. The access syntax will be self.field_name. (Note: if field_name is variable of another class (or the same class), accessing member fields of the member using syntax self.field_name.sub_field.name is not be permitted – why?)

3.    A method of one class is generally not permitted to access methods of other classes. However, if a class contains a member field of another class, then the methods accessible through the member field can be invoked as noted in point 1 above.

4.    There is exactly one method carrying a name in a class. Thus, function overloading is not permitted.
*/
void classInstall(char * name ,char * parentClassName);

struct ClassTable* classLookup(char * className);

void classFieldInstall(struct ClassTable * classPtr, char * typeName, char *name);
void validateFields (struct ClassTable * classPtr);

void classMethodInstall (struct ClassTable * classPtr, char *name, struct TypeTable *type, struct ParameterNode *Paramlist);

struct ClassMemberFunctionList* classMethodLookup(struct ClassTable* classPtr ,char* methodName);

struct FieldList * classFieldLookup(struct ClassTable* classPtr,char* fieldName);

struct ParameterNode* classMethodParamLookup(struct ClassMemberFunctionList * method, char * paramName);

// Gets a new class label Number for the class
int getNewClassLabel();

void resetCurrentClassBeingDefined();

struct ClassTable * getCurrentClassBeingDefined();

struct ClassMemberFunctionList* classMethodLookup(struct ClassTable* classPtr ,char* methodName);









