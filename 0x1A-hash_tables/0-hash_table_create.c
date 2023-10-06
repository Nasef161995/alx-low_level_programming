
#include "hash_tables.h"

/**
 * hash_table_create - function create hash table
 * @size: size of array
 * Return: hash rable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table;

table = malloc(sizeof(hash_node_t));
if (table == NULL)
return (NULL);
table->size = size;

table->array = malloc(table->size * sizeof(hash_node_t *));

if (!(table->array))
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = NULL;

return (table);
}
