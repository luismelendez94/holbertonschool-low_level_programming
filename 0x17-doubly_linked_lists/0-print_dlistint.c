#include "lists.h"

/**
 * print_dlistint - Function to print a double linked list
 * @h: Pointer to the first node
 *
 * Return: Number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int numElem = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numElem++;
	}
	return (numElem);
}
