#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);
int jump_search(int *array, size_t size, int value);
int interplation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
