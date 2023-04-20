#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything
 *
 * @format: the string format characters
 *
 * @...: variable arguments
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0;
	char *str;

	va_start(args, format);

	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[x + 1] && (format[x] == 'c' || format[x] == 'i' ||
			format[x] == 'f' || format[x] == 's'))
			printf(", ");

		x++;
	}
	printf("\n");
	va_end(args);
}


