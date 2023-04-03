#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: area to fill
 *
 * @b: const byte to fill
 *
 * @n: bytes
 *
 * Return: the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
