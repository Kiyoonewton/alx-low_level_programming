#include "main.h"

/**
 * times_table - times_table function of 0-9
 *
 * Return: return void
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b < 9)
			{
				if (c < 10)
				{
					_putchar(c + 48);
				}
				else
				{
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else 
			{
				if (c < 10)
				{
					_putchar(c + 48);
				}
				else
				{
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
		}
		_putchar('\n');
	}
}