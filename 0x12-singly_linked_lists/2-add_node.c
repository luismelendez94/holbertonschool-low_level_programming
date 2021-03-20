#include "lists.h"

/**
 * add_node - Add node to a linked list
 * @head: Pointer to the first argument
 * @str: String to be inserted
 *
 * Return: The address of the new element, NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	unsigned int length = 0;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		length++;
	newNode->len = length;

	newNode->next = (*head);

	(*head) = newNode;

	return (*head);
}
