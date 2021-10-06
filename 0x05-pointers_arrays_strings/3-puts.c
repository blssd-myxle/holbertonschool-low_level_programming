#include "main.h"
/**
	* _puts - prints out a string argument one at a time
	* @str: pointer to a string
	* Return: void
	*/

	void _puts(char *str)
	{
		int m = 0;

		while (str[m] != 0)
		{
			_putchar (str[m]);
			++m;
		}
		_putchar('\n');
	}
