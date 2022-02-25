
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return ptr containing copy of string
 * @str: string to copy
 *
 * Return: pntr to string or NULL if insufficent memory
 *
 *
 */

char *_strdup(char *str)
{

	char *ptr;
	unsigned int n, strlen = 0;

	if (str == 0)
		return (NULL);

	while (str[strlen])
	{
		strlen++;
	}
		strlen++;
	ptr = malloc(strlen * sizeof(char));
	if (ptr == 0)
		return (NULL);
	for (n = 0; n < strlen; n++)
	{
		ptr[n] = str[n];
	}
return (ptr);
}
