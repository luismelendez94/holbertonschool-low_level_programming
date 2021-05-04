#include "holberton.h"

/**
 * *_strncpy - Copy string
 * @dest: Destination string
 * @src: String to be copy
 * @n: Number of bytes
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		len++;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
