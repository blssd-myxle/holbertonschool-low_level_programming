#include "holberton.h"
/**
	* print_diagonal - prints a diagonal line
	* @n: length of line
	* Return: nothing
	**/

	void print_diagonal(int n)
	{
		int m, x;

		if (n > 0)
		{
			for (m = 0 ; m < n ; m++)
			{
				for (x = 0 ; x < m ; x++)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}

	}
