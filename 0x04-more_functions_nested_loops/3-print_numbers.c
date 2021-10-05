#include "holberton.h"
/**
* print_numbers - prints 1-9 followed by a new line
*
* Return: nothing
*/

void print_numbers(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		_putchar(m);
	}

	_putchar('\n');
}
