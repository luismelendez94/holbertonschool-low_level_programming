#include <stdlib.h>
#include "holberton.h"

void print_times_table(int n)
{
	int i;
	int j;
	int r;
	int r1;

	if (n < 0 && n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			r1 = ((r / 10) + '0');

			if (r1 != '0')
			{
				_putchar(r1);
			}
			else if (j > 0)
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
