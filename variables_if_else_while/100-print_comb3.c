#include <stdio.h>
/**
 *  *  * main - Prints a hexadecimal
 *   *   *
 *    *    * Return: Always
*/
int main(void)
{
int i, a;

for (i = '0'; i <= '9'; i++)
{
for (a = i; a <= '9'; a++)
{
if (a != i)
{
	putchar(i);
	putchar(a);
while (i != 8 && a != 9)
{
	putchar(',');
/* prueba*/
}
}
}
return (0);
}
