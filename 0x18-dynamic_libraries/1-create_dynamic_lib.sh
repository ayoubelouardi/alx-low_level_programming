#!/bin/bash
gcc -c -fPIC -Wall -Werror -pedantic *.c
gcc -shared -o liball.so *.o
