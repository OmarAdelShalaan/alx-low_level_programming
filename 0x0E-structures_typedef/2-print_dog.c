#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dog - that prints a struct dog
 * @d : struct that will contain information about dog
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

