#include <stdio.h>

/**
 * main - main fun start code from it
 * @argc : number of command arguments
 * @argv : strings input in command arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}
	printf("%d\n", (argv[1] - '0') * (argv[2] - '0'));
	return 0;
}

