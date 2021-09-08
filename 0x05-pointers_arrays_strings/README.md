# Pointers, Arrays and Strings.

This Project explores Pointers, Arrays and Strings and how to use them.
Each file is written in standard C and compiled using the gcc compiler.

## What is a pointer?

A pointer is a special variable that stores the memory address of another variable.
A pointer is declared like any other variable but with an asterisk before the variable name.For instance, `int *p;` is an integer pointer.
Below is a sample code to show how pointers work.

```c

#include <stdio.h>

/**
  * main - Shows how pointers work.
  *
  * Return: Always 0.
  */

 int main(void)
 {
         int var = 9;
         int *p = &var;
         /*Here we have the declaration of a pointer p*/
         /*We have then initialised it to hold the address of var*/

         printf("The value of var: %d\n", var);
         printf("The memory address var is stored at: %p\n", &var);
         printf("The value of pointer p: %p\n", p);
         return (0);
 }

```

Output:

```c
The value of var: 9
The memory address var is stored at: 0x7ffee010babc
The value of pointer p: 0x7ffee010babc

```
> The code is compiled using `gcc` without any flags. 
