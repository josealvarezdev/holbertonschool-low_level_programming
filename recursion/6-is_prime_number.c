#include "main.h"

int prime(int i, int j)
{
	if (i == 1)
	{
		return (0);
	}
	if ((j % i) == 0)
	{
		return (0);
	}
return prime(i, j - 1);
}
int is_prime_number(int n)
{
int j = 0;
return prime(n, j + 1);
}
