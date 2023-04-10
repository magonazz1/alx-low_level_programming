#include "main.h"
/**
 * _isalpha - function that checks for uppercase or lowercase alphabets
 *
 * Return: 1 if c is a letter
 * and 0 when otherwise
 *
 * @c: parameter to be printed
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
