#include "holberton.h"

/**
 * main - Print the name of the executable
 * @argc: Argument count
 * @argv: Contains the number of arguments
 *
 * Return: cero
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 1)
	{
		while (argv[count] != '\0')
			count++;
	}

	printf("%d\n", argc - 1);

	return (0);
}
