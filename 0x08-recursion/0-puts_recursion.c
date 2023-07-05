#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -fuction like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
