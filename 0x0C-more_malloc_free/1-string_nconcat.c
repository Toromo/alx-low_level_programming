#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to concacrenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (j < len1)
	{
		s[j] = s1[j];
		j++;
	}

	while (n < len2 && j < (len1 + n))
		s[j++] = s2[k++];

	while (n >= len2 && j < (len1 + len2))
		s[j++] = s2[k++];

	s[j] = '\0';

	return (s);
}
