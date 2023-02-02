void pushDeclaration( char *varname)
{
    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->varname = varname;
    newNode->next = _DECLARATION_STACK_HEAD;
    _DECLARATION_STACK_HEAD = newNode;
}

// returns the varname of the top of the stack
struct declaration_node * popDeclaration() 
{
    // null check
    if (_DECLARATION_STACK_HEAD == NULL) {
        return NULL;
    }
    struct declaration_node *temp = _DECLARATION_STACK_HEAD;
    _DECLARATION_STACK_HEAD = _DECLARATION_STACK_HEAD->next;
    return temp;
}

// checks if pushDeclaration stack is empty
int isDeclarationStackEmpty() 
{
    return _DECLARATION_STACK_HEAD == NULL;
}

void popAllAndCreateEntry(int type, int array_size)
{
    int size ;
    switch (type)
    {
        case (_TYPE_INT):
        {;
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
    struct declaration_node * temp = popDeclaration();
    while(temp!=NULL)
    {
        // void GSTInstall(char *name, int type, int size, int offset)   // Creates a symbol table entry.

        GSTInstall(temp->varname, type, size*array_size, 0);
        free(temp);
        temp = popDeclaration();

    }
}