#include "holberton.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination pointer area
 * @src: Source pointer
 * @n: Number of bytes of the memory
 *
 * Return: Destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
