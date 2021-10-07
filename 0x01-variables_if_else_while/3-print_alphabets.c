#include <stdio.h>
/**
* main - print abc in lower and uppercase
*
* Return: 0
*/
int main(void)
{
	int m;

	for (m = 97; m <= 122; m++)
		putchar(m);
	for (m = 65; m <= 90; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
