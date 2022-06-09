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
		putchar((num1 / 10) + '0');
		putchar((num1 % 10) + '0');
		putchar(' ');
		putchar((num2 / 10) + '0');
		putchar((num2 % 10) + '0');
		if (num1 != 98 || num2 != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}i
}
