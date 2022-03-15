#include<stdio.h>
#include<stdlib>
#include "main.h"

/**
 * main - check the code
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ab = 'a';

	while (ab <= 'z')
	{
		_putchar (ab);
		ab++;
		_putchar ('\n');
	}
}
