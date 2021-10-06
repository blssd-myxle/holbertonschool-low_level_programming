#include "main.h"
/**
* print_rev - prints a string in reverse
* @str: string to be reversed
* Return: void
*/

void print_rev(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		++m;
	}
	for (m--; m >= 0; m--)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
