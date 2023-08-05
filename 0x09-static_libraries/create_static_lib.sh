#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into a corresponding .o object file
for file in $c_files; do
    gcc -c $file
done

# Create the static library 'liball.a' from the generated .o files
ar rcs liball.a *.o

# Clean up by removing the temporary .o files
rm *.o

echo "Static library 'liball.a' created successfully!"
