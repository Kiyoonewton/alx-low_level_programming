#include "main.h"

/**
 * _puts_recursion - Print out Puts with recursion
 *
 * @s: passed data
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
