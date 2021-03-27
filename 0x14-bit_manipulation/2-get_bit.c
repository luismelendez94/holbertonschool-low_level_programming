#include "holberton.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: Number to be verify
 * @index: The index of the bit
 *
 * Return: The value of the bit at index, -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);
}
