#include "main.h"
/**
 * prime - auxiliar function to is prime number
 * @i: number 1
 * @j: number 2
 * Return: 1 for prime number and 0 for non prime number
*/
int prime(int i, int j)
{
	if (i == 1)
	{
		return (0);
	}
	if ((j % i) == 0 && j != i)
	{
		return (0);
	}
return prime(i, (j - 1));
}
/**
 * is_prime_number - its prime number
 * @n: number to check if its prime
 * Return: true or false in binary
*/
int is_prime_number(int n)
{
int j = 0;
return prime(n, (j + 1));
}
