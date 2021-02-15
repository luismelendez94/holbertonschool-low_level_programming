#include "holberton.h"

/**
 * swap_int - Swap integers
 * @a: First number to be change
 * @b: Second number to be change
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
