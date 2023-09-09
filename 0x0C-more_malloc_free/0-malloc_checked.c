#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc.
 * @b : size of allocated memory
 * Return: void *.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
