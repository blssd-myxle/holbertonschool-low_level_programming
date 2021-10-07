#include "main.h"
#include <stdio.h>
/**
* print_array - prints elements of an array of integers
* @a: pointer to an array
* @n: number of elements in an array to be printed
* Return: void
*/
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m != n - 1)
			printf("%d, ", a[m]);
		else
			printf("%d\n", a[m]);
	}
	if (n <= 0)
		printf("\n");
}
