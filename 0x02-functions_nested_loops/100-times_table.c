#include "main.h"
/**
 * print_times_table -  function that prints the n times table, starting with 0
 *
 * Return: 0 Always
 *
 * @n: function parameter
 */
void print_times_table(int n)
{
	int n1, m1, k1;

	if (n >= 0 && n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar('0');

			for (m1 = 1; m1 <= n; m1++)
			{
				_putchar(',');
				_putchar(' ');

				k1 = n1 * m1;

				if (k1 <= 99)
					_putchar(' ');

				if (k1 <= 9)
					_putchar(' ');

				if (k1 >= 100)
				{

					_putchar((k1 / 100) + '0');
					_putchar((k1 % 10) % 10 + '0');
				}
				else if (k1 <= 99 && k1 >= 10)
				{
					_putchar((k1 / 10) + '0');
				}
				_putchar((k1 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
