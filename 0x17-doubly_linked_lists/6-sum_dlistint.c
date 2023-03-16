#include "lists.h"

/**
 * sum_dlistint - Sums up all of the data in a dlistint_t list
 *
 * @head: Head of a dlistint_t list
 *
 * Return: The sum of the elements of a dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
