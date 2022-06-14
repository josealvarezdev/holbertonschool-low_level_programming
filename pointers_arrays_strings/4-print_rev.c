#include "main.h"
/**
 * print_rev - print reverse
 * @s: array char
 * Return: Void
*/
void print_rev(char *s)
{
int count = 0;

count = 0;
while (*s != '\0')
{
count++;
s++;
}
while (count != 0)
{
s--;
_putchar(*s);
count--;
}
_putchar(10);
}
