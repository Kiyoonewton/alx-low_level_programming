#include <string.h>
/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int l = 0;
	int r = n - 1;
	while (l < r)

	{
		int temp;
		temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++;
		r--;
	}
}
