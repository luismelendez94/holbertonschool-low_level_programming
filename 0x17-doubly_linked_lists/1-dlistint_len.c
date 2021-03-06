#include "lists.h"

/**
 * dlistint_len - Get the number of elements in a double linked list
 * @h: Pointer to the first node
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numElem = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		numElem++;
	}
	return (numElem);
}
