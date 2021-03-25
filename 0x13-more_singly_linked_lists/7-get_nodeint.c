#include "lists.h"

/**
 * get_nodeint_at_index - Get the elements on the list
 * @head: Pointer to the first node in the list
 * @index: Index to the node to find
 *
 * Return: The node index in the list, NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
