#include "main.h"

/**
 * main - write a function that calculate the multiples of 3 and 5
 *
 * return: void
 */

int main(void)
{
	int a;
	int c = 1024;
	int b = 0;

	for (a = 3; a < c; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d", b);
	return (0);
}
