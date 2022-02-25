#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add agrs on command line
 *@argc: argument count
 *@argv: agurment array vector
 *
 *Return: nil
 */

 int main(int argc, char  *argv[])
{
        int i, j, sum = 0;

        if (argc == 1)
    {
        printf("0\n");
            return (0);
    }
        for (i = 1; i < argc; i++)
        {
            for (j = 0; argv[i][j]; j++)
        {

            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
            return (1);
            }
        }
            sum = sum + atoi(argv[i]);
        }
    printf("%d\n", sum);
    return (0);
 }
