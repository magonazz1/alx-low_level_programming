#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * while loops have been used
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
