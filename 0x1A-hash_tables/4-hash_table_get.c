#include "hash_tables.h"
/**
 * hash_table_get - ...
 * @ht: ...
 * @key: ...
 * Return: ...
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *current;
unsigned long int index;

if (ht == NULL || key == NULL)
return (NULL);
index = key_index((unsigned char *)key, ht->size);
current = ht->array[index];

if (current == NULL)
return (NULL);

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}
current = current->next;
}
return (NULL);
}
