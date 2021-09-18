#include "search_algos.h"

/**
 * linear_search - Search for a value in a array of integers
 * @array: Pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: The first index where value is located, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
