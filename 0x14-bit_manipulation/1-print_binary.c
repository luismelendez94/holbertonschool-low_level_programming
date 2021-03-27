#include "holberton.h"

/**
 * print_binary - Print a decimal number in binary
 * @n: A decimal number
 *
 */
void print_binary(unsigned long int n)
{
	int i, k;

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}

/*
 * if (n > 1)
 *		print_binary(n >> 1);
 *
 *	_putchar('0' + (n & 1));
 */
}
