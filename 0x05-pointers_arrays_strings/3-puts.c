#include"main.h"

/**
 * _puts - prints a string and a new line
 *
 * @str: input parameter string
 *
 * Return: Nil
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
