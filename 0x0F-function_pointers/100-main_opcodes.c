#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the opcode of the program
 *
 * @argc: The number arguments.
 *
 * @argv: An array of arguments.
 *
 * Return: 0 if successful, otherwise 1 or 2.
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int bytes;
	int (*ad)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; x < bytes; x++)
	{
		code = *(unsigned char *) ad;

		printf("%.2x", code);

		if (x != bytes - 1)
		{
			printf(" ");
			ad++;
		}
	}
	printf("\n");
	return (0);
}
