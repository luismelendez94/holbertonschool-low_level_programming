#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the first node
 *
 * Return: The number stored in the node deleted
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *currentNode = *head, *nextNode;

	if (*head == NULL)
		return (0);

	nextNode = currentNode->next;
	number = currentNode->n;
	free(*head);
	*head = nextNode;

	return (number);
}
