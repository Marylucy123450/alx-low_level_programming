#!/bin/bash

# Compile and create a dynamic library from all .c
# files in the current directory
gcc -shared -o liball.so -fPIC *.c
