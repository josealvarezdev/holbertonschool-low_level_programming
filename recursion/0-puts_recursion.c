#include "main.h"
#include <unistd.h>

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i < s[i] != '\0'; i++)
	{
	_putchar(s[i]);
	}
}
