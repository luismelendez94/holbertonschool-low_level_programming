#include <stdio.h>
#include <unistd.h>

/**
 * main - Write error messages in a file
 *
 * Return: one
 */
int main(void)
{
	write(2, " and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	write(2, "\n", 1);

	return (1);
}
