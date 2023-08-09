#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int r;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	r = 0;
	while (r < n && src[r] != '\0')
	{
	dest[i] = src[r];
	i++;
	r++;
	}
	dest[i] = '\0';
	return (dest);
}

