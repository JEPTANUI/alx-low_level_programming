#include <stdio.h>
#include "main.h"
/**
 * main -prints arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
