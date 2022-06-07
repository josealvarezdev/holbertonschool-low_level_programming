#include <stdio.h>
#include <unistd.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
*/
int main(void)
{
char c;
char a;
for (c = 'a'; c <= 'z'; ++c)
	putchar(c);
	putchar('\n');
for (a = 'A'; a <= 'Z'; ++a)
	putchar(c);
	putchar('\n');
return (0);
}
