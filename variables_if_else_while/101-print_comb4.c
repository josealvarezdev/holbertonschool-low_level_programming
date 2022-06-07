#include <stdio.h>
/**
 *  *  * main - Prints a hexadecimal
 *   *   *
 *    *    * Return: Always
*/
int main(void)
{
int i, a, b;

for (i = '0'; i <= '9'; i++)
{
for (a = i; a <= '9'; a++)
{
for (b = i; a <= '9'; b++)
{
if (a > i)
{
	putchar(i);
	putchar(a);
	if (i != '8' || a != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
}
}
}
putchar('\n');
return (0);
}
