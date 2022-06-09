#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{	
	if (n <= 98 && n != 99)
	{
	printf("%d", n);
	n++;
	}
	else if (n > 98 && n != 97 )
	{
		printf("%d", n);
		n--;
	}
	else if (n != 98)
	{
	printf(", ");
	}
printf("\n");
}
