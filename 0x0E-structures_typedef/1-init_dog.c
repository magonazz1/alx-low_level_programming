#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a dog variable of type struct
 *
 * @d: dog to be initialized.
 *
 * @name: dog name.
 *
 * @age: dog age.
 *
 * @owner: dog owner.
 *
 * Return: pointer to the dog struct.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	/* Allocate memory for name and owner fields */
	d->name = malloc(strlen(name) + 1);

	if (d->name == NULL)
	{
		return;
	}

	d->owner = malloc(strlen(owner) + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}

	/* Copy data to struct fields */
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
}
