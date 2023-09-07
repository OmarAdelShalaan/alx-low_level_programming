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
	void *mem = (void *)malloc(sizeof(int) * b);
	int *fail = NULL;

	if (mem == NULL)
	{
		fail = (int *)malloc(sizeof(int));
		*fail = 98;
		return ((void *)fail);
	}
	return (mem);
}

