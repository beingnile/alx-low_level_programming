#include <stdio.h>

/**
 * main - Prints possible different combinations of three digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, m, p;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				if (n < m && m < p)
				{
					putchar(n);
					putchar(m);
					putchar(p);

					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
