#include "lists.h"

/**
 * print_listint - Prints all el of a linkedlist
 * @h: linked list
 *
 * Return: total nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
