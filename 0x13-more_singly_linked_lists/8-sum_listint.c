#include "lists.h"

/**
 * sum_listint - sum all data of a linkedlist
 * @head: first node
 * Return: list.empty ?? nodeSum : 0
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
