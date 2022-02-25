#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - add agrs on command line
*@argc: argument count
*@argv: agurment array vector
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; ++a)
	{
		for (b = 0; argv[a][b] != '\0'; ++b)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	 printf("%d\n", sum);
	return (0);
}
