struct parameter_node {
    char *name; // name of the parameter
    int type; // type of the parameter
    int rows, cols;   // for arrays
    struct parameter_node *next; // pointer to the next parameter in the list
};


int _LAST_USED_FUNCTION_LABEL = -1;
// Creates a new parameter list with the given parameter as head if the list is empty
// if the list is not empty, it adds the parameter to the end of the list
struct parameter_node * AddToParameterList(struct parameter_node * parameter_list, char * varname, int type, int rows, int cols);
// Creates a new parameter node with the given name and type and returns it 
struct parameter_node * createParameterNode(char * name, int type);

// Gets a new function label Number for the function
int getNewFunctionLabel();

