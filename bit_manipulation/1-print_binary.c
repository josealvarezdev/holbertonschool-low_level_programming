#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int i = 63, res = 0;

	for (; i >= 0; i--)
	{
		res = n >> i;

		if ( res & 1)
		{
			_putchar ('1');
		}
		else
		{
			_putchar('0');
		}
	}
if (n == 0)
{
_putchar ('0');
}
}
