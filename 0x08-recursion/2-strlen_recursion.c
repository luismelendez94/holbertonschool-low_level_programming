#include "holberton.h"

/**
 * _strlen_recursion - Gets the length of a String
 * @s: String to be verify
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (s[0] != '\0')
	{
		len += _strlen_recursion(s + 1);
		return (len);
	}
	else
	{
		return (len - 1);
	}

}
