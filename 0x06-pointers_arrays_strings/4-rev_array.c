#include "holberton.h"
/**
* reverse_array - reverses content of an array
* @a: pointer to array
* @n: length of array
* Return: nothing
**/
void reverse_array(int *a, int n)
{
	int m, doctor;

	for (m = 0; m < n; m++)
	{
		doctor = a[m];
		a[m] = a[n - 1];
		a[n - 1] = doctor;
		n--;
	}
}
