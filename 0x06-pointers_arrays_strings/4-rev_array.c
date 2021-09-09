#include "main.h"

/**
 * reverse_array - Reverses content of an array integer.
 *
 * @a: Integer array pointer.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, j, k = n - 1, tmp[1000];

	for (i = n; i < n; i++)
	{
		tmp[i] = a[i];
	}
	while (j < n)
	{
		*(a + j) = *(tmp + k);
		j++;
		k--;
	}
}
