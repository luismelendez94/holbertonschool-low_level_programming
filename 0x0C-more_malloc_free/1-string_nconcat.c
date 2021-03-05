#include "holberton.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 *
 * Return: A pointer to a memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, count, len = 0, len2 = 0;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
		n = len2;

	count = n + len;
	pointer = malloc((count) * sizeof(char) + 1);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		pointer[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		pointer[i] = s2[j];
		i++;
	}

	return (pointer);
}
