#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0 Always
 */
void times_table(void)
{
	int n1, m1, k1;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar('0');

		for (m1 = 1; m1 <= 9; m1++)
		{
			_putchar(',');
			_putchar(' ');

			k1 = n1 * m1;

			if (k1 <= 9)
				_putchar(' ');
			else
				_putchar((k1 / 10) + '0');

			_putchar((k1 % 10) + '0');
		}
		_putchar('\n');
	}
}
