#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 * Return: Void
*/

void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	do {
		for (a='a'; a<='z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
	while (b <= 10);
}