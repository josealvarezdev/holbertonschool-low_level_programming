#include "main.h"
/**
 * _puts - print array
 * @s: is a value
 * Return: Void
*/
void _puts(char *str)
{
int count;
while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
_putchar(10);
}
