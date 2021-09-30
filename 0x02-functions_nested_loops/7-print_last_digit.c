#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the integer to pull the last digit
 * Return: what the last digit is
 */
int print_last_digit(int n)
{
n = n % 10;
if (n >= 0)
{
_putchar('0' + n);
}
else if (n < 0)
{
n = n * -1;
_putchar('0' + n);
}
return (n);
}
