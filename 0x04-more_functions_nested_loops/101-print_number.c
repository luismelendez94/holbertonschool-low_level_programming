#include "holberton.h"

/**
 * print_number - Print integer
 * @n: Number to be printed
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if ((n >= 0) && (n <= 9))
	{
		_putchar(n % 10 + '0');
	}
	else if (n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 10000)
	{
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
