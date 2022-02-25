#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array that of numbers that will be pass function
 * @size: size of array
 * @action: a pointer to the function to use
 * Return: Nil
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
	}
}
