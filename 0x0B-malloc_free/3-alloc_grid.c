#include "holberton.h"

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: The horizontal grid
 * @height: The vertical grid
 *
 * Return: A pointer to the allocated grid,
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **str;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = malloc(height * sizeof(int *));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * sizeof(int));

		if (str[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(str[i]);
			free(str);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			str[i][j] = 0;

	return (str);
}
