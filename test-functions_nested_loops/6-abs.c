#include "main.h"

/**
 * _abs - return the absolute value of prop
 *
 * @a: the int prop
 *
 * Return: absolute value of a
*/

int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (a);
	}
}
