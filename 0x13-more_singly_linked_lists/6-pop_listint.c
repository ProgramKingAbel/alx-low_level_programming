#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list and return its data
 * @head: ptr to the first node
 * Return: value of the int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
