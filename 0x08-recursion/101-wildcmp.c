#include "main.h"
/**
 * strlen_no_wilds - fucntion that gives the length of a string
 *			ignoring wildcard characters.
 * @s: the string parameter
 *
 * Return: length of string
 */
int strlen_no_wilds(char *s)
{
	int leng = 0;
	int index = 0;

	if (*(s + index))
	{
		if (*s != '*')
		{
			leng++;
			index++;
			leng = leng + strlen_no_wilds(s + index);
		}
	}
	return (leng);
}
/**
 * iterate_wild - function that iterates through a string located
 *	at a wildcard until it points to a non-wildcard character
 * @wilds: string parameter to be compared
 */
void iterate_wild(char **wilds)
{
	if (**wilds == '*')
	{
		(*wilds)++;
		iterate_wild(wilds);
	}
}
/**
 * postfix_match - fnction checks if a string str matches the postfix of
 *			another string potentially containing wildcards.
 * @s: The string to be matched
 *
 * @postfix: The postfix
 *
 * Return: if s and postfix are identical - return a pointer to the null byte
 *						located at the end of postfix
 * if not - a pointer to the first unmatched character in postfix.
 */
char *postfix_match(char *s, char *postfix)
{
	int s_leng = strlen_no_wilds(s) - 1;
	int postfix_leng = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
	{
		iterate_wild(&postfix);
	}
	if (*(s + s_leng - postfix_leng) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(s, postfix));
	}
	return (postfix);
}
/**
 * wildcmp - Compares two strings, considering wildcard characters
 *
 * @s1: first string parameter
 *
 * @s2: second string parameter
 *
 * Return: 1 if they are identical, if not, return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}
