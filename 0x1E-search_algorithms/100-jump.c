#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: Pointer to first element in the array to search in
 * @size: The number of elements in @array
 * @value: The value to search for
 *
 * Return: The first index where @value is located
 * or -1 If @value is not present/@array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int block;
	int len = size;
	int i, block_last, start;

	block = (int) sqrt((double)len);
	block_last = 0;
	start = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < len; i += block)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (array[i] >= value)
			break;
	}

	block_last = i;
	start = i - block;
	if (start < 0)
		start = 0;

	printf("Value found between indexes [%d] and [%d]\n", start, block_last);

	for (i = start; i <= block_last && i < len; ++i)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (value == *(array + i))
			return (i);
	}
	return (-1);
}
