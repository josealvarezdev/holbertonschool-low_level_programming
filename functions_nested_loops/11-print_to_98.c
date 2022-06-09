#include "main.h"

void print_to_98(int n)
{
for (n = 0; n < 99; n++)
{
	_putchar(n);
	if(n != 98)
		_putchar(',');
		_putchar(' ');
}
}
