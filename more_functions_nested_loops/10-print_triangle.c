#include "main.h"

void print_triangle(int size)
{
	int a;

	for(a = 0; a <= size; a++)
	{
		if (a < size)
		{
		_putchar(' ');
		}
		else if(a == size)
		_putchar(35);
	}
}
