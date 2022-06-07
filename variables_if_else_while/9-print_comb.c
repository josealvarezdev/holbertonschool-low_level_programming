#include <stdio.h>
/**
 *  * main - Prints a hexadecimal
 *   *
 *    * Return: Always
*/
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a != 9)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}

