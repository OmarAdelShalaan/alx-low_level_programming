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
	if (str == NULL)
	{
		return (NULL);
	}
	unsigned int i;
	char *newStr = (char *)malloc(sizeof(char) * 50);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (newStr == NULL || str == NULL)
	{
		return (NULL);
	}
	free(str);
	return (newStr);
}
