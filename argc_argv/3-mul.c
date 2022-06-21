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
char res = argv[1] * argv[2];
printf("%s\n", res);
return (0);
}
