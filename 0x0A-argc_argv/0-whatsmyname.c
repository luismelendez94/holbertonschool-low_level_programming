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
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
