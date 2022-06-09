#include "main.h"
/**
 *  * print_alphabet_x10 - x 10
 *   * Return: dont return from main
*/
void print_alphabet_x10(void)
{
int count;
char alphabet;
for (count = 1; count <= 10; count++)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar(10);
}
}
