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
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
