#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	int *p;

	p = malloc(d);
	if (p != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d.name);
		}
		if (d->age == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %d\n", d.age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d.owner);
		}
	}
}
