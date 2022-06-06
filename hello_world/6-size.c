#include<stdio.h>
/**
 * * main - Entry point
 * * Return: Always 0 (Success)
*/
int main(void)
{
char chartype;
int intype;
long int longintype;
long long int llongint;
float floatype;

printf("Size of char: %zu byte(s)\n", sizeof(chartype));
printf("Size of int: %zu byte(s)\n", sizeof(intype));
printf("Size of long int: %zu byte(s)\n", sizeof(longintype));
printf("Size of float: %zu byte(s)\n", sizeof(floatype));

return (0);
}
