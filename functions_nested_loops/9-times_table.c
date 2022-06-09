#include "main.h"
/**
 *  *  * times_table - print 9 times table starting with zero
 *    *    * Return: 0
*/
void times_table(void)
{
int col, fila, num;

num = 0;
for (col = 0; col <= 9; col++)
{
for (fila = 0; fila <= 9; fila++)
{
num = col * fila;
_putchar(num);
if (num != col * 9)
_putchar(',');
_putchar(' ');
}
}
}
