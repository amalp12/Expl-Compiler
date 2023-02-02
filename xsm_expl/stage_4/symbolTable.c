struct Gsymbol *GSTLookup(char * name)            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
{
    struct Gsymbol *temp = _GLOBAL_SYMBOL_TABLE;
    while(temp != NULL)
    {
        if(strcmp(temp->name, name) == 0) return temp;
        temp = temp->next;
    }
    return NULL;
}
void GSTInstall(char *name, int type, int size, int offset)   // Creates a symbol table entry.
{
    struct Gsymbol *temp = GSTLookup(name);
    if(temp != NULL)
    {
        printf("Variable %s already declared\n", name);
        exit(1);
    }
    temp = (struct Gsymbol *)malloc(sizeof(struct Gsymbol));

    temp->name  = strndup(name, strlen(name)-offset);

    temp->type = type;
    temp->size = size;
    temp->binding = _STACK_POINTER;
    _STACK_POINTER += size;
    _BASE_POINTER += size;
    temp->next = _GLOBAL_SYMBOL_TABLE;
    _GLOBAL_SYMBOL_TABLE = temp;
}

