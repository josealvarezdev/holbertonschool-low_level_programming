#include "main.h"
/**
 *  *  * times_table - print 9 times table starting with zero
 *    *    * Return: 0
*/
void times_table(void)
{
int col, fila, num;

	for (fila = 0; fila <= 9; fila++)
	{
		_putchar(num + '0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			num = col * fila;
			if ((num / 10) != 0)
			{
				_putchar ((num / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((num % 10) + '0');
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}	
		}
	_putchar(10);
	}
}
