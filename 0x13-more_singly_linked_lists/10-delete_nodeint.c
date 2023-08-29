#include "lists.h"

/**
 * delete_nodeint_at_index - del node at idx
 * @head: pointer to head node
 * @index: index from where to del node
 * Return: success ? 1 : -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = NULL;
	listint_t *temp = *head;
	unsigned int a = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!(temp->next) || !temp)
			return (-1);
		temp = temp->next;
		a++;
	}

	currentNode = temp->next;
	temp->next = currentNode->next;
	free(currentNode);
	return (1);
}
