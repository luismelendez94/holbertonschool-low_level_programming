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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	if (*operator != '+' ||
		*operator != '-' ||
		*operator != '*' ||
		*operator != '/' ||
		*operator != '%')
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

	calc = (get_op_func(operator)(num1, num2));
	printf("%d\n", calc);

	return (0);
}
