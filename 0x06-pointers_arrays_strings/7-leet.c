#include "holberton.h"

/**
 * leet - Encode String into 1337
 * @s: String to change
 *
 * Return: String changed
 */
char *leet(char *s)
{
	int i, j;
	char leet1[] = "AEOTL";
	char leet2[] = "aeotl";
	char leet3[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == leet1[j] || s[i] == leet2[j])
				s[i] = leet3[j];
		}
	}

	return (s);
}
