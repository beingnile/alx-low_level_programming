#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t
 *
 * @h: Pointer to the head of a dlistint_t list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    unsigned int nodes = 0;
    const dlistint_t *current = h;

    while (current != NULL)
    {
        nodes++;
        printf("%d\n", current->n);
        current = current->next;
    }

    return (nodes);
}
