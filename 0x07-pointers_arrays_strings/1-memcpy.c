#include "main.h"
#include <stdio.h>

/**
 * _memcpy - is used to copy a block of memory from one location to another. It is declared in <string.h> header file.
 * @dest: A pointer to the memory location where the copied data will be stored.
 * @src: A pointer to the memory location from where the data is to be copied.
 * @n: number of element will copied
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}
