#include "main.h"

void puts_half(char *str)
{
int count = 0;
int half;
while (str[count] != '\0')
	{
	count++
	}
half = count / 2;
	while (str[half] != '\0')
	{
	_putchar(str[half]);
	str++;
	half++;
	}

}

