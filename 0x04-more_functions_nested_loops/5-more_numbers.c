#include "holberton.h"
/**
* more_numbers - prints 1-14 10x followed by newline
* Return: nothing
*/
void more_numbers(void)
{
	int m, x;

	for (m = 0 ; m < 10 ; m++)
	{
		for (x = 0 ; x <= 14 ; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
