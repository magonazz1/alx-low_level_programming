#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 *
 * @s: source string parameter
 *
 * @c: host character
 *
 * Return: a pointer to the first occurence of the character c in
 *	the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
