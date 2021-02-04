#include <stdio.h>

/**
 * main - Print Letters
 *
 * Return: zero
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
