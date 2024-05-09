#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * linear serach algorithm. Every compared value is printed on stdout
 *
 * @array: Pointer to the first elemet of the array to serach
 * @size: The number of elements in @array
 * @value: Value to search for
 *
 * Return: The first index where @value is located
 */
int linear_search(int *array, size_t size, int value)
{
    int i;
    int len = size;

    for (i = 0; i < len; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, *(array + i));
        if (*(array + i) == value)
            break;
    }
    return (i);
}
