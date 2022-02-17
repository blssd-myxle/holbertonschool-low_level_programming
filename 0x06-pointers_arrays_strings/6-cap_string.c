#include "holberton.h"
/**
* cap_string - Capitalize the words of string
* @tardis: pointer to string
* Return: tardis
*/
char *cap_string(char *tardis)
{
	int doctor, master;
	char sep[] = " \t\n,;.!?\"(){}";

	doctor = 0;
	while (tardis[doctor] != '\0')
	{
		if (tardis[doctor] >= 97 && tardis[doctor] <= 122)
		{
			if (doctor == 0)
			{
				tardis[doctor] -= 32;
			}
			else
			{
				for (master = 0; master < 14; master++)
				{
					if (tardis[doctor - 1] == sep[master])
						tardis[doctor] -= 32;
				}
			}
		}
		doctor++;
	}

	return (tardis);
}
