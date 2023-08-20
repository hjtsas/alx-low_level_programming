#include "main.h"

/**
 * print_dlistint - prints all the elements of
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *i = h;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}
