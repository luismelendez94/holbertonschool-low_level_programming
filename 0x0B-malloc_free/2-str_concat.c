#include "holberton.h"

/**
 * str_concat - Adds 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to the add string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, sum = 0, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	sum = i + j;

	str = malloc(sum * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}
