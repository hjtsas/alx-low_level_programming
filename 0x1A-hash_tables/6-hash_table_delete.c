#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *tmp, *next;

    /* check for valid input */
    if (ht == NULL)
        return;

    /* loop through the array of the hash table */
    for (i = 0; i < ht->size; i++)
    {
        /* traverse the list at each index */
        tmp = ht->array[i];
        while (tmp != NULL)
        {
            /* save the next node */
            next = tmp->next;

            /* free the key and value of the current node */
            free(tmp->key);
            free(tmp->value);

            /* free the current node */
            free(tmp);

            /* move to the next node */
            tmp = next;
        }
    }

    /* free the array of the hash table */
    free(ht->array);

    /* free the hash table structure */
    free(ht);
}

