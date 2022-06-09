#include "main.h"
/**
 *  * _islower - Checker of lowercase letters
 * @c is a variable
 *    * Return: 1 if the letter is lowercase.
*/
int _islower(int c)
{
c = 0;
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
