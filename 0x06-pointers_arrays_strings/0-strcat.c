#include "main.h"
#include <stdio.h>

/**
 * _strcat : strcat - to join to string together
 *
 * Return: str.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
    return dest;
}
