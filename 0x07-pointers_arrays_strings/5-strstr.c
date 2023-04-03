#include "main.h"
/**
  * *_strstr - function that locates a substring
  *
  * @haystack: string to bee searched
  *
  * @needle: string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int m = 0;
	int n = 0;

	while (haystack[m])
	{
		while (needle[n])
		{
			if (haystack[m + n] != needle[n])
			{
				break;
			}

			n++;
		}

		if (needle[n] == '\0')
		{
			return (haystack + m);
		}

		m++;
	}

	return ('\0');
}

