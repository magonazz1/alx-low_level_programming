#include "main.h"
/**
 * _isupper - Checks for upper case character
 *
 * Return: 1 if c is uppercase
 * and 0 if otherwise
 *
 * @c: - fucntion parameter
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
