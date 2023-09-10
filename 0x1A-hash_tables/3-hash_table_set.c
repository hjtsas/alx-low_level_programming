#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key, must be duplicated, can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node, *tmp;

    /* check for valid input */
    if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
        return (0);

    /* get the index of the key in the array */
    index = key_index((const unsigned char *)key, ht->size);

    /* check if the key already exists in the list */
    tmp = ht->array[index];
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            /* update the value and return */
            free(tmp->value);
            tmp->value = strdup(value);
            if (tmp->value == NULL)
                return (0);
            return (1);
        }
        tmp = tmp->next;
    }

    /* create a new node */
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    /* copy the key and value */
    node->key = strdup(key);
    node->value = strdup(value);
    if (node->key == NULL || node->value == NULL)
    {
        free(node->key);
        free(node->value);
        free(node);
        return (0);
    }

    /* insert the node at the beginning of the list */
    node->next = ht->array[index];
    ht->array[index] = node;

    return (1);
}
