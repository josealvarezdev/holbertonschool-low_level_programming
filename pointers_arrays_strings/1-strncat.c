#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - fun that concatenates two strings
 * @dest: destino
 * @src: original
 * n: var
*/
char *_strncat(char *dest, char *src, int n)
{
size_t dest_len = strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
