#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 * return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int k;

		for (k = 1; k <= size; k++)
		{
			int j;

			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
