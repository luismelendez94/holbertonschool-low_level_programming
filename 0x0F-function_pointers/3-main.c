#include "3-calc.h"

/**
 * main - Calculate two numbers
 * @argc: The number of arguments
 * @argv: Array of arguments
 *
 * Return: cero
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	func = get_op_func(argv[2]);
	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*operator == '/' || *operator == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = func(num1, num2);
	printf("%d\n", calc);

	return (0);
}
