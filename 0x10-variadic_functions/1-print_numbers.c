#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_list;

	if (n == 0)
		return;

	va_start(print_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_list, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(print_list);
}
