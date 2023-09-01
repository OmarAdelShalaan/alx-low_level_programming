#include "main.h"
#include <stdio.h>

/**
 * wildcmp - that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
 * @s1 : string 1
 * @s2 : string 2
 * Return: int 1 or 0.
 */

int wildcmp(char *s1, char *s2)
{
	
	if (*s == '\0')
	{
		return 0;
	}
	s1++;
	s2++;
	return wildcmp(s1,s2);
}

