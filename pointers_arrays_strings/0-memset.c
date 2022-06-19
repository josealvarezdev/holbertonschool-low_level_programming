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
int i;
for (i = 0; *s[i] <= n; i++)
{
s[i] = b;
}
return (s);
}
