#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * -putchar -Writes character in c to stdout
 *  &c: character to print
 *  Return: on success 1
 *  on error, -1 is returned
 */
int _putchar.c(char c)
{
	return(write(1, &c, 1));
}
