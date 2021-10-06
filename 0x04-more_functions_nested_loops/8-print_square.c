#include "holberton.h"
/**
	* print_square - prints a square of tbd size
	* @size: the size of the square
	* Return: nothing
	*/
	void print_square(int size)
	{
		int m, x;

		if (size > 0)
		{
			for (x = 0; x < size; ++x)
			{
				for (m = 0; m < size; ++m)
				{
					_putchar ('#');
				}
				_putchar ('\n');
			}
		}
		else
			_putchar('\n');
	}
