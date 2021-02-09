#include <ctype.h>
#include "holberton.h"

/**
 * print_sign - Verify if the number is positive, negative or cero
 * @n: Number to be check
 *
 * Return: one if number grater than cero
 * If it is cero, returns 0
 * If its less, returns -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
