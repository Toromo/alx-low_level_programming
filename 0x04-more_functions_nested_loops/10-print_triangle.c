#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int k;

		for (k = 1; k <= size; k++)
		{
			int j;

			for (j = k; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= k; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
