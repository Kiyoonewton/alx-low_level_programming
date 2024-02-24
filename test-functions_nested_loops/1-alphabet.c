#include "main.h"

/**
 * print_alphabet - Write all the alphabet in lower case
 *
 * Return: Always void
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
