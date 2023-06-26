#include<stdio.h>
#include "main.h"

/**
 *print_array - function tha prints an element of an array
 *@a: array name
 *@n: number of elements on array.
 *Return: input
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n; x++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
