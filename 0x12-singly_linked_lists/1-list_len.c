#include <stdlib.h>
#include "lists.h"

/**
 * list_len - E point counts num of el in linked list
 * @h: el pointer
 * Return: total num
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h->next;
	}
	return (a);
}
