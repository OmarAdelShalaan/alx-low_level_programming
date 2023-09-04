#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - that returns the length of a string.
 * @s : string
 * Return: int length of string.
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	count = _strlen_recursion(++s) + 1;
	return  (count);
}

