#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - Find the last digit of a number
 * @n: Number to be check
 *
 * Return: the answer
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = ((n % 10) + '0');

	if (lastDigit < 0)
		lastDigit = (lastDigit * -1);

	_putchar(lastDigit);
	return (lastDigit);
}
