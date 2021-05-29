#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table
 * @ht: Pointer to the hash table
 *
 * Return: Nothing, just print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *currentNode;
	size_t i = 0;
	char *comaSpace = "";

	if (ht == NULL || (ht->array) == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		currentNode = ht->array[i];
		while (currentNode != NULL)
		{
			printf("%s'%s': '%s'", comaSpace, currentNode->key, currentNode->value);
			comaSpace = ", ";
			currentNode = currentNode->next;
		}
	}
	printf("}\n");
}
