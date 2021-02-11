#include <stdio.h>

int main (void)
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

	return(0);
}
