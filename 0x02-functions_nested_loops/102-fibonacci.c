#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: cero
 */
int main(void)
{
	int i, n, t1 = 0, t2 = 1, nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		printf("%d", t1);
		if (i != 50)
			printf(", ");
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");

	return 0;
}
