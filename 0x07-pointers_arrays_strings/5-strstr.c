#include "holberton.h"

/**
 * _strstr - Searches a string for any of a set of bytes
 * @haystack: String to be verify
 * @needle: String to match bytes
 *
 * Return: String searched
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] == haystack[i + j])
					if (needle[j + 1] == '\0')
						return (haystack + i);
			}
		}
	}
	return (NULL);
}
