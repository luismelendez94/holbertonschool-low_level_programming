#include "lists.h"

/**
 * print_list - Print a linked list
 * @h: Pointer to the first node on the list
 *
 * Return: Number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int length;
	char *s;

	while (h != NULL)
	{
		s = h->str;
		length = h->len;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", length, s);
		}

		count++;
		h = h->next;
	}

	return (count);
}
