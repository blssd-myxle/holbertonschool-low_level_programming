#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings, up to n bytes of s2
 *
 * @s1: string 1 to concatenate with string 2
 * @s2: string 2 to concatenate with string 1
 * @n: number of bytes to concatenate of s2
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j;
	char *dex;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)

		s2 = "";

	if (n > strlen(s2))

		dex = malloc(strlen(s1) + strlen(s2) + 1);
	else
		dex = malloc(strlen(s1) + n + 1);

	if (dex == NULL)

		return (NULL);
	for (i = 0; s1[i]; ++i)
		dex[i] = s1[i];

	for (j = 0; s2[j] && j < n; ++j, ++i)
		dex[i] = s2[j];
	dex[i] = 0;
	return (dex);
}
