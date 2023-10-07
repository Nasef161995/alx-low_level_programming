#include "hash_tables.h"
/**
 * hash_table_delete - ...
 * @ht: ...
 * Return: ...
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        if (current == NULL)
            continue;
        while (current != NULL)
        {
            free(current->key);
            free(current->value);
            free(current);
            current = current->next;
        }
    }
    free(ht);
}
