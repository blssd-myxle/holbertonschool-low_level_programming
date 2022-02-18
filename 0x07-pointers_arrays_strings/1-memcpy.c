#include "main.h"
/**
* _memcpy - copys 'n' bytes of memory
* @dest: destination string
* @src: source being copied
* @n: bytes to copy
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
