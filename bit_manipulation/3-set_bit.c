#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; n[i] != '0'; i++)
	{
		if (i == index)
		{
			*n ^= (1 << index);
		}
	}
return (1);
}
