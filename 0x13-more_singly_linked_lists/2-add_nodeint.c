#include "lists.h"

/**
 * add_nodeint - Add node to a linked list
 * @head: Pointer to the first argument
 * @n: Integer to be inserted
 *
 * Return: The address of the new element, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = (*head);

	(*head) = newNode;

	return (*head);
}
