#include "main.h"
/**
 * _islower - function that checks for lowercase characters
 *
 * Return: 1 if c is lower
 * and 0 when otherwise
 *
 * @c: parameter to be printed
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

