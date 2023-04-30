#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_words - count the number of words in a string
 *
 * @str: the string to count the words from
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int wordCount = 0;
	int letter = 0;
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] != ' ' && !letter)
		{
			wordCount++;
			letter = 1;
		}
		else if (str[x] == ' ' && letter)
		{
			letter = 0;
		}
		x++;
	}
	return (wordCount);
}
/**
 * **allocate_words - allocate memory for the words in a string
 *
 * @str: the string to allocate memory from
 *
 * @wordCount: the number of words in the string
 *
 * Return: the pointer to the allocated memory
 */
char **allocate_words(char *str, int wordCount)
{
	char **strArr;
	int counter = 0, letter = 0, x = 0, y = 0;

	(void) letter;
	strArr = malloc(sizeof(char *) * (wordCount + 1));
	if (!strArr)
	{
		return (NULL);
	}
	for (x = 0; x < wordCount; x++)
	{
		while (str[counter] == ' ')
		{
			counter++;
		}
		y = counter;

		while (str[counter] != ' ' && str[counter] != '\0')
		{
			counter++;
		}
		strArr[x] = malloc(sizeof(char) * (counter - y + 1));

		if (!strArr[x])
		{
			for (x--; x >= 0; x--)
			{
				free(strArr[x]);
			}
			free(strArr);
			return (NULL);
		}
		counter--;
		for (; y < counter; y++)
		{
			strArr[x][y - counter - 1] = str[y];
		}
		strArr[x][y - counter - 1] = '\0';
	}
	strArr[x] = NULL;
	return (strArr);
}
/**
 * **strtow - function that splits a stricng into words
 *
 * @str: the string to be splitted
 *
 * Return: the splitted words
 */
char **strtow(char *str)
{
	char **strArr;
	int wordCount = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	wordCount = count_words(str);
	strArr = allocate_words(str, wordCount);

	return (strArr);
}
