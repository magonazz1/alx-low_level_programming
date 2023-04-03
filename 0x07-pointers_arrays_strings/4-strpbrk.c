#include "main.h"
/**
  * *_strpbrk - search a string for any of a set of bytes
  *
  * @s: original string
  *
  * @accept: accepted chars
  *
  * Return: string since the first found accepted char
  */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}

			y++;
		}

		x++;
	}

	return ('\0');
}
