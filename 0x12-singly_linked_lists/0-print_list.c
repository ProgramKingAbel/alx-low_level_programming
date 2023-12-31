#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all list_t el && entry ppoint
 * @h: pointer to list
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
