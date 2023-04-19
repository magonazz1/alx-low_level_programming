#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point of a program that prints its own file name
 *
 * Return: The name of file it was compiled from
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
