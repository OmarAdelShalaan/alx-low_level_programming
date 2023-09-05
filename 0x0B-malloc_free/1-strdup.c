#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - that  returns a pointer to a newly allocated space in memory.
 * @str : str will deplicate
 * Return: char *.
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *newStr = NULL;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	newStr = (char *)malloc(sizeof(char) * i);

	if (newStr == NULL || str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		newStr[i] = str[i];
		i++;
	}
	newStr[i] = '\0';
	return (newStr);
}
