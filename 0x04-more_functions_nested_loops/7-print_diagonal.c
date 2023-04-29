#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of times diagonal line should print
 * return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k;

		for (k = 1; k <= n; k++)
		{
			int j;

			for (j = 1; j <= n; j++)
			{
				if (j == k)
					_putchar('\\');
				else if (j < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
