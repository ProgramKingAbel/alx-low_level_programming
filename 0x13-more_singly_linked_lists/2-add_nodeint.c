#include "lists.h"

/**
 * add_nodeint - add node to beginning of linked list
 * @head: address of first node
 * @n: new node data
 * Return: pointer to the new node : NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
