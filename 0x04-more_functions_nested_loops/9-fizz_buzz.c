#include "holberton.h"
#include <stdio.h>

/**
 * main - Print numbers from 1 to 100
 *
 * Return: cero
 */
int main(void)
{
	int val, MAX = 100;

	for (val = 1; val <= MAX; val++)
	{
		if ((val % 3 == 0) && (val % 5 == 0))
			printf("FizzBuzz ");
		else if (val % 3 == 0)
			printf("Fizz ");
		else if (val % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", val);
	}
	printf("\n");

	return (0);
}
