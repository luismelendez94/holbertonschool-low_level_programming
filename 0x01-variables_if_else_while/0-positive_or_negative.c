#include <stdlib.h>
#include <time.h>
/**
 * main - Knowing if number is negative, positive or zero
 * @n: Random Number
 *
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive\n");
	} else if
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	return (0);
}
