#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list.
 * @h : List will printed
 * Return: int.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}	
	return (count);
}
