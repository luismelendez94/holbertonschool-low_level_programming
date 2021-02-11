#include <ctype.h>

/**
 * _isupper - Verify if it is upper
 * @c: The character to verify
 *
 * Return: cero if not uppercase
 * If uppercase, returns one
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
