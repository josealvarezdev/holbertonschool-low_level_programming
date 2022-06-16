#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - strncpy function
 * @dest: destino
 * @src: origen
 * @n: var
 * Return: Destino
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
