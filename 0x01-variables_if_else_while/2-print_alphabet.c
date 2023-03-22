#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in small letters
 *
 * while functions have been used
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
