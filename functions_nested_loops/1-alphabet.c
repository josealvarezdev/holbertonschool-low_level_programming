#include "main.h"
/**
 *  * main - Print alphabet with a function :D
 *   *
 *    * Return: Always 0
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar(10);
	return (0);
}
