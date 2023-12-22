#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table
 *
 * @size: the size of the hash table
 *
 * Return: the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
