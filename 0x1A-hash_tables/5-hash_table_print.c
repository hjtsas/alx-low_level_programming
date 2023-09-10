#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *tmp;
    int flag = 0;

    /* check for valid input */
    if (ht == NULL)
        return;

    /* print the opening brace */
    printf("{");

    /* loop through the array of the hash table */
    for (i = 0; i < ht->size; i++)
    {
        /* traverse the list at each index */
        tmp = ht->array[i];
        while (tmp != NULL)
        {
            /* print a comma and a space if needed */
            if (flag == 1)
                printf(", ");

            /* print the key and value pair */
            printf("'%s': '%s'", tmp->key, tmp->value);

            /* set the flag to indicate that a pair has been printed */
            flag = 1;

            /* move to the next node */
            tmp = tmp->next;
        }
    }

    /* print the closing brace and a new line */
    printf("}\n");
}
