#include "lists.h"

/**
 * free_listint2 - Free the elements of a Linked List
 * @head: Pointer to the first element
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode = *head, *nextNode;

	if (head == NULL)
		return;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}

	*head = NULL;
}
