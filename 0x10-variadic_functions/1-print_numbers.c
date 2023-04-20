#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_numbers - function that prints numbers followed by a new line
 *
 * @n: the number of integers passed to the function
 *
 * @...: variable number of arguments
 *
 * @separator: the string
 *
 * Return: the 'separator string'
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int num;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
