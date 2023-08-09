#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to counted
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int army, d, f;

	army = 0;
	f = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			army = 0;
		else if (army == 0)
		{
			army = 1;
			f++;
		}
	}

	return (f);
}
/**
 * **strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings if its a (Success)
 * or NULL its an (Error)
 */
char **strtow(char *str)
{
	char **black, *power;
	int i, g = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	black = (char **) malloc(sizeof(char *) * (words + 1));
	if (black == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				power = (char *) malloc(sizeof(char) * (c + 1));
				if (power == NULL)
					return (NULL);
				while (start < end)
					*power++ = str[start++];
				*power = '\0';
				black[k] = power - c;
				g++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	black[k] = NULL;

	return (black);
}

