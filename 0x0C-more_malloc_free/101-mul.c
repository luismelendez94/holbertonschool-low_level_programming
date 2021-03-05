#include "holberton.h"

/**
 * main - Multiply two numbers
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	unsigned int mul = 0, num1, num2;
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
