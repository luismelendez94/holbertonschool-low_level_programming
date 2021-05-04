#include "holberton.h"

/**
 * _strlen - Length of a string
 * @s: Pointer for a string
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
