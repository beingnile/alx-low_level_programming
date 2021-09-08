# Pointers, Arrays and Strings.

This Project explores Pointers, Arrays and Strings and how to use them.
Each file is written in standard C and compiled using the gcc compiler.

## What is a pointer?

A pointer is a special variable that stores the memory address of another variable.
A pointer is declared like any other variable but with an asterisk before the variable name.For instance, `int *p;` is an integer pointer.
Below is a sample code to show how pointers work.

```c

  1 #include <stdio.h>
  2
  3 /**
  4  * main - Shows how pointers work.
  5  *
  6  * Return: Always 0.
  7  */
  8
  9 int main(void)
 10 {
 11         int var = 9;
 12         int *p = &var;
 13         /*Here we have the declaration of a pointer p*/
 14         /*We have then initialised it to hold the address of var*/
 15
 16         printf("The value of var: %d\n", var);
 17         printf("The memory address var is stored at: %p\n", &var);
 18         printf("The value of pointer p: %p\n", p);
 19         return (0);
 20 }

```

Output:

```c
The value of var: 9
The memory address var is stored at: 0x7ffee010babc
The value of pointer p: 0x7ffee010babc

```
> The code is compiled using `gcc` without any flags. 
