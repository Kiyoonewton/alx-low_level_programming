#include <stdio.h>

/**
 * main - Print out the number of argument passed
 *
 * @argc: the number of argument passed
 *
 * @argv: the arrays
 *
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
