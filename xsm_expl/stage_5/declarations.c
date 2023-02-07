void pushGlobalDeclaration( struct expr_tree_node * node)
{
    // see if declaration already exists in GST
    struct Gsymbol *temp1 = GSTLookup(node->varname);
    if (temp1 != NULL) {
        printf("Error: Redeclaration of variable %s\n", node->varname);
        exit(1);
    }

    // check if declaration already exists in GST stack
    struct declaration_node *temp2 = _GLOBAL_DECLARATION_STACK_HEAD;
    while (temp2 != NULL) {
        if (strcmp(temp2->node->varname, node->varname) == 0) {
            printf("Error: Redeclaration of variable %s\n", node->varname);
            exit(1);
        }
        temp2 = temp2->next;
    }
  

    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->node = node;
    newNode->next = _GLOBAL_DECLARATION_STACK_HEAD;
    _GLOBAL_DECLARATION_STACK_HEAD = newNode;
}

// returns the varname of the top of the stack
struct declaration_node * popGlobalDeclaration() 
{
    // null check
    if (_GLOBAL_DECLARATION_STACK_HEAD == NULL) {
        return NULL;
    }
    struct declaration_node *temp = _GLOBAL_DECLARATION_STACK_HEAD;
    _GLOBAL_DECLARATION_STACK_HEAD = _GLOBAL_DECLARATION_STACK_HEAD->next;
    return temp;
}

// checks if pushDeclaration stack is empty
int isGlobalDeclarationStackEmpty() 
{
    return _GLOBAL_DECLARATION_STACK_HEAD == NULL;
}

void popAllGlobalDeclarationsAndCreateEntry(int type)
{
    int size ;
    switch (type)
    {
        case (_TYPE_INT):
        {
                size = _INT_SIZE;
                break;
        }
        case (_TYPE_STRING):
        {
                size = _STRING_SIZE;
                break;
        }
        
        default:
        {
            printf("Null Size Error!\n");
            exit(1);
            break;
        }
    }
    struct declaration_node * temp = popGlobalDeclaration();
    while(temp!=NULL)
    {
        // void LSTInstall(char *name, int type, int size, int offset)   // Creates a local symbol table entry.

        GSTInstall(temp->node, type, 0);
        free(temp);
        temp = popGlobalDeclaration();

    }
}


void pushLocalDeclaration( struct expr_tree_node * node)
{
    // see if declaration already exists in GST
    struct Gsymbol *temp1 = LSTLookup(node->varname);
    if (temp1 != NULL) 
    {
        printf("Error: Redeclaration of variable %s\n", node->varname);
        exit(1);
    }

    // check if declaration already exists in stack
    struct declaration_node *temp2 = _LOCAL_DECLARATION_STACK_HEAD;
    while (temp2 != NULL) 
    {
        if (strcmp(temp2->node->varname, node->varname) == 0) 
        {
            printf("Error: Redeclaration of variable %s\n", node->varname);
            exit(1);
        }
        temp2 = temp2->next;
    }
  

    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->node = node;
    newNode->next = _LOCAL_DECLARATION_STACK_HEAD;
    _LOCAL_DECLARATION_STACK_HEAD = newNode;
}

// returns the varname of the top of the stack
struct declaration_node * popLocalDeclaration() 
{
    // null check
    if (_LOCAL_DECLARATION_STACK_HEAD == NULL) 
    {
        return NULL;
    }
    struct declaration_node *temp = _LOCAL_DECLARATION_STACK_HEAD;
    _LOCAL_DECLARATION_STACK_HEAD = _LOCAL_DECLARATION_STACK_HEAD->next;
    return temp;
}

// checks if pushDeclaration stack is empty
int isLocalDeclarationStackEmpty() 
{
    return _LOCAL_DECLARATION_STACK_HEAD == NULL;
}

void popAllLocalDeclarationsAndCreateEntry(int type)
{
    int size ;
    switch (type)
    {
        case (_TYPE_INT):
        {
                size = _INT_SIZE;
                break;
        }
        case (_TYPE_STRING):
        {
                size = _STRING_SIZE;
                break;
        }
        
        default:
        {
            printf("Null Size Error!\n");
            exit(1);
            break;
        }
    }
    struct declaration_node * temp = popLocalDeclaration();
    while(temp!=NULL)
    {
        // void LSTInstall(char *name, int type, int size, int offset)   // Creates a Local symbol table entry.

        LSTInstall(temp->node, type, 0);
        free(temp);
        temp = popLocalDeclaration();

    }
}