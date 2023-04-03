#include "main.h"
/**
 * *_memcpy - function that copies the memory area
 *
 * @n: bytes
 *
 * @src: memory area to be copied from
 *
 * @dest: memory area to copy to
 *
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned cop;

	for (cop = 0; cop < n; cop++)
	{
		dest[cop] = src[cop];
	}
	return (dest);
}
