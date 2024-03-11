#include "main.h"
#include <string.h>

/**
 * print_rev - prints a reversed string
 *
 * @s: input string parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, a;

	a = strlen(s);
	for (i = a; i > 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
