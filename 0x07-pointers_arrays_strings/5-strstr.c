#include "main.h"
#include <stdio.h>

/**
 * _strstr - is a predefined function used for string handling. string.h is the header file required for string functions. This function takes two strings s1 and s2 as an argument and finds the first occurrence of the sub-string s2 in the string s1.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in s1 string.
 * Return: pointer.
 */
 
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, flag = 0;
	
	while (haystack[j] != '\0')
	{
		i = 0;
		while (needle[i] == haystack[j] || haystack[i] != '\0')
		{
			if (needle[i] != haystack[j])
			{
				return &haystack[i];
			}
			i++;
		}
		j++;
	}
	return NULL;
}
