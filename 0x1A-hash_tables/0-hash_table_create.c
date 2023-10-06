#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - ....
 * @size: ...
 * Return: ....
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table;
table = (hash_table_t *)malloc(sizeof(hash_node_t));
if (table != NULL)
{
table->size = size;
table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
for (i = 0; i < table->size; i++)
table->array[i] = NULL;
return (table);
}
else
return (NULL);
}
