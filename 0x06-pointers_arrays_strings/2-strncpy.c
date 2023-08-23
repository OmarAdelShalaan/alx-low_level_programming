#include "main.h"
#include <stdio.h>

/**
 * _strncpy : strncpy - to copy to string another
 * char *dest, char *src, int n
 * Return: str.
 */
 
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
    return dest;
}
