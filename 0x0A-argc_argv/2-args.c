#include <stdio.h>

/**
 * main - main fun start code from it
 * @argc : number of command arguments
 * @argv : strings input in command arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}

