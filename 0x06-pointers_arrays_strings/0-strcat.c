#include "holberton.h"
/**
* _strcat - combines two strings
* @dest: string appended by source
* @src: string that is appended by dest
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int m = 0;
	int x = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[x] != '\0')
	{
		dest[m] = src[x];
		m++;
		x++;
	}
	return (dest);
}
