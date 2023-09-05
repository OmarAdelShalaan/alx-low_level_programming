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

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	newStr = (char *)malloc(sizeof(char) * (i + 1));

	if (newStr == NULL)
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
