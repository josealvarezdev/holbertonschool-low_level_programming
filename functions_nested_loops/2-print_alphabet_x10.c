#include "main.h"
/**
 *  * main - print alphabet x10
 *   *
 *    * Return: Always 0.
*/
void print_alphabet_x10(void)
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
}
