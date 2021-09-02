# More functions and nested loops.

This project is a continuation of the project [0x02-functions_nested_loops] (https://github.com/beingnile/alx-low_level_programming/tree/main/0x02-functions_nested_loops).

Besides nested loops and functions, it explores how to create a custom header file and how to use it in your code.

# Recap of previous project.

## What are nested loops?

Nested loops are basically loops inside loops.
For Example, using while loops:

```shell

/* The first while loop nesting the second one */

while (condition)
{

/* The second loop */
	while (condition)
	{
		(statement);
		(increment);
	}

	(statement);
	(increment);

	return (0);
}

```

## What is a function and a function prototype?

A function is a collection of statements performing a specific task.  
An example is the `main()` function.  
A function declaration tells the compiler about a function name, return type and parameters.  
A function definition on the other hand provides the body of the functions.


### Defining a function.

```c

return_type function_name( parameters ) 
{
   body
}

```

Where:

* The `return_type` is the data type of the value a function returns.
* The `function_name` is the name of the function.
* The `parameters` is the list of arguments the function takes.
* The `body` is the collection of statements.

The function prototype specifies what is given to a function and what is expected from it.  
It's basically the `function_name` and the `parameters` together.

The project files are all written in C and compiled using gcc.

### Files used for testing code.

> These are the files used to test respective codes containing functions.  
> They are in the syntax `function code - file`.  
> Use `gcc -Wall -pedantic -Werror -Wextra -std=gnu89` to compile code.  
> Example:

```sh

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isupper.

```

* `0-isupper.c` - `0-main.c`
* `1-isdigit.c` - `1-main.c`
* `2-mul.c` - `2-main.c`
* `3-print_numbers.c` - `3-main.c`
