#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to a hash table
 *
 * Return: Nothing, just deletes
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *currentNode;
	hash_node_t *tempNode;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		tempNode = ht->array[i];
		while (tempNode)
		{
			currentNode = tempNode->next;
			free(tempNode->key);
			free(tempNode->value);
			free(tempNode);
			tempNode = currentNode;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
