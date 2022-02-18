#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search in
 * @accept: bytes to look for
 *
 * @accept: string
 */
 
char *_strpbrk(char *s, char *accept)
{
	char *str = NULL;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		str = accept;
		while (*str != '\0')
		{
			if (*s == *str)
			{
				return (s);
			}
			str++;
		}
		s++;
	}
	return (NULL);
}
