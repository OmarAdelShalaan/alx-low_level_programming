#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - that concatenates two strings.
 * @s1 : string 1
 * @s2 : string 2
 * @n : is greater or equal to the length of s2
 * Return: char *.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = sizeof(s1), j = 0;
	s1 = (char *)realloc(s1, sizeof(s1) + n);

	if (s1 == NULL)
	{
		return (NULL);
	}
	while(s2[i] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

