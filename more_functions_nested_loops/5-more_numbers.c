#include "main.h"
/**
 *	more_numbers - This function print 0 to 14 and a new line
 *	Return: Return void
*/
void more_numbers(void)
{
	int a, count;

	for (count = 0; count <= 10; count++)
	{
	for (a = 48; a <= 4952; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
	}
}
