#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: owner of the dog.
 *
 * Return: Returns void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
