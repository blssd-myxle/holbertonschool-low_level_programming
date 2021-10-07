#include <stdio.h>
/**
* main - printing alphabet in reverse
*
* Return: 0
*
*/
int main(void)
{
	int m;

	for (m = 122; m >= 97; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
