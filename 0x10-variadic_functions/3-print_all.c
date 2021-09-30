#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @a: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_int - Prints an int.
 * @a: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list a);
{
	printf("%d", va_arg(a, int));
}

/**
 * print_float - Prints a float.
 * @a: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 *
 * @format: A string of characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *copy;
	formatter formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	char *sep;

	sep = "";
	i = j = 0;
	copy = format;
	va_start(list, format);
	while (copy && copy[j] != '\0')
	{
		i = 0;
		while (formats[i].flag)
		{
			if (formats[i].flag[0] == copy[j])
			{
				printf("%s", sep);
				(formats[i].f)(list);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
