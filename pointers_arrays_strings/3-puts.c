#include "main.h"
/**
 * _puts - print array
 * @str: array char
 * Return: Void
*/
void _puts(char *str)
{
int count = 0;

while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
_putchar(10);
}
