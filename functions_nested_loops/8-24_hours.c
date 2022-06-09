#include "main.h"
/**
 *  *  * print_last_digit - of a number
 *   *   * @r: - is a variable dou
 *    *    * Return: last digit of r
*/
void jack_bauer(void)
{
int num1, num2;
for (num1 = 0; num1 <= 23; num1++)
{
	for (num2 = num1; num2 <= 59; num2++)
	{
		_putchar((num1 / 10) + '0');
		_putchar((num1 % 10) + '0');
		_putchar(':');
		_putchar((num2 / 10) + '0');
		_putchar((num2 % 10) + '0');
		_putchar(10);
		/*if (num1 != 23 || num2 != 59)
		{
			_putchar(',');
			_putchar(' ');
		} */
	}
}
}
