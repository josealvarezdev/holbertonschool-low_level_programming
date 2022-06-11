#include "main.h"

void print_diagonal(int n)
{
int a, b;

if (n > 0)
{
	for(b = 0; b < n; b++)
	for (a = 0; a < n; a++)
	{
		_putchar(' ');
		_putchar(92);
		_putchar(10);
	}
else
	_putchar(10);
}
}
