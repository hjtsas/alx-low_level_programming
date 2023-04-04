#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: linked list
 * return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
