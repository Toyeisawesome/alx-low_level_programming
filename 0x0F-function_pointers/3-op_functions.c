#include "3-calc.h"
/**
 * op_add - function adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function subtracts two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this function divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result of the division
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a/ b);
	}
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - this function calculates the modulus
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result of the modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

