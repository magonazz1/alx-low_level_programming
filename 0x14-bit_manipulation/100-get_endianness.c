#include "main.h"

/**
 * get_endianness - function that checks endiannes of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	if (*c != '\0')
	{
		return (1);
	}
	else if (*c == '\0')
	{
		return (0);
	}
	return (0);
}
