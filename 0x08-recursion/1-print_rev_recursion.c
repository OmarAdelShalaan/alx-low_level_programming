#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - that pprints a string in reverse.
 * @s : string
 * Return: void
 */
 
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return ;
	}
	_print_rev_recursion(++s);
	printf("%c",*--s);
}

