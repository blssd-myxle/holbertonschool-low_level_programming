#include "main.h"

/**
 * _isalpha - checks if input is a letter
 * @c: ascii value of a character
 *
 * Return: 1 if lowercase, 0 if not
 */

int _isalpha(int c)
{
	int i;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		i = 1;
	else
		i = 0;
	return (i);
}
