#include "holberton.h"
/**
 * print_line - prints a line of n length
 * @n: variable for line length
 *
 * Return:
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
			_putchar('_');
	}
	_putchar('\n');
}
