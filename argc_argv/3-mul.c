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
char *a = argv[1];
char *b = argv[2];
char res= a * b;
printf("%s\n", res);
return (0);
}
