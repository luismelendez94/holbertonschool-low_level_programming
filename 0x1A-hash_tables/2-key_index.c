#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: A string that can be used as the key
 * @size: Size of the array of the hash table
 *
 * Return: Index at wich the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (size < 1)
		return (0);

	index = hash_djb2(key) % size;
	return (index);
}
