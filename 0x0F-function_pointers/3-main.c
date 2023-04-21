#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 *
 * @argc: Number of arguments
 *
 * @argv: Array of arguments
 *
 * Return: 0 if successful, exit with error code if otherwise
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(op)(n1, n2);

	if ((n2 == 0) && ((*op == '/') || (*op == '%')))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", res);
	return (0);
}

