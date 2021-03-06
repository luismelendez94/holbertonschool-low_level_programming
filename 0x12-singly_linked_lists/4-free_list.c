#include "lists.h"

/**
 * free_list - Free the elements of a Linked List
 * @head: Pointer to the first element
 *
 */
void free_list(list_t *head)
{
	list_t *currentNode = head, *nextNode;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = nextNode;
	}

}
