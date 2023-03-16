#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: The pointer to the head of a dlistint_t list
 *
 * Return: The number of elements in a dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
