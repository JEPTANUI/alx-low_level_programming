#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -fuction like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
