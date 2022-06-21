#include "main.h"
/**
 * Extra function to resolve sqrt
*/
int _sqrtm(int num1, int num2)
{
if (num1 * num1 > num2)
{
return (-1);
}
if (num1 * num1 == num2)
{
return (num1);
}
return (_sqrtm(num2, num1 + 1));

/*Algo*/
int _sqrt_recursion(int n)
{
int num3;
return (_sqrtm(num3, n));
}
