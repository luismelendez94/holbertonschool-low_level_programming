#include <stdio.h>

/**
 * main - Print Hexadecimal Numbers
 *
 * Return: zero
 */
int main(void)
{
	char c;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
