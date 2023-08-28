#include "main.h"
#include <stdio.h>

/**
 * _memset - is used to fill a block of memory with a particular value.
 * @s: the address of memory
 * @b: char will input in memory
 * @n: number of element will replace
 * Return: pointer.
 */
 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return s;
}
