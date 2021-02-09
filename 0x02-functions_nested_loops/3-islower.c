#include <ctype.h>

/**
 * _islower - Verify if it is lower
 * @c: The character to verify
 *
 * Return: cero if not lowercase
 * If lowercase, returns one
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
