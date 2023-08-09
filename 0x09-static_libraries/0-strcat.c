#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int f;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[i] = src[f];
		i++;
		f++;
	}

	dest[i] = '\0';
	return (dest);
}

