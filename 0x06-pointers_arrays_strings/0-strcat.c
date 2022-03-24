#include "main.h"
#include<stdio.h>

/**
 * _strcar - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: a pointer to the result string destination
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
