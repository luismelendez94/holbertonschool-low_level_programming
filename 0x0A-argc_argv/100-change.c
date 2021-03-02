#include "holberton.h"

/**
 * main - Prints the minimum number of coins
 * @argc: Argument count
 * @argv: Contains the number of arguments
 *
 * Return: one if its an error else cero
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		while (cents != 0)
		{
			if (cents >= 25)
			{
				coins++;
				cents -= 25;
			}
			else if (cents >= 10)
			{
				coins++;
				cents -= 10;
			}
			else if (cents >= 5)
			{
				coins++;
				cents -= 5;
			}
			else if (cents >= 2)
			{
				coins++;
				cents -= 2;
			}
			else
			{
				coins++;
				cents -= 1;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
