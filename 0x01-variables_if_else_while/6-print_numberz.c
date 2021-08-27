#include <stdio.h>

/**
 * main - Executed first in program. Prints single digit base 10 numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
