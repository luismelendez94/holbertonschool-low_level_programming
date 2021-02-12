#include "holberton.h"

/**
 * more_numbers - Print Numbers from 0 to 14, 10 times
 *
 */
void more_numbers(void)
{
	int i, veces = 1;

	while (veces <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		veces++;
	}
}
