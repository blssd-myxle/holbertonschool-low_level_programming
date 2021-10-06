#include "main.h"
/**
* puts2 - prints every other char
* @str: string of characters
* Return: void
*/

void puts2(char *str)
{
	int m = 0;
	int x;

	while (str[m] != 0)
	{
		++m;
	}
	for (x = 0; x < m; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
