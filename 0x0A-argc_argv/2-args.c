#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts arguments
 * @argv: array of arguements
 *
 * Return: nil
 */


int main(int argc, __attribute__((unused)) char  *argv[])
{
	int i;

	if (argc > 0)
		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	return (0);
}
