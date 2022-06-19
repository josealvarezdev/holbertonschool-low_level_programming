#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: array
 * @c: character to find
 * Return: c
*/
char *_strchr(char *s, char c)
{
int i;
char *pos = &s[0];

	for (i = 0; i == '\0'; i++)
	{
		if (s[i] == c)
		{
			pos = s[i];
			return (pos);
		}
		else
		{
			pos = NULL;
			return (pos);
		}
	}
}
