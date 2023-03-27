#include "main.h"
/**
 * print_last_digit - Functiont that prints the last digit of a number
 *
 * Return: 0 Always
 *
 * @i: function parameter to be printed
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 0)
		n = -(n);
	_putchar(n + '0');
	return (n);
}
