#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all numbers to 98
  * @n: - any natural number type
  *
  * Return:
  **/
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
n--;
else
n++;
}
printf("%d\n", n);
}
