#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: the address of memory
 * @c: char will input in memory
 * Return: pointer.
 */
 
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return &s[i];
		}
		i++;
	}
	return NULL;
}
