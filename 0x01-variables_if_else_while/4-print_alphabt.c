#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 26; ++i)
	{
		if ((i + 'a' == 'q') ||(i + 'a' == 'e'))
			continue;
		printf("%c", i + 'a');
	}
	printf("\n");
	return (0);
}
