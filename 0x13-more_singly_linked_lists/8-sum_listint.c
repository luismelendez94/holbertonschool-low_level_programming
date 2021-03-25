#include "lists.h"

/**
 * sum_listint - Add up all nth items of the elements on the list
 * @head: Pointer to the first node in the list
 *
 * Return: Sum of nth items of the nodes in the list,
 * zero if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
