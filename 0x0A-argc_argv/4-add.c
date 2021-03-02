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
	int i, add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(argv[i])))
			{
				printf("ERROR\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
	}

	printf("%d\n", add);

	return (0);
}
