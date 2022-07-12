#!/bin/bash
gcc -Wall -fpic -c *.c
gcc -fpic -o liball.so *.o -shared -Wl,-soname,liball.so
