#include "main_h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of function
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0
 */

 int main(int argc, __attribute__((unused)) char  *argv[])
 {
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
 }
