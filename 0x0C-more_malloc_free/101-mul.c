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
	int mul = 0, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 < '0' || num1 > '9' || num2 < '0' || num2 > '9')
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
