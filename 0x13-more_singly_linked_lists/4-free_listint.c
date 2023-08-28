#include "lists.h"

/**
 * free_listint - frees allocated memory to a linked list
 * @head: first node on the linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *local;

	while (head)
	{
		local = head->next;
		free(head);
		head = local;
	}
}
