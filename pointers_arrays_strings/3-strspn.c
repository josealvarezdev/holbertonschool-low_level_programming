#include "main.h"
/**
 * _strpn - Get the lengh of a prefix substring
 * @s: array base
 * @accept: substring
 * Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
			break;
			}
		}
	}
return (i);
}
