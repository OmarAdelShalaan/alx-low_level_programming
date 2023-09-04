#include <stdio.h>

/**
 * main - main fun start code from it
 * @argc : number of command arguments
 * @argv : strings input in command arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int result = 0;

	if (argc <= 2)
	{
		printf("Error\n");

		return 1;
	}
	result = (int)(argv[1] - '0');	
	result *= (int)(argv[2] - '0');
	printf("%d\n", result);

	return 0;
}

