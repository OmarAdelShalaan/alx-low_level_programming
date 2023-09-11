#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - that initialize a variable of type struct dog
 * @d : struct that will contain information about dog
 * @name : string name of dog
 * @age : float of age dog
 * @owner : name of dog owner
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}

