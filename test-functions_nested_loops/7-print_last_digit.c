#include "main.h"

/**
 * print_last_digit - the function print out last digit
 *
 * @a: the int prameter to pass in
 *
 * Return: return the last number of the digit
*/

int print_last_digit(int a)
{
	if (a > 0)
	{
		_putchar((a % 10) + '0');
		return (a % 10);
	}
	else
	{
		_putchar(((a * -1) % 10) + '0');
		return ((a * -1) % 10);
	}
}
