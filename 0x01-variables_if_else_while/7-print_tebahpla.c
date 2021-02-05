#include <stdio.h>

/**
 * main - Print Alphabet in reverse
 *
 * Return: zero
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
