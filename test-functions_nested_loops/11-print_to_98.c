#include "main.h"

/**
 * Print_to_98 - Function to print from number t0 98
 *
 * @n: the number to start from
 *
 * Return: void
*/

void print_to_98(int n)
{
	int a;

	if (n > 98)
		for(a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
	else
		for(a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
	printf("98\n");
}
