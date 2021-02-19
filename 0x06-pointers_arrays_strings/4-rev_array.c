#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int back, forw, valor;

	back = n - 1;

	for (forw = 0; forw <= back; forw++)
	{
		valor = a[forw];
		a[forw] = a[back];
		a[back] = valor;
		back--;
	}
}
