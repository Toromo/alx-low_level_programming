#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int m;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		p[m] = min++;

	return (p);
}
