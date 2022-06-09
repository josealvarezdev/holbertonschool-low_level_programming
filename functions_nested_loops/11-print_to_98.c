#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
for (n = 0; n < 99; n++)
{
	printf("%d", n);
	if(n != 98)
		printf(", ");
}
}
