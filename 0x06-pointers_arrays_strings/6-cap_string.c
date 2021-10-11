#include "holberton.h"
#include <string.h>
/**
* cap_string - Capitalize the words of a string
* @jedi: pointer to string
* Return: jedi
*/
char *cap_string(char *jedi)
{
	int m;
	char *saber = "\n\t ,.?(){}";
	char yoda[2];
	int sith;

	for (m = 0; jedi[m]; m++)
	{
		if (sith == 0)
		{
			if ((jedi[m] >= 97 && jedi[m] <= 122))
				jedi[m] = jedi[m] - 32;
			sith = 1;
		}
		yoda[0] = jedi[m];
		yoda[1] = 0;
		if (strstr(saber, yoda) != 0)
			sith = 0;
	}
		return (jedi);
}
