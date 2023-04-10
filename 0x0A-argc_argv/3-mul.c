#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		c = atoi(argv[2]);
		printf("%d\n", a * c);
		return (0);
	}
	printf("Error\n");
	return (1);
}
