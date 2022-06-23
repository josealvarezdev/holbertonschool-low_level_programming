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
int count;

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
	for (count = 0; count < size; i++)
	{
	p[i] = str[i];
	}
*p = '\0';
return (copy);
}
