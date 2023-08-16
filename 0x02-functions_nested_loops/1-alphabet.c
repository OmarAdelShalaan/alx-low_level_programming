#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 26; ++i)
	{
		printf("%c", i + 'a');
	}
	printf("\n");
	return (0);
}
