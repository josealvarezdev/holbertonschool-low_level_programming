#include <stdio.h>
#include <stdlib.h>
/**
 * main - print res of multiplication of arguments
 * @argc: size of array
 * @argv: char array
 * Return: 0
*/
int main(int argc, char *argv[])
{
int res;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
return (0);
}
