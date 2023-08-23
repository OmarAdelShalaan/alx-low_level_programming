#include "main.h"
#include <stdio.h>

/**
 * _strncat : strcat - to join to string together with spacific n
 * char *dest, char *src, int n 
 * Return: str.
 */
 
char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
    return dest;
}
