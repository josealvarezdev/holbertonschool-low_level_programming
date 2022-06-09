#include "main.h"
/**
 *  *  * print_sign - write a function that says if an int is positive, negative or 0
 *   *   * @c: - is a variable dou
 *    *    * Return: 1 if c is a letter, lowercase or uppercase
 *    */
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
		return (0);
	}
}
