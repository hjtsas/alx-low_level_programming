#include <stdlib.h>
#include "lists.h"

/**
 * *add_node - adds a new node
 * @head: double pointer
 * @str: new string
 * Return: new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int i = 0;

	while (str[i])
		i++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->i = i;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
