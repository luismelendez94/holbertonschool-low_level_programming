#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at the index of linked list
 * @head: Pointer to the first argument
 * @idx: Index of the list to insert a node
 * @n: Integer to be inserted
 *
 * Return: The address of the new element, NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head != NULL)
	{
		currentNode = *head;
		while (count != (idx - 1))
		{
			currentNode = currentNode->next;
			count++;
		}
		if (currentNode->next == NULL)
			return (NULL);

		newNode->next = currentNode->next;
		currentNode->next = newNode;
		return (newNode);
	}

	return (NULL);
}
