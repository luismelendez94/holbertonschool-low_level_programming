#include "holberton.h"

int GetLen(char *s);
int VerifyPalin(char *s, int index, int length2);

/**
 * is_palindrome - Verify if string is palindrome
 * @s: String to verify
 *
 * Return: 1 if palindrome,
 * 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = GetLen(s);

	return (VerifyPalin(s, 0, len));
}

/**
 * GetLen - Get the length of a string
 * @s: String to verify length
 *
 * Return: the length of the string
 */
int GetLen(char *s)
{
	int length = 0;

	if (s[0] == '\0')
		return (0);

	length++;
	length += GetLen(s + 1);
	return (length);
}

/**
 * VerifyPalin - Verify if string is palindrome
 * @s: String to verify
 * @index: Location of the character in the string
 * @length2: Length of the string
 *
 * Return: 1 if palindrome
 * 0 if not
 */
int VerifyPalin(char *s, int index, int length2)
{
	int is_p = 0;

	if (index > length2 / 2)
	{
		is_p = 1;
		return (is_p);
	}
	if (s[index] != s[(length2 - 1) - index])
	{
		is_p = 0;
		return (is_p);
	}

	is_p = VerifyPalin(s, index + 1, length2);
	return (is_p);
}
