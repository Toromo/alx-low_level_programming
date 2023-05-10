#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: the destination of the copied array
 * @src: the array to be copied
 * @n: the copied bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
