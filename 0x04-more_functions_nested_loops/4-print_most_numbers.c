#include "main.h"
/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * except for 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
