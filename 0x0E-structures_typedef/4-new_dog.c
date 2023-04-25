#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @d: The dog to be initialized.
 *
 * @name: The name of the dog.
 *
 * @age: The age of the dog.
 *
 * @owner: The owner of the dog.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * print_dog - Prints a struct dog.
 *
 * @d: The struct dog to be printed.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

/**
 * new_dog - Creates a new dog.
 *
 * @name: The name of the dog.
 *
 * @age: The age of the dog.
 *
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (strlen(owner) - 1));

	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	strcpy(doggo->name, name);
	doggo->age = age;
	strcpy(doggo->owner, owner);

	return (doggo);
}

/**
 * free_dog - Frees a struct dog.
 *
 * @d: The struct dog to be freed.
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
