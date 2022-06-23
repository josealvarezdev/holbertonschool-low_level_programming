#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicate a string
 * @str: - string original
 * Return: null or copy of the string
*/
char *_strdup(char *str)
{
int size;
char *copy;
char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	copy = (char *)malloc(sizeof(char) * size + 1);
	if (copy == NULL)
	{
		return ((char *)NULL);
	}
	while (*str)
	{
		p = str;
		p++;
		str++;
	}
*p = '\0';
return (copy);
}
