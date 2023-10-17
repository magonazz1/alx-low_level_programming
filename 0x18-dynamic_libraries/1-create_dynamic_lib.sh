#!/bin/bash
gcc -c -o liball.o *.c && gcc -shared -o liball.so liball.o
