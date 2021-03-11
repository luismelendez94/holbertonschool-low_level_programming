#include "variadic_functions.h"

/**
 * sum_them_all - Sum all function parameters
 * @n: Number of elements
 *
 * Return: 0 if no elements are passed else, the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list sum_list;

	if (n == 0)
		return (0);

	va_start(sum_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_list, int);

	va_end(sum_list);
	return (sum);
}
