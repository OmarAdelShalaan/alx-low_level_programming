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
	char *newstr;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		newstr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		newstr[len++] = s2[i];
	newstr[len] = '\0';
	return (newstr);
}
