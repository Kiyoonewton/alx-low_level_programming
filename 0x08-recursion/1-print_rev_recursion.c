#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - To print in reverse the inputted char
 *
 * @s: inputted char
 *
 * Return: Nil
 */
void _print_rev_recursion(char *s)
{
	/*int n = strlen(*s);*/

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
