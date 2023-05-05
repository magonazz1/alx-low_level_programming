#include "main.h"

int _putchar(char c);

/**
 * print_binary - function that prints binary representations of a number
 *
 * @n: the number to be printed
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int pack = 1;
	int x = 0;

	for (; x <63; x++)
	{
		pack <<= 1;
		if (pack > n)
		{
			break;
		}
	}
	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
