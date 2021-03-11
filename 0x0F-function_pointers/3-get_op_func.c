#include "3-calc.h"

/**
 * get_op_func - Get the function to execute later
 * @s: Operator for getting the function
 *
 * Return: NULL if fails else, the function name
 */
int (*get_op_func(char *s))(int x, int y)
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

	while (ops[i].op != NULL)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
