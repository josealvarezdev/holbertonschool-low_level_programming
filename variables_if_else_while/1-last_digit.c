#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
*/

/* more headers goes there */

/st digit of %d is %d and is greater than 5", n, ld);* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int ld;
ld = n % 10;
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5", n, ld);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0", n, ld);
}
else if (n < 6 && n != 0)
iinclude <stdlib.h>
{
	printf("Last digit of %d is %d and is less than 6 and not 0");
}
return (0);
}
