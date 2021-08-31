#include <stdio.h>
/**
 * main - Gets the sum of even Fibonnaci numbers up to 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i;
	long int j = 1;
	long int k = 1;
	long int sum = 2;
	long int total;

	for (i = 1; i < 4000000 ; i++)
	{
		sum = j + k;
		if (sum % 2 == 0)
			total += sum;
		j = k;
		k = sum;
	}

	printf("%ld\n", total);

	return (0);
}
