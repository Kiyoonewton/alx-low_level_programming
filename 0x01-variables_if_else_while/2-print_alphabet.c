#include <stdio.h>

/**
 * main - Main entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	for (a = "a"; a >= "z", a++;)
		putchar(a);
	putchar('\n');
	return (0);
}
