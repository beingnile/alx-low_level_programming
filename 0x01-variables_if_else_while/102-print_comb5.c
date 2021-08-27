#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, m, p, q;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (p = 48; p <= 57; p++)
			{
				for (q = 48; q <= 57; q++)
				{
					if (((p + q) > (n + m) &&  p >= n) || n < p)
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(p);
						putchar(q);

					if (n + m + p + q == 227 && n == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
