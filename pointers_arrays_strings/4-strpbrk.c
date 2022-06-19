#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a string
 * @s: array original
 * @accept: string to compare with ori
 * Return: pointer to byte in s
*/
char *_strpbrk(char *s, char *accept)
{
char *n = NULL;
	if (!s)
	{
		return (n);
	}
int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
return (0);
}
