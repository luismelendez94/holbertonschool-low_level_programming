#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - Find the last digit of a number
 * @n: Number to be check
 *
 * Return: the answer
 */
int print_last_digit(int n)
{
	int l;

	n = n % 10;

	if (n < 0)
		n = (n * -1);

	l = n + '0';

	_putchar(l);
	return (n);
}
