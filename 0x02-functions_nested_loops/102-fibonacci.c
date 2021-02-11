#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: cero
 */
int main(void)
{
	int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 2; i <= 50; ++i)
	{
		printf("%u", t1);
		if (i != 50)
			printf(", ");
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");

	return (0);
}
