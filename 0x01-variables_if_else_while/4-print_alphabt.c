#include <stdio.h>
/**
 * main - print alphabet without q and e
 *
 * Return: 0
 */
int main(void)
{
	char m;

	for (m = 97; m <= 122; m++)
		if (m != 101 && m != 113)
			putchar(m);
	putchar('\n');
	return (0);
}
