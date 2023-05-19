#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: pointer or array
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
