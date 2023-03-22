#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * for loops have been used
 *
 * if statements have been used
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int n1 = i / 10;
			int n2 = i % 10;
			int n3 = j / 10;
			int n4 = j % 10;

			putchar('0' + n1);
			putchar('0' + n2);
			putchar(' ');
			putchar('0' + n3);
			putchar('0' + n4);
			putchar(',');

			if (!(i == 99 && j == 99))
			{
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
