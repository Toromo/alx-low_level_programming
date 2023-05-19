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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
