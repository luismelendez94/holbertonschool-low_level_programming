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
	int dest_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
