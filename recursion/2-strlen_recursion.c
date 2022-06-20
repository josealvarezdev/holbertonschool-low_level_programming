#include "main.h"
/**
 * _strlen_recursion - strlen but with recursion
 * @s: array
 * Return: counter
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

return 1+ _strlen_recursion (s + 1);
}
