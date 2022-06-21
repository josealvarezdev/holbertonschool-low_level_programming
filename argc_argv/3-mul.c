#include <stdio.h>
/**
 * main - print res of multiplication of arguments
 * @argc: size of array
 * @argv: char array
 * Return: 0
*/
int main(int argc, char *argv[])
{
(void)argc;
int *a = argv[1];
int *b = argv[2];
int res= a * b;
printf("%d\n", res);
return (0);
}
