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
if (a > i || i > b)
{
	putchar(i);
	putchar(a);
	putchar(b);
	if (i != '7' || a != '8' || b != '9')
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
