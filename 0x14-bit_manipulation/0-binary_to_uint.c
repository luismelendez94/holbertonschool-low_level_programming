#include "holberton.h"

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: Pointer to string binary number
 *
 * Return: Unsigned number or cero if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, binary = 1;
	int len = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len++;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			number += binary;
		binary *= 2;
	}

	return (number);
}
