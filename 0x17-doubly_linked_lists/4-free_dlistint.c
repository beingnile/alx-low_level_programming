#include "lists.h"

/**
 * free_slistint - Frees a dlistint_t list
 *
 * @head: Head of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
