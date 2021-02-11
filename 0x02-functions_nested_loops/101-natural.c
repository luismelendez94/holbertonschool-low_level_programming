#include <stdio.h>

/**
 * main - Program that prints al natural 3 and 5 numbers bellow 1024
 * Return: cero
 */
int main(void)
{
	int valor;
	int sum;

	for (valor = 1; valor < 1024; valor++)
	{
		if (((valor % 3) == 0) || ((valor % 5) == 0))
		{
			sum += valor;
		}
	}
	printf("%d\n", sum);

	return (0);
}
