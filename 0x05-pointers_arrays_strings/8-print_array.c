#include "holberton.h"

/**
 * print_array - Print an array n times
 * @a: Pointer to the array
 * @n: number of items to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
