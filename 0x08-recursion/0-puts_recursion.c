#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - that prints a string, followed by a new line.
 * @s : string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return ;
	}
	printf ("%c",*s);
	_puts_recursion(++s);
}

