#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		   using the Binary search algorithm.
 *
 * @array: Pointer to first element in array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located.
 *	   -1 if @value not in array or if array == NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int midpoint;

	while (left <= right)
	{
		print_array(array, left, right + 1);
		midpoint = (left + right) / 2;
		if (array[midpoint] < value)
			left = midpoint + 1;
		else if (array[midpoint] > value)
			right = midpoint - 1;
		else
			return (midpoint);
	}

	return (-1);
}

/**
 * print_array - Prints the array
 *
 * @array: The array to be printed
 * @left: Where the array/subarray starts
 * @right: Where the array/subarray ends
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t index;

	printf("Searching in array: ");
	for (index = left; index < right; ++index)
	{
		printf("%d", array[index]);
		if (index == (right - 1))
			break;
		printf(", ");
	}
	printf("\n");
}
