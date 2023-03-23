#include"main.h"

/**
 *jack_bauer - prints minute of jack bauer
 *
 *Return: ...
*/

void jack_bauer(void)
{
	int a, b;

	for (b = 0; b <= 23; ++b)
	{
		for (a = 0; a <= 59; ++a)
		{
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar(':');
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar('\n');
		}
	}
}
