#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 *
 * @argc: integer parameter
 *
 * @argv: string parameter
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		z = z + atoi(argv[x]);
	}
	printf("%d\n", z);
	return (0);
}
