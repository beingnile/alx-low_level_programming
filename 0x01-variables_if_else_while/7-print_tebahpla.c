#include <stdio.h>

/**
 * main - Executed first by program. Print alphabets in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
