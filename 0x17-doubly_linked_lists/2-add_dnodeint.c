#include "lists.h"

/**
 * add_dnodeint - Add a node to a double linked list
 * @head: Pointer to the first node
 * @n: Integer to insert
 *
 * Return: Address of the new element, NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	(*head) = newNode;

	return (newNode);
}
