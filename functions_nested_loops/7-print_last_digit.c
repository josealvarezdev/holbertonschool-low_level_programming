#include "main.h"
/**
 *  *  * print_last_digit of a number
 *   *   * @r: - is a variable dou
 *    *    * Return: last digit of r
*/
int print_last_digit(int r)
{
	int last;
last = r % 10;
if (r < 0)
{
last = -last;
}
_putchar (last + '0');
return (r);
}
