#include"main.h"

/**
 * _abs - Compute the absolute value of an interger
 *
 * @a: The number to be computed
 *
 * Return: Return the value or 0
 */
int _abs(int a)
{
	if (a < 0)
		a = (-1) * a;
	return (a);
}
