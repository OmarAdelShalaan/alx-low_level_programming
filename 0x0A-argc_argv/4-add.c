#include <stdio.h>
#include <stdlib.h>
/**
 * main - main fun start code from it
 * @argc : number of command arguments
 * @argv : strings input in command arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if(argc == 1)
	{
		printf("0");
		return 0;
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			printf("Error\n");
			return 1;
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return 0;
}

