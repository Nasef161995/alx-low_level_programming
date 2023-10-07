#include "hash_tables.h"
/**
 * hash_table_delete - ...
 * @ht: ...
 * Return: ...
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current, *temp;
unsigned long int i;
if (!ht || ht->size == 0)
return;

for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
temp = current->next;
free(current->key);
free(current->value);
free(current);
current = temp;
}
}
free(ht->array);
ht->array = NULL;
free(ht);
}
