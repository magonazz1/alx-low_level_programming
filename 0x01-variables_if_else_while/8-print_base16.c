#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Prints all base 16 in lowercase followed by a new line
 *
 * while loops have been used
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
