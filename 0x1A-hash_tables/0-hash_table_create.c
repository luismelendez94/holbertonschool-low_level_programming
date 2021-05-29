#include "hash_tables.h"

/**
 * hash_table_create - Function to create a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table,
 * NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *retHashTable;
	unsigned int i;

	retHashTable = malloc(sizeof(hash_table_t));
	if (retHashTable == NULL)
		return (NULL);

	retHashTable->size = size;

	retHashTable->array = calloc(retHashTable->size, sizeof(hash_node_t *));
	if (retHashTable->array == NULL)
		return (NULL);
	for (i = 0; i < retHashTable->size; i++)
		retHashTable->array[i] = NULL;

	return (retHashTable);
}
