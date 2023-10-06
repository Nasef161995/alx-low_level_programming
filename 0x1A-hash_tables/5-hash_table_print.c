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

for (i = 0; i < ht->size; i++)
{  
current = ht->array[i];
if (current == NULL)
continue;
while (current != NULL)
{
printf("'%s' : '%s'", current->key, current->value);
current = current->next;
}

printf(" , ");
}

}
