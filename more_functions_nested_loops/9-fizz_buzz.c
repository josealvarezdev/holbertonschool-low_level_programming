#include <stdio.h>

int main(void)
{
char count;

for (count = 0; count <= 100; count++)
if ((count % 5 == 0 ) && (count % 3 == 0))
	printf("FizzBuzz");
else if (count % 3 == 0)
	printf("Fizz");
else if (count % 5 == 0)
	printf("Buzz");
else
{
	printf("%d", count);
}
if (count < 100)
{
putchar (' ');
}
putchar (0);
return(0);
}
