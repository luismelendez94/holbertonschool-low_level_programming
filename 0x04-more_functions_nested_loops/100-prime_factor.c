#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Print prime numbers
 *
 * Return: cero
 */
int main(void)
{
	int n = 315;
	primeFactors(n);
	return 0;
}

void primeFactors(int n)
{
	int i;

	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}

	if (n > 2)
		printf ("%d ", n);
}
