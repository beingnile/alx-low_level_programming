# More Pointers, Arrays and strings.

In this project, pointers to pointers, multidimensional arrays and string libraries will be looked into.
What exactly are these?  
Let's have a look, shall we?

## Pointers to pointers.

For you to understand this, you have to look into the introductory part on pointers [here](https://github.com/beingnile/alx-low_level_programming/tree/main/0x05-pointers_arrays_strings#readme)
These are special variables that store the value of another pointer.  
Basically, a pointer that stores the memory address of another pointer.  
Another way to look at it:  
Suppose you have an integer variable n, `int n = 42;` with a value of 42 intialized to it, and a pointer p who's value is the address of n `int *p = &n;`.  
We can have another pointer `int **pp = &p;` storing the address of pointer p.  

```c

n == *p == **pp
&n == p == *pp
&p == pp

```
