#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print between 0 - 15 times-table
 *
 * @n: the number to calculate it times-table
 *
 * Return: return nothing.
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b < n)
				{
					if (c > 99)
					{
						_putchar((c / 100) + 48);
						_putchar(((c / 10) % 10) + 48);
						_putchar((c % 10) + 48);
					}
					else if (c > 9)
					{
						_putchar((c / 10) + 48);
						_putchar((c % 10) + 48);
					}
					else
					{
						_putchar(c + 48);
					}
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					if (c > 99)
					{
						_putchar((c / 100) + 48);
						_putchar((int)((c / 10) % 10) + 48);
						_putchar((c % 10) + 48);
					}
					else if (c > 9)
					{
						_putchar((c / 10) + 48);
						_putchar((c % 10) + 48);
					}
					else
					{
						_putchar(c + 48);
					}
				}
			}
			_putchar('\n');
		}
	}
}
