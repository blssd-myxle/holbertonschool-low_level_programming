#include "holberton.h"
/**
* _isdigit - checks for digit (0-9)
* @m: is digit 1 - 9
* Return: 0
*/

int _isdigit(int m)
{
	if (m >= '0' && m <= '9')
	return (1);
	return (0);
}
