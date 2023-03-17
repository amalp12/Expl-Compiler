#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include <typeTable.h>
#endif

void typeTableCreate() // Function to initialise the type table entries with primitive types (int,str) and special entries_(boolean,null,void).
{
    // initializing int
    struct TypeTable * intType = (struct TypeTable *)malloc(sizeof(struct TypeTable));
    intType->name = strdup("int");
    intType->size = 1;
    intType->fields = NULL;
    intType->next = NULL;

    // initializing str
    struct TypeTable * strType = (struct TypeTable *)malloc(sizeof(struct TypeTable));
    strType->name = strdup("str");
    strType->size = 1;
    strType->fields = NULL;
    strType->next = NULL;
    intType->next = strType;

    // initializing boolean
    struct TypeTable * booleanType = (struct TypeTable *)malloc(sizeof(struct TypeTable));
    booleanType->name = strdup("boolean");
    booleanType->size = 1;
    booleanType->fields = NULL;
    booleanType->next = NULL;
    strType->next = booleanType;

    // initializing null
    struct TypeTable * nullType = (struct TypeTable *)malloc(sizeof(struct TypeTable));
    nullType->name = strdup("null");
    nullType->size = 1;
    nullType->fields = NULL;
    nullType->next = NULL;
    booleanType->next = nullType;

    // initializing void
    struct TypeTable * voidType = (struct TypeTable *)malloc(sizeof(struct TypeTable));
    voidType->name = strdup("void");
    voidType->size = 1;
    voidType->fields = NULL;
    voidType->next = NULL;
    nullType->next = voidType;

    // insert into head
    _TYPE_TABLE_HEAD = intType;




}

struct TypeTable* typeLookup(char *name)  // Search through the type table and return pointer to type table entry of type 'name'. Returns NULL if entry is not found.
{
    // null check
    if(name == NULL) return NULL;

    struct TypeTable * temp = _TYPE_TABLE_HEAD;
    while(temp != NULL){
        if(strcmp(temp->name,name) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}


void typeInstall(char *name, struct FieldList *fields)  // Creates a type table entry for the (user defined) type of 'name' with given 'fields' and returns the pointer to the type table entry. The field list must specify the field index, type and name of each field. TInstall returns NULL upon failure. This routine is invoked when the compiler encounters a type definition in the source program.
{
    struct TypeTable * temp = typeLookup(name);
    if(temp != NULL){
        printf("Error: Type %s already defined\n", name);
        exit(1);
    }
    // creating new type
    struct TypeTable * newType = (struct TypeTable *)malloc(sizeof(struct TypeTable));
    newType->name = name;
    newType->fields = fields;
    newType->next = NULL;
    // calculating size can only be done after getting the types of all fields so we have to wait till validation phase
    newType->size = 0;

    // assign fieldIDs
    struct FieldList * temp1 = fields;
    int fieldID = 0;
    while(temp1 != NULL){
        temp1->fieldIndex = fieldID;
        fieldID++;
        temp1 = temp1->next;
    }
    
    // adding to the end of the list
    struct TypeTable * temp2 = _TYPE_TABLE_HEAD;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = newType;

    // validating fields
    typeValidateFields(newType);
    

}
void typeValidateFields ( struct TypeTable * type ) // Validates the field list of the given user-defined type. This routine is invoked when the compiler encounters a type definition in the source program.
{
    // null check
    if(type == NULL) return;

    // if feild exists add size of all feilds

    struct FieldList * temp = type->fields;
    while(temp != NULL){
        if(temp->type == NULL){
            // if type is not defined try to look up the type using type name
            temp->type = typeLookup(temp->tempTypeName);

            // if type is still not defined throw error     
            if(temp->type == NULL)
            {
                printf("Error: Type %s not defined\n", temp->name);
                exit(1);
            }

            // clear tempTypeName
            free(temp->tempTypeName);
            temp->tempTypeName = NULL;

        }
    
        temp = temp->next;
    }
    // calculate size of type can only be done after all the types are defined
    // calculating size
    type->size = getTypeSize(type);


    
}
struct FieldList* typeFieldLookup(struct TypeTable *type, char *name) // Searches for a field of given 'name' in the 'fieldlist' of the given user-defined type and returns a pointer to the field entry. Returns NULL if the type does not have a field of the name.
{
    struct FieldList * temp = type->fields;
    while(temp != NULL){
        if(strcmp(temp->name,name) == 0){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;

}
int getTypeSize(struct TypeTable * type)  // Returns the amount of memory words required to store a variable of the given type.
{
    // if type is int or str or boolean or null or void (strcmp their names to match)
    if (strcmp(type->name,"int") == 0 || strcmp(type->name,"str") == 0 || strcmp(type->name,"boolean") == 0 || strcmp(type->name,"null") == 0 || strcmp(type->name,"void") == 0){
        return 1;
    }

    int size = 0;

    // if feild exists add size of all feilds
    if(type->fields != NULL){
        struct FieldList * temp = type->fields;
        while(temp != NULL){
            size += 1; // since all feild are of size 1 in this implemenation (user define types are also 1 because they reference memory)
            temp = temp->next;
        }

    }
    return size;
}

struct FieldList * createField(char *typeName, char * name){
    struct FieldList * newField = (struct FieldList *)malloc(sizeof(struct FieldList));
    newField->name = name;
    newField->classType = NULL;
    newField->type = typeLookup(typeName);
    // if type doesn't exist do not throw error because type might be itself (to be defined later)
    // we will do type validation of fields in typeInstall
    // for that we will be storeing the typename in tempTypeName
    if(newField->type == NULL)
    {
        newField->tempTypeName = strdup(typeName);
    }
    newField->next = NULL;
    return newField;
}