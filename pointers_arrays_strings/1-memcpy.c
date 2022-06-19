#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: array destino
 * @src: array de origen
 * @n: copy n bytes from memory of src to memory area dest
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
