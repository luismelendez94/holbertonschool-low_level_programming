#include "holberton.h"

/**
 * string_toupper - Change string to uppercase letters
 * @s: String to change
 *
 * Return: String changed
 */
char *string_toupper(char *s)
{
	int i;
	char low, upper;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			if (s[i] == low)
			{
				upper = low - 32;
				s[i] = upper;
			}
		}
	}

	return (s);
}
