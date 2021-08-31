# C Functions and nested loops.

This project looks into nested loops and function prototype.

## What are nested loops?

Nested loops are basically loops inside loops.
For Example, using while loops:

```c

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

The project files are all written in C.
