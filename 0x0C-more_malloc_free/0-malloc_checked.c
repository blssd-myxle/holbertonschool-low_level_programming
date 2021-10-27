#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: Pointer to memory, 98 upon fail
 */

 void *malloc_checked(unsigned int b)
 {
 	void *ret;

 	ret = malloc(b);
 	if (ret == NULL)
 		exit(98);
 	return (ret);
 }
