
// Creates a new parameter list with the given parameter as head if the list is empty
// if the list is not empty, it adds the parameter to the end of the list

struct ParameterNode * createParameterNode(char * name, struct TypeTable *  type, struct ClassTable* classType)
{
    struct ParameterNode * new_parameter_node = (struct ParameterNode *) malloc(sizeof(struct ParameterNode));
    new_parameter_node->name = name;
    new_parameter_node->type = type;
    new_parameter_node->next = NULL;
    new_parameter_node->prev = NULL;
    new_parameter_node->rows = 0;
    new_parameter_node->cols = 0;
    new_parameter_node->classType = classType;

    return new_parameter_node;
}
struct ParameterNode * addToParameterList(struct ParameterNode * parameter_list, char * varname, struct TypeTable * type, struct ClassTable * classType)
{
    struct ParameterNode * parameter_node = createParameterNode(varname, type, classType);
    if (parameter_list == NULL)
    {
       return parameter_node;
    } 
    else 
    {
        struct ParameterNode * temp = parameter_list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        parameter_node->prev = temp;
        temp->next = parameter_node;
    }
    return parameter_list;
}

int getNewFunctionLabel()
{
    _LAST_USED_FUNCTION_LABEL++;
    return _LAST_USED_FUNCTION_LABEL;
}

void incrementFunctionCounter()
{
    _BALANCE_FUNCTION_DEFINITIONS++;
}
void decrementFunctionCounter()
{
    _BALANCE_FUNCTION_DEFINITIONS--;
}
int getFunctionCounter()
{
    return _BALANCE_FUNCTION_DEFINITIONS;
}