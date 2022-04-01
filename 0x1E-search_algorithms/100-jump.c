#include "search_algos.h"

/**
 * min - Compares two values and returns the minimum of the two
 *
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum value
 */
size_t min(size_t a, size_t b)
{
	return ((a > b) ? b : a);
}

/**
 * jump_search - Searches for a value in a sorted array of
 *		 integers using the Jump search algorithm.
 *
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where value was found.
 *	   -1 if @value or if array == NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = sqrt(size);


	while (array[(min(b, size) - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b;
		b = b + sqrt(size);
		if (a >= size)
			return (-1);
	}

	while (array[a] < value)
	{
		++a;
		if (a == min(b, size))
			return (-1);
	}
	if (array[a] == value)
		return (a);
	else
		return (-1);
}
