#include "main.h"
/**
* puts_half - prints half of the string
* @str: pointer to the string
* Return: void
*/

void puts_half(char *str)
{
	int m = 0;
	int x;

	while (str[m] != 0)
	{
		m++;
	}
	for (x = (m - 1) / 2 + 1; x < m; x++)
	{
		_putchar(str[x]);
	}
}
