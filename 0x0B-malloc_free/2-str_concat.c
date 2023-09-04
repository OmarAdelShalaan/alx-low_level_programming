#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - that  returns a pointer to s1, followed by the contents of s2
 * @s1 : string
 * @s2 : string
 * Return: char *.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, count = 0;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
		count++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		count++;
	}
	char *newStr = (char *)malloc(sizeof(char) * (count + 1));

	if (newStr == NULL)
	{
		return (NULL);
	}
	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		newStr[count] = s1[i];
		i++;
		count++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newStr[count] = s2[i];
		i++;
		count++;
	}
	newStr[count] = '\0';
	free(s1);
	free(s2);
	return (newStr);
}
