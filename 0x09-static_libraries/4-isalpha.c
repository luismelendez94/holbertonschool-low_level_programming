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
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
