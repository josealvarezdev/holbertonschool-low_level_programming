#include "main.h"
/**
 *  * main - check the code.
 *   *
 *    * Return: Always 0.
*/
void print_alphabet(void)
{
int count;
char alphabet;
for (count = 0; count <= 10; count++)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
}
	_putchar(10);
	return (0);
}
