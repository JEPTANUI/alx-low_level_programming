#include "main.h"
/**
 * main - prints thenumber of arguments passed to the program
 * @argc: number of arguments
 * @argv: aaray of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);
	return (0);
}
