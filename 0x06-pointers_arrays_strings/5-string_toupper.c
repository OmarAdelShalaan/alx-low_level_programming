#include "main.h"
#include <stdio.h>

/**
 * string_toupper : changes all lowercase letters of a string to uppercase.
 * char *str
 * Return: char
 */
 
char *string_toupper(char *str)
{
    int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}
