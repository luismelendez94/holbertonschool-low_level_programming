#include <stdio.h>

/**
 * main - Print Numbers from 0 to 9
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
