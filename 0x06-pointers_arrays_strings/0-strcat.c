#include "holberton.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Another string
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
