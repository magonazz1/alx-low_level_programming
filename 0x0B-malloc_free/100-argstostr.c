#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - concatenates all arguments of a program
 *
 * @ac: the number of arguments
 *
 * @av: the array of the arguments
 *
 * Return: a pointer to a new string containing all arguments separated by \n
 * or NULL on failure
 *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	char *p;
	int x;
	int y;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		len = len + strlen(av[x]) + 1;
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	p = str;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			*p++ = av[x][y];
		}
		*p++ = '\n';
	}
	*p = '\0';
	return (str);
}
