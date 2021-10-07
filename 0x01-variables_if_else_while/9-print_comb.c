#include <stdio.h>
/**
* main - printing all combos of single digits
*
* Return: 0
*/
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
