#include "main.h"
/**
 *  * print_numbers - print the numbers, from 0 to 9, followed by new line
*/
void print_numbers(void)
{
int c;
for(c = 48; c <= 57; c++)
{
	_putchar(c + '0');
}
_putchar(10);
}
