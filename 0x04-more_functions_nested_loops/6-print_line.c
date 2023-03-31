#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * Return: Always 0
 *
 * @n: funtion parameter
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
