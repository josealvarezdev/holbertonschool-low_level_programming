#include <stdio.h>
/**
 *  *  * main - Prints a hexadecimal
 *   *   *
 *    *    * Return: Always
*/
int main(void)
{
int i, a, b, c;

for (i = '0'; i <= '9'; i++)
{
for (a = i; a <= '9'; a++)
{
for (b = i; b <= '9'; b++)
{
for (c = i; c <= '9'; c++)
{
if (c > b && b > a && a > i)
{
	putchar(i);
	putchar(a);
	putchar(10);
	putchar(b);
	putchar(c);
	if (i != '9' || a != '8' || b != '9' || c != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
}
}
}
}
putchar('\n');
return (0);
}
