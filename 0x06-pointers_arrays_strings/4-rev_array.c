#include "main.h"

/**
 * reverse_array - Reverses content of an array integer.
 *
 * @a: Integer array pointer.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp[1000];
	int j;
	int k = l - 1;

	for (i = 0; i < l; i++)
	{
		tmp[i] = a[i];
	}
	while (j < l)
	{
		*(a + j) = *(tmp + k);
		j++;
		k--;
	}
}
