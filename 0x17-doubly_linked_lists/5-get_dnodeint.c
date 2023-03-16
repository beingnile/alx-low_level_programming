#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t linked list
 *
 * @head: Head of the list
 * @index: Index of node to return
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (index == count)
			break;
		count++;
		current = current->next;
	}

	return (current);
}
