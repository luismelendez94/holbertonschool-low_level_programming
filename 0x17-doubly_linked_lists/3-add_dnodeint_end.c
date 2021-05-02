#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end of a double linked list
 * @head: Pointer to the first node
 * @n: Integer to insert in node
 *
 * Return: Address of the new element, NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		(*head) = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (*head);
}
