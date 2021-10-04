#include "holberton.h"
/**
* _isupper - checks the case of an input character
* @c: the character to be checked
* Return: 1 if uppercase, 0 if other
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
