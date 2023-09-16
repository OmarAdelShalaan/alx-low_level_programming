#include "function_pointers.h"

/**
 * print_name - that print the name
 * @name : string 
 * @pointer to fun : input char * return void
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

