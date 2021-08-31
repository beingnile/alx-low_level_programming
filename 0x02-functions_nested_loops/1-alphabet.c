#include "holberton.h"

/**
 * print_alphabet - Prints out the alphabet in lowercase.
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
