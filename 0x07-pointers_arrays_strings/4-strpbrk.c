#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be verify
 * @accept: String to match bytes
 *
 * Return: String searched
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
