#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 *@s: pointer to string
 *@accept: number of bytes
 *
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	unsigned int x;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (x = 0; accept[x]; ++x)
		{
			if (accept[x] == s[m])
				break;
		}
		if (!accept[x])
			break;
	}
	return (m);
}
