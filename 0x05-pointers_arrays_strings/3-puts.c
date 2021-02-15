#include "holberton.h"

/**
 * _puts - Prints a string
 * @str: Pointer for a string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
