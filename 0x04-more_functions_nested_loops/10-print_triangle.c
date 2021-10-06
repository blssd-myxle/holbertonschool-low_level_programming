#include "holberton.h"
/**
 *print_triangle - print triangle using #
 *@size: size of the triangle
 *Return: nothing
 */
void print_triangle(int size)
{
int lines = 1, m;

if (size > 0)
{
while (size--)
{
for (m = 0; m < size; ++m)
{
_putchar(' ');
}
for (m = 0; m < lines; m++)
{
_putchar('#');
}
_putchar('\n');
++lines;
}
}
}
