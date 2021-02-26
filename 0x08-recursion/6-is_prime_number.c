#include "holberton.h"

int VerifyPrime(int n, int valor);

/**
 * is_prime_number - Verify if number is prime
 * @n: The number to be verify
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int val = 2;

	if (n <= 1)
		return (0);
	if ((n == 2) || (n == 3))
		return (1);

	return (VerifyPrime(n, val));
}

/**
 * VerifyPrime - Verify if number is prime
 * @n: Number to be verify
 * @valor: Number of times to begin
 *
 * Return: 1 if prime, 0 if not
 */
int VerifyPrime(int n, int valor)
{
	if ((n % valor) == 0)
		return (0);
	if (valor == (n / 2))
		return (1);

	return (VerifyPrime(n, valor + 1));
}
