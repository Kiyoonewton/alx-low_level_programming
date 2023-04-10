#include <stdio.h>

/**
 * main - Print the name of the program
 *
 * @argc: Count arguments
 *
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a = 0;

	if (argc > 0)
	{
		while (a < argc)
		{
			printf("%s\n", argv[a]);
			a++;
		}
	}
	return (0);
}
