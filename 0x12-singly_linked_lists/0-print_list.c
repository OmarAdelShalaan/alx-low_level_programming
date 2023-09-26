#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list.
 * @h : List will printed
 * Return: size_t.
 */
 
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}	
	return (count);
}
