#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointing the memory area
 * @b: Constant byte
 * @n: Number of bytes of the memory
 *
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
