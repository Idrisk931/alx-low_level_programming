#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *j = needle;

		while (*f == *j && *j != '\0')
		{
			f++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}

