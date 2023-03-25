#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print if digit is positive or negative
 *
 * Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	if (i >= 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
