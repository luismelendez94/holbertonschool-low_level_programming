#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int linear_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
