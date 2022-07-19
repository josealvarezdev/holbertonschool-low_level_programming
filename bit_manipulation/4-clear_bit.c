#include "main.h"
/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer
 * @index: number position
 * Return: 1 if sucess -1 if an error occured.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

*n &= ~(1 << index);
return (1);
}
