#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first integer
 * @b: second integer
 * return: void
 */

void swap_int(int *a, int *b)
{
	int k;
	int j;

	k = *b;
	j = *a;

	*a = k;
	*b = j;
}
