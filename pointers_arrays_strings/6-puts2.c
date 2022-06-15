#include "main.h"
void puts2(char *str)
{
	int count;

	while (str[count] != '\0')
	{
	_putchar(str[count]);
	count = count +2;
	}
_putchar(10);
}
