#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Print numbers to 98
 * @n: number to be used to print the rest
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
