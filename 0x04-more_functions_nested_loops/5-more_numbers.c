#include "main.h"

/**
 * more_numbers - ten times the numbers 0 through 14
 * return: void
 */

void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n <= 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
				_putchar('1');

			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
