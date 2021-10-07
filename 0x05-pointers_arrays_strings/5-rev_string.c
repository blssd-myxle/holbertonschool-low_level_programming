#include "main.h"
/**
* rev_string - string in reverse
* @s: point to a string char
* Return: void
*/
void rev_string(char *s)
{
	int m = 0;
	int x = 0;
	char keep;

	while (s[m] != 0)
	{
		m++;
	}
	for (m--; m > x; m--)
	{
		keep = s[m];
		s[m] = s[x];
		s[x] = keep;
		x++;
	}
}
