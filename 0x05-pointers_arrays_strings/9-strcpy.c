#include "holberton.h"

/**
 * *_strcpy - Copy string pointed to a buffer pointer
 * @dest: Destination pointer
 * @src: Copy pointer
 *
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	size_t i, len = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	len = i + 1;
	for ( ; i < len; i++)
		dest[i] = '\0';

	return (dest);
}
