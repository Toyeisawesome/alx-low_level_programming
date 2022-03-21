#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		;
	return (i);
}
