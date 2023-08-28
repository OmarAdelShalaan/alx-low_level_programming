#include "main.h"
#include <stdio.h>

/**
 * _strspn - function returns the length of the initial substring of the string pointed to by str1 that is made up of only those character contained in the string pointed to by str2.
 * @s: the address of memory
 * @accept: char will input in memory
 * Return: unsigned int.
 */
 
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0;
	
	while (accept[j] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			i++;
		}
		j++;
	}
	return count;
}
