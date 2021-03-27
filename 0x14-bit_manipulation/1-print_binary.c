#include "holberton.h"

/**
 * print_binary - Print a decimal number in binary
 * @n: A decimal number
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
