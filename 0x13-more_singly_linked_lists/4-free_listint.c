#include "lists.h"

/**
 * free_listint - Free the elements of a Linked List
 * @head: Pointer to the first element
 *
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode = head, *nextNode;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}

}
