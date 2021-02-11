#include <ctype.h>

/**
 * _isdigit - Verify if the character is digit
 * @c: The character to verify
 *
 * Return: cero if not digit
 * If digit, returns one
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
