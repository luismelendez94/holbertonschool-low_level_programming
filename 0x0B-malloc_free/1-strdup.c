#include "holberton.h"

/**
 * _strdup - Copy a string
 * @str: String to be copied
 *
 * Return: A pointer to the copied string
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy = malloc(len * sizeof(char) + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	return (copy);
}
