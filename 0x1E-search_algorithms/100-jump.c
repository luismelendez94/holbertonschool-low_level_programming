#include "search_algos.h"

/**
  * jump_search - search value in sorted int array using Jump search
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: index where value is located or -1 if NULL or not found
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
	{
	    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
