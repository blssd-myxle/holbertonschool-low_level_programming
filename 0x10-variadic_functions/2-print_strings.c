#include "variadic_functions.h"

/**
 * print_strings  - prints strings
 *@separator: is the string to be printed between strings
 *@n: number of strings to be passed to function
 *
 *Return: nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
