#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string (can be NULL, treated as "")
 * @s2: second string (can be NULL, treated as "")
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *res;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1]; len1++)
		;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2]; len2++)
		;
	}

	res = malloc(len1 + len2 + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];
	res[len1 + len2] = '\0';

	return (res);
}
