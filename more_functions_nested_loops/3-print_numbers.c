#include "main.h"
/**
 *  * print_numbers - print the numbers, from 0 to 9, followed by new line
*/
void print_numbers(void)
{
	int numerito;

	for (numerito = 0; numerito <= 9; numerito++)
	{
		_putchar(numerito + '0');
	}
	_putchar(10);
}

