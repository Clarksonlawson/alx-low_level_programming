#include "calculator.h"
/**
 * add -adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}
/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mod - mods two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result
 */
int mod(int a, int b)
{
	return (a % b);
}

