#include "main.h"

/**
 *puts2 - function should print one character out of two.
 *@str: string.
 *Return: print.
 */

void puts2(char *str)
{
	int longi = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	l = longi - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
