#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of two strings and adds together for size
 * @s1: input one to be joined
 * @s2: input two to be joined
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int i, ji;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ji = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ji] != '\0')
		ji++;
	join = malloc(sizeof(char) * (i + ji + 1));

	if (join == NULL)
		return (NULL);
	i = ji = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}

	while (s2[ji] != '\0')
	{
		join[i] = s2[ji];
		i++, ji++;
	}
	join[i] = '\0';
	return (join);
}

