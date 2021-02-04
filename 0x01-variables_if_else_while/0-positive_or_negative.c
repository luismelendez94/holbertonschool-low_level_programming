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
		printf("%s \n", "is positive");
	} else if (n > 0)
	{
		printf("%s \n", "is negative");
	} else
	{
		printf("%s \n", "is zero");
	}
	return (0);
}
