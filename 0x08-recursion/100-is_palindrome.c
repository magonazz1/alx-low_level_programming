#include "main.h"
/**
 * find_strlen - funtion that returns the length of a string
 *
 * @s: the string parameter
 *
 * Return: length of the string
 */
int find_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (find_strlen(s + 1) + 1);
}
/**
 * check_palindrome - function that checks if a string is a palindrome
 *
 * @s: the string parameter
 *
 * @len: length parameter
 *
 * @index: index of string parameter
 *
 * Return: 1 if the string is a palindrome
 *
 * if it is not, return 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (index >= len / 2)
	{
		return (1);
	}
	if (s[index] != s[len - index - 1])
	{
		return (0);
	}
	return (check_palindrome(s, len, index + 1));
}
/**
 * is_palindrome - function that checks if a string is a palindrome
 *
 * @s: the string parameter
 *
 * Return: 1 if the string is a palindrome
 *
 * if it is not a palindrome return 0
 */
int is_palindrome(char *s)
{
	int len = find_strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, len, 0));
}
