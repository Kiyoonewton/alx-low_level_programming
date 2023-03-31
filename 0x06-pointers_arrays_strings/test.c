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

	printf("%d\n", n);
	

	for (int i = 0; i < n; i++)
	{
		printf("%d", n - i - 1);
		printf("n[%d]", i); 
		
	}

	printf("\n");
	return (0);
}
