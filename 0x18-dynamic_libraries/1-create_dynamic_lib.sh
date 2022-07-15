#!/bin/bash
gcc -c -fpic *.c
gcc *.c -fPIC -shared -o liball.so
