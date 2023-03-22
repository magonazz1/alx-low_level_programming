#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower case excpet for letters e and q
 *
 * while loops have been used
 *
 * if functions have been used
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
