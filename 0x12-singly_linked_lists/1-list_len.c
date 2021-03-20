#include "lists.h"

/**
 * list_len - Get the elements on the list
 * @h: Pointer to the first node in the list
 *
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
