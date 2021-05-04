#include "holberton.h"

/**
 * *_strcmp - Compare 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Integer or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, valor;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			valor = s1[i] - s2[i];
			return (valor);
		}
	}

	return (0);
}
