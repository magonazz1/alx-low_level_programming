#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - functions that concatenates two strings
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	if (len1 > 0)
	{
		memcpy(concat, s1, len1);
	}
	if (len2 > 0)
	{
		memcpy(concat + len1, s2, len2);
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
