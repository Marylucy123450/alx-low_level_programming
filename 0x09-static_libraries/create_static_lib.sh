#!/bin/bash

# Compile each .c file into .o file
gcc -c *.c

# Create the static library liball.a from the .o files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up intermediate .o files
rm *.o
