#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be verify
 * @c: Character to be check on string
 *
 * Return: Pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	char *CaracToFind = NULL;

	if (s != NULL)
		while (*s++)
			if (*s == (char)c)
			{
				CaracToFind = s;
				break;
			}

	return (CaracToFind);
}
