#include "holberton.h"
/**
* print_line - prints a line (_) n times
* @n: variable that determines line length
* Return: 0
*/
void print_line(int n)
{
	{
		int m;

		if (n > 0)
		{
			for (m = 0; m < n; m++)
			{
			_putchar('_');
			}
	}
	_putchar('\n');
}
