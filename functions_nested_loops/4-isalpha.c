#include "main.h"

/**
 *  * _isalpha - write a function that checks for alphabetic character
 *   * @c: - is a variable dou
 *    * Return: 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else 
{
	return (0);
}
}
