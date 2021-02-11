#include "holberton.h"

/**
 * print_line - Print Line
 * @n: The character to specify how long
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
