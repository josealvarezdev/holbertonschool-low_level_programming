#include "main.h"
/**
 * swap_int - swapeando variables como un rey
 * @a: is a value
 * @b: is a value too
 * Return: Void
*/
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
