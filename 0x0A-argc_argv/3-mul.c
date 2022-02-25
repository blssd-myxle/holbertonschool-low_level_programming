#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed to
 * @argc: argument cntr
 * @argv: array of arguments
 *
 * Return: 1 if there are not 2 arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
