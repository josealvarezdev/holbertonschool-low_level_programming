#include "main.h"
/*
 * _isupper - This function check if the letter is uppercase
 * Return: 1 if letter is upper and 0 ifnot
 * @c: Is a input
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
