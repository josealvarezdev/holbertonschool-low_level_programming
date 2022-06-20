#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - recursion de array
 * @s: array de caracteres
 * Return: Nothing, void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar (10);
	return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion (s++);
	}
}
