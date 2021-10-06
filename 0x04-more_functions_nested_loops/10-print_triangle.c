#include "holberton.h"
/**
 *print_triangle - print triangle using #
 *@size: size of the triangle
 *Return: nothing
 */
void print_triangle(int size)
{
int i, lines = 1;

if (size > 0)
{
while (size--)
{
for (i = 0; i < size; ++i)
{
_putchar(' ');
}
for (i = 0; i < lines; i++)
{
_putchar('#');
}
_putchar('\n');
++lines;
}
}
else
_putchar('\n');
}
