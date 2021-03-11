#include "function_pointers.h"

/**
 * print_name - Send name to a function
 * @name: String of the name
 * @f: Funtion to send the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
