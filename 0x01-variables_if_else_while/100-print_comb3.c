#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, m;

	n = m = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);

			if ((n != '9') || (n == '9' && m != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
