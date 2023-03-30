#include <stdio.h>

/**
 * main - loop a number in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

	int n = (sizeof(a) / sizeof(int));

	printf("%d", n);
	
	int i = 1;

	while(n-i >= 0)
	{
		printf("%d", (n - i));
		i--;
	}

	printf("\n");
	return (0);
}
