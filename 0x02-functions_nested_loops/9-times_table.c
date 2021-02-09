#include <stdlib.h>
#include "holberton.h"
/**
 * add - Adds two integers
 * @i: First number
 * @j: Second number
 *
 * Return: the answer
 */
void times_table(void)
{
	int i;
	int j;
	int r;
	int r1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			r1 = ((r / 10) + '0');

			if (r1 == '0')
			{
				_putchar(' ');
			}
			else
			{
				_putchar(r1);
			}
			_putchar((r % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
