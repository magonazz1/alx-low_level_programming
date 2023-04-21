#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that Selects the correct function to perform
 *
 * @s: operator passed as argument.
 *
 * Return: pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int x = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[x].op != NULL && *(ops[x].op) != *s)
	{
		x++;
	}
	return (ops[x].f);
}
