#include <string.h>
#include <stdio.h>

/**
 * reverse_array - the function that reverse an array
 *
 * @a: pointer one array
 *
 * @n: number of the array
 *
 * Return: return an interger.
 */
int reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n)
		{
			printf(", ");
		}
	printf("%d", a[i]);
	i--;
	}
	printf("\n");
	return (i);
}
