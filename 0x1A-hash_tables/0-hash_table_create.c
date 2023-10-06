#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_create - function creates hash table
 * @size: size of array
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc(size * sizeof(hash_node_t *));

if (table->array == NULL)
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = NULL;

return (table);
}
