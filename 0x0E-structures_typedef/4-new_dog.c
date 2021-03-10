#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Save new dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	(*doggy).name = malloc((_strlen(name) + 1) * sizeof(char));
	if ((*doggy).name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	(*doggy).owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if ((*doggy).owner == NULL)
	{
		free((*doggy).name);
		free(doggy);
		return (NULL);
	}


	(*doggy).name = _strcpy((*doggy).name, name);
	(*doggy).owner = _strcpy((*doggy).owner, owner);
	(*doggy).age = age;

	return (doggy);
}

/**
 * *_strcpy - Copy string pointed to a buffer pointer
 * @dest: Destination pointer
 * @src: Copy pointer
 *
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - Get the length of the string
 * @s: String to be verify
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
