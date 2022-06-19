#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: array
 * @b: constant
 * @n: bytes of the memory area pointed by s
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char n1;

n1 = (n + '0');
for (i = 0; s[i] <= n1; i++)
{
s[i] = b;
}
return (s);
}
