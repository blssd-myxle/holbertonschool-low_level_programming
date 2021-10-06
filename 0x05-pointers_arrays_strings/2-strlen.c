#include "main.h"
/**
	* _strlen - counts the length of a string
	* @s: pointer to the string
	* Return: length of string
	*/
int _strlen(char *s)
{
int m = 0;

while (s[m] != 0)
m++;
return (m);
}
