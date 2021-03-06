#include "main.h"
#include <stddef.h>
/**
 * _strstr - returns pointer to first occurance of substring needle in haystack
 * @haystack: str to search
 * @needle: substr to locate
 * Return: Pointer to beginning of substr or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		for (i = 0; haystack[i] == needle[i]; ++i)
		{
			if (!needle[i + 1])
				return (haystack);
		}
		++haystack;
	}

	return (NULL);
}
