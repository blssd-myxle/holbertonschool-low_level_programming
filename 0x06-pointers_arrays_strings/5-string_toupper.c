#include "holberton.h"
/**
* string_toupper - changes lower case to upper
* @m: pointer to string
* Return: m
**/
char *string_toupper(char *m)
{
	int x = 0;

	while (m[x] != '\0')
	{
		if (m[x] >= 97 && m[x] <= 122)
			m[x] = m[x] - 32;
		x++;
	}
	return (m);
}
