#include "main.h"
/**
 * Extra function to resolve sqrt
*/
int _sqrtm(int n, int num2)
{
int raiz = num2 * num2;
if (raiz == n)
{
return (num2);
}
if (raiz > n)
{
return (-1);
}
return (_sqrtm(n, num +1));

/*Algo*/
int _sqrt_recursion(int n)
{
return (_sqrtm(n, 0);
}
