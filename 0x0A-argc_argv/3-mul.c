#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 *
 * @argc: function parameter
 *
 * @argv: function parameter
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc >= 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;

		printf("%d\n", z);
		return (0);
	}
	return (0);
}
