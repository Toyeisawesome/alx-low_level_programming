#include "main.h"
#include<stdio.h>
/**
 * main - prints all argumets it receives
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always to 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
