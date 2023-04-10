#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc lilball.a *.o
ranlib lilball.a
