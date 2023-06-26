#include "main.h"

/**
 * print_rev - imprimo en reversa.
 * @s: string
 * Return: (0)
 */

void print_rev(char *s)
{
	int longi;

	for (longi = 0; s[longi] != '\0'; longi++)
	{
	}
	for (longi = longi - 1; longi >= 0; longi--)
	{
		_putchar(s[longi]);
	}
	_putchar('\n');
}
