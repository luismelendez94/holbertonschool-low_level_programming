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
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
