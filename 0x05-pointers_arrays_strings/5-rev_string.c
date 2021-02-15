#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Prints a string in reverse
 * @s: Pointer for a string
 *
 */
void rev_string(char *s)
{
	int i, len = 0, back, forw;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	back = len - 1;

	for (forw = 0; forw <= back; forw++)
	{
		c = s[forw];
		s[forw] = s[back];
		s[back] = c;
		back--;
	}
}
