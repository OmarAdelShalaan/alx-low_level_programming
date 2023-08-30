#include "main.h"
#include <stdio.h>

/**
 * reverse_array : reverse array
 * int *a, int n
 * Return: void.
 */
 
void reverse_array(int *a, int n)
{
    int i = 0, j = 0;
	int arr[n];

	for (i = n - 1; i >= 0; i--, j++)
	{
		arr[j] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
	return 0;
}
