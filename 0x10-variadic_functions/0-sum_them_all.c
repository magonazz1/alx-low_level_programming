#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: first parameter to be returned
 *
 * @...: the other variable parameters
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int x;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
