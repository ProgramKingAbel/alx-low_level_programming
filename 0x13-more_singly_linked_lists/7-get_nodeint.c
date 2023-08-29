#include "lists.h"

/**
 * get_nodeint_at_index - gets node at an index
 * @head: first node
 * @index: id of node start (0)
 * Return: node exist ? node : null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
