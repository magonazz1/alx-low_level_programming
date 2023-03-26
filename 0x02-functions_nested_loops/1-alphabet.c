#include "main.h"
/**
 * print_alphabet - prints the aphabet in lowercase
 * 
 * _putchar function has been used
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
