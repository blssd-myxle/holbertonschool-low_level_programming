#include "holberton.h"
/**
* print_most_numbers - prints 0-9, except for 2 & 4
* Return: nothing
*/
void print_most_numbers(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		if ((m != 50) && (m != 52))
			_putchar(m);
	}
	_putchar('\n');
}
