#include "holberton.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Another string
 * @n: Size of bytes
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
