#include "lists.h"

/**
 * add_node_end - Add node at the end of linked list
 * @head: Pointer to the first argument
 * @str: String to be inserted
 *
 * Return: The address of the new element, NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	unsigned int length = 0;
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		length++;
	newNode->len = length;

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
