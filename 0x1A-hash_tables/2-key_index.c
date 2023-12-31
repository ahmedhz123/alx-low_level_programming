#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - A function that gives the index of the key
 *
 * @key: the key of the hash table
 * @size: the size of the hash table
 *
 * Return: the index of the key in the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
