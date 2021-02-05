#include <stdio.h>

/**
 * main - Print Combination of Numbers from 0 to 9
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
			putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
