// nodetype
#define  _NODE_TYPE_NUM 0
#define _NODE_TYPE_ID 1
#define _NODE_TYPE_READ 2
#define _NODE_TYPE_WRITE 3
#define _NODE_TYPE_CONNECTOR 4
#define _NODE_TYPE_PLUS 5
#define _NODE_TYPE_MINUS 6
#define _NODE_TYPE_MUL 7
#define _NODE_TYPE_DIV 8
#define _NODE_TYPE_EQUALS 9
#define _NONE -1
#define _NODE_TYPE_IF_ELSE 10
#define _NODE_TYPE_THEN 11
#define _NODE_TYPE_WHILE 12
#define _NODE_TYPE_DO_WHILE 13
#define _NODE_REPEAT_UNTIL 14
#define _NODE_TYPE_LT 15
#define _NODE_TYPE_GT 16
#define _NODE_TYPE_LE 17
#define _NODE_TYPE_GE 18
#define _NODE_TYPE_NE 19
#define _NODE_TYPE_EQ 20
#define _NODE_TYPE_BREAK 21
#define _NODE_TYPE_CONTINUE 22
#define _NODE_TYPE_BREAKPOINT 23
#define _NODE_TYPE_STRING 24
#define _NODE_TYPE_MOD 25
#define _NODE_TYPE_PARAMETER 26 
#define _NODE_TYPE_FUNCTION_CALL 27
#define _NODE_TYPE_RETURN 28
#define _NODE_TYPE_FUNCTION_DEFINITION 29
#define _NODE_TYPE_AND 30
#define _NODE_TYPE_OR 31
#define _NODE_TYPE_NOT 32
#define _NODE_TYPE_FIELD 33
#define _NODE_TYPE_HEAP_INIT 34
#define _NODE_TYPE_HEAP_ALLOC 35
#define _NODE_TYPE_HEAP_FREE 36
#define _NODE_TYPE_NULL 37
#define _NODE_TYPE_CLASS 38
#define _NODE_TYPE_NEW 39
#define _NODE_TYPE_DELETE 40
#define _NODE_TYPE_METHOD_CALL 41



// Type
#define _TYPE_INT 0
#define _TYPE_OPERATOR 1
#define _TYPE_LIBRARY_FUNCTION 2
#define _TYPE_STRING 3
#define _TYPE_CHAR 4
#define _TYPE_CONNECTOR 5
#define _TYPE_BOOL 6
#define _TYPE_KEYWORD 7
#define _TYPE_DECLARATION 8
#define _TYPE_ID 9
#define _TYPE_VOID 10
#define _TYPE_NULL 11


// Bool
#define _TRUE 1
#define _FALSE 0

// codgen
#define reg_index int

// Label Translation
#define _CODE_START_ADDRESS 2056
#define _MAIN_FUNCTION_LABEL 0

// Sizes
#define _INT_SIZE 1
#define _STRING_SIZE 1

// stack
#define _INITIAL_STACK_POINTER 4096
#define _STACK_UNIT_SIZE 1
#define _STACK_SIZE 1024
#define _FINAL_STACK_POINTER 5120

// heap
#define _INITIAL_HEAP_POINTER 1024
#define _HEAP_UNIT_SIZE 8
#define _HEAP_SIZE 1024



// function offsets
#define _FUNCTION_RETURN_ADDRESS_OFFSET -1
#define _FUNCTION_RETURN_VALUE_OFFSET -2
#define _FUNCTION_LOCAL_VARIABLE_OFFSET 1
#define _FUNCTION_ARGUMENT_OFFSET -3


// stack
int _STACK_POINTER;
int _BASE_POINTER;

// heap 
int _HEAP_POINTER; // Before the start of the program, reserve a large area of the address space for heap. The ExpOS memory model suggests that the address region 1024-2047 may be used for this purpose.

// initial state to decide when to print the starter code (header plus calling main functiona and exit)
int _INIT_STATE ;

// global variable that stores the current line number
int _CURRENT_LINE;
