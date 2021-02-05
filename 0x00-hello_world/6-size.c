#include <stdio.h>

/**
 * main - Print the size of types
 *
 * Return: zero
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %li byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %li byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
