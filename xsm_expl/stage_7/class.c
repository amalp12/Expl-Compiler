void classInstall(char * name ,char * parentClassName)
{
    struct ClassTable * newClass = (struct ClassTable *)malloc(sizeof(struct ClassTable));
    newClass->name = strdup(name);
    newClass->parentClassName = strdup(parentClassName);
    newClass->fieldCount = 0;
    newClass->methodCount = 0;
    newClass->fieldList = NULL;
    newClass->methodList = NULL;
    newClass->next = NULL;
    
    // insert into head
    newClass->next = _CLASS_TABLE_HEAD;
    _CLASS_TABLE_HEAD = newClass;
}

struct ClassTable* classLookup(char * className)
{
    // null check
    if(className == NULL) return NULL;

    struct ClassTable * temp = _CLASS_TABLE_HEAD;
    while(temp != NULL){
        if(strcmp(temp->name,className) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    // no class found
    if(temp == NULL)
    {
        printf("Class %s not found.\n",className);
        exit(1);
    }

    return NULL;
}

void classFieldInstall(struct ClassTable * classPtr, char * typeName, char *name)
{
    // create new field
    struct FieldList * newField = (struct FieldList *)malloc(sizeof(struct FieldList));
    newField->name = strdup(name);
    newField->type = typeLookup(typeName);

    // check if type found
    if(newField->type == NULL)
    {
        printf("Type %s in class definition %s not found.\n",typeName,classPtr->name);
        exit(1);
    }
    // field index starts from 0 hence the next fieldIndex will have value equal to field count of the class
    newField->fieldIndex = classPtr->fieldCount;
    classPtr->fieldCount++;
    newField->next = NULL;

    // insert into head
    newField->next = classPtr->fieldList;
    classPtr->fieldList = newField;
    classPtr->fieldCount++;
}

void validateFields (struct ClassTable * classPtr)
{
    struct FieldList * field = classPtr->fieldList;

    while(field != NULL)
    {
        // check if field type exists
        if(field->type == NULL)
        {
            printf("Field %s in class %s has no type.\n",field->name,classPtr->name);
            exit(1);
        }

        // 3. A class cannot have a field of type null.
        if(strcmp(field->type->name,"null") == 0)
        {
            printf("Field %s in class %s cannot be of type null.\n",field->name,classPtr->name);
            exit(1);
        }
        field->fieldIndex = classPtr->fieldCount;
        classPtr->fieldCount++;
        field = field->next;
    }

}

void classMethodInstall (struct ClassTable * classPtr, char *name, struct Typetable *type, struct ParameterNode *Paramlist)
{
    // check if method already exists
    // 4. There is exactly one method carrying a name in a class. Thus, function overloading is not permitted.
    if(classMethodLookup(classPtr,name) != NULL)
    {
        printf("Method %s already exists in class %s.\n",name,classPtr->name);
        exit(1);
    }

    // create new method
    struct ClassMemberFunctionList * newMethod = (struct ClassMemberFunctionList *)malloc(sizeof(struct ClassMemberFunctionList));
    newMethod->name = strdup(name);
    newMethod->type = type;
    newMethod->paramList = Paramlist;
    // method index starts from 0 hence the next methodIndex will have value equal to method count of the class
    newMethod->methodIndex = classPtr->methodCount;
    newMethod->next = NULL;

    // insert into head
    newMethod->next = classPtr->methodList;
    classPtr->methodList = newMethod;
    classPtr->methodCount++;
}

struct ClassMemberFunctionList* classMethodLookup(struct ClassTable* classPtr ,char* methodName)
{
    // null check
    if(methodName == NULL) return NULL;

    struct ClassMemberFunctionList * temp = classPtr->methodList;
    while(temp != NULL){
        if(strcmp(temp->name,methodName) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    // no method found
    if(temp == NULL)
    {
        printf("Method %s not found in class %s.\n",methodName,classPtr->name);
        exit(1);
    }

    return NULL;
}

struct FieldList * ClassFieldLookup(struct ClassTable* classPtr,char* fieldName)
{
    // null check
    if(fieldName == NULL) return NULL;

    struct FieldList * temp = classPtr->fieldList;
    while(temp != NULL){
        if(strcmp(temp->name,fieldName) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    // no field found
    if(temp == NULL)
    {
        printf("Field %s not found in class %s.\n",fieldName,classPtr->name);
        exit(1);
    }

    return NULL;
}

int getNewClassLabel()
{
    _LAST_USED_CLASS_LABEL++;
    return _LAST_USED_CLASS_LABEL;
}


