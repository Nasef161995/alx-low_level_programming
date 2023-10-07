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
if (ht == NULL)
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
if (current)
ht->array[i] = NULL;
}
}
free(ht->array);
ht->array = NULL;
free(ht);
ht = NULL;
}
