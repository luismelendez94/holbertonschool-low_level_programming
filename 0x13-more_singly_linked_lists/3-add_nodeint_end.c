#include "lists.h"

/**
 * add_nodeint_end - Add node at the end of linked list
 * @head: Pointer to the first argument
 * @n: Integer to be inserted
 *
 * Return: The address of the new element, NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;

	if (*head == NULL)
		(*head) = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}
