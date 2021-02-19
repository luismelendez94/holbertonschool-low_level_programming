#include "holberton.h"

/**
 * rot13 - Encode String into rot13
 * @s: String to change
 *
 * Return: String changed
 */
char *rot13(char *s)
{
	int i, j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot1[j])
				s[i] = rot2[j];
		}
	}

	return (s);
}
