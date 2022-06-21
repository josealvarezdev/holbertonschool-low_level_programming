#include "main.h"
/**
 * Extra function to resolve sqrt
*/
int _sqrtm(int num1, int num2)
{
int raiz = num2 * num2;
if (raiz == num1)
{
return (num2);
}
if (raiz > num1)
{
return (-1);
}
return (_sqrtm(num1, num2 + 1));

/*Algo*/
int _sqrt_recursion(int n)
{
return (_sqrtm(n, 0));
}
