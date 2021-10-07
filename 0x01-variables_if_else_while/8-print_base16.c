#include <stdio.h>
/**
* main - printing base 16 numbers
*
* Return: (0)
*
*/
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
		putchar(m);
	for (m = 97; m < 103; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
