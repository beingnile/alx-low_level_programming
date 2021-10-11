#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct lintint_s *next;
}

size_t print_listint(const listint_t *h);

#endif
