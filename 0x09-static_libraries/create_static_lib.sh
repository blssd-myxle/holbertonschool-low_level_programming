#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fno-pie -c *.c
ar -rc liball.a *.o
