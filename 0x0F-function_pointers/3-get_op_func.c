#include "3-calc.h"

/**
 * get_op_function - selects the function for the operation the user request
 * @s: operator passed as program argument
 *
 * Return: pointer to the function corresponding to the operator
 */

int (*get_op_function(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->ops[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
