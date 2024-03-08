#include "main.h"

/**
 * main - a function to calculate fibonacci series
 *
 * Return: void
 */

int main(void)
{
	long long a = 1, b = 2, d;
	int e, c = 98;

	printf("%lld, ", a);
	printf("%lld, ", b);

	for (e = 0; e < c; e++)
	{
		d = a + b;
		printf("%lld", d);
		a = b;
		b = d;

		if (e < c)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}