#include "hash_tables.h"
/**
 * hash_table_set - ...
 * @ht: ...
 * @key: ...
 *@value: ...
* Return: ....
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
hash_node_t *current;
unsigned long int index;
if (ht == NULL)
return (0);
new = malloc(sizeof(hash_node_t));
new->key = malloc(strlen(key) + 1);
new->value = malloc(strlen(value) + 1);
if (new == NULL || new->key == NULL || new->value == NULL)
return (0);
strcpy(new->key, key);
strcpy(new->value, value);
new->next = NULL;
index = key_index((unsigned char *)key, ht->size);
current = ht->array[index];
if (current == NULL)
{
ht->array[index] = new;
return (1);
}
else
{
if (strcmp(current->key, key) == 0)
{
strcpy(ht->array[index]->value, value);
free(new->key);
free(new->value);
free(new);
return (1);
}
else
{
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
}
return (0);
}
