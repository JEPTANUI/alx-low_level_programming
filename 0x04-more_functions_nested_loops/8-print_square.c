#include "main.h"
/**
* print_square - function to print a square
* @size: takes in the size of the square
*/
void print_square(int size)
{
	int j, k;

	if (size <= 0)
		_putchar('\n');
	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
