#include "holberton.h"
/**
* _strncpy - copies string to n
* @dest: string dest
* @src: string src
* @n: int in src
* Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m])
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
