#include<stdio.h>
#include<stdlib>
#include "main.h"

/**
 *print_alphabet - a function that prints the alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
