#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init  dog
 * @d: a dog struct
 * @name: the name
 * @age: age
 * @owner: owner of dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
