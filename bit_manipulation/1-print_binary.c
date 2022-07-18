#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int res = 0;
int i, flag = 0;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		res = n >> i;

		if ( res & 1)
		{
			_putchar ('1');
			flag++;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
