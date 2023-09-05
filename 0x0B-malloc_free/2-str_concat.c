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
	unsigned int i = 0, count = 0;
	char *newStr = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		count++;
	newStr = (char *)malloc(sizeof(char) * (count + 1));
	if (newStr == NULL)
		return (NULL);
	i = 0; count = 0;
	while (s1[i] != '\0')
		newStr[count++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
	{
		newStr[count++] = s2[i++];
	}
	newStr[count] = '\0';
	return (newStr);
}
