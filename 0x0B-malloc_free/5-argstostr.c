#include "holberton.h"

/**
 * argstostr - Concatenates all arguments
 * @ac: Number of arguments
 * @av: List of arguments
 *
 * Return: Pointer to a string with the arguments
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	str = malloc(length * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
