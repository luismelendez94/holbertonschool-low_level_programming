#include "holberton.h"

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Contains the number of arguments
 *
 * Return: cero
 */
int main(int argc, char *argv[])
{
	int i, add = 0, j;
	int bools = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					bools = 0;
				}
			}
			add += atoi(argv[i]);
		}
	}

	if (bools == 1)
		printf("%d\n", add);
	if (bools == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
