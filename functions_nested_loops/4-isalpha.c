#include "main.h"

/**
 *  * _isalpha - write a function that checks for alphabetic character
 *   *
 *    * Return: 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
c = 0;
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
}
return (0);
