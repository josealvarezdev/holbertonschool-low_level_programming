#include "main.h"
/**
 *  *  * print_sign - write a function
 *   *   * @n: - is a variable dou
 *    *    * Return: 1 if c is a letter, lowercase or uppercase
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
