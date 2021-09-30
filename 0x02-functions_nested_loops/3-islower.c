#include "main.h"

/**
 * _islower - checks input of a lowercase letter
 * @m: ascii value of a character
 *
 * Return: 1 if lowercase, 0 otherwise
 **/

int _islower(int m)
{
	int i;

	if (m >= 97 && m <= 122)
		i = 1;
	else
		i = 0;
	return (i);
}
