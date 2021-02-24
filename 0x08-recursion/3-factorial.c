#include "holberton.h"

/**
 * factorial - Factorial of a given Number
 * @n: Number given
 *
 * Return: Factorial number,
 * 1 if number is 0
 * and -1 if number is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
