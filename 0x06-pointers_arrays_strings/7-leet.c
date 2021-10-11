#include "holberton.h"
/**
* leet - change a string into 1337
* @chichi: pointer
* Return: chichi
*/
char *leet(char *chichi)
{
	int goku, trunks, vegeta;

	char leet[] = {'4', '3', '0', '7', '1'};
	char bulma[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (goku = 0; chichi[goku] != '\0'; goku++)
	{
		vegeta = 0;
		for (trunks = 0; trunks < 5; trunks++)
		{
			if (chichi[goku] == bulma[vegeta] || chichi[goku] == bulma[vegeta + 1])
			{
				chichi[goku] = leet[trunks];
			}
			vegeta += 2;
		}
	}
	return (chichi);
}
