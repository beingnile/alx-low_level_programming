#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for.
 *
 * Return: Index where value is located, -1 if @array is NULL or
 * if @value not in @array
 */
int binary_search(int *array, size_t size, int value)
{
	int start;
	int end;
	int midpoint;

	start = 0;
	end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		if (start == value)
			return (start);
		else if (end == value)
			return (end);
		print_array(array, start, end);
		midpoint = ((start + end) / 2);
		if (array[midpoint] == value)
			return (midpoint);
		else if (array[midpoint] < value)
			start = midpoint + 1;
		else
			end = midpoint - 1;
	}

	return (-1);
}

/**
 * print_array - Prints array being searched for.
 *
 * @array: Pointer to array to print
 * @start: Starting index
 * @end: Ending index
 */
void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start <= end; ++start)
	{
		if (start == end)
		{
			printf("%d", array[end]);
			break;
		}
		printf("%d, ", array[start]);
	}
	printf("\n");
}
