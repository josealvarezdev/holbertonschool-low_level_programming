#include "main.h"

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		return (0);
	}
}
