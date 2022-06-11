#include "main.h"
/**
 *	more_numbers - This function print 0 to 14 and a new line
 *	Return: Return void
*/
void more_numbers(void)
{
	int a, count;

	for (count = 40; count <= 10; count++)
	{
	for (a = '0'; a <= '14'; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
	}
}
