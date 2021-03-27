#include "holberton.h"

/**
 * clear_bit - Clear the value of a bit at a given index
 * @n: Pointer to a number to be verify
 * @index: The index of the bit
 *
 * Return: 1 if success, -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);

	return (1);
}
