#include "main.h"
/**
* _strcpy - copy a string
* @dest: copies string
* @src: where string is to copied
* Return: pointer to copied string
*/
char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = '\0';
	m++;
	return (dest);
}
