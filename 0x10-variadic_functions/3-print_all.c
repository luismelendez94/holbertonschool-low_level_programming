#include "variadic_functions.h"

/**
 * print_all - Print anything
 * @format: List of types of arguments
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list print_list;
	char *str;

	va_start(print_list, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			str = va_arg(print_list, char*);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if ((i != n - 1) && (separator != NULL))
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(print_list);
}
