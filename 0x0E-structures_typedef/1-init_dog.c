#include "dog.h"

/**
 * init_dog - init struct dog
 *
 * @d: ptr to struct
 *
 * @name: ptr to dog name
 *
 * @age: age of dog
 *
 * @owner: ptr to dog owner name
 *
 * Return: void
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
