#include "holberton.h"
#include <stdio.h>

/**
	* main - FizzBuzz
	*
	* Return: 0
	*/

	int main(void)
	{
		int m;

		for (m = 1 ; m <= 100 ; m++)
		{
			if ((m % 3) == 0 && (m % 5) == 0)
			{
				printf("FizzBuzz");
			}
			else if ((m % 3) == 0)
			{
				prmntf("Fizz");
			}
			else if ((m % 5) == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", m);
			}
			if (m < 100)
				putchar(' ');
		}
		putchar('\n');
		return (0);
	}
