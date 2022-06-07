#include <stdio.h>
/**
 *  *  * main - Prints a hexadecimal
 *   *   *
 *    *    * Return: Always
*/
int main(void)
{
int i, a;
for (int i = 0; i < 9; i++)
{
for (int a = 1; a < 9; a++)
{
if (a != i)
{
putchar(i);
putchar(a);
}
}
}
}
