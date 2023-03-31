#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * Return: Always 0
 *
 * @n: first function parameter
 *
 * @l: second function parameter
 *
 * @m: third function parameter
 */
void print_diagonal(int n)
{
	int l, m;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < l; m++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
