#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long i = 0, j = 1, sum;
	unsigned long m, n, p, q;
	unsigned long k, l;

	for (count = 0; count < 92; count++)
	{
		sum = i + j;
		printf("%lu, ", sum);

		i = j;
		j = sum;
	}

	m = i / 10000000000;
	n = j / 10000000000;
	p = i % 10000000000;
	q = j % 10000000000;

	for (count = 93; count < 99; count++)
	{
		k = m + p;
		l = n + q;
		if (n + q > 9999999999)
		{
			k += 1;
			l %= 10000000000;
		}

		printf("%lu%lu", k, l);
		if (count != 98)
			printf(", ");

		m = p;
		n = q;
		p = k;
		q = l;
	}
	printf("\n");
	return (0);
}
