#include <ctype.h>

/**
 * _isalpha - Verify if it is lower
 * @c: The character to verify
 *
 * Return: cero if not lowercase
 * If lowercase, returns one
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
