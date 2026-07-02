#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated upon
 * @src: string to be concatenated to dest
 * @n: number of bytes from src to be concatenated to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
