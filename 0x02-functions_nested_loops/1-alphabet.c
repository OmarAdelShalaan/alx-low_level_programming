#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26; ++i)
	{
		printf("%c", i + 'a');
	}
	printf("\n");
}
