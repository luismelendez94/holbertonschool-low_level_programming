#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: String to be printed between the strings
 * @n: Number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_list;
	char *str;

	va_start(print_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(print_list, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");

	va_end(print_list);
}
