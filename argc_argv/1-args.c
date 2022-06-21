#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main (int argc, char *argv[])
{
(void)argv;
argc--;
printf("%d\n", argc);
return (0);
}
