#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: first string parameter
 *
 * @s2: second string parameter
 *
 * @n: unsigned integer parameter
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int x;
	unsigned int y;

	if (s1 != NULL)
	{
		for (x = 0; s1[x] != '\0'; x++)
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		for (x = 0; s2[x] != '\0' && x < n; x++)
		{
			len2++;
		}
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < len1; x++)
	{
		concat[x] = s1[x];
	}
	for (y = 0; y < len2; y++)
	{
		concat[x + y] = s2[y];
	}
	concat[x + y] = '\0';
	return (concat);
}
