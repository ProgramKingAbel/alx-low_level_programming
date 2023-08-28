#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: ptr to first node/head node
 * Return: null
 */

void free_listint2(listint_t **head)
{
	listint_t *local;

	if (head == NULL)
		return;

	while (*head)
	{
		local = (*head)->next;
		free(*head);
		*head = local;
	}

	*head = NULL;
}
