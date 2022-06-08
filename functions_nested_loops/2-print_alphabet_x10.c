#include "main.h"
/**
 *  * main - check the code.
 *   *
 *    * Return: Always 0.
*/
int main(void)
{
	int count;
	char alphabet;
	void print_alphabet(void)
	{
		for (count = 0; count <= 10; count++)
		{
			for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			{
				_putchar(alphabet);
			}
		}


	}
	_putchar(10);
	return (0);
}
