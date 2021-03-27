#include "holberton.h"

/**
 * set_bit - Get the value of a bit at a given index
 * @n: Pointer to a number to be verify
 * @index: The index of the bit
 *
 * Return: The value of the bit at index, -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
