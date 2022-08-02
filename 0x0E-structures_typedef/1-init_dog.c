#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type
 * @d: struct dog
 * @name: char type
 * @age: float type
 * @owner: char type
 *Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d.name == NULL)
		d->name = " ";
	d->name = name;
	d->age = age;
	d->owner = owner;
}
