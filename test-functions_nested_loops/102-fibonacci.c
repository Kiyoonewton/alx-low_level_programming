#include "main.h"

/**
 * main - a function to calculate fibonacci series
 *
 * Return: void
 */

int main(void)
{
	unsigned long a = 1, b = 2, d;
	int e, c = 10;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (e = 0; e < c; e++)
	{
		d = a + b;
		printf("%lu", d);
		a = b;
		b = d;

		if (e < c)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}