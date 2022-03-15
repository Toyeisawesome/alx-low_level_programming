#include<stdio.h>
#include<stdlib.h>

/**
 * main - reverse a - z
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
