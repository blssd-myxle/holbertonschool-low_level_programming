#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @n: a number
 * Return: absolute value of n
 **/

int _abs(int n)
{
	int abs;

	if (n >= 0)
		abs = n;
	else
		abs = n * -1;
	return (abs);
}
