#include "main.h"
/**
 * flip_bits - number of bits u need to flip to convert a number
 * @n: int
 * @m: int
 * Return: number of bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i, count = 0;

i = n ^ m;
	while (i)
	{
		if (i & 1)
			count++;
		i >>= 1;
	}
return (count);
}
