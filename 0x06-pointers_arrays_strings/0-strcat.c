#include "main.h"
#include <string.h>

/**
 * *_strcat - function to concactenate two strings
 * @dest: string one
 * @src: string two
 * Return: always 0 if successful
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;
	int j;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < len1; i++)
	{
		_putchar(dest[i]);
	}
	_putchar(' ');

	for (j = 0; j < len2; j++)
	{
		_putchar(src[j]);
	}
	_putchar('\0');

	return (0);
}
