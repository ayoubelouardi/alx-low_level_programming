#include "stddef.h"
#include "3-calc.h"

/**
 * get_op_func - select the currect function
 * @s: the operator passed as argument to the program
 * Description:
 * This function returns a pointer to the function that
 * corresponds to the operator given as a parameter
 * Example:
 * get_op_func("+")
 * should return a pointer to the function: op_add
 *
 * You are not allowed to use switch statements
 * You are not allowed to use for or do ... while loops
 * You are not allowed to use goto
 * You are not allowed to use else
 * You are not allowed to use more than one if statement
 * in your code
 * You are not allowed to use more than one while loop in
 * your code
 *
 * Return:
 * if s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
 *
 * NOTE: You are only allowed to declare these two variables
 * in this function: xx
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i <= 5)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
