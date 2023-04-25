#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *name_copy;
	char *owner_copy;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		return (NULL);
	}
	name_len = strlen(name);
	name_copy = malloc(name_len + 1);

	if (name_copy == NULL)
	{
		free(doggo);
		return (NULL);
	}
	strcpy(name_copy, name);
	owner_len = strlen(owner);
	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(doggo);
		return (NULL);
	}
	strcpy(owner_copy, owner);
	doggo->name = name_copy;
	doggo->age = age;
	doggo->owner = owner_copy;
	return (doggo);
}
