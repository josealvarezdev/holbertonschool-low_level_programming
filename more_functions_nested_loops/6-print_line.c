#include "main.h"
/**
 * print_line - write lines N times
 * @n: number of time to print _
 *
*/

void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; a++)
_putchar('_');
}
_putchar('\n');
}
