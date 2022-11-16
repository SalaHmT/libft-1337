# Libft

# Libft Introduction

Libft (Library of Functions)

In this project, you will be creating a library of functions, the file structure for this project is the following:

### .c Files 
Where all of your functions will be written in. 

### .h (Header)
Your header file is useful for 2 things:
- First, instead of doing for example `#include <unistd.h>` in all of your .c files, you just write it once in your header and all of your .c files will read it from your header file. 
- Secondly, let's say one of your .c files uses another function from another .c file, well instead of writting that function above, just write `#include "libft.h"` and it will find it in your header file. 

Make sure you add `#include "libft.h"` in all of your .c files.

### Makefile 
Makefile is where you will create a file to compile your projects. Remember how in the piscine, you created an **int main** and **gcc** to compile the projects, well with a Makefile, you don't have to do that anymore, you just type `make` once you have created your Makefile. 
