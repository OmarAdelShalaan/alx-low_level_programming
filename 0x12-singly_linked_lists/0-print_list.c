#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list.
 * @h : List will printed
 * Return: int.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		count++;
	}		
	return (count);
}
