#include "main.h"

/**
 * print_sign - Print negative if number is
 *				lesser than 0 and positive
 *				if more than, zero if it is 0
 *
 * @n: An int as a prop
 *
 * Return: 1 if +, 0 if 0, -1 if -
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
