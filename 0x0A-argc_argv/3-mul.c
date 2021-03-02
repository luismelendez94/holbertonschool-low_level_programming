#include "holberton.h"

/**
 * main - Multiply 2 Integers
 * @argc: Argument count
 * @argv: Contains the number of arguments
 *
 * Return: cero
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);

	return (0);
}
