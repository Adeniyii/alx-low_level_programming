#!/usr/bin/bash

gcc -fpic -c *.c
gcc -fpic -o liball.so *.o -shared -Wl,-soname,liball.so
rm *.o
export LB_LIBRARY_PATH=.:$LB_LIBRARY_PATH
