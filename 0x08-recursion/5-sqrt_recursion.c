#include "holberton.h"

int GetSqrt(int n, int val);

/**
 * _sqrt_recursion - Get the natural square root
 * @n: The number to be verify
 *
 * Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	int val = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (GetSqrt(n, val));
}

/**
 * GetSqrt - Get the valor of the square root
 * @n: The number to be verify
 * @val: The result of the square root
 *
 * Return: -1 if n does not have a natural square root
 * val if n have a natural square root
 */
int GetSqrt(int n, int val)
{
	if ((val * val) == n)
		return (val);
	if (val == n / 2)
		return (-1);
	else
		return (GetSqrt(n, val + 1));
}
