#include "function_pointers.h"
/**
 * print_name - function that prints a name
 *
 * @name: the name to be printed
 *
 * @f: pointer to a function
 *
 * Return: the printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
	{
		return;
	}
	f(name);
}
