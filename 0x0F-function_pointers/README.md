0x0F-function_pointers

0. A function that prints a name. (What's my name)
	* Prototype: void print_name(char *name, void (*f)(char *));


1. A function that executes a function given as a parametr on each element of an array. (If you soend too much time thinking about a thing, you'll never get it done)
	* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	* Where size is the size of the array 
	* and action is a pointer to the function you need to use


2. A function that searches for an integer. (TO hell with circumstances; I create opportunities)
	* Prototype: int int_index(int *array, int size, int (*cmp)(int));
	* where size is the number of elements in the array array.
	* cmp is a pointer to the functio to be used to compare values
	* int_index returns the index of the first elemen for which the cmp function does not return 0
	* If no element marches, retun -1
	* If size <= 0, return -1 


3. A progrma that performs simple operations. (A goal is not always meant to be reached, it often serves simply as something to aim at)
	* Use of standard library is allowed.
	* Usage: calc num1 operator num2 
	* Assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
	* operator is one of the following:
		+: addition
		-: subtraction
		*: multiplication
		/: division
		%: modulo
	* THe program printd the result of the operation, followed by a new line
	* Assume that the reslt of the operations can be stored in an int
	* if the number of the arguments is wrog, print Erro, followed by a new line, and exit with the status 98
	* if the operator is none of the above, print Eroor, followed by a new line, exit with the status 99
	* if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
(The task requires 4 diffferent files)

3.1 3-calc.h
	* THe file should cntain al the functio prototypes and data structures used by the program.
	* /**
	   * struct op - Struct op
           *
	   * @op: The operator
 	   * @f: The function associated
  	   */
	    typedef struct op
	    {
   		 char *op;
    		 int (*f)(int a, int b);
	    } op_t;

3.2 3-op_functions.cThe file should contain the following 5 functions (not more):
	* op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	* op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	* op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	* op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	* op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);


3.3 3-get_op_func.c
This file should contain the function that selects the correct function to perform the operation asked by the user. NO OTHER FUNCTIONS SHOULD BE DECLARED
	* Prototype: int (*get_op_func(char *s))(int, int);
	* where s is the operator passed as argument to the program
	* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
	* Not allowed to use switch statements
	* Not allowed to use for or do... while loops
	* Not allowed to use goto
	* Not allowed to use else
	* Not allowed touse more than one if statemnet in the code 
	* Not allowed to use more than one while loop in the code
       * If s des not match any of the 5 expected operators (+, -, *, /, %), return NULL
	* Not allowed to declare these two variables in the function:
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;




3.4 3-main.c
This file should contain you main function only
	* Not allowed tocode any other function than main in this file
	* Not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod fom the main function
	* Use the atoi to convert arguments to int
	* Not allowed touse any kind of loop
	* Not allowed to use a maximum of 3 if statements


4. A program that prints the opcodes of its own main function. (Most hackers are young because young people tend to be adaptable. AS long as you remain adaptable, you can be a good hacker)
	* Usage: ./main number_of_bytes
	* Output format:
		* the opcodes should be printed in hexadecimal, lowercase 
		* each opcode is 2 char long
		* listing ends with a new line
	* Allowed to use printf and atoi
	* Use atoi to convert the argument to an int
	* If the  number of argumnets is not the correct one,print Error, followed by a new line, and exit with the status 1
	* if the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
	* Doesnt have to be comipled with any flags 
