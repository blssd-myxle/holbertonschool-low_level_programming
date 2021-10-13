#include "main.h"
/**
* _memset - fills the first n bytes of memory
* @s: pointer to the first memory location
* @b: character to fill memory
* @n: number of bytes to fills
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
