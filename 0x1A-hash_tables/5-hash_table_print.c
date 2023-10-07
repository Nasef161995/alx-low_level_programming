#include "hash_tables.h"
/**
 * hash_table_print - ...
 * @ht: ...
 * Return: ...
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current;
unsigned long int i;
unsigned long int count;

if (ht == NULL)
return;
for (i = ht->size; i != 0; i--)
{
if (ht->array[i])
{
count = i;
break;
}
}
printf("{");
for (i = 0; i < ht->size; i++)
{

current = ht->array[i];

while (current)
{
if (current->next == NULL && (i == count))
{
printf("'%s': '%s'", current->key, current->value);
}
else
{
printf("'%s': '%s', ", current->key, current->value);
}
current = current->next;
}
}
printf("}\n");
}
