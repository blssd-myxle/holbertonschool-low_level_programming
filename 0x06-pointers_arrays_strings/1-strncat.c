#include "holberton.h"
/**
* _strncat - combines two strings
* @dest: string that is appended
* @src: the appended string
* @n: src int
* Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int m, x;

	for (x = 0; dest[x] != 0;)
	{
		x++;
	}
	for (m = 0 ; m < n && src[m] != 0;)
	{
		dest[x] = src[m];
		m++;
		x++;
	}
	return (dest);
}
