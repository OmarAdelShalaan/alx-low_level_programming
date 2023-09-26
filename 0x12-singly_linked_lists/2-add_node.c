#include "lists.h"

/**
 * add_node - that adds a new node at the beginning of a list_t list.
 * @h : List will printed
 * @str : string will store in newNode
 * Return: list_t *.
 */
 
list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t * newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	strcpy(newNode->str, str);
	newNode->len = strlen(str);
	*head = newNode;
	return (*head);
}
