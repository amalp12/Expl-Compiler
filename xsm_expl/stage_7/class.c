void classInstall(char * name ,char * parentClassName)
{
    struct ClassTable * newClass = (struct ClassTable *)malloc(sizeof(struct ClassTable));
    newClass->name = strdup(name);
    newClass->parent = classLookup(parentClassName);
    newClass->fieldCount = 0;
    newClass->methodCount = 0;
    newClass->memberFields = NULL;
    newClass->memberFunctionList = NULL;
    newClass->next = NULL;
    newClass->classIndex = getNewClassLabel();
    

    

    // insert into head
    newClass->next = _CLASS_TABLE_HEAD;
    _CLASS_TABLE_HEAD = newClass;
    _CURRENT_CLASS_BEING_DEFINED = newClass;
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
    

    return NULL;
}

void classFieldInstall(struct ClassTable * classPtr, char * typeName, char *name)
{
    // create new field
    struct FieldList * newField = (struct FieldList *)malloc(sizeof(struct FieldList));
    newField->name = strdup(name);
    newField->type = typeLookup(typeName);
    newField->classType = classLookup(typeName);

    // check if type found
    if(newField->type == NULL && newField->classType == NULL)
    {
        printf("Type %s in class definition %s not found.\n",typeName,classPtr->name);
        exit(1);
    }
    // field index starts from 0 hence the next fieldIndex will have value equal to field count of the class
    newField->fieldIndex = classPtr->fieldCount;
    classPtr->fieldCount++;
    newField->next = NULL;

    // insert into head
    newField->next = classPtr->memberFields;
    classPtr->memberFields = newField;
    classPtr->fieldCount++;
}

void validateFields (struct ClassTable * classPtr)
{
    struct FieldList * field = classPtr->memberFields;

    while(field != NULL)
    {
        // check if field type or class exists
        if(field->type == NULL && field->classType == NULL)
        {
            printf("Field %s in class %s has no type/class type.\n",field->name,classPtr->name);
            exit(1);
        }

        // 3. A class cannot have a field of type null.
        // if(strcmp(field->type->name,"null") == 0)
        // {
        //     printf("Field %s in class %s cannot be of type null.\n",field->name,classPtr->name);
        //     exit(1);
        // }
        // field->fieldIndex = classPtr->fieldCount;
        // classPtr->fieldCount++;
        field = field->next;
    }

}

void classMethodInstall (struct ClassTable * classPtr, char *name, struct TypeTable *type, struct ParameterNode *Paramlist)
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
    newMethod->functionPosition = classPtr->methodCount;
    // get label for method
    newMethod->functionLabel = getNewFunctionLabel();
    newMethod->next = NULL;

    // create a parameter called self for each method
    struct ParameterNode * self = (struct ParameterNode *)malloc(sizeof(struct ParameterNode));
    self->name = strdup("self");
    self->type = typeLookup("int");
    self->next = Paramlist;
    newMethod->paramList = self;
    

    // insert into head of class
    newMethod->next = classPtr->memberFunctionList;
    classPtr->memberFunctionList = newMethod;
    classPtr->methodCount++;
}

struct ClassMemberFunctionList* classMethodLookup(struct ClassTable* classPtr ,char* methodName)
{
    // null check
    if(methodName == NULL) return NULL;

    struct ClassMemberFunctionList * temp = classPtr->memberFunctionList;
    while(temp != NULL){
        if(strcmp(temp->name,methodName) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
   

    return NULL;
}

struct ParameterNode* classMethodParamLookup(struct ClassMemberFunctionList * method, char * paramName)
{
    // null check
    if(method == NULL) return NULL;

    struct ParameterNode * temp = method->paramList;
    while(temp != NULL){
        if(strcmp(temp->name,paramName) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    // no param found
    if(temp == NULL)
    {
        printf("Param %s not found in method %s.\n",paramName,method->name);
        exit(1);
    }

    return NULL;
}

struct FieldList * classFieldLookup(struct ClassTable* classPtr,char* fieldName)
{
    // null check
    if(fieldName == NULL) return NULL;

    struct FieldList * temp = classPtr->memberFields;
    while(temp != NULL){
        if(strcmp(temp->name,fieldName) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }


    return NULL;
}



int getNewClassLabel()
{
    _LAST_USED_CLASS_LABEL++;
    return _LAST_USED_CLASS_LABEL;
}


void resetCurrentClassBeingDefined()
{
    _CURRENT_CLASS_BEING_DEFINED = NULL;
}

struct ClassTable * getCurrentClassBeingDefined()
{
    return _CURRENT_CLASS_BEING_DEFINED;
}