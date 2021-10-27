#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: Pointer to memory, 98 upon fail
 */

 void *malloc_checked(unsigned int b)

 {
 	int *ptr;

 	ptr = malloc(b);

 	if(!ptr)
 		exit(98);

 	return (ptr);
 }
