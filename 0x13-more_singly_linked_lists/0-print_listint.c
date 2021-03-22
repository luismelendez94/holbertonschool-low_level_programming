#include "lists.h"

/**
 * print_listint - Print a linked list
 * @h: Pointer to the first node on the list
 *
 * Return: Number of nodes on the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int number;

	while (h != NULL)
	{
		number = h->n;

		printf("%d\n", number);

		count++;
		h = h->next;
	}

	return (count);
}
