#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 *
 * @separator: string, separator between numbers.
 * @n: Number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(str, int);
		printf("%d", num);

		if (separator == NULL)
			continue;

		printf("%s", separator);
	}
	printf("\n");
}
