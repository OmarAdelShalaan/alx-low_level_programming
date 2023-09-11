#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - that creates a new dog.
 * @name : the name of new dog
 * @age : the age of new dog
 * @owner: name of dog owner
 * Return: dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	strcpy(newDog->name, name);
	newDog->age = age;
	strcpy(newDog->owner, owner);
}

